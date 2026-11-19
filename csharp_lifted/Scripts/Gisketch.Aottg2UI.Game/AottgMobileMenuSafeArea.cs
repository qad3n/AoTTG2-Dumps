// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMobileMenuSafeArea
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMobileMenuSafeArea.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002BA")]
internal sealed class AottgMobileMenuSafeArea : MonoBehaviour
{
	[Token(Token = "0x4000DE2")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _content;

	[Token(Token = "0x4000DE3")]
	[FieldOffset(Offset = "0x28")]
	private int _childCount;

	[Token(Token = "0x4000DE4")]
	[FieldOffset(Offset = "0x2C")]
	private float _inset;

	[Token(Token = "0x6001082")]
	[Address(RVA = "0x57C46F0", Offset = "0x57C36F0", VA = "0x57C46F0")]
	internal static float HorizontalInset()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileMenuSafeArea.c (Gisketch.Aottg2UI.Game.AottgMobileMenuSafeArea$$HorizontalInset): clean
		UISettings pSVar1;
		FloatSetting pSVar2;
		int iVar3;
		int iVar4;
		int iVar5;
		float fVar6;
		float fVar7;
		Rect UVar8;
		float local_38;
		float local_28;

		UVar8 = Screen.safeArea;
		iVar3 = Screen.width;
		iVar4 = Screen.height;
		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.MobileHorizontalSafePadding, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		fVar7 = pSVar2._value;
		if (iVar4 < iVar3) {
			iVar4 = iVar3;
		}
		iVar3 = Screen.width;
		local_28 = UVar8.m_XMin;
		local_38 = UVar8.m_Width;
		fVar6 = (float)iVar3 - (local_38 + local_28);
		if (local_28 <= fVar6) {
			local_28 = fVar6;
		}
		fVar7 = fVar7 * (float)iVar4;
		if (fVar7 <= local_28) {
			fVar7 = local_28;
		}
		iVar4 = Screen.width;
		iVar5 = 1;
		if (1 < iVar4) {
			iVar5 = iVar4;
		}
		return fVar7 / (float)iVar5;
	}

	[Token(Token = "0x6001083")]
	[Address(RVA = "0x57C4810", Offset = "0x57C3810", VA = "0x57C4810")]
	internal static void ApplyInset(RectTransform rect, float inset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileMenuSafeArea.c (Gisketch.Aottg2UI.Game.AottgMobileMenuSafeArea$$ApplyInset): clean
		Vector2 value;
		Vector2 value_00;
		Vector2 value_01;

		if (rect == null) {
			throw new NullReferenceException();
		}
		value_00.y = 0.0;
		value_00.x = inset;
		rect.anchorMin = value_00;
		value_01.y = 1.0;
		value_01.x = 1.0 - inset;
		rect.anchorMax = value_01;
		value = (Vector2.zeroVector);
		rect.offsetMax = (Vector2)value;
		rect.offsetMin = (Vector2)value;
		return;
	}

