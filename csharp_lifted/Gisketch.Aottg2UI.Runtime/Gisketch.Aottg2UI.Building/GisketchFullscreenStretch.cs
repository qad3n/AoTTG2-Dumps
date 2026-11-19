// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchFullscreenStretch
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchFullscreenStretch.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000B7")]
[ExecuteAlways]
internal sealed class GisketchFullscreenStretch : MonoBehaviour
{
	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x52904E0", Offset = "0x528F4E0", VA = "0x52904E0")]
	internal static void Mark(GameObject go)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchFullscreenStretch.c (Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$Mark): clean
		bool bVar1;
		GisketchFullscreenStretch __this;

		bVar1 = ((Object)go == null);
		if (bVar1) {
			return;
		}
		if (go != null) {
			__this = go.GetComponent<GisketchFullscreenStretch>();
			bVar1 = ((Object)__this == null);
			if (bVar1) {
				__this = go.AddComponent<GisketchFullscreenStretch>();
			}
			if (__this != null) {
				__this.Apply();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x52908A0", Offset = "0x528F8A0", VA = "0x52908A0")]
	internal static void ApplyAll(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchFullscreenStretch.c (Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$ApplyAll): clean
		bool bVar1;
		uint uVar2;
		Object[] pSVar3;
		uint uVar4;

		bVar1 = ((Object)root == null);
		if (bVar1) {
			return;
		}
		if (root != null) {
			pSVar3 = root.GetComponentsInChildren<GisketchFullscreenStretch>(true);
			if (pSVar3 != null) {
				uVar2 = (uint)pSVar3.Length;
				if ((int)uVar2 < 1) {
					return;
				}
				uVar4 = 0;
				while(true) {
					if (uVar2 <= uVar4) {
						throw new IndexOutOfRangeException();
					}
					if ((GisketchFullscreenStretch)pSVar3[(int)uVar4] ==null) break;
					(pSVar3[(int)uVar4]).Apply();
					uVar4 = uVar4 + 1;
					uVar2 = (uint)pSVar3.Length;
					if ((int)uVar2 <= (int)uVar4) {
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x52905C0", Offset = "0x528F5C0", VA = "0x52905C0")]
	private void Apply()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchFullscreenStretch.c (Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$Apply): clean
		Vector2 UVar1;
		Vector2 UVar2;
		bool bVar3;
		RectTransform __this_00;
		float fVar4;
		float fVar5;

		__this_00 = this.GetComponent<RectTransform>();
		bVar3 = ((Object)__this_00 == null);
		if (bVar3) {
			return;
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar2 = __this_00.anchorMin;
		UVar1 = (Vector2.zeroVector);
		fVar4 = UVar2.x - UVar1.x;
		fVar5 = UVar2.y - UVar1.y;
		if (fVar5 * fVar5 + fVar4 * fVar4 < 9.9999994e-11) {
			UVar2 = __this_00.anchorMax;
			UVar1 = (Vector2.oneVector);
			fVar4 = UVar2.x - UVar1.x;
			fVar5 = UVar2.y - UVar1.y;
			if (9.9999994e-11 <= fVar5 * fVar5 + fVar4 * fVar4) {
			}
			else {
				UVar2 = __this_00.offsetMin;
				UVar1 = (Vector2.zeroVector);
				fVar4 = UVar2.x - UVar1.x;
				fVar5 = UVar2.y - UVar1.y;
				if (fVar5 * fVar5 + fVar4 * fVar4 < 9.9999994e-11) {
					UVar2 = __this_00.offsetMax;
					UVar1 = (Vector2.zeroVector);
					fVar4 = UVar2.x - UVar1.x;
					fVar5 = UVar2.y - UVar1.y;
					if (fVar5 * fVar5 + fVar4 * fVar4 < 9.9999994e-11) {
						return;
					}
				}
			}
		}
		__this_00.anchorMin = (Vector2)(Vector2.zeroVector);
		__this_00.anchorMax = (Vector2)(Vector2.oneVector);
		__this_00.offsetMin = (Vector2)(Vector2.zeroVector);
		__this_00.offsetMax = (Vector2)(Vector2.zeroVector);
		return;
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x5290960", Offset = "0x528F960", VA = "0x5290960")]
	public GisketchFullscreenStretch()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchFullscreenStretch.c (Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$.ctor): clean
		base();
		return;
	}
}
