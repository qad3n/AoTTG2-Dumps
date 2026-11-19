// ==================== AoTTG2 cross-reference ====================
// Type: UI.MinimapScaler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MinimapScaler.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/MinimapScaler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007E5")]
internal class MinimapScaler : IgnoreScaler
{
	[Token(Token = "0x6004C07")]
	[Address(RVA = "0x5BECC10", Offset = "0x5BEBC10", VA = "0x5BECC10", Slot = "5")]
	public override void ApplyScale()
	{
		// Lifted from source/cpp/UI/MinimapScaler.c (UI.MinimapScaler$$ApplyScale): clean
		float fVar1;
		UISettings pSVar2;
		FloatSetting pSVar3;
		RectTransform __this_00;
		Vector3 UVar4;
		Vector3 value;

		this.ApplyScale();
		pSVar2 = SettingsManager.UISettings;
		if ((pSVar2 != null) &&(pSVar3 = pSVar2.MinimapScale, pSVar3 != null)) {
			fVar1 = pSVar3._value;
			__this_00 = this.GetComponent<RectTransform>();
			if (__this_00 != null) {
				UVar4 = __this_00.localScale;
				value.x = UVar4.x * fVar1;
				value.y = UVar4.y * fVar1;
				value.z = 0.0;
				__this_00.localScale = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C08")]
	[Address(RVA = "0x5BECCD0", Offset = "0x5BEBCD0", VA = "0x5BECCD0")]
	public MinimapScaler()
	{
		// Lifted from source/cpp/UI/MinimapScaler.c (UI.MinimapScaler$$.ctor): clean
		this.Scale = 1.0;
		base();
		return;
	}
}