	[Token(Token = "0x6001084")]
	[Address(RVA = "0x57C48B0", Offset = "0x57C38B0", VA = "0x57C48B0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileMenuSafeArea.c (Gisketch.Aottg2UI.Game.AottgMobileMenuSafeArea$$LateUpdate): 14 lines keep C-only constructs
		RectTransform* targetAddress;
		float fVar1;
		Vector2 value;
		int iVar2;
		Vector2 value_00;
		Vector2 value_01;
		RectTransform pUVar3;
		bool bVar4;
		int iVar5;
		uint length;
		uint uVar6;
		Transform pUVar7;
		GameObject __this_00;
		RectTransform pUVar8;
		object pIVar9;
		Il2CppClass pIVar10;
		object pIVar11;
		MobileControlsOverlay x;
		MobileLayoutEditorOverlay x_00;
		ulong uVar12;
		long lVar13;
		String* method_01;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;

		if (Il2CppMethodInitialized_07545400 == false) {
			method_01 = &"Mobile Menu Safe Area";
			Il2CppMethodInitialized_07545400 = true;
		}
		fVar14 = AottgMobileMenuSafeArea.HorizontalInset();
		pUVar8 = this._content;
		bVar4 = ((Object)pUVar8 != null);
		if (bVar4) {
			iVar2 = this._childCount;
			pUVar7 = this.transform;
			if (pUVar7 == null) goto label_058c4d3b;
			iVar5 = pUVar7.childCount;
			if (iVar2 == iVar5) {
				fVar1 = this._inset;
				fVar16 = ABS(fVar1);
				if (fVar16 <= ABS(fVar14)) {
					fVar16 = ABS(fVar14);
				}
				fVar15 = Mathf.Epsilon * 8.0;
				fVar17 = fVar16 * 1e-06;
				if (fVar16 * 1e-06 <= fVar15) {
					fVar17 = fVar15;
				}
				if (ABS(fVar14 - fVar1) < fVar17) {
					return;
				}
			}
		}
		targetAddress = &this._content;
		pUVar8 = *targetAddress;
		bVar4 = ((Object)pUVar8 == null);
		if (bVar4) {
			pUVar7 = this.transform;
			if ((typeof(AottgMobileUi)._2).cctor_finished_or_no_cctor == 0) {
			}
			__this_00 = AottgMobileUi.CreateRect(pUVar7, "Mobile Menu Safe Area");
			if (__this_00 == null) goto label_058c4d3b;
			pUVar8 = (RectTransform)__this_00.transform ;
			pUVar3 = typeof(RectTransform);
			if (pUVar8 == null) {
				*targetAddress = null;
			}
			else if ((pUVar8.klass != typeof(RectTransform)) ||(*targetAddress = pUVar8, pUVar8.klass != pUVar3)) {
				throw new InvalidCastException();
			}
		}
		pUVar7 = this.transform;
		if (pUVar7 != null) {
			length = pUVar7.childCount;
			pIVar9 = new Transform[length];
			if (pIVar9 != null) {
				if (0 < *(int)&pIVar9[1].monitor) {
					lVar13 = 0x20;
					uVar12 = 0;
					do {
						pUVar7 = this.transform;
						if (pUVar7 == null) goto label_058c4d3b;
						pIVar10 = (Il2CppClass)pUVar7.GetChild((int32_t)uVar12);
						if ((pIVar10 != null) &&(pIVar11 = il2cpp_vm_Object_IsInst((object)pIVar10, (pIVar9.klass._1).element_class), pIVar11 == null)) {
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
						if (*(uint)&pIVar9[1].monitor <= uVar12) goto label_058c4d36;
						(&pIVar9[2].klass)[uVar12] = pIVar10;
						uVar12 = uVar12 + 1;
						uVar6 = *(uint)&pIVar9[1].monitor;
						lVar13 = lVar13 + 8;
					} while ((long)uVar12 < (long)(int)uVar6);
					if (0 < (int)uVar6) {
						uVar12 = 0;
						do {
							if (uVar6 <= uVar12) {
	label_058c4d36: ;
								throw new IndexOutOfRangeException();
							}
							pIVar10 = (&pIVar9[2].klass)[uVar12];
							pUVar8 = *targetAddress;
							bVar4 = ((Object)pIVar10 == (Object)pUVar8);
							if (!bVar4) {
								if (pIVar10 == null) goto label_058c4d3b;
								x = pIVar10.GetComponent<MobileControlsOverlay>();
								bVar4 = ((Object)x != null);
								if (!bVar4) {
									x_00 = pIVar10.GetComponent<MobileLayoutEditorOverlay>();
									bVar4 = ((Object)x_00 != null) ;
									if (!bVar4) {
										pIVar10.SetParent((Transform)*targetAddress, false);
									}
								}
							}
							uVar12 = uVar12 + 1;
							uVar6 = *(uint)&pIVar9[1].monitor;
						} while ((long)uVar12 < (long)(int)uVar6);
					}
				}
				pUVar8 = *targetAddress;
				if (pUVar8 != null) {
					value_00.y = 0.0;
					value_00.x = fVar14;
					pUVar8.anchorMin = value_00;
					value_01.y = 1.0;
					value_01.x = 1.0 - fVar14;
					pUVar8.anchorMax = value_01;
					value = (Vector2.zeroVector);
					pUVar8.offsetMax = (Vector2)value;
					pUVar8.offsetMin = (Vector2)value;
					pUVar7 = this.transform;
					if (pUVar7 != null) {
						iVar5 = pUVar7.childCount;
						this._childCount = iVar5;
						this._inset = fVar14;
						return;
					}
				}
			}
		}
	label_058c4d3b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001085")]
	[Address(RVA = "0x57C4E90", Offset = "0x57C3E90", VA = "0x57C4E90")]
	public AottgMobileMenuSafeArea()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileMenuSafeArea.c (Gisketch.Aottg2UI.Game.AottgMobileMenuSafeArea$$.ctor): clean
		this._inset = -1.0;
		base();
		return;
	}
}
