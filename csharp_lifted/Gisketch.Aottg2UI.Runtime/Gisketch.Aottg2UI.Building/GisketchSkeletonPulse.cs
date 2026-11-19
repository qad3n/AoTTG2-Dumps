// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchSkeletonPulse
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchSkeletonPulse.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000BC")]
public sealed class GisketchSkeletonPulse : MonoBehaviour
{
	[Token(Token = "0x40003E0")]
	private const string ShimmerName = "AoTTG Skeleton Shimmer";

	[Token(Token = "0x40003E1")]
	private const float Duration = 1.18f;

	[Token(Token = "0x40003E2")]
	private const float WidthRatio = 0.42f;

	[Token(Token = "0x40003E3")]
	private const float HeightRatio = 1.35f;

	[Token(Token = "0x40003E4")]
	private const int FeatherTextureWidth = 64;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x0")]
	private static Sprite _featherSprite;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _root;

	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _shimmer;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x38")]
	private Color _baseColor;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x48")]
	private Color _pulseColor;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x58")]
	private Tween _pulse;

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x5291F20", Offset = "0x5290F20", VA = "0x5291F20")]
	public void Setup(Image image, Color baseColor, Color pulseColor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSkeletonPulse.c (Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$Setup): clean
		bool bVar1;
		MethodInfo method_00;
		float local_58;
		float fStack_54;
		float local_38;
		float fStack_34;

		this._image = image;
		method_00 = null;
		bVar1 = ((Object)image != null);
		if (bVar1) {
			if (image == null) {
				throw new NullReferenceException();
			}
			method_00 = (MethodInfo)image.GetComponent<RectTransform>();
		}
		this._root = (RectTransform)method_00;
		local_58 = baseColor.r;
		fStack_54 = baseColor.g;
		this._baseColor.r = local_58;
		this._baseColor.g = fStack_54;
		this._baseColor.b = baseColor.b;
		this._baseColor.a = baseColor.a;
		local_38 = pulseColor.r;
		fStack_34 = pulseColor.g;
		this._pulseColor.r = local_38;
		this._pulseColor.g = fStack_34;
		this._pulseColor.b = pulseColor.b;
		this._pulseColor.a = pulseColor.a;
		this.EnsureShimmer();
		this.StartPulse();
		return;
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x5292580", Offset = "0x5291580", VA = "0x5292580")]
	private void OnEnable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSkeletonPulse.c (Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnEnable): clean
		this.StartPulse();
		return;
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x5292590", Offset = "0x5291590", VA = "0x5292590")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSkeletonPulse.c (Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnDisable): 2 lines keep C-only constructs
		Tween t;
		Tween* targetAddress;

		t = this._pulse;
		targetAddress = &this._pulse;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x52925F0", Offset = "0x52915F0", VA = "0x52925F0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSkeletonPulse.c (Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$OnDestroy): 2 lines keep C-only constructs
		Tween t;
		Tween* targetAddress;

		t = this._pulse;
		targetAddress = &this._pulse;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x52923F0", Offset = "0x52913F0", VA = "0x52923F0")]
	private void StartPulse()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSkeletonPulse.c (Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$StartPulse): 1 lines keep C-only constructs
		Image pUVar1;
		bool bVar2;
		TweenCallback<float> __this_00;
		Tweener pDVar3;

		pUVar1 = this._image;
		bVar2 = ((Object)pUVar1 == null);
		if (!bVar2) {
			bVar2 = this.isActiveAndEnabled ;
			if ((bVar2) && (this._pulse == null)) {
				pUVar1 = this._image;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				pUVar1.set_color((Color)this._baseColor);
				this.EnsureShimmer();
				__this_00 = new TweenCallback<float>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_UpdateShimmer);
				pDVar3 = DOVirtual.Float(0.0, 1.0, 1.18, __this_00);
				pDVar3 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar3, 4);
				pDVar3 = TweenSettingsExtensions.SetLoops<Tweener>((object)pDVar3, -1, 0);
				pDVar3 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar3, true);
				this._pulse = (Tween)pDVar3;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x52925C0", Offset = "0x52915C0", VA = "0x52925C0")]
	private void StopPulse()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSkeletonPulse.c (Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$StopPulse): 2 lines keep C-only constructs
		Tween t;
		Tween* targetAddress;

		t = this._pulse;
		targetAddress = &this._pulse;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x5292010", Offset = "0x5291010", VA = "0x5292010")]
	private void EnsureShimmer()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSkeletonPulse.c (Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$EnsureShimmer): 7 lines keep C-only constructs
		RectTransform* targetAddress;
		Il2CppType handle;
		bool bVar1;
		RectMask2D x;
		GameObject pUVar2;
		Transform pUVar3;
		Type[] components;
		Type obj;
		object pIVar4;
		Transform parent;
		RectTransform pUVar5;
		Image pUVar6;
		Sprite value;

