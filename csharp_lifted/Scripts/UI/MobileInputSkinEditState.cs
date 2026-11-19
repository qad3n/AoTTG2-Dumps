// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputSkinEditState
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputSkinEditState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000772")]
internal class MobileInputSkinEditState
{
	[Token(Token = "0x400258D")]
	[FieldOffset(Offset = "0x10")]
	public ColorSetting Color;

	[Token(Token = "0x400258E")]
	[FieldOffset(Offset = "0x18")]
	public string Image;

	[Token(Token = "0x400258F")]
	[FieldOffset(Offset = "0x20")]
	public BoolSetting PreserveAspect;

	[Token(Token = "0x60047CB")]
	[Address(RVA = "0x5BA5E90", Offset = "0x5BA4E90", VA = "0x5BA5E90")]
	public MobileInputSkinEditState(MobileInputSkin skin)
	{
		// Lifted from source/cpp/UI/MobileInputSkinEditState.c (UI.MobileInputSkinEditState$$.ctor): clean
		bool defaultValue;
		Color255 __this_00;
		ColorSetting __this_01;
		String pSVar1;
		BoolSetting __this_02;
		Color color;

		base();
		if (skin == null) {
			skin = new MobileInputSkin(0.0, 0.0, 0.0, 0.38);
			if (skin == null) {
				throw new NullReferenceException();
			}
		}
		color = skin.ToColor();
		__this_00 = new Color255(color);
		__this_01 = new ColorSetting(__this_00, 0);
		this.Color = __this_01;
		pSVar1 = skin.Image;
		pSVar1 = MobileControlSkinManager.NormalizeSkinReference(pSVar1);
		this.Image = pSVar1;
		defaultValue = skin.PreserveAspect;
		__this_02 = new BoolSetting(defaultValue);
		this.PreserveAspect = __this_02;
		return;
	}

	[Token(Token = "0x60047CC")]
	[Address(RVA = "0x5BAA6B0", Offset = "0x5BA96B0", VA = "0x5BAA6B0")]
	public MobileInputSkin ToSkin()
	{
		// Lifted from source/cpp/UI/MobileInputSkinEditState.c (UI.MobileInputSkinEditState$$ToSkin): clean
		ColorSetting pSVar1;
		Color255 __this_00;
		BoolSetting pSVar2;
		MobileInputSkin pUVar3;
		String pSVar4;
		Color color;

		pSVar1 = this.Color;
		if ((pSVar1 != null) &&(__this_00 = pSVar1._value, __this_00 != null)) {
			color = __this_00.ToColor();
			pUVar3 = MobileInputSkin.FromColor(color);
			pSVar4 = this.Image;
			if (pSVar4 == null) {
				pSVar4 = (String)**(long*)(g_data_07556758 + 0xb8);
			}
			if (pUVar3 != null) {
				pUVar3.Image = pSVar4;
				pSVar2 = this.PreserveAspect;
				if (pSVar2 != null) {
					pUVar3.PreserveAspect = pSVar2._value;
					return pUVar3;
				}
			}
		}
		throw new NullReferenceException();
	}
}
