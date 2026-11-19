// ==================== AoTTG2 cross-reference ====================
// Type: UI.StylebarScaler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/StylebarScaler.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/StylebarScaler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007E6")]
internal class StylebarScaler : IgnoreScaler
{
	[Token(Token = "0x6004C09")]
	[Address(RVA = "0x5BECCE0", Offset = "0x5BEBCE0", VA = "0x5BECCE0", Slot = "5")]
	public override void ApplyScale()
	{
		// Lifted from source/cpp/UI/StylebarScaler.c (UI.StylebarScaler$$ApplyScale): clean
		UISettings pSVar1;
		FloatSetting pSVar2;
		RectTransform __this_00;
		float fVar3;
		Vector3 UVar4;
		Vector3 value;

		this.ApplyScale();
		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.StylebarScale, pSVar2 != null)) {
			fVar3 = pSVar2._value;
			__this_00 = this.GetComponent<RectTransform>();
			if (__this_00 != null) {
				fVar3 = fVar3 * 0.8;
				UVar4 = __this_00.localScale;
				value.x = UVar4.x * fVar3;
				value.y = UVar4.y * fVar3;
				value.z = 0.0;
				__this_00.localScale = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C0A")]
	[Address(RVA = "0x5BECDB0", Offset = "0x5BEBDB0", VA = "0x5BECDB0")]
	public StylebarScaler()
	{
		// Lifted from source/cpp/UI/StylebarScaler.c (UI.StylebarScaler$$.ctor): clean
		this.Scale = 1.0;
		base();
		return;
	}
}
