// ==================== AoTTG2 cross-reference ====================
// Type: UI.HUDScaler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/HUDScaler.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/HUDScaler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007E1")]
internal class HUDScaler : IgnoreScaler
{
	[Token(Token = "0x6004BFF")]
	[Address(RVA = "0x5BEC970", Offset = "0x5BEB970", VA = "0x5BEC970", Slot = "5")]
	public override void ApplyScale()
	{
		// Lifted from source/cpp/UI/HUDScaler.c (UI.HUDScaler$$ApplyScale): clean
		UISettings pSVar1;
		FloatSetting pSVar2;
		RectTransform __this_00;
		float fVar3;
		Vector3 UVar4;
		Vector3 value;

		this.ApplyScale();
		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.HUDScale, pSVar2 != null)) {
			fVar3 = pSVar2._value;
			__this_00 = this.GetComponent<RectTransform>();
			if (__this_00 != null) {
				fVar3 = fVar3 * 0.5;
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

	[Token(Token = "0x6004C00")]
	[Address(RVA = "0x5BECA40", Offset = "0x5BEBA40", VA = "0x5BECA40")]
	public HUDScaler()
	{
		// Lifted from source/cpp/UI/HUDScaler.c (UI.HUDScaler$$.ctor): clean
		this.Scale = 1.0;
		base();
		return;
	}
}
