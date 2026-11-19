// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchRectTransformSpriteCover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000BE")]
internal sealed class GisketchRectTransformSpriteCover : MonoBehaviour
{
	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _rect;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _lastParent;

	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0x38")]
	private Sprite _lastSprite;

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x5293120", Offset = "0x5292120", VA = "0x5293120")]
	private void Awake()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchRectTransformSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$Awake): 1 lines keep C-only constructs
		Image pUVar1;
		RectTransform pUVar2;
		RectTransform pUVar3;

		pUVar1 = this.GetComponent<Image>();
		this._image = pUVar1;
		pUVar2 = (RectTransform)this.transform;
		if (pUVar2 == null) {
			this._rect = null;
			return;
		}
		pUVar3 = null;
		if (pUVar2.klass == typeof(RectTransform)) {
			pUVar3 = pUVar2;
		}
		this._rect = pUVar3;
		return;
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x52931D0", Offset = "0x52921D0", VA = "0x52931D0")]
	private void OnEnable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchRectTransformSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$OnEnable): clean
		this.Refresh();
		return;
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x52936E0", Offset = "0x52926E0", VA = "0x52936E0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchRectTransformSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$LateUpdate): clean
		this.Refresh();
		return;
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x52936F0", Offset = "0x52926F0", VA = "0x52936F0")]
	private void OnRectTransformDimensionsChange()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchRectTransformSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$OnRectTransformDimensionsChange): clean
		this.Refresh();
		return;
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x52931E0", Offset = "0x52921E0", VA = "0x52931E0")]
	private bool Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchRectTransformSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$Refresh): 22 lines keep C-only constructs
		Image* targetAddress;
		RectTransform* targetAddress_00;
		Vector2 UVar1;
		Object pUVar2;
		Object y;
		Sprite __this_00;
		bool bVar3;
		Image pUVar4;
		RectTransform pUVar5;
		Transform pUVar6;
		RectTransform pUVar7;
		uint uVar8;
		uint uVar9;
		Vector2 value;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		Rect UVar15;

		pUVar4 = this._image;
		targetAddress = &this._image;
		bVar3 = ((Object)pUVar4 == null);
		if (bVar3) {
			pUVar4 = this.GetComponent<Image>();
			this._image = pUVar4;
		}
		pUVar5 = this._rect;
		targetAddress_00 = &this._rect;
		bVar3 = ((Object)pUVar5 == null);
		if (bVar3) {
			pUVar5 = (RectTransform)this.transform;
			if (pUVar5 == null) {
				*targetAddress_00 = null;
			}
			else {
				pUVar7 = null;
				if (pUVar5.klass == typeof(RectTransform)) {
					pUVar7 = pUVar5;
				}
				*targetAddress_00 = pUVar7;
			}
		}
		pUVar4 = *targetAddress;
		bVar3 = ((Object)pUVar4 == null);
		if (!bVar3) {
			if (*targetAddress == null) goto label_053936d7;
			pUVar2 = (Object)((*targetAddress).fields).m_Sprite;
			bVar3 = (pUVar2 == null);
			if (!bVar3) {
				pUVar5 = *targetAddress_00;
				bVar3 = ((Object)pUVar5 == null);
				if (!bVar3) {
					pUVar6 = this.transform;
					if (pUVar6 == null) {
	label_053936d7: ;
						throw new NullReferenceException();
					}
					pUVar6 = pUVar6.parent;
					bVar3 = ((Object)pUVar6 == null);
					if (!bVar3) {
						pUVar6 = this.transform;
						if (pUVar6 == null) goto label_053936d7;
						pUVar7 = (RectTransform)pUVar6.parent;
						pUVar5 = null;
						if ((pUVar7 != null) &&(pUVar5 = null, pUVar7.klass == typeof(RectTransform) )) {
							pUVar5 = pUVar7;
						}
						bVar3 = ((Object)pUVar5 == null);
						if (!bVar3) {
							if (pUVar5 == null) goto label_053936d7;
							UVar15 = pUVar5.rect;
							if (0.0 < UVar15.m_Width) {
								UVar15 = pUVar5.rect;
								if (0.0 < UVar15.m_Height) {
									UVar15 = pUVar5.rect;
									fVar14 = UVar15.m_Width;
									fVar10 = UVar15.m_Height;
									UVar1 = this._lastParent;
									fVar11 = fVar14 - UVar1.x;
									fVar12 = fVar10 - UVar1.y;
									if (fVar12 * fVar12 + fVar11 * fVar11 < 9.9999994e-11) {
										if (*targetAddress == null) goto label_053936d7;
										pUVar2 = (Object)((*targetAddress).fields).m_Sprite;
										y = (Object)this._lastSprite;
										bVar3 = (pUVar2 == y);
										if (bVar3) {
											return false;
										}
									}
									this._lastParent = UVar15._8_8_;
									pUVar4 = this._image;
									if (pUVar4 != null) {
										this._lastSprite = pUVar4.m_Sprite;
										pUVar4 = this._image;
										if (pUVar4 != null) {
											pUVar4.preserveAspect = true;
											if (*targetAddress_00 != null) {
												(*targetAddress_00).anchorMin = (Vector2)0x3f0000003f000000;
												if (*targetAddress_00 != null) {
													(*targetAddress_00).anchorMax = (Vector2)0x3f0000003f000000;
													if (*targetAddress_00 != null) {
														(*targetAddress_00).pivot = (Vector2)0x3f0000003f000000;
														pUVar5 = *targetAddress_00;
														if (pUVar5 != null) {
															pUVar5.anchoredPosition = (Vector2)(Vector2.zeroVector);
															if ((*targetAddress != null) &&(__this_00 = ((*targetAddress).fields).m_Sprite, __this_00 != null)) {
																pUVar5 = *targetAddress_00;
																UVar15 = __this_00.rect;
																if (pUVar5 != null) {
																	uVar8 = -(uint)(0.0 < UVar15.m_Height);
																	uVar9 = -(uint)(0.0 < UVar15.m_Width);
																	fVar12 = (float)(~uVar9 & 0x3f800000 |(~uVar8 & 0x3f800000 |(uint)(UVar15.m_Width / UVar15.m_Height) & uVar8 ) & uVar9);
																	fVar13 = fVar10 * fVar12;
																	fVar11 = fVar14;
																	if (fVar14 <= fVar13) {
																		fVar11 = fVar13;
																	}
																	fVar14 = fVar14 / fVar12;
																	if (fVar10 <= fVar14) {
																		fVar10 = fVar14;
																	}
																	value.y = fVar10;
																	value.x = fVar11;
																	pUVar5.sizeDelta = value;
																	return true;
																}
															}
														}
													}
												}
											}
										}
									}
									goto label_053936d7;
								}
							}
						}
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x5293700", Offset = "0x5292700", VA = "0x5293700")]
	public GisketchRectTransformSpriteCover()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchRectTransformSpriteCover.c (Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$.ctor): clean
		base();
		return;
	}
}
