// ==================== AoTTG2 cross-reference ====================
// Type: UI.KillFeedScaler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/KillFeedScaler.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/KillFeedScaler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007E4")]
internal class KillFeedScaler : IgnoreScaler
{
	[Token(Token = "0x6004C05")]
	[Address(RVA = "0x5BECB30", Offset = "0x5BEBB30", VA = "0x5BECB30", Slot = "5")]
	public override void ApplyScale()
	{
		// Lifted from source/cpp/UI/KillFeedScaler.c (UI.KillFeedScaler$$ApplyScale): clean
		float fVar1;
		UISettings pSVar2;
		FloatSetting pSVar3;
		RectTransform __this_00;
		Vector3 UVar4;

		this.ApplyScale();
		pSVar2 = SettingsManager.UISettings;
		if ((pSVar2 != null) &&(pSVar3 = pSVar2.KillFeedScale, pSVar3 != null)) {
			fVar1 = pSVar3._value;
			__this_00 = this.GetComponent<RectTransform>();
			if (__this_00 != null) {
				UVar4 = __this_00.localScale;
				UVar4.x = UVar4.x * fVar1;
				this.Scale = UVar4.x;
				UVar4.y = UVar4.x;
				UVar4.z = 0.0;
				__this_00.localScale = UVar4;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C06")]
	[Address(RVA = "0x5BECC00", Offset = "0x5BEBC00", VA = "0x5BECC00")]
	public KillFeedScaler()
	{
		// Lifted from source/cpp/UI/KillFeedScaler.c (UI.KillFeedScaler$$.ctor): clean
		this.Scale = 1.0;
		base();
		return;
	}
}
