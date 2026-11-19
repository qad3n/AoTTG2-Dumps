// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000173")]
internal sealed class AottgFloatSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x400085E")]
	[FieldOffset(Offset = "0x10")]
	private readonly FloatSetting _setting;

	[Token(Token = "0x170000FE")]
	public override string TextValue
	{
		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x5CC6050", Offset = "0x5CC5050", VA = "0x5CC6050", Slot = "16")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_TextValue): clean
			FloatSetting pSVar1;
			CultureInfo provider;
			String pSVar2;
			float local_c;

			pSVar1 = this._setting;
			if (pSVar1 == null) {
				return "0";
			}
			local_c = pSVar1._value;
			provider = CultureInfo.InvariantCulture;
			pSVar2 = local_c.ToString("0.##################", (IFormatProvider)provider);
			return pSVar2;
		}
	}

	[Token(Token = "0x170000FF")]
	public override float FloatValue
	{
		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x5CC6100", Offset = "0x5CC5100", VA = "0x5CC6100", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_FloatValue): clean
			FloatSetting pSVar1;

			pSVar1 = this._setting;
			if (pSVar1 == null) {
				return 0.0;
			}
			return pSVar1._value;
		}
	}

	[Token(Token = "0x17000100")]
	public override float MinValue
	{
		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x5CC6140", Offset = "0x5CC5140", VA = "0x5CC6140", Slot = "19")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_MinValue): clean
			float fVar1;
			FloatSetting pSVar2;

			pSVar2 = this._setting;
			if (pSVar2 != null) {
				fVar1 = pSVar2.MinValue;
				if ((fVar1 != -3.4028235e+38) || (NAN(fVar1))) {
					return fVar1;
				}
			}
			return 0.0;
		}
	}

	[Token(Token = "0x17000101")]
	public override float MaxValue
	{
		[Token(Token = "0x60007F6")]
		[Address(RVA = "0x5CC6170", Offset = "0x5CC5170", VA = "0x5CC6170", Slot = "20")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_MaxValue): clean
			float fVar1;
			FloatSetting pSVar2;

			pSVar2 = this._setting;
			if (pSVar2 != null) {
				fVar1 = pSVar2.MaxValue;
				if ((fVar1 != 3.4028235e+38) || (NAN(fVar1))) {
					return fVar1;
				}
			}
			return 1.0;
		}
	}

	[Token(Token = "0x17000102")]
	public override bool HasMinValue
	{
		[Token(Token = "0x60007F7")]
		[Address(RVA = "0x5CC61A0", Offset = "0x5CC51A0", VA = "0x5CC61A0", Slot = "21")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_HasMinValue): clean
			FloatSetting pSVar1;

			pSVar1 = this._setting;
			if (pSVar1 == null) {
				return false;
			}
			return (bool)(-(pSVar1.MinValue != -3.4028235e+38) & 1);
		}
	}

	[Token(Token = "0x17000103")]
	public override bool HasMaxValue
	{
		[Token(Token = "0x60007F8")]
		[Address(RVA = "0x5CC61D0", Offset = "0x5CC51D0", VA = "0x5CC61D0", Slot = "22")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_HasMaxValue): clean
			FloatSetting pSVar1;

			pSVar1 = this._setting;
			if (pSVar1 == null) {
				return false;
			}
			return (bool)(-(pSVar1.MaxValue != 3.4028235e+38) & 1);
		}
	}

	[Token(Token = "0x17000104")]
	public override int MaxCharacters
	{
		[Token(Token = "0x60007F9")]
		[Address(RVA = "0x5CC6200", Offset = "0x5CC5200", VA = "0x5CC6200", Slot = "23")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_MaxCharacters): clean
			return 0x14;
		}
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x5CC6020", Offset = "0x5CC5020", VA = "0x5CC6020")]
	public AottgFloatSettingAdapter(FloatSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$.ctor): clean
		base();
		this._setting = setting;
		return;
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x5CC6210", Offset = "0x5CC5210", VA = "0x5CC6210", Slot = "25")]
	public override void SetFloat(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$SetFloat): clean
		FloatSetting __this_00;

		__this_00 = this._setting;
		if (__this_00 == null) {
			return;
		}
		__this_00.Value = value;
		return;
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x5CC6270", Offset = "0x5CC5270", VA = "0x5CC6270", Slot = "26")]
	public override void SetText(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$SetText): 4 lines keep C-only constructs
		FloatSetting __this_00;
		bool bVar1;
		uint in_EAX;
		CultureInfo provider;
		ulong uStack_18;

		uStack_18._0_4_ = in_EAX;
		uStack_18 = (ulong)(uint)uStack_18;
		if (this._setting != null) {
			provider = CultureInfo.InvariantCulture;
			bVar1 = Single.TryParse(value, 0xa7, (IFormatProvider)provider, (float)((long)&uStack_18 + 4));
			if (bVar1) {
				__this_00 = this._setting;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.Value = uStack_18._4_4_;
			}
		}
		return;
	}
}
