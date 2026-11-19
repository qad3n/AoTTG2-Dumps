// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter$$get_TextValue): clean
			ColorSetting pSVar1;
			String pSVar2;
			Color255 __this_00;
			Color local_18;

			pSVar1 = this._setting;
			if (pSVar1 == null) {
				__this_00 = new Color255();
			}
			else {
				__this_00 = pSVar1._value;
			}
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			local_18 = __this_00.ToColor();
			pSVar2 = ColorUtility.ToHtmlStringRGBA(ref local_18);
			pSVar2 = String.Concat("#", pSVar2);
			return pSVar2;
		}
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x5CC6430", Offset = "0x5CC5430", VA = "0x5CC6430")]
	public AottgColorSettingAdapter(ColorSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter$$.ctor): clean
		base();
		this._setting = setting;
		return;
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x5CC6510", Offset = "0x5CC5510", VA = "0x5CC6510", Slot = "26")]
	public override void SetText(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingAdapter.c (Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter$$SetText): clean
		ColorSetting __this_00;
		bool bVar1;
		Color255 __this_01;
		Color color;
		Color UStack_48;
		float fStack_38;
		float fStack_34;
		Color UStack_28;

		UStack_48.r = 0.0;
		UStack_48.g = 0.0;
		UStack_48.b = 0.0;
		UStack_48.a = 0.0;
		if (this._setting != null) {
			bVar1 = ColorUtility.TryParseHtmlString(value, ref UStack_48);
			if (bVar1) {
				__this_00 = this._setting;
				UStack_28.r = UStack_48.r;
				UStack_28.g = UStack_48.g;
				UStack_28.b = 0.0;
				UStack_28.a = 0.0;
				fStack_38 = UStack_48.b;
				fStack_34 = UStack_48.a;
				color.b = fStack_38;
				color.a = fStack_34;
				color.r = UStack_28.r;
				color.g = UStack_28.g;
				__this_01 = new Color255(color);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.Value = (object)__this_01;
			}
		}
		return;
	}
}
