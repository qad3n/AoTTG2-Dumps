// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateDescriptionScrollLayout
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateDescriptionScrollLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000269")]
internal sealed class AottgGameCreateDescriptionScrollLayout : MonoBehaviour
{
	[Token(Token = "0x6000E65")]
	[Address(RVA = "0x5796E10", Offset = "0x5795E10", VA = "0x5796E10")]
	private void Start()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateDescriptionScrollLayout.c (Gisketch.Aottg2UI.Game.AottgGameCreateDescriptionScrollLayout$$Start): clean
		RectTransform __this_00;
		uint uVar1;
		ScrollRect pUVar2;
		Object[] pSVar3;
		GameObject pUVar4;
		VerticalLayoutGroup __this_01;
		RectOffset __this_02;
		ContentSizeFitter __this_03;
		uint uVar5;

		pUVar2 = this.GetComponentInParent<ScrollRect>();
		if ((pUVar2 != null) &&(__this_00 = pUVar2.m_Content, __this_00 != null)) {
			pSVar3 = __this_00.GetComponentsInChildren<FlexLayout>();
			if (pSVar3 != null) {
				uVar1 = (uint)pSVar3.Length;
				if (0 < (int)uVar1) {
					uVar5 = 0;
					do {
						if (uVar1 <= uVar5) {
							throw new IndexOutOfRangeException();
						}
						if ((Behaviour)pSVar3[(int)uVar5] == null) goto label_058970c2;
						(pSVar3[(int)uVar5]).enabled = false;
						uVar5 = uVar5 + 1;
						uVar1 = (uint)pSVar3.Length;
					} while ((int)uVar5 < (int)uVar1);
				}
				__this_00.anchorMin = (Vector2)0x3f80000000000000;
				__this_00.anchorMax = (Vector2)(Vector2.oneVector);
				__this_00.pivot = (Vector2)0x3f80000000000000;
				__this_00.sizeDelta = (Vector2)(Vector2.zeroVector);
				__this_00.anchoredPosition = (Vector2)(Vector2.zeroVector);
				pUVar4 = __this_00.gameObject;
				if (pUVar4 != null) {
					__this_01 = pUVar4.AddComponent<VerticalLayoutGroup>();
					__this_02 = new RectOffset(0x10, 0x18, 0x10, 0x10);
					if (__this_01 != null) {
						__this_01.padding = __this_02;
						__this_01.spacing = 12.0;
						__this_01.childAlignment = 0;
						__this_01.childControlWidth = true;
						__this_01.childControlHeight = true;
						__this_01.childForceExpandWidth = true;
						__this_01.childForceExpandHeight = false;
						pUVar4 = __this_00.gameObject;
						if (pUVar4 != null) {
							__this_03 = pUVar4.AddComponent<ContentSizeFitter>();
							if (__this_03 != null) {
								__this_03.horizontalFit = 0;
								__this_03.verticalFit = 2;
								return;
							}
						}
					}
				}
			}
		}
	label_058970c2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x57970D0", Offset = "0x57960D0", VA = "0x57970D0")]
	public AottgGameCreateDescriptionScrollLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateDescriptionScrollLayout.c (Gisketch.Aottg2UI.Game.AottgGameCreateDescriptionScrollLayout$$.ctor): clean
		base();
		return;
	}
}
