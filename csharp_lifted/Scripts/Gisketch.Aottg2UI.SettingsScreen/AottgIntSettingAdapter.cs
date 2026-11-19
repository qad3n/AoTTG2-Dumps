// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000172")]
internal sealed class AottgIntSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x400085D")]
	[FieldOffset(Offset = "0x10")]
	private readonly IntSetting _setting;

	[Token(Token = "0x170000F7")]
	public override string TextValue
	{
		[Token(Token = "0x60007E9")]
		[Address(RVA = "0x5CC5D90", Offset = "0x5CC4D90", VA = "0x5CC5D90", Slot = "16")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_TextValue): clean
			IntSetting pSVar1;
			CultureInfo provider;
			String pSVar2;
			int local_c;

			pSVar1 = this._setting;
			if (pSVar1 == null) {
				return "0";
			}
			local_c = pSVar1._value;
			provider = CultureInfo.InvariantCulture;
			pSVar2 = local_c.ToString((IFormatProvider)provider);
			return pSVar2;
		}
	}

	[Token(Token = "0x170000F8")]
	public override float FloatValue
	{
		[Token(Token = "0x60007EA")]
		[Address(RVA = "0x5CC5E20", Offset = "0x5CC4E20", VA = "0x5CC5E20", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_FloatValue): clean
			IntSetting pSVar1;

			pSVar1 = this._setting;
			if (pSVar1 == null) {
				return 0.0;
			}
			return (float)pSVar1._value;
		}
	}

	[Token(Token = "0x170000F9")]
	public override float MinValue
	{
		[Token(Token = "0x60007EB")]
		[Address(RVA = "0x5CC5E60", Offset = "0x5CC4E60", VA = "0x5CC5E60", Slot = "19")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_MinValue): clean
			int iVar1;
			IntSetting pSVar2;
			float fVar3;

			pSVar2 = this._setting;
			if (pSVar2 == null) {
				return 0.0;
			}
			iVar1 = pSVar2.MinValue;
			if (iVar1 != -0x80000000) {
			}
			return fVar3;
		}
	}

	[Token(Token = "0x170000FA")]
	public override float MaxValue
	{
		[Token(Token = "0x60007EC")]
		[Address(RVA = "0x5CC5E90", Offset = "0x5CC4E90", VA = "0x5CC5E90", Slot = "20")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_MaxValue): clean
			int iVar1;
			IntSetting pSVar2;

			pSVar2 = this._setting;
			if ((pSVar2 == null) || (iVar1 = pSVar2.MaxValue, iVar1 == 0x7fffffff)) {
				return 1.0;
			}
			return (float)iVar1;
		}
	}

	[Token(Token = "0x170000FB")]
	public override bool HasMinValue
	{
		[Token(Token = "0x60007ED")]
		[Address(RVA = "0x5CC5EC0", Offset = "0x5CC4EC0", VA = "0x5CC5EC0", Slot = "21")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_HasMinValue): clean
			IntSetting pSVar1;

			pSVar1 = this._setting;
			if (pSVar1 == null) {
				return false;
			}
			return pSVar1.MinValue != -0x80000000;
		}
	}

	[Token(Token = "0x170000FC")]
	public override bool HasMaxValue
	{
		[Token(Token = "0x60007EE")]
		[Address(RVA = "0x5CC5EE0", Offset = "0x5CC4EE0", VA = "0x5CC5EE0", Slot = "22")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_HasMaxValue): clean
			IntSetting pSVar1;

			pSVar1 = this._setting;
			if (pSVar1 == null) {
				return false;
			}
			return pSVar1.MaxValue != 0x7fffffff;
		}
	}

	[Token(Token = "0x170000FD")]
	public override int MaxCharacters
	{
		[Token(Token = "0x60007EF")]
		[Address(RVA = "0x5CC5F00", Offset = "0x5CC4F00", VA = "0x5CC5F00", Slot = "23")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_MaxCharacters): clean
			return 0xb;
		}
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x5CC5D60", Offset = "0x5CC4D60", VA = "0x5CC5D60")]
	public AottgIntSettingAdapter(IntSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$.ctor): clean
		base();
		this._setting = setting;
		return;
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x5CC5F10", Offset = "0x5CC4F10", VA = "0x5CC5F10", Slot = "25")]
	public override void SetFloat(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$SetFloat): clean
		IntSetting __this_00;

		__this_00 = this._setting;
		if (__this_00 == null) {
			return;
		}
		__this_00.Value = (int)value;
		return;
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x5CC5F70", Offset = "0x5CC4F70", VA = "0x5CC5F70", Slot = "26")]
	public override void SetText(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$SetText): 4 lines keep C-only constructs
		IntSetting __this_00;
		bool bVar1;
		uint in_EAX;
		CultureInfo provider;
		ulong uStack_18;

		uStack_18._0_4_ = in_EAX;
		uStack_18 = (ulong)(uint)uStack_18;
		if (this._setting != null) {
			provider = CultureInfo.InvariantCulture;
			bVar1 = Int32.TryParse(value, 7, (IFormatProvider)provider, (int)((long)&uStack_18 + 4));
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
