// ==================== AoTTG2 cross-reference ====================
// Type: UI.VerticalLineScaler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/VerticalLineScaler.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/VerticalLineScaler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007E7")]
internal class VerticalLineScaler : BaseScaler
{
	[Token(Token = "0x6004C0B")]
	[Address(RVA = "0x5BECDC0", Offset = "0x5BEBDC0", VA = "0x5BECDC0", Slot = "5")]
	public override void ApplyScale()
	{
		// Lifted from source/cpp/UI/VerticalLineScaler.c (UI.VerticalLineScaler$$ApplyScale): clean
		float fVar1;
		RectTransform __this_00;
		Vector2 UVar2;
		float fVar3;

		fVar1 = UIManager.CurrentCanvasScale;
		__this_00 = this.GetComponent<RectTransform>();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar3 = 1.0;
		if (fVar1 < 1.0) {
			fVar3 = 1.0 / fVar1;
		}
		UVar2 = __this_00.sizeDelta;
		UVar2.x = fVar3;
		__this_00.sizeDelta = UVar2;
		return;
	}

	[Token(Token = "0x6004C0C")]
	[Address(RVA = "0x5BECE90", Offset = "0x5BEBE90", VA = "0x5BECE90")]
	public VerticalLineScaler()
	{
		// Lifted from source/cpp/UI/VerticalLineScaler.c (UI.VerticalLineScaler$$.ctor): clean
		base();
		return;
	}
}
