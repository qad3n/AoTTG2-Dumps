// ==================== AoTTG2 cross-reference ====================
// Type: UI.CrosshairScaler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CrosshairScaler.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/CrosshairScaler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007E0")]
internal class CrosshairScaler : IgnoreScaler
{
	[Token(Token = "0x6004BFD")]
	[Address(RVA = "0x5BEC6F0", Offset = "0x5BEB6F0", VA = "0x5BEC6F0", Slot = "5")]
	public override void ApplyScale()
	{
		// Lifted from source/cpp/UI/CrosshairScaler.c (UI.CrosshairScaler$$ApplyScale): clean
		float fVar1;
		float fVar2;
		UISettings pSVar3;
		FloatSetting pSVar4;
		RectTransform pUVar5;
		Transform pUVar6;
		Text __this_00;
		Vector3 UVar7;
		Vector3 value;

		this.ApplyScale();
		pSVar3 = SettingsManager.UISettings;
		if ((pSVar3 != null) &&(pSVar4 = pSVar3.CrosshairScale, pSVar4 != null)) {
			fVar1 = pSVar4._value;
			pUVar5 = this.GetComponent<RectTransform>();
			if (pUVar5 != null) {
				UVar7 = pUVar5.localScale;
				value.x = UVar7.x * fVar1;
				value.y = UVar7.y * fVar1;
				value.z = 0.0;
				pUVar5.localScale = value;
				pSVar3 = SettingsManager.UISettings;
				if ((pSVar3 != null) &&(pSVar4 = pSVar3.CrosshairTextScale, pSVar4 != null)) {
					fVar2 = pSVar4._value;
					pUVar6 = this.transform;
					if (pUVar6 != null) {
						pUVar6 = pUVar6.Find("DefaultLabel");
						if (pUVar6 != null) {
							__this_00 = pUVar6.GetComponent<Text>();
							if (__this_00 != null) {
								__this_00.fontSize = 0x10;
								pUVar6 = this.transform;
								if (pUVar6 != null) {
									pUVar6 = pUVar6.Find("DefaultLabel");
									if (pUVar6 != null) {
										pUVar5 = pUVar6.GetComponent<RectTransform>();
										if (pUVar5 != null) {
											UVar7.x = fVar2 / fVar1;
											UVar7.y = UVar7.x;
											UVar7.z = 0.0;
											pUVar5.localScale = UVar7;
											return;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BFE")]
	[Address(RVA = "0x5BEC950", Offset = "0x5BEB950", VA = "0x5BEC950")]
	public CrosshairScaler()
	{
		// Lifted from source/cpp/UI/CrosshairScaler.c (UI.CrosshairScaler$$.ctor): clean
		this.Scale = 1.0;
		base();
		return;
	}
}
