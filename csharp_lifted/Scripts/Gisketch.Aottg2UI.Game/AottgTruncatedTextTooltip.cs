// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgTruncatedTextTooltip.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Overlays;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200029F")]
public sealed class AottgTruncatedTextTooltip : MonoBehaviour
{
	[Token(Token = "0x4000D64")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000D65")]
	[FieldOffset(Offset = "0x28")]
	private GisketchTooltipTrigger _tooltip;

	[Token(Token = "0x4000D66")]
	[FieldOffset(Offset = "0x30")]
	private string _lastText;

	[Token(Token = "0x4000D67")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _lastSize;

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x57BC950", Offset = "0x57BB950", VA = "0x57BC950")]
	private void Awake()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgTruncatedTextTooltip.c (Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$Awake): 7 lines keep C-only constructs
		TextMeshProUGUI* targetAddress;
		bool bVar1;
		TextMeshProUGUI pTVar2;
		GisketchTooltipTrigger pGVar3;
		GameObject __this_00;

		if (Il2CppMethodInitialized_075453b0 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI) ;
			Il2CppMethodInitialized_075453b0 = true;
		}
		pTVar2 = this.GetComponent<TextMeshProUGUI>();
		if (pTVar2 == null) {
			pTVar2 = this.GetComponentInChildren<TextMeshProUGUI>();
		}
		if (this != null) {
			targetAddress = &this._text;
			this._text = pTVar2;
			pGVar3 = this.GetComponent<GisketchTooltipTrigger>();
			if (pGVar3 == null) {
				__this_00 = this.gameObject;
				if (__this_00 == null) goto label_058bca94;
				pGVar3 = __this_00.AddComponent<GisketchTooltipTrigger>();
			}
			this._tooltip = pGVar3;
			pTVar2 = this._text;
			bVar1 = ((Object)pTVar2 != null);
			if (!bVar1) {
				return;
			}
			if (*targetAddress != null) {
				(*targetAddress).enableWordWrapping = false;
				if (*targetAddress != null) {
					(*targetAddress).overflowMode = 1;
					return;
				}
			}
		}
	label_058bca94: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600100C")]
	[Address(RVA = "0x57BCAA0", Offset = "0x57BBAA0", VA = "0x57BCAA0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgTruncatedTextTooltip.c (Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$LateUpdate): 4 lines keep C-only constructs
		String* targetAddress;
		Vector2 UVar1;
		TextMeshProUGUI pTVar2;
		GisketchTooltipTrigger __this_00;
		bool bVar3;
		RectTransform __this_01;
		String b;
		String pSVar4;
		Rect UVar5;
		float fStack_28;
		float fStack_24;

		pTVar2 = this._text;
		bVar3 = ((Object)pTVar2 == null);
		if (bVar3) {
			return;
		}
		pTVar2 = this._text;
		if ((pTVar2 != null) &&(__this_01 = pTVar2.rectTransform, __this_01 != null)) {
			UVar5 = __this_01.rect;
			pTVar2 = this._text;
			if (pTVar2 != null) {
				targetAddress = &this._lastText;
				pSVar4 = *targetAddress;
				b = pTVar2.get_text();
				bVar3 = (pSVar4 == b);
				if (bVar3) {
					UVar1 = this._lastSize;
					fStack_28 = UVar5.m_Width;
					fStack_24 = UVar5.m_Height;
					fStack_28 = UVar1.x - fStack_28;
					fStack_24 = UVar1.y - fStack_24;
					if (fStack_24 * fStack_24 + fStack_28 * fStack_28 < 9.9999994e-11) {
						return;
					}
				}
				pTVar2 = this._text;
				if (pTVar2 != null) {
					pSVar4 = pTVar2.get_text();
					this._lastText = pSVar4;
					this._lastSize = UVar5._8_8_;
					pTVar2 = this._text;
					if (pTVar2 != null) {
						pTVar2.ForceMeshUpdate(false, false);
						pTVar2 = this._text;
						if (pTVar2 != null) {
							__this_00 = this._tooltip;
							bVar3 = pTVar2.isTextOverflowing;
							if (bVar3) {
								pTVar2 = this._text;
								if (pTVar2 == null) goto label_058bcc68;
								pSVar4 = pTVar2.get_text();
							}
							else {
								pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
							}
							if (__this_00 != null) {
								__this_00.Setup(pSVar4, null, null);
								return;
							}
						}
					}
				}
			}
		}
	label_058bcc68: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600100D")]
	[Address(RVA = "0x57BCC70", Offset = "0x57BBC70", VA = "0x57BCC70")]
	public AottgTruncatedTextTooltip()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgTruncatedTextTooltip.c (Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip$$.ctor): clean
		base();
		return;
	}
}
