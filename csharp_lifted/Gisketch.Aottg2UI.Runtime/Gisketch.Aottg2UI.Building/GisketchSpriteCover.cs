// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchSpriteCover
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchSpriteCover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gilzoide.FlexUi;
using Gilzoide.FlexUi.Yoga;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000BD")]
internal sealed class GisketchSpriteCover : MonoBehaviour
{
	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _flex;

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _lastParent;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x38")]
	private Sprite _lastSprite;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x40")]
	private float _lastWidth;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x44")]
	private float _lastHeight;

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x52929D0", Offset = "0x52919D0", VA = "0x52929D0")]
	private void Awake()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchSpriteCover$$Awake): clean
		Image pUVar1;
		FlexLayout pGVar2;

		pUVar1 = this.GetComponent<Image>();
		this._image = pUVar1;
		pGVar2 = this.GetComponent<FlexLayout>();
		this._flex = pGVar2;
		return;
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x5292A50", Offset = "0x5291A50", VA = "0x5292A50")]
	private void OnEnable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchSpriteCover$$OnEnable): clean
		this.Refresh();
		return;
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x5292FF0", Offset = "0x5291FF0", VA = "0x5292FF0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchSpriteCover$$LateUpdate): clean
		this.Refresh();
		return;
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x5293000", Offset = "0x5292000", VA = "0x5293000")]
	private void OnRectTransformDimensionsChange()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchSpriteCover$$OnRectTransformDimensionsChange): clean
		this.Refresh();
		return;
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x5292A60", Offset = "0x5291A60", VA = "0x5292A60")]
	private bool Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchSpriteCover$$Refresh): 23 lines keep C-only constructs
		Image* targetAddress;
		FlexLayout* targetAddress_00;
		Vector2 UVar1;
		int iVar2;
		Object pUVar3;
		Object y;
		Sprite __this_00;
		bool bVar4;
		sbyte cVar5;
		Image pUVar6;
		FlexLayout pGVar7;
		Transform pUVar8;
		RectTransform pUVar9;
		YGValue value;
		YGValue value_00;
		RectTransform __this_01;
		bool bVar10;
		uint uVar11;
		uint uVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		Rect UVar18;
		ulong uStack_58;
		ulong uStack_48;

		pUVar6 = this._image;
		targetAddress = &this._image;
		bVar4 = ((Object)pUVar6 == null);
		if (bVar4) {
			pUVar6 = this.GetComponent<Image>();
			this._image = pUVar6;
		}
		pGVar7 = this._flex;
		targetAddress_00 = &this._flex;
		bVar4 = ((Object)pGVar7 == null);
		if (bVar4) {
			pGVar7 = this.GetComponent<FlexLayout>();
			this._flex = pGVar7;
		}
		pUVar6 = *targetAddress;
		bVar4 = ((Object)pUVar6 == null);
		if (!bVar4) {
			if (*targetAddress == null) goto label_05392fde;
			pUVar3 = (Object)((*targetAddress).fields).m_Sprite;
			bVar4 = (pUVar3 == null);
			if (!bVar4) {
				pGVar7 = *targetAddress_00;
				bVar4 = ((Object)pGVar7 == null);
				if (!bVar4) {
					pUVar8 = this.transform;
					if (pUVar8 == null) {
	label_05392fde: ;
						throw new NullReferenceException();
					}
					pUVar8 = pUVar8.parent;
					bVar4 = ((Object)pUVar8 == null);
					if (!bVar4) {
						pUVar8 = this.transform;
						if (pUVar8 == null) goto label_05392fde;
						pUVar9 = (RectTransform)pUVar8.parent;
						__this_01 = null;
						if ((pUVar9 != null) &&(__this_01 = null, pUVar9.klass == typeof(RectTransform))) {
							__this_01 = pUVar9;
						}
						bVar4 = ((Object)__this_01 == null);
						if (!bVar4) {
							if (__this_01 == null) goto label_05392fde;
							UVar18 = __this_01.rect;
							if (0.0 < UVar18.m_Width) {
								UVar18 = __this_01.rect;
								if (0.0 < UVar18.m_Height) {
									UVar18 = __this_01.rect;
									fVar13 = UVar18.m_Width;
									fVar14 = UVar18.m_Height;
									UVar1 = this._lastParent;
									fVar15 = fVar13 - UVar1.x;
									fVar17 = fVar14 - UVar1.y;
									if (fVar17 * fVar17 + fVar15 * fVar15 < 9.9999994e-11) {
										if (*targetAddress == null) goto label_05392fde;
										pUVar3 = (Object)((*targetAddress).fields).m_Sprite;
										y = (Object)this._lastSprite;
										bVar4 = (pUVar3 == y);
										if (bVar4) {
											return false;
										}
									}
									this._lastParent = UVar18._8_8_;
									pUVar6 = this._image;
									if (pUVar6 != null) {
										this._lastSprite = pUVar6.m_Sprite;
										pUVar6 = this._image;
										if ((pUVar6 != null) &&(__this_00 = pUVar6.m_Sprite, __this_00 != null)) {
											UVar18 = __this_00.rect;
											if (*targetAddress != null) {
												uVar11 = -(uint)(0.0 < UVar18.m_Height);
												uVar12 = -(uint)(0.0 < UVar18.m_Width);
												fVar16 = (float)(~uVar12 & 0x3f800000 |(~uVar11 & 0x3f800000 |(uint)(UVar18.m_Width / UVar18.m_Height) & uVar11) & uVar12);
												fVar17 = fVar14 * fVar16;
												fVar15 = fVar13;
												if (fVar13 <= fVar17) {
													fVar15 = fVar17;
												}
												uStack_58 = CONCAT44(fVar14, fVar15);
												fVar13 = fVar13 / fVar16;
												fVar17 = fVar14;
												if (fVar14 <= fVar13) {
													fVar17 = fVar13;
												}
												uStack_48 = CONCAT44(fVar14, fVar17);
												value.Value = 1.4013e-45;
												value.Unit = 0;
												(*targetAddress).preserveAspect = true;
												cVar5 = il2cpp_runtime_helper_03296c30(uStack_58, this._lastWidth, 0);
												if ((cVar5 != false) &&(cVar5 = il2cpp_runtime_helper_03296c30(uStack_48, this._lastHeight, 0), cVar5 != false)) {
													return false;
												}
												this._lastWidth = fVar15;
												this._lastHeight = fVar17;
												pGVar7 = this._flex;
												if (pGVar7 != null) {
													iVar2 = pGVar7._alignSelf;
													if (iVar2 != 2) {
														value.Value = 2.8026e-45;
														value.Unit = 0;
														pGVar7.AlignSelf = 2;
														pGVar7 = *targetAddress_00;
														if (pGVar7 == null) goto label_05392fde;
													}
													bVar10 = iVar2 != 2;
													bVar4 = GisketchSpriteCover.SamePoint((YGValue)pGVar7._width, fVar15);
													if (!bVar4) {
														pGVar7 = *targetAddress_00;
														value = (YGValue)((YGValue)fVar15);
														if (pGVar7 == null) goto label_05392fde;
														pGVar7.Width = (YGValue)value;
													}
													if (*targetAddress_00 != null) {
														bVar4 = GisketchSpriteCover.SamePoint((YGValue)((*targetAddress_00).fields)._height, fVar17);
														if (bVar4) {
															return bVar10;
														}
														pGVar7 = *targetAddress_00;
														value_00 = ((YGValue)fVar17);
														if (pGVar7 != null) {
															pGVar7.Height = value_00;
															return true;
														}
													}
												}
											}
										}
									}
									goto label_05392fde;
								}
							}
						}
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x5293010", Offset = "0x5292010", VA = "0x5293010")]
	internal static Vector2 CoverSize(Vector2 parentSize, Vector2 spriteSize)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchSpriteCover$$CoverSize): clean
		Vector2 UVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;

		fVar2 = parentSize.x;
		fVar3 = parentSize.y;
		fVar5 = 1.0;
		if ((0.0 < spriteSize.x) && (0.0 < spriteSize.y)) {
			fVar5 = spriteSize.x / spriteSize.y;
		}
		fVar4 = fVar2;
		if (fVar2 <= fVar3 * fVar5) {
			fVar4 = fVar3 * fVar5;
		}
		if (fVar3 <= fVar2 / fVar5) {
			fVar3 = fVar2 / fVar5;
		}
		UVar1.y = fVar3;
		UVar1.x = fVar4;
		return (Vector2)UVar1;
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x5293060", Offset = "0x5292060", VA = "0x5293060")]
	private static bool SamePoint(YGValue value, float expected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchSpriteCover$$SamePoint): clean
		float fVar1;
		float fVar2;
		float fVar3;

		if (value.Unit != 1) {
			return false;
		}
		fVar3 = ABS(value.Value);
		if (fVar3 <= ABS(expected)) {
			fVar3 = ABS(expected);
		}
		fVar2 = Mathf.Epsilon * 8.0;
		fVar1 = fVar3 * 1e-06;
		if (fVar3 * 1e-06 <= fVar2) {
			fVar1 = fVar2;
		}
		return ABS(expected - value.Value) < fVar1;
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x5293100", Offset = "0x5292100", VA = "0x5293100")]
	public GisketchSpriteCover()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchSpriteCover$$.ctor): clean
		this._lastWidth = -1.0;
		this._lastHeight = -1.0;
		base();
		return;
	}
}
