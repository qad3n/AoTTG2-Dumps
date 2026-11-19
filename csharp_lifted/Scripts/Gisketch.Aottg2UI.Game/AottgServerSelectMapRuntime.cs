// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E0")]
internal sealed class AottgServerSelectMapRuntime : MonoBehaviour
{
	[Token(Token = "0x4000E82")]
	private const string BrushSprite = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x4000E83")]
	private const string LabelFont = "menuText";

	[Token(Token = "0x4000E84")]
	private const float MapAspect = 1.7297298f;

	[Token(Token = "0x4000E85")]
	private const float MapAlpha = 0.12f;

	[Token(Token = "0x4000E86")]
	private const float HighlightAlpha = 0.85f;

	[Token(Token = "0x4000E87")]
	private const float RegionHitAlpha = 0.5f;

	[Token(Token = "0x4000E88")]
	private const float TransitionSeconds = 0.2f;

	[Token(Token = "0x4000E89")]
	private const float DesignHeight = 1080f;

	[Token(Token = "0x4000E8A")]
	private const float ViewportMargin = 48f;

	[Token(Token = "0x4000E8B")]
	private const float LabelFontSize = 52f;

	[Token(Token = "0x4000E8C")]
	private const float LabelHeight = 76f;

	[Token(Token = "0x4000E8D")]
	private const float LabelPaddingX = 36f;

	[Token(Token = "0x4000E8E")]
	private const float LabelFocusBlend = 0.3f;