		pUVar6 = this._image;
		bVar1 = ((Object)pUVar6 == null);
		if (bVar1) {
			return;
		}
		pUVar6 = this._image;
		if (pUVar6 == null) goto label_053923d3;
		x = pUVar6.GetComponent<RectMask2D>();
		bVar1 = ((Object)x == null);
		if (bVar1) {
			pUVar6 = this._image;
			if (pUVar6 == null) goto label_053923d3;
			pUVar2 = pUVar6.gameObject;
			if (pUVar2 == null) goto label_053923d3;
			pUVar2.AddComponent<RectMask2D>();
		}
		pUVar6 = this._image;
		if (pUVar6 != null) {
			pUVar3 = pUVar6.transform;
			if (pUVar3 != null) {
				pUVar3 = pUVar3.Find("AoTTG Skeleton Shimmer");
				bVar1 = ((Object)pUVar3 != null);
				if (bVar1) {
					if (pUVar3 == null) goto label_053923d3;
					pUVar2 = pUVar3.gameObject;
				}
				else {
					components = (Type[])new Type[1];
					handle = TypeRef_UnityEngine_RectTransform;
					obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
					if (components == null) goto label_053923d3;
					if (obj != null) {
						pIVar4 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
						if (pIVar4 == null) {
							pIVar4 = new ArrayTypeMismatchException();
							throw pIVar4;
						}
					}
					if ((int)components.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					components[0] = obj;
					pUVar2 = new GameObject("AoTTG Skeleton Shimmer", components);
				}
				if (pUVar2 != null) {
					pUVar3 = pUVar2.transform;
					pUVar6 = this._image;
					if (pUVar6 != null) {
						parent = pUVar6.transform;
						if (pUVar3 != null) {
							pUVar3.SetParent(parent, false);
							pUVar5 = pUVar2.GetComponent<RectTransform>();
							targetAddress = &this._shimmer;
							this._shimmer = pUVar5;
							pUVar6 = pUVar2.GetComponent<Image>();
							bVar1 = ((Object)pUVar6 == null);
							if (bVar1) {
								pUVar6 = pUVar2.AddComponent<Image>();
							}
							if (pUVar6 != null) {
								pUVar6.set_color((Color)this._pulseColor);
								value = GisketchSkeletonPulse.FeatherSprite() ;
								pUVar6.sprite = value;
								pUVar6.set_raycastTarget(false);
								pUVar5 = this._shimmer;
								if (pUVar5 != null) {
									pUVar5.anchorMin = (Vector2)0x3f0000003f000000;
									if (*targetAddress != null) {
										(*targetAddress).anchorMax = (Vector2)0x3f0000003f000000;
										if (*targetAddress != null) {
											(*targetAddress).pivot = (Vector2)0x3f0000003f000000;
											this.UpdateShimmer(0.0);
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
	label_053923d3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x5292850", Offset = "0x5291850", VA = "0x5292850")]
	private void UpdateShimmer(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSkeletonPulse.c (Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$UpdateShimmer): clean
		RectTransform pUVar1;
		bool bVar2;
		float fVar3;
		Vector2 value_00;
		Vector2 value_01;
		float fVar4;
		float fVar5;
		Rect UVar6;

		pUVar1 = this._root;
		bVar2 = ((Object)pUVar1 == null);
		if (!bVar2) {
			pUVar1 = this._shimmer;
			bVar2 = ((Object)pUVar1 == null);
			if (!bVar2) {
				pUVar1 = this._root;
				if (pUVar1 != null) {
					UVar6 = pUVar1.rect;
					fVar3 = UVar6.m_Height;
					fVar4 = UVar6.m_Width;
					pUVar1 = this._shimmer;
					if (pUVar1 != null) {
						if (fVar4 <= 1.0) {
							fVar4 = 1.0;
						}
						fVar5 = fVar4 * 0.42;
						if (fVar5 <= 24.0) {
							fVar5 = 24.0;
						}
						if (fVar3 <= 1.0) {
							fVar3 = 1.0;
						}
						value_00.y = fVar3 * 1.35;
						value_00.x = fVar5;
						pUVar1.sizeDelta = value_00;
						pUVar1 = this._shimmer;
						if (pUVar1 != null) {
							fVar4 = fVar4 + fVar5 + fVar5;
							value_01.y = 0.0;
							value_01.x = fVar4 * value + fVar4 * -0.5;
							pUVar1.anchoredPosition = value_01;
							return;
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x5292620", Offset = "0x5291620", VA = "0x5292620")]
	private static Sprite FeatherSprite()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSkeletonPulse.c (Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$FeatherSprite): 1 lines keep C-only constructs
		Object pUVar1;
		bool bVar2;
		Texture __this;
		Sprite pUVar3;
		int x;
		float fVar4;
		float fVar5;
		Color color;

		pUVar1 = (Object)GisketchSkeletonPulse._featherSprite;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
	label_05392823: ;
			return GisketchSkeletonPulse._featherSprite;
		}
		x = 0;
		__this = new Texture2D(0x40, 1, 4, false);
		if (__this != null) {
			__this.name = "AoTTG Skeleton Shimmer Feather";
			__this.wrapMode = 1;
			__this.filterMode = 1;
			do {
				fVar4 = 1.0 - ABS((float)x / 63.0 + (float)x / 63.0 + -1.0);
				fVar5 = 1.0;
				if (fVar4 <= 1.0) {
					fVar5 = fVar4;
				}
				fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
				fVar5 = fVar5 * 3.0 * fVar5 - (fVar5 + fVar5) * fVar5 * fVar5;
				color.a = (1.0 - fVar5) * 0.0 + fVar5;
				color.b = 1.0;
				color.r = 1.0;
				color.g = 1.0;
				__this.SetPixel(x, 0, color);
				x = x + 1;
			} while (x != 0x40);
			__this.Apply();
			pUVar3 = Sprite.Create((Texture2D)__this, (Rect)(ZEXT816(0x3f80000042800000) << 0x40), (Vector2)0x3f0000003f000000);
			GisketchSkeletonPulse._featherSprite = pUVar3;
			pUVar1 = (Object)GisketchSkeletonPulse._featherSprite;
			if (pUVar1 != null) {
				pUVar1.name = "AoTTG Skeleton Shimmer Feather";
				goto label_05392823;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x52929C0", Offset = "0x52919C0", VA = "0x52929C0")]
	public GisketchSkeletonPulse()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSkeletonPulse.c (Gisketch.Aottg2UI.Building.GisketchSkeletonPulse$$.ctor): clean
		base();
		return;
	}
}
