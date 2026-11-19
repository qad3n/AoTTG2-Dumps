// ==================== AoTTG2 cross-reference ====================
// Type: UI.HorizontalLineScaler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/HorizontalLineScaler.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/HorizontalLineScaler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007E2")]
internal class HorizontalLineScaler : BaseScaler
{
	[Token(Token = "0x6004C01")]
	[Address(RVA = "0x5BECA50", Offset = "0x5BEBA50", VA = "0x5BECA50", Slot = "5")]
	public override void ApplyScale()
	{
		// Lifted from source/cpp/UI/HorizontalLineScaler.c (UI.HorizontalLineScaler$$ApplyScale): clean
		float fVar1;
		Vector2 value;
		Vector2 UVar2;
		RectTransform __this_00;
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
		value.y = fVar3;
		value.x = UVar2.x;
		__this_00.sizeDelta = value;
		return;
	}

	[Token(Token = "0x6004C02")]
	[Address(RVA = "0x5BECB20", Offset = "0x5BEBB20", VA = "0x5BECB20")]
	public HorizontalLineScaler()
	{
		// Lifted from source/cpp/UI/HorizontalLineScaler.c (UI.HorizontalLineScaler$$.ctor): clean
		base();
		return;
	}
}