	[Token(Token = "0x4000E8F")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x4000E90")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _viewport;

	[Token(Token = "0x4000E91")]
	[FieldOffset(Offset = "0x30")]
	private Image[] _highlights;

	[Token(Token = "0x4000E92")]
	[FieldOffset(Offset = "0x38")]
	private Image[] _labels;

	[Token(Token = "0x4000E93")]
	[FieldOffset(Offset = "0x40")]
	private float[] _fromAlpha;

	[Token(Token = "0x4000E94")]
	[FieldOffset(Offset = "0x48")]
	private Color _highlightColor;

	[Token(Token = "0x4000E95")]
	[FieldOffset(Offset = "0x58")]
	private Color _labelFocusColor;

	[Token(Token = "0x4000E96")]
	[FieldOffset(Offset = "0x68")]
	private Tween _tween;

	[Token(Token = "0x4000E97")]
	[FieldOffset(Offset = "0x70")]
	private int _focused;

	[Token(Token = "0x6001167")]
	[Address(RVA = "0x57D3350", Offset = "0x57D2350", VA = "0x57D3350")]
	public void Setup(Color mapColor, Color highlightColor, Color labelTextColor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$Setup): 23 lines keep C-only constructs
		RectTransform* targetAddress;
		Image[]* targetAddress_00;
		Image[]* targetAddress_01;
		uint uVar1;
		AottgServerRegion[] pGVar2;
		Vector2 value;
		Vector2 value_00;
		String pSVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		AottgServerRegion region;
		ulong uVar8;
		ulong uVar9;
		uint uVar10;
		RectTransform pUVar11;
		RectTransform pUVar12;
		GameObject pUVar13;
		AspectRatioFitter __this_00;
		Image[] pUVar14;
		Single[] pSVar15;
		ulong uVar16;
		Image pUVar17;
		object pIVar18;
		MethodInfo* method_00;
		AottgServerRegion[] method_01;
		AottgServerRegion pGVar19;
		RectTransform* targetAddress_02;
		AottgServerRegion pGVar20;
		long lVar21;
		ulong uVar22;
		float fVar23;
		Color color;
		Rect UVar24;
		float local_a8;
		float fStack_a4;
		float local_98;
		float fStack_94;
		float local_88;
		float fStack_84;
		float local_78;
		float fStack_74;

		pUVar12 = (RectTransform)this.transform;
		pUVar11 = typeof(RectTransform);
		if (pUVar12 == null) {
			this._rect = null;
		}
		else if ((pUVar12.klass != typeof(RectTransform)) ||(this._rect = pUVar12, pUVar12.klass != pUVar11)) {
			throw new InvalidCastException();
		}
		targetAddress_02 = &this._rect;
		local_78 = highlightColor.r;
		fStack_74 = highlightColor.g;
		local_a8 = highlightColor.b;
		fStack_a4 = highlightColor.a;
		this._highlightColor.r = local_78;
		this._highlightColor.g = fStack_74;
		this._highlightColor.b = local_a8;
		this._highlightColor.a = fStack_a4;
		local_88 = mapColor.r;
		fStack_84 = mapColor.g;
		local_98 = mapColor.b;
		fStack_94 = mapColor.a;
		this._labelFocusColor.r = (local_88 - local_78) * 0.3 + local_78;
		this._labelFocusColor.g = (fStack_84 - fStack_74) * 0.3 + fStack_74;
		this._labelFocusColor.b = (local_98 - local_a8) * 0.3 + local_a8;
		this._labelFocusColor.a = (fStack_94 - fStack_a4) * 0.3 + fStack_a4;
		pUVar12 = AottgServerSelectMapRuntime.CreateRect("Viewport", (Transform)this._rect);
		targetAddress = &this._viewport;
		this._viewport = pUVar12;
		pUVar12 = AottgServerSelectMapRuntime.CreateRect("World Map", (Transform)this._viewport);
		if ((pUVar12 != null) &&(pUVar13 = pUVar12.gameObject, pUVar13 != null)) {
			method_00 = &MethodInfo_UnityEngine_GameObject_AddComponent_AspectRatioFitter;
			__this_00 = pUVar13.AddComponent<AspectRatioFitter>();
			if (__this_00 != null) {
				__this_00.aspectMode = 3;
				__this_00.aspectRatio = 1.7297298;
				pUVar13 = pUVar12.gameObject;
				if ((typeof(AottgServerRegion)._2).cctor_finished_or_no_cctor == 0) {
				}
				color.a = 0.12;
				color.b = local_98;
				color.r = mapColor.r;
				color.g = mapColor.g;
				AottgServerSelectMapRuntime.AddImage(pUVar13, "UI/Sprites/ServerSelect/WorldMap", color);
				pGVar2 = AottgServerRegion.All;
				if (pGVar2 != null) {
					pUVar14 = (Image[])new Image[(uint32_t)pGVar2.Length];
					targetAddress_00 = &this._highlights;
					this._highlights = pUVar14;
					pUVar14 = (Image[])new Image[(uint32_t)pGVar2.Length];
					targetAddress_01 = &this._labels;
					this._labels = pUVar14;
					pSVar15 = (Single[])new float[(uint32_t)pGVar2.Length];
					this._fromAlpha = pSVar15;
					if (0 < (int)pGVar2.Length) {
						uVar16 = pGVar2.Length & 0xffffffff;
						pGVar19 = &pGVar2[0];
						lVar21 = 0x20;
						uVar22 = 0;
						do {
							if (uVar16 <= uVar22) goto label_058d3891;
							pUVar14 = *targetAddress_00;
							pUVar17 = this.CreateHighlight(pUVar12, (Gisketch_Aottg2UI_Game_AottgServerRegion_o)*pGVar19, (int32_t)uVar22);
							if (pUVar14 == null) goto label_058d3896;
							if ((pUVar17 != null) &&(pIVar18 = il2cpp_vm_Object_IsInst((object)pUVar17, (((pUVar14.obj).klass)._1).element_class), pIVar18 == null)) goto label_058d389b;
							if ((uint)pUVar14.Length <= uVar22) goto label_058d3891;
							*(Image*)((long)pUVar14.m_Items + lVar21 + -0x20) = pUVar17;
							uVar22 = uVar22 + 1;
							uVar1 = (uint)pGVar2.Length;
							uVar16 = (ulong)uVar1;
							method_00 = (MethodInfo*)(long)(int)uVar1;
							pGVar19 = pGVar19 + 1;
							lVar21 = lVar21 + 8;
						} while ((long)uVar22 < (long)method_00);
						if (0 < (int)uVar1) {
							pGVar20 = pGVar2.m_Items;
							lVar21 = 0x20;
							uVar22 = 0;
							method_01 = pGVar2;
							do {
								if (uVar16 <= uVar22) {
	label_058d3891: ;
									throw new IndexOutOfRangeException();
								}
								pUVar14 = *targetAddress_01;
								uVar8 = pGVar20.Id;
								uVar9 = pGVar20.Label;
								uVar10 = pGVar20.Region;
								region.Region = uVar10;
								region.Label = (String)uVar9;
								region.Id = (String)uVar8;
								pSVar3 = pGVar20.MaskSprite;
								uVar4 = pGVar20.MaskArea.m_XMin;
								uVar5 = pGVar20.MaskArea.m_YMin;
								region.MaskArea.m_YMin = (float)uVar5;
								region.MaskArea.m_XMin = (float)uVar4;
								uVar6 = pGVar20.MaskArea.m_Width;
								uVar7 = pGVar20.MaskArea.m_Height;
								region.MaskArea.m_Height = (float)uVar7;
								region.MaskArea.m_Width = (float)uVar6;
								region._20_4_ = (int)((ulong)*(ulong)&pGVar20.Region >> 0x20);
								region.MaskSprite._0_4_ = (int)pSVar3;
								region.MaskSprite._4_4_ = (int)((ulong)pSVar3 >> 0x20);
								region.LabelPoint = pGVar20.LabelPoint;
								pUVar17 = this.CreateLabel(pUVar12, region, (int32_t)uVar22, labelTextColor);
								if (pUVar14 == null) goto label_058d3896;
								if ((pUVar17 != null) &&(pIVar18 = il2cpp_vm_Object_IsInst((object)pUVar17, (((pUVar14.obj).klass)._1).element_class), pIVar18 == null)) {
	label_058d389b: ;
									pIVar18 = new ArrayTypeMismatchException();
									throw pIVar18;
								}
								if ((uint)pUVar14.Length <= uVar22) goto label_058d3891;
								*(Image*)((long)pUVar14.m_Items + lVar21 + -0x20) = pUVar17;
								uVar22 = uVar22 + 1;
								uVar1 = (uint)pGVar2.Length;
								uVar16 = (ulong)uVar1;
								method_01 = (AottgServerRegion[])(long)(int)uVar1;
								pGVar20 = pGVar20 + 1;
								lVar21 = lVar21 + 8;
							} while ((long)uVar22 < (long)method_01);
						}
					}
					pUVar12 = *targetAddress_02;
					if (pUVar12 != null) {
						UVar24 = pUVar12.rect;
						if (*targetAddress != null) {
							fVar23 = UVar24.m_Height / 1080.0;
							value.y = fVar23 * 48.0;
							value.x = fVar23 * 462.0;
							(*targetAddress).offsetMin = value;
							if (*targetAddress != null) {
								value_00.y = fVar23 * -48.0;
								value_00.x = fVar23 * -48.0;
								(*targetAddress).offsetMax = value_00;
								return;
							}
						}
					}
				}
			}
		}
	label_058d3896: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x57D4310", Offset = "0x57D3310", VA = "0x57D4310")]
	public void Focus(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$Focus): clean


		this._focused = index;
		this.AnimateToFocus();
		return;
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x57D44F0", Offset = "0x57D34F0", VA = "0x57D44F0")]
	public void Release(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$Release): clean


		if (this._focused == index) {
			this._focused = -1;
			this.AnimateToFocus();
			return;
		}
		return;
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x57D4510", Offset = "0x57D3510", VA = "0x57D4510")]
	public void Connect(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$Connect): 2 lines keep C-only constructs
		Image[] pUVar1;
		AottgServerRegion[] pGVar2;
		GisketchActionContext context;
		Object __this_00;
		GisketchUIRoot __this_01;
		String actionId;
		String elementId;
		GisketchActionContext local_48;

		GisketchUiSounds.Play(0);
		pUVar1 = this._labels;
		if (pUVar1 != null) {
			if ((uint)pUVar1.Length <= (uint)index) {
	label_058d4662: ;
				throw new IndexOutOfRangeException();
			}
			if (pUVar1[index] != null) {
				__this_00 = (Object)(pUVar1[index]).gameObject;
				__this_01 = AottgGisketchUiHost.Root;
				pGVar2 = AottgServerRegion.All;
				if (pGVar2 != null) {
					if ((uint)pGVar2.Length <= (uint)index) goto label_058d4662;
					actionId = AottgUiActionIds.Multiplayer.Region(pGVar2[index].Id);
					if (__this_00 != null) {
						elementId = __this_00.name;
						local_48.Node = null;
						local_48.InputSource = 0;
						local_48._28_4_ = 0;
						local_48.ElementId = null;
						local_48.GameObject = null;
						local_48 = new GisketchActionContext(elementId, (GameObject)__this_00, null, 1);
						if (__this_01 != null) {
							context.GameObject = local_48.GameObject;
							context.ElementId = local_48.ElementId;
							context.Node = local_48.Node;
							context.InputSource = local_48.InputSource;
							context._28_4_ = local_48._28_4_;
							__this_01.HandleAction(actionId, context);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600116B")]
	[Address(RVA = "0x57D4670", Offset = "0x57D3670", VA = "0x57D4670")]
	private void OnRectTransformDimensionsChange()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$OnRectTransformDimensionsChange): clean
		RectTransform pUVar1;
		bool bVar2;
		Vector2 value;
		Vector2 value_00;
		float fVar3;
		Rect UVar4;

		pUVar1 = this._viewport;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._rect;
			if (pUVar1 != null) {
				UVar4 = pUVar1.rect;
				pUVar1 = this._viewport;
				if (pUVar1 != null) {
					fVar3 = UVar4.m_Height / 1080.0;
					value.x = fVar3 * 462.0;
					value.y = fVar3 * 48.0;
					pUVar1.offsetMin = value;
					pUVar1 = this._viewport;
					if (pUVar1 != null) {
						value_00.x = fVar3 * -48.0;
						value_00.y = value_00.x;
						pUVar1.offsetMax = value_00;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x57D4780", Offset = "0x57D3780", VA = "0x57D4780")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$OnDisable): 3 lines keep C-only constructs
		uint uVar1;
		uint uVar3;
		ulong uVar2;
		uint uVar4;
		Tween t;
		Image pUVar5;
		Image[] pUVar6;
		uint uVar7;
		long lVar8;
		Color UVar9;

		t = this._tween;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		this._focused = -1;
		pUVar6 = this._highlights;
		if (pUVar6 == null) {
			return;
		}
		lVar8 = 0;
		do {
			uVar4 = (uint)pUVar6.Length;
			uVar7 = (uint)lVar8;
			if ((int)uVar4 <= (int)uVar7) {
				return;
			}
			if (uVar4 <= uVar7) {
	label_058d4835: ;
				throw new IndexOutOfRangeException();
			}
			pUVar5 = pUVar6[lVar8];
			if (pUVar5 == null) break;
			uVar1 = this._highlightColor.r;
			uVar3 = this._highlightColor.g;
			UVar9.g = (float)uVar3;
			UVar9.r = (float)uVar1;
			uVar2._0_4_ = this._highlightColor.b;
			uVar2._4_4_ = this._highlightColor.a;
			UVar9._8_8_ = uVar2 & 0xffffffff;
			pUVar5.set_color(UVar9);
			pUVar6 = this._labels;
			if (pUVar6 == null) break;
			if ((uint)pUVar6.Length <= uVar7) goto label_058d4835;
			pUVar5 = pUVar6[lVar8];
			if (pUVar5 == null) break;
			pUVar5.set_color((Color)this._highlightColor);
			pUVar6 = this._highlights;
			lVar8 = lVar8 + 1;
		} while (pUVar6 != null);
		throw new NullReferenceException();
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x57D4850", Offset = "0x57D3850", VA = "0x57D4850")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$OnDestroy): clean
		Tween t;

		t = this._tween;
		if (t == null) {
			return;
		}
		TweenExtensions.Kill(t, false);
		return;
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x57D3BF0", Offset = "0x57D2BF0", VA = "0x57D3BF0")]
	private Image CreateHighlight(RectTransform map, AottgServerRegion region, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$CreateHighlight): 6 lines keep C-only constructs
		uint uVar1;
		uint uVar3;
		ulong uVar2;
		uint uVar4;
		Vector2 value;
		RectTransform __this_00;
		GameObject pUVar5;
		Image __this_01;
		AottgServerSelectRegionTarget pGVar6;
		uint in_register_00000014;
		MethodInfo method_00;
		Color color;
		float local_38;
		float fStack_34;

		method_00 = (MethodInfo)CONCAT44(in_register_00000014, index);
		__this_00 = AottgServerSelectMapRuntime.CreateRect(region.Id, (Transform)map);
		if (__this_00 != null) {
			__this_00.anchorMin = (Vector2)region.MaskArea._0_8_;
			if (Il2CppMethodInitialized_075454e9 == false) {
				Il2CppMethodInitialized_075454e9 = true;
				uVar4 = (typeof(Rect)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar4 = (typeof(Rect)._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
			}
			local_38 = region.MaskArea.m_XMin;
			fStack_34 = region.MaskArea.m_YMin;
			value.y = fStack_34 + region.MaskArea.m_Height;
			value.x = local_38 + region.MaskArea.m_Width;
			__this_00.anchorMax = value;
			pUVar5 = __this_00.gameObject;
			uVar1 = this._highlightColor.r;
			uVar3 = this._highlightColor.g;
			color.g = (float)uVar3;
			color.r = (float)uVar1;
			uVar2._0_4_ = this._highlightColor.b;
			uVar2._4_4_ = this._highlightColor.a;
			color._8_8_ = uVar2 & 0xffffffff;
			__this_01 = AottgServerSelectMapRuntime.AddImage(pUVar5, region.MaskSprite, color);
			if (__this_01 != null) {
				__this_01.set_raycastTarget(true);
				__this_01.alphaHitTestMinimumThreshold = 0.5;
				pUVar5 = __this_00.gameObject;
				if ((pUVar5 != null) &&(pGVar6 = pUVar5.AddComponent<AottgServerSelectRegionTarget>(), pGVar6 != null)) {
					pGVar6._map = this;
					pGVar6._index = index;
					pGVar6._connectOnClick = true;
					return __this_01;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600116F")]
	[Address(RVA = "0x57D3DA0", Offset = "0x57D2DA0", VA = "0x57D3DA0")]
	private Image CreateLabel(RectTransform map, AottgServerRegion region, int index, Color textColor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$CreateLabel): 3 lines keep C-only constructs
		int iVar1;
		UnityEvent __this_00;
		Vector2 value;
		Vector2 UVar2;
		Il2CppType handle;
		AottgServerSelectMapRuntime.c__DisplayClass30_0 __this_01;
		String pSVar3;
		Type[] components;
		Type obj;
		object pIVar4;
		GameObject pUVar5;
		RectTransform __this_02;
		Image pUVar6;
		RectTransform __this_03;
		TextMeshProUGUI __this_04;
		TMP_FontAsset value_00;
		Button __this_05;
		UnityAction __this_06;
		AottgServerSelectRegionTarget pGVar7;

		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgServerSelectMapRuntime.c__DisplayClass30_0));
		__this_01 = new Object();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			__this_01.index = index;
			pSVar3 = String.Concat(region.Id, "-label");
			components = (Type[])new Type[1];
			handle = TypeRef_UnityEngine_RectTransform;
			obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (components != null) {
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
				pUVar5 = new GameObject(pSVar3, components);
				if (pUVar5 != null) {
					__this_02 = pUVar5.GetComponent<RectTransform>();
					if (__this_02 != null) {
						__this_02.SetParent((Transform)map, false);
						__this_02.anchorMin = region.LabelPoint;
						__this_02.anchorMax = region.LabelPoint;
						__this_02.pivot = (Vector2)0x3f0000003f000000;
						pUVar5 = __this_02.gameObject;
						pUVar6 = AottgServerSelectMapRuntime.AddImage(pUVar5, "UI/Sprites/Elements/Brush", (Color)this._highlightColor);
						if (pUVar6 != null) {
							pUVar6.set_raycastTarget(true);
							__this_03 = AottgServerSelectMapRuntime.CreateRect("Text", (Transform)__this_02);
							if (__this_03 != null) {
								pUVar5 = __this_03.gameObject;
								if (pUVar5 != null) {
									__this_04 = pUVar5.AddComponent<TextMeshProUGUI>();
									if (region.Label != null) {
										pSVar3 = region.Label.ToLowerInvariant();
										if (__this_04 != null) {
											__this_04.set_text(pSVar3);
											pSVar3 = GisketchTypography.Key("menuText", 400);
											value_00 = GisketchTypography.Load(pSVar3);
											__this_04.font = value_00;
											__this_04.fontSize = 52.0;
											__this_04.set_color(textColor);
											__this_04.alignment = 0x220;
											__this_04.enableWordWrapping = false;
											__this_04.set_raycastTarget(false);
											UVar2 = __this_04.GetPreferredValues();
											value.y = 76.0;
											value.x = UVar2.x + 72.0;
											__this_02.sizeDelta = value;
											pUVar5 = __this_02.gameObject;
											if (pUVar5 != null) {
												__this_05 = pUVar5.AddComponent<Button>();
												if (__this_05 != null) {
													__this_05.transition = 0;
													__this_00 = (UnityEvent)__this_05.m_OnClick;
													__this_06 = new UnityAction((object)__this_01, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_c__DisplayClass30_0_CreateLabel_b__0);
													if (__this_00 != null) {
														__this_00.AddListener(__this_06);
														pUVar5 = __this_02.gameObject;
														if (pUVar5 != null) {
															pGVar7 = pUVar5.AddComponent<AottgServerSelectRegionTarget>();
															if (pGVar7 != null) {
																iVar1 = __this_01.index;
																pGVar7._map = this;
																pGVar7._index = iVar1;
																pGVar7._connectOnClick = false;
																return pUVar6;
															}
														}
													}
												}
											}
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

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x57D4260", Offset = "0x57D3260", VA = "0x57D4260")]
	private void UpdateViewport()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$UpdateViewport): clean
		RectTransform pUVar1;
		Vector2 value;
		Vector2 value_00;
		float fVar2;
		Rect UVar3;

		pUVar1 = this._rect;
		if (pUVar1 != null) {
			UVar3 = pUVar1.rect;
			pUVar1 = this._viewport;
			if (pUVar1 != null) {
				fVar2 = UVar3.m_Height / 1080.0;
				value.x = fVar2 * 462.0;
				value.y = fVar2 * 48.0;
				pUVar1.offsetMin = value;
				pUVar1 = this._viewport;
				if (pUVar1 != null) {
					value_00.x = fVar2 * -48.0;
					value_00.y = value_00.x;
					pUVar1.offsetMax = value_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001171")]
	[Address(RVA = "0x57D4320", Offset = "0x57D3320", VA = "0x57D4320")]
	private void AnimateToFocus()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$AnimateToFocus): 3 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		Tween t;
		Image pUVar6;
		Single[] pSVar7;
		Color pUVar8;
		Image[] pUVar9;
		TweenCallback<float> __this_00;
		Tweener pDVar10;
		uint uVar11;
		long lVar12;
		bool bVar13;
		Color UVar14;

		t = this._tween;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		pUVar9 = this._highlights;
		if (pUVar9 != null) {
			lVar12 = 0;
			do {
				uVar5 = (uint)pUVar9.Length;
				uVar11 = (uint)lVar12;
				if ((int)uVar5 <= (int)uVar11) {
					__this_00 = new TweenCallback<float>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_ApplyTransition);
					pDVar10 = DOVirtual.Float(0.0, 1.0, 0.2, __this_00);
					pDVar10 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar10, 9);
					pDVar10 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar10, true);
					this._tween = (Tween)pDVar10;
					return;
				}
				if (uVar5 <= uVar11) {
	label_058d44e1: ;
					throw new IndexOutOfRangeException();
				}
				pUVar6 = pUVar9[lVar12];
				if (pUVar6 == null) break;
				pSVar7 = this._fromAlpha;
				UVar14 = pUVar6.get_color();
				if (pSVar7 == null) break;
				if ((uint)pSVar7.Length <= uVar11) goto label_058d44e1;
				pSVar7[lVar12] = UVar14.a;
				pUVar9 = this._labels;
				if (pUVar9 == null) break;
				if ((uint)pUVar9.Length <= uVar11) goto label_058d44e1;
				pUVar6 = pUVar9[lVar12];
				if (pUVar6 == null) break;
				bVar13 = uVar11 == this._focused;
				pUVar8 = &this._highlightColor + bVar13;
				uVar1 = pUVar8.r;
				uVar3 = pUVar8.g;
				UVar14.g = (float)uVar3;
				UVar14.r = (float)uVar1;
				pUVar8 = &this._highlightColor + bVar13;
				uVar2 = pUVar8.b;
				uVar4 = pUVar8.a;
				UVar14.a = (float)uVar4;
				UVar14.b = (float)uVar2;
				pUVar6.set_color(UVar14);
				pUVar9 = this._highlights;
				lVar12 = lVar12 + 1;
			} while (pUVar9 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001172")]
	[Address(RVA = "0x57D48B0", Offset = "0x57D38B0", VA = "0x57D48B0")]
	private void ApplyTransition(float t)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$ApplyTransition): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		Single[] pSVar5;
		Image pUVar6;
		Image[] pUVar7;
		uint uVar8;
		long lVar9;
		float fVar10;
		float fVar11;
		Color UVar12;

		pUVar7 = this._highlights;
		if (pUVar7 != null) {
			fVar11 = 1.0;
			if (t <= 1.0) {
				fVar11 = t;
			}
			lVar9 = 0;
			do {
				uVar4 = (uint)pUVar7.Length;
				uVar8 = (uint)lVar9;
				if ((int)uVar4 <= (int)uVar8) {
					return;
				}
				if (uVar4 <= uVar8) {
	label_058d4975: ;
					throw new IndexOutOfRangeException();
				}
				pSVar5 = this._fromAlpha;
				if (pSVar5 == null) break;
				if ((uint)pSVar5.Length <= uVar8) goto label_058d4975;
				pUVar6 = pUVar7[lVar9];
				if (pUVar6 == null) break;
				fVar10 = 0.85;
				if (uVar8 != this._focused) {
					fVar10 = 0.0;
				}
				uVar1 = this._highlightColor.r;
				uVar3 = this._highlightColor.g;
				UVar12.g = (float)uVar3;
				UVar12.r = (float)uVar1;
				uVar2 = this._highlightColor.b;
				UVar12.a =(fVar10 - pSVar5[lVar9]) * (float)(-(uint)(0.0 <= t) & (uint)fVar11) + pSVar5[lVar9];
				UVar12.b = (float)uVar2;
				pUVar6.set_color(UVar12);
				pUVar7 = this._highlights;
				lVar9 = lVar9 + 1;
			} while (pUVar7 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001173")]
	[Address(RVA = "0x57D38D0", Offset = "0x57D28D0", VA = "0x57D38D0")]
	private static RectTransform CreateRect(string name, Transform parent)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$CreateRect): 1 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this;
		RectTransform __this_00;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this = new GameObject(name, components);
			if (__this != null) {
				__this_00 = __this.GetComponent<RectTransform>();
				if (__this_00 != null) {
					__this_00.SetParent(parent, false);
					__this_00.anchorMin = (Vector2)(Vector2.zeroVector);
					__this_00.anchorMax = (Vector2)(Vector2.oneVector);
					__this_00.offsetMin = (Vector2)(Vector2.zeroVector);
					__this_00.offsetMax = (Vector2)(Vector2.zeroVector);
					return __this_00;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001174")]
	[Address(RVA = "0x57D3B10", Offset = "0x57D2B10", VA = "0x57D3B10")]
	private static Image AddImage(GameObject go, string sprite, Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$AddImage): clean
		Image __this;
		Sprite value;

		if (go != null) {
			__this = go.AddComponent<Image>();
			value = GisketchSpriteLoader.Load(sprite);
			if (__this != null) {
				__this.sprite = value;
				__this.set_color(color);
				__this.set_raycastTarget(false);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001175")]
	[Address(RVA = "0x57D4840", Offset = "0x57D3840", VA = "0x57D4840")]
	private static Color WithAlpha(Color color, float alpha)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$WithAlpha): 1 lines keep C-only constructs
		Color UVar1;

		UVar1._0_8_ = color._0_8_;
		UVar1.a = alpha;
		UVar1.b = color.b;
		return (Color)UVar1;
	}

	[Token(Token = "0x6001176")]
	[Address(RVA = "0x57D4980", Offset = "0x57D3980", VA = "0x57D4980")]
	public AottgServerSelectMapRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c (Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime$$.ctor): clean
		this._focused = -1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c.

	// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime.<>c__DisplayClass30_0$$.ctor: clean
	private void c__DisplayClass30_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime.<>c__DisplayClass30_0$$<CreateLabel>b__0: clean
	private void c__DisplayClass30_0__CreateLabel_b__0()
	{
		AottgServerSelectMapRuntime __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Connect(this.index);
		return;
	}
}
