// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x20000A2")]
internal sealed class GisketchUIColorPickerVisual : MonoBehaviour
{
	[Token(Token = "0x20000A3")]
	private sealed class DragTarget : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
	{
		[Token(Token = "0x4000388")]
		[FieldOffset(Offset = "0x20")]
		private Action<PointerEventData> _drag;

		[Token(Token = "0x600051E")]
		[Address(RVA = "0x527AFD0", Offset = "0x5279FD0", VA = "0x527AFD0")]
		public void Setup(Action<PointerEventData> drag)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$Setup): clean
			this._drag = drag;
			return;
		}

		[Token(Token = "0x600051F")]
		[Address(RVA = "0x527AFE0", Offset = "0x5279FE0", VA = "0x527AFE0", Slot = "4")]
		public void OnPointerDown(PointerEventData eventData)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$OnPointerDown): 1 lines keep C-only constructs
			Action<PointerEventData> pSVar1;
			code *vtableDispatch;

			pSVar1 = this._drag;
			if (pSVar1 == null) {
				return;
			}
			vtableDispatch = (code)pSVar1.invoke_impl;
			(*vtableDispatch)(pSVar1.method_code,eventData,pSVar1.method,vtableDispatch);
			return;
		}

		[Token(Token = "0x6000520")]
		[Address(RVA = "0x527B000", Offset = "0x527A000", VA = "0x527B000", Slot = "5")]
		public void OnDrag(PointerEventData eventData)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$OnDrag): 1 lines keep C-only constructs
			Action<PointerEventData> pSVar1;
			code *vtableDispatch;

			pSVar1 = this._drag;
			if (pSVar1 == null) {
				return;
			}
			vtableDispatch = (code)pSVar1.invoke_impl;
			(*vtableDispatch)(pSVar1.method_code,eventData,pSVar1.method,vtableDispatch);
			return;
		}

		[Token(Token = "0x6000521")]
		[Address(RVA = "0x527B020", Offset = "0x527A020", VA = "0x527B020")]
		public DragTarget()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x4000376")]
	private const float BarHeight = 22f;

	[Token(Token = "0x4000377")]
	private const int AlphaTextureWidth = 384;

	[Token(Token = "0x4000378")]
	private const int AlphaTextureHeight = 22;

	[Token(Token = "0x4000379")]
	private const int CheckerSize = 6;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x20")]
	private RawImage _square;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x28")]
	private RawImage _hue;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x30")]
	private RawImage _alpha;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _squareMarker;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform _hueMarker;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x48")]
	private RectTransform _alphaMarker;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x50")]
	private Texture2D _squareTexture;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x58")]
	private Texture2D _hueTexture;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x60")]
	private Texture2D _alphaTexture;

	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x68")]
	private Texture2D _circleTexture;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x70")]
	private Sprite _circleSprite;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x78")]
	private GisketchUIColorPickerValue _value;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x88")]
	[CompilerGenerated]
	private Action<GisketchUIColorPickerValue> m_Changed;

	[Token(Token = "0x17000094")]
	public bool EnableAlpha
	{
		[Token(Token = "0x6000506")]
		[Address(RVA = "0x5278C10", Offset = "0x5277C10", VA = "0x5278C10")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$get_EnableAlpha): clean
			return this._EnableAlpha_k__BackingField;
		}
		[Token(Token = "0x6000507")]
		[Address(RVA = "0x5278C20", Offset = "0x5277C20", VA = "0x5278C20")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$set_EnableAlpha): clean
			this._EnableAlpha_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<GisketchUIColorPickerValue> Changed
	{
		[Token(Token = "0x6000504")]
		[Address(RVA = "0x5277440", Offset = "0x5276440", VA = "0x5277440")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$add_Changed): 1 lines keep C-only constructs
			Action<GisketchUIColorPickerValue> pSVar2;
			Delegate obj;
			object value_00;
			Action<GisketchUIColorPickerValue> a;
			bool bVar3;

			a = this.Changed;
			do {
				obj = Delegate.Combine((Delegate)a, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<GisketchUIColorPickerValue>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.Changed, value_00, a);
				bVar3 = pSVar2 != a;
				a = pSVar2;
			} while (bVar3);
			return;
		}
		[Token(Token = "0x6000505")]
		[Address(RVA = "0x5277900", Offset = "0x5276900", VA = "0x5277900")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$remove_Changed): 1 lines keep C-only constructs
			Action<GisketchUIColorPickerValue> pSVar2;
			Delegate obj;
			object value_00;
			Action<GisketchUIColorPickerValue> source;
			bool bVar3;

			source = this.Changed;
			do {
				obj = Delegate.Remove((Delegate)source, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<GisketchUIColorPickerValue>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.Changed, value_00, source);
				bVar3 = pSVar2 != source;
				source = pSVar2;
			} while (bVar3);
			return;
		}
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x5275EB0", Offset = "0x5274EB0", VA = "0x5275EB0")]
	public void Setup(string id, bool enableAlpha, GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Setup): 2 lines keep C-only constructs
		String pSVar1;
		bool bVar2;
		String pSVar3;
		GameObject __this_00;
		LayoutElement pUVar4;
		MethodInfo method_01;
		float fVar5;
		Color rgbColor;
		GisketchUIColorPickerValue local_70;
		MethodInfo local_60;
		GisketchUIColorPickerValue local_58;
		GisketchUIColorPickerValue local_48;

		local_60 = (MethodInfo)theme;
		local_48.R = 0;
		local_48.G = 0;
		local_48.B = 0;
		local_48.A = 0;
		local_48.H = 0.0;
		local_48.S = 0.0;
		local_48.V = 0.0;
		this._EnableAlpha_k__BackingField = enableAlpha;
		pSVar1 = "#FFFFFFFF";
		pSVar3 = "#FFFFFF";
		if (enableAlpha) {
			pSVar3 = pSVar1;
		}
		pSVar3 = GisketchUIColorPicker.Value(id, pSVar3, enableAlpha);
		bVar2 = GisketchUIColorPickerValue.TryParse(pSVar3, enableAlpha, ref local_48);
		if (bVar2) {
			local_58._0_4_ = local_48._0_4_;
			local_58.H = local_48.H;
			local_58.S = local_48.S;
			local_58.V = local_48.V;
		}
		else {
			local_70.V = 0.0;
			local_70.H = 0.0;
			local_70.S = 0.0;
			local_70.R = 0xff;
			local_70.G = 0xff;
			local_70.B = 0xff;
			local_70.A = 0xff;
			rgbColor.b = 1.0;
			rgbColor.a = 1.0;
			rgbColor.r = 1.0;
			rgbColor.g = 1.0;
			Color.RGBToHSV(rgbColor, ref local_70.H, ref local_70.S, ref local_70.V);
			local_58._0_4_ = local_70._0_4_;
			local_58.H = local_70.H;
			local_58.S = local_70.S;
			local_58.V = local_70.V;
		}
		this._value.R = local_58.R;
		this._value.G = local_58.G;
		this._value.B = local_58.B;
		this._value.A = local_58.A;
		this._value.H = local_58.H;
		this._value.S = local_58.S;
		this._value.V = local_58.V;
		__this_00 = this.gameObject;
		if ((__this_00 == null) ||(pUVar4 = __this_00.AddComponent<LayoutElement>(), method_01 = local_60, pUVar4 == null)) {
			throw new NullReferenceException();
		}
		if (enableAlpha) {
			fVar5 = 260.0;
		}
		else {
			fVar5 = 220.0;
		}
		pUVar4.set_preferredHeight(fVar5);
		if (method_01 == null) {
			if ((typeof(GisketchTheme)._2).cctor_finished_or_no_cctor == 0) {
			}
			method_01 = (MethodInfo)GisketchTheme.Default;
		}
		this.Build((GisketchTheme)method_01);
		this.RefreshTextures();
		this.RefreshMarkers();
		return;
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x52774F0", Offset = "0x52764F0", VA = "0x52774F0")]
	public void SetValue(GisketchUIColorPickerValue value, bool notify)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$SetValue): 12 lines keep C-only constructs
		ulong uVar1;
		Action<GisketchUIColorPickerValue> pSVar2;
		ulong uVar3;
		code *vtableDispatch;
		undefined7 in_register_00000011;
		MethodInfo method_00;

		method_00 = value._0_8_;
		*(MethodInfo*)&this._value = method_00;
		this._value.S = value.S;
		this._value.V = value.V;
		this.RefreshTextures();
		this.RefreshMarkers();
		if (((int)CONCAT71(in_register_00000011, notify) == 0) ||(pSVar2 = this.Changed, pSVar2 == null)) {
			return;
		}
		uVar1._0_4_ = this._value.S;
		uVar1._4_4_ = this._value.V;
		uVar3._0_1_ = this._value.R;
		uVar3._1_1_ = this._value.G;
		uVar3._2_1_ = this._value.B;
		uVar3._3_1_ = this._value.A;
		uVar3._4_4_ = this._value.H;
		vtableDispatch = (code)pSVar2.invoke_impl;
		(*vtableDispatch)(uVar1,pSVar2.method_code,uVar3,pSVar2.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x5278C30", Offset = "0x5277C30", VA = "0x5278C30")]
	private void Build(GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Build): 21 lines keep C-only constructs
		RawImage* targetAddress;
		RawImage* targetAddress_00;
		bool bVar1;
		RectTransform pUVar2;
		RawImage pUVar3;
		RectTransform pUVar4;
		GameObject pUVar5;
		object pIVar6;
		Il2CppClass pIVar7;
		MethodInfo method_00;
		RectTransform extraout_RDX;
		RectTransform method_01;
		Color fallback;
		Color fallback_00;
		Color fallback_01;

		pUVar2 = (RectTransform)this.transform;
		method_01 = extraout_RDX;
		pUVar4 = null;
		if (pUVar2 != null) {
			method_01 = pUVar2.klass;
			pUVar4 = null;
			if (method_01 == typeof(RectTransform)) {
				pUVar4 = pUVar2;
			}
		}
		fallback.b = 1.0;
		fallback.a = 1.0;
		fallback.r = 1.0;
		fallback.g = 1.0;
		pUVar3 = GisketchUIColorPickerVisual.RawImage("AoTTG Color Gradient", pUVar4, *(float)(&g_data_0100b020 +(ulong)(this._EnableAlpha_k__BackingField == false) * 4), 100.0, fallback);
		targetAddress = &this._square;
		this._square = pUVar3;
		method_00 = (MethodInfo)&g_data_0100aa68;
		fallback_00.b = 1.0;
		fallback_00.a = 1.0;
		fallback_00.r = 1.0;
		fallback_00.g = 1.0;
		pUVar3 = GisketchUIColorPickerVisual.RawImage("AoTTG Hue Slider", pUVar4, *(float)(&g_data_0100aa68 +(ulong)(this._EnableAlpha_k__BackingField == false) * 4), 22.0, fallback_00);
		targetAddress_00 = &this._hue;
		this._hue = pUVar3;
		if (this._EnableAlpha_k__BackingField != false) {
			fallback_01.b = 1.0;
			fallback_01.a = 1.0;
			fallback_01.r = 1.0;
			fallback_01.g = 1.0;
			pUVar3 = GisketchUIColorPickerVisual.RawImage("AoTTG Alpha Slider", pUVar4, 10.0, 22.0, fallback_01);
			this._alpha = pUVar3;
		}
		if (*targetAddress != null) {
			pUVar4 = (*targetAddress).rectTransform;
			pUVar4 = this.CircleMarker(pUVar4, theme);
			this._squareMarker = pUVar4;
			pUVar3 = this._hue;
			if (pUVar3 != null) {
				pUVar4 = pUVar3.rectTransform ;
				pUVar4 = GisketchUIColorPickerVisual.LineMarker(pUVar4, theme);
				this._hueMarker = pUVar4;
				pUVar3 = this._alpha;
				bVar1 = ((Object)pUVar3 != null);
				if (bVar1) {
					pUVar3 = this._alpha;
					if (pUVar3 == null) goto label_0537901a;
					pUVar4 = pUVar3.rectTransform;
					pUVar4 = GisketchUIColorPickerVisual.LineMarker(pUVar4, theme);
					this._alphaMarker = pUVar4;
				}
				if (*targetAddress != null) {
					pUVar5 = (*targetAddress).gameObject;
					if (pUVar5 != null) {
						pIVar6 = pUVar5.AddComponent<GisketchUIColorPickerVisual.DragTarget>();
						pIVar7 = new Action<PointerEventData>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_OnSquareDrag);
						if (pIVar6 != null) {
							pIVar6[2].klass = pIVar7;
							pUVar3 = *targetAddress_00;
							if (pUVar3 != null) {
								pUVar5 = pUVar3.gameObject;
								if (pUVar5 != null) {
									pIVar6 = pUVar5.AddComponent<GisketchUIColorPickerVisual.DragTarget>();
									pIVar7 = new Action<PointerEventData>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_OnHueDrag);
									if (pIVar6 != null) {
										pIVar6[2].klass = pIVar7;
										pUVar3 = this._alpha;
										bVar1 = ((Object)pUVar3 != null);
										if (!bVar1) {
											return;
										}
										pUVar3 = this._alpha;
										if (pUVar3 != null) {
											pUVar5 = pUVar3.gameObject;
											if (pUVar5 != null) {
												pIVar6 = pUVar5.AddComponent<GisketchUIColorPickerVisual.DragTarget>();
												pIVar7 = new Action<PointerEventData>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_OnAlphaDrag);
												if (pIVar6 != null) {
													pIVar6[2].klass = pIVar7;
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
			}
		}
	label_0537901a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x5279D50", Offset = "0x5278D50", VA = "0x5279D50")]
	private void OnSquareDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnSquareDrag): 25 lines keep C-only constructs
		ulong uVar1;
		byte bVar2;
		RawImage __this_00;
		Action<GisketchUIColorPickerValue> pSVar3;
		ulong uVar4;
		code *vtableDispatch;
		byte uVar5;
		byte uVar6;
		byte uVar7;
		RectTransform rect;
		ulong uVar8;
		float fVar9;
		Vector2 UVar10;
		byte[] auVar11 = new byte[12];
		ulong extraout_XMM0_Qb;
		float fVar12;
		float H;
		byte[] auVar13 = new byte[16];
		Color UVar14;
		uint uStack_50;
		uint uStack_4c;
		float fStack_44;
		float fStack_38;

		__this_00 = this._square;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		rect = __this_00.rectTransform;
		UVar10 = GisketchUIColorPickerVisual.Normalized(rect, eventData);
		uStack_50 = (undefined4)extraout_XMM0_Qb;
		uStack_4c = (undefined4)((ulong)extraout_XMM0_Qb >> 0x20);
		fVar12 = this._value.H;
		bVar2 = this._value.A;
		fVar9 = floorf(fVar12);
		fVar12 = fVar12 - fVar9;
		auVar11 = ZEXT812(0x3f800000);
		if (fVar12 <= auVar11._0_4_) {
			auVar11._4_8_ = auVar11._4_8_;
			auVar11._0_4_ = fVar12;
		}
		H = (float)(-(uint)(0.0 <= fVar12) & auVar11._0_4_);
		auVar13._8_4_ = uStack_50;
		auVar13._0_4_ = UVar10.x;
		auVar13._4_4_ = UVar10.y;
		auVar13._12_4_ = uStack_4c;
		auVar13 = minps(_DAT_01005870, auVar13);
		fVar12 = (float)(-(uint)(0.0 <= UVar10.x) & auVar13._0_4_);
		fVar9 = (float)(-(uint)(0.0 <= UVar10.y) & auVar13._4_4_);
		UVar14 = Color.HSVToRGB(H, fVar12, fVar9, true);
		uVar5 = GisketchUIColorPickerValue.ToByte(UVar14.r);
		fStack_44 = UVar14.g;
		uVar6 = GisketchUIColorPickerValue.ToByte(fStack_44);
		fStack_38 = UVar14.b;
		uVar7 = GisketchUIColorPickerValue.ToByte(fStack_38);
		uVar8 = (ulong)uVar5 |(ulong)uVar6 << 8 | (ulong)uVar7 << 0x10 | (ulong)bVar2 << 0x18 | (ulong)(uint)H << 0x20;
		this._value.R = (char)uVar8;
		this._value.G = (char)(uVar8 >> 8);
		this._value.B = (char)(uVar8 >> 0x10);
		this._value.A = (char)(uVar8 >> 0x18);
		this._value.H = (float)(int)(uVar8 >> 0x20);
		this._value.S = fVar12;
		this._value.V = fVar9;
		this.RefreshTextures();
		this.RefreshMarkers();
		pSVar3 = this.Changed;
		if (pSVar3 == null) {
			return;
		}
		uVar1._0_4_ = this._value.S;
		uVar1._4_4_ = this._value.V;
		uVar4._0_1_ = this._value.R;
		uVar4._1_1_ = this._value.G;
		uVar4._2_1_ = this._value.B;
		uVar4._3_1_ = this._value.A;
		uVar4._4_4_ = this._value.H;
		vtableDispatch = (code)pSVar3.invoke_impl;
		(*vtableDispatch)(uVar1,pSVar3.method_code,uVar4,pSVar3.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x527A010", Offset = "0x5279010", VA = "0x527A010")]
	private void OnHueDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnHueDrag): 21 lines keep C-only constructs
		uint uVar1;
		uint uVar3;
		ulong uVar2;
		byte bVar4;
		RawImage __this_00;
		Action<GisketchUIColorPickerValue> pSVar5;
		ulong uVar6;
		code *vtableDispatch;
		byte uVar7;
		byte uVar8;
		byte uVar9;
		RectTransform rect;
		ulong uVar10;
		float fVar11;
		Vector2 UVar12;
		byte[] auVar13 = new byte[12];
		float V;
		float H;
		byte[] auVar14 = new byte[16];
		Color UVar15;
		float fStack_54;
		float fStack_48;

		__this_00 = this._hue;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		rect = __this_00.rectTransform;
		UVar12 = GisketchUIColorPickerVisual.Normalized(rect, eventData);
		bVar4 = this._value.A;
		fVar11 = floorf(UVar12.x);
		fVar11 = UVar12.x - fVar11;
		auVar13 = ZEXT812(0x3f800000);
		if (fVar11 <= auVar13._0_4_) {
			auVar13._4_8_ = auVar13._4_8_;
			auVar13._0_4_ = fVar11;
		}
		H = (float)(-(uint)(0.0 <= fVar11) & auVar13._0_4_);
		uVar1 = this._value.S;
		uVar3 = this._value.V;
		auVar14._4_4_ = uVar3;
		auVar14._0_4_ = uVar1;
		auVar14._8_8_ = 0;
		auVar14 = minps(_DAT_01005870, auVar14);
		fVar11 = (float)(-(uint)(0.0 <= (float)uVar1) & auVar14._0_4_);
		V = (float)(-(uint)(0.0 <= (float)uVar3) & auVar14._4_4_);
		UVar15 = Color.HSVToRGB(H, fVar11, V, true);
		uVar7 = GisketchUIColorPickerValue.ToByte(UVar15.r);
		fStack_54 = UVar15.g;
		uVar8 = GisketchUIColorPickerValue.ToByte(fStack_54);
		fStack_48 = UVar15.b;
		uVar9 = GisketchUIColorPickerValue.ToByte(fStack_48);
		uVar10 = (ulong)uVar7 |(ulong)uVar8 << 8 | (ulong)uVar9 << 0x10 | (ulong)bVar4 << 0x18 | (ulong)(uint)H << 0x20;
		this._value.R = (char)uVar10;
		this._value.G = (char)(uVar10 >> 8);
		this._value.B = (char)(uVar10 >> 0x10);
		this._value.A = (char)(uVar10 >> 0x18);
		this._value.H = (float)(int)(uVar10 >> 0x20);
		this._value.S = fVar11;
		this._value.V = V;
		this.RefreshTextures();
		this.RefreshMarkers();
		pSVar5 = this.Changed;
		if (pSVar5 == null) {
			return;
		}
		uVar2._0_4_ = this._value.S;
		uVar2._4_4_ = this._value.V;
		uVar6._0_1_ = this._value.R;
		uVar6._1_1_ = this._value.G;
		uVar6._2_1_ = this._value.B;
		uVar6._3_1_ = this._value.A;
		uVar6._4_4_ = this._value.H;
		vtableDispatch = (code)pSVar5.invoke_impl;
		(*vtableDispatch)(uVar2,pSVar5.method_code,uVar6,pSVar5.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x527A170", Offset = "0x5279170", VA = "0x527A170")]
	private void OnAlphaDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnAlphaDrag): 15 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		byte bVar4;
		byte bVar5;
		byte bVar6;
		RawImage __this_00;
		Action<GisketchUIColorPickerValue> pSVar7;
		ulong uVar8;
		code *vtableDispatch;
		Vector2 UVar9;
		double dVar10;
		RectTransform rect;
		ulong uVar11;
		MethodInfo method_01;
		float fVar12;
		float fVar13;
		double x;
		byte[] auVar14 = new byte[16];
		Il2CppMethodPointer local_30;

		__this_00 = this._alpha;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		rect = __this_00.rectTransform;
		UVar9 = GisketchUIColorPickerVisual.Normalized(rect, eventData);
		fVar12 = UVar9.x * 255.0;
		x = (double)fVar12;
		method_01 = (MethodInfo)&local_30;
		dVar10 = modf(x, (double)method_01, (MethodInfo)eventData);
		if (0.0 <= fVar12) {
			if ((dVar10 != 0.5) || (NAN(dVar10))) {
				local_30 = (Il2CppMethodPointer)floor(x + 0.5, method_01);
			}
			else if (((long)(double)local_30 & 1U) != 0) {
				local_30 = (Il2CppMethodPointer)((double)local_30 + 1.0);
			}
		}
		else if ((dVar10 != -0.5) || (NAN(dVar10))) {
			local_30 = (Il2CppMethodPointer)ceil(x + -0.5, method_01);
		}
		else if (((long)(double)local_30 & 1U) != 0) {
			local_30 = (Il2CppMethodPointer)((double)local_30 + -1.0);
		}
		bVar4 = this._value.R;
		bVar5 = this._value.G;
		bVar6 = this._value.B;
		fVar12 = this._value.H;
		fVar13 = floorf(fVar12);
		fVar12 = fVar12 - fVar13;
		fVar13 = 1.0;
		if (fVar12 <= 1.0) {
			fVar13 = fVar12;
		}
		uVar1 = this._value.S;
		uVar3 = this._value.V;
		auVar14._4_4_ = uVar3;
		auVar14._0_4_ = uVar1;
		auVar14._8_8_ = 0;
		auVar14 = minps(_DAT_01005870, auVar14);
		uVar11 = (ulong)bVar5 << 8 |(ulong)bVar6 << 0x10 | CONCAT44(-(uint)(0.0 <= fVar12) & (uint)fVar13, (int)(double)local_30 << 0x18) | (ulong)bVar4;
		this._value.R = (char)uVar11;
		this._value.G = (char)(uVar11 >> 8);
		this._value.B = (char)(uVar11 >> 0x10);
		this._value.A = (char)(uVar11 >> 0x18);
		this._value.H = (float)(int)(uVar11 >> 0x20);
		this._value.S = (float)(-(uint)(0.0 <= (float)uVar1) & auVar14._0_4_);
		this._value.V = (float)(-(uint)(0.0 <= (float)uVar3) & auVar14._4_4_);
		this.RefreshTextures();
		this.RefreshMarkers();
		pSVar7 = this.Changed;
		if (pSVar7 == null) {
			return;
		}
		uVar2 = this._value.S;
		uVar8._0_1_ = this._value.R;
		uVar8._1_1_ = this._value.G;
		uVar8._2_1_ = this._value.B;
		uVar8._3_1_ = this._value.A;
		uVar8._4_4_ = this._value.H;
		vtableDispatch = (code)pSVar7.invoke_impl;
		(*vtableDispatch)(uVar2,pSVar7.method_code,uVar8,pSVar7.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x527A370", Offset = "0x5279370", VA = "0x527A370")]
	private void OnRectTransformDimensionsChange()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnRectTransformDimensionsChange): clean
		RectTransform x;
		bool bVar1;

		x = this._squareMarker;
		bVar1 = ((Object)x != null);
		if (bVar1) {
			this.RefreshMarkers();
			return;
		}
		return;
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x5279020", Offset = "0x5278020", VA = "0x5279020")]
	private void RefreshTextures()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RefreshTextures): 6 lines keep C-only constructs
		RawImage pUVar1;
		object @object;
		bool bVar2;
		Func<int, int, Color32> pSVar3;
		Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_StaticFields pGVar4;
		GisketchUIColorPickerVisual.c__DisplayClass30_0 __this_00;

		if (Il2CppMethodInitialized_07542a9a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchUIColorPickerVisual.c)) ;
			Il2CppMethodInitialized_07542a9a = true;
		}
		pUVar1 = this._square;
		pSVar3 = new Func<int, int, Color32>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_RefreshTextures_b__30_0);
		GisketchUIColorPickerVisual.SetTexture(ref this._squareTexture, pUVar1, 0x40, 0x40, pSVar3);
		pUVar1 = this._hue;
		pGVar4 = typeof(GisketchUIColorPickerVisual.c).static_fields;
		pSVar3 = pGVar4.__9__30_1;
		if (pSVar3 == null) {
			if ((typeof(GisketchUIColorPickerVisual.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(GisketchUIColorPickerVisual.c).static_fields;
			}
			@object = (object)pGVar4.__9;
			pSVar3 = new Func<int, int, Color32>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c_RefreshTextures_b__30_1);
			pGVar4 = typeof(GisketchUIColorPickerVisual.c).static_fields;
			pGVar4.__9__30_1 = pSVar3;
		}
		GisketchUIColorPickerVisual.SetTexture(ref this._hueTexture, pUVar1, 0x80, 1, pSVar3);
		pUVar1 = this._alpha;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchUIColorPickerVisual.c__DisplayClass30_0));
			__this_00 = new Object();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.color._overlap_0._at_rgba.rgba = *(int)&this._value;
			pUVar1 = this._alpha;
			pSVar3 = new Func<int, int, Color32>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c__DisplayClass30_0_RefreshTextures_b__2);
			GisketchUIColorPickerVisual.SetTexture(ref this._alphaTexture, pUVar1, 0x180, 0x16, pSVar3);
			return;
		}
		return;
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x5279250", Offset = "0x5278250", VA = "0x5279250")]
	private void RefreshMarkers()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RefreshMarkers): 10 lines keep C-only constructs
		byte bVar1;
		RectTransform pUVar2;
		Vector2 value;
		Vector2 value_00;
		Vector2 value_01;
		bool bVar3;
		RectTransform __this_00;
		float fVar4;
		float fVar5;
		byte[] auVar6 = new byte[16];
		Rect UVar7;
		byte[] local_38 = new byte[16];

		pUVar2 = this._squareMarker;
		local_38._0_4_ = this._value.S;
		local_38._4_4_ = this._value.V;
		local_38._8_8_ = 0;
		if (pUVar2 != null) {
			__this_00 = (RectTransform)pUVar2.parent;
			if (__this_00 != null) {
				if (__this_00.klass != typeof(RectTransform)) goto label_053794ee;
				UVar7 = __this_00.rect;
				auVar6 = minps(_DAT_01005870, local_38);
				value.y = (float)(-(uint)(0.0 <= (float)local_38._4_4_) & auVar6._4_4_) * UVar7.m_Height;
				value.x = (float)(-(uint)(0.0 <= (float)local_38._0_4_) & auVar6._0_4_) * UVar7.m_Width;
				pUVar2.anchoredPosition = value;
				pUVar2 = this._hueMarker;
				fVar5 = this._value.H;
				if (pUVar2 != null) {
					__this_00 = (RectTransform)pUVar2.parent;
					if (__this_00 != null) {
						if (__this_00.klass != typeof(RectTransform)) {
	label_053794ee: ;
							throw new InvalidCastException();
						}
						UVar7 = __this_00.rect;
						fVar4 = 1.0;
						if (fVar5 <= 1.0) {
							fVar4 = fVar5;
						}
						value_00.y = UVar7.m_Height * 0.5;
						value_00.x = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4) * UVar7.m_Width;
						pUVar2.anchoredPosition = value_00;
						pUVar2 = this._alphaMarker;
						bVar3 = ((Object)pUVar2 != null);
						if (!bVar3) {
							return;
						}
						pUVar2 = this._alphaMarker;
						bVar1 = this._value.A;
						if (pUVar2 != null) {
							__this_00 = (RectTransform)pUVar2.parent ;
							if (__this_00 != null) {
								if (__this_00.klass == typeof(RectTransform)) {
									fVar5 = (float)bVar1 / 255.0;
									UVar7 = __this_00.rect;
									fVar4 = 1.0;
									if (fVar5 <= 1.0) {
										fVar4 = fVar5;
									}
									value_01.y = UVar7.m_Height * 0.5;
									value_01.x = fVar4 * UVar7.m_Width;
									pUVar2.anchoredPosition = value_01;
									return;
								}
								goto label_053794ee;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x5279500", Offset = "0x5278500", VA = "0x5279500")]
	private static RawImage RawImage(string name, RectTransform parent, float bottom, float height, Color fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RawImage): 15 lines keep C-only constructs
		byte[] auVar1 = new byte[16];
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar2;
		GameObject __this;
		Transform __this_00;
		RectTransform __this_01;
		RawImage pUVar3;
		uint in_XMM0_Db;
		long lVar4;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		byte[] auVar5 = new byte[16];

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) {
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this = new GameObject(name, components);
			if (__this != null) {
				__this_00 = __this.transform;
				if (__this_00 != null) {
					__this_00.SetParent((Transform)parent, false);
					__this_01 = __this.GetComponent<RectTransform>();
					if (__this_01 != null) {
						__this_01.anchorMin = (Vector2)0x0;
						__this_01.anchorMax = (Vector2)(CONCAT44(-(uint)(22.0 < height), 0x3f800000) & 0x3f800000ffffffff);
						__this_01.offsetMin = (Vector2)(CONCAT44(in_XMM0_Db, bottom) << 0x20) ;
						lVar4 = 0;
						if (height <= 22.0) {
							auVar1._4_4_ = in_XMM0_Db;
							auVar1._0_4_ = bottom;
							auVar1._8_4_ = in_XMM0_Dc;
							auVar1._12_4_ = in_XMM0_Dd;
							auVar5._4_12_ = auVar1._4_12_;
							auVar5._0_4_ = bottom + height;
							lVar4 = auVar5._0_8_;
						}
						__this_01.offsetMax = (Vector2)(lVar4 << 0x20);
						pUVar3 = __this.AddComponent<RawImage>();
						if (pUVar3 != null) {
							pUVar3.set_color(fallback);
							pUVar3.set_raycastTarget(true);
							return pUVar3;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x5279770", Offset = "0x5278770", VA = "0x5279770")]
	private RectTransform CircleMarker(RectTransform parent, GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$CircleMarker): 2 lines keep C-only constructs
		Vector2 value;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this_00;
		Transform __this_01;
		RectTransform __this_02;
		Image __this_03;
		Sprite value_00;
		GisketchDropShadow __this_04;
		Color UVar2;

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
			__this_00 = new GameObject("AoTTG Color Marker", components);
			if (__this_00 != null) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					__this_01.SetParent((Transform)parent, false);
					__this_02 = __this_00.GetComponent<RectTransform>();
					if (__this_02 != null) {
						value = (Vector2.zeroVector);
						__this_02.anchorMax = (Vector2)value;
						__this_02.anchorMin = (Vector2)value;
						__this_02.pivot = (Vector2)0x3f0000003f000000;
						__this_02.sizeDelta = (Vector2)0x4190000041900000;
						__this_03 = __this_00.AddComponent<Image>();
						value_00 = this.CircleSprite();
						if (__this_03 != null) {
							__this_03.sprite = value_00;
							if (theme != null) {
								UVar2.b = 1.0;
								UVar2.a = 1.0;
								UVar2.r = 1.0;
								UVar2.g = 1.0;
								UVar2 = theme.GetColor("surface", UVar2);
								__this_03.set_color(UVar2);
								__this_03.set_raycastTarget(false);
								__this_04 = __this_00.AddComponent<GisketchDropShadow>();
								UVar2 = theme.GetColor("shadow", (Color)(ZEXT816(0x3ea3d70a00000000) << 0x40)) ;
								if (__this_04 != null) {
									__this_04.Setup(UVar2, (Vector2)0xc040000040400000, 4, 0.35, false);
									return __this_02;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x5279A80", Offset = "0x5278A80", VA = "0x5279A80")]
	private static RectTransform LineMarker(RectTransform parent, GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$LineMarker): 2 lines keep C-only constructs
		Vector2 value;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this;
		Transform __this_00;
		RectTransform __this_01;
		Image pUVar2;
		GisketchDropShadow __this_02;
		Color UVar3;

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
			__this = new GameObject("AoTTG Color Slider Marker", components);
			if (__this != null) {
				__this_00 = __this.transform;
				if (__this_00 != null) {
					__this_00.SetParent((Transform)parent, false);
					__this_01 = __this.GetComponent<RectTransform>();
					if (__this_01 != null) {
						value = (Vector2.zeroVector);
						__this_01.anchorMax = (Vector2)value;
						__this_01.anchorMin = (Vector2)value;
						__this_01.pivot = (Vector2)0x3f0000003f000000;
						__this_01.sizeDelta = (Vector2)0x4200000040800000;
						pUVar2 = __this.AddComponent<Image>();
						if (pUVar2 != null) {
							UVar3.b = 1.0;
							UVar3.a = 1.0;
							UVar3.r = 1.0;
							UVar3.g = 1.0;
							pUVar2.set_color(UVar3);
							pUVar2.set_raycastTarget(false);
							__this_02 = __this.AddComponent<GisketchDropShadow>();
							if (theme != null) {
								UVar3 = theme.GetColor("shadow", (Color)(ZEXT816(0x3ea3d70a00000000) << 0x40)) ;
								if (__this_02 != null) {
									__this_02.Setup(UVar3, (Vector2)0xc040000040400000, 4, 0.35, false);
									return __this_01;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x5279EB0", Offset = "0x5278EB0", VA = "0x5279EB0")]
	private static Vector2 Normalized(RectTransform rect, PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Normalized): 23 lines keep C-only constructs
		Camera cam;
		float fVar1;
		byte[] auVar2 = new byte[16];
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		uint uVar3;
		float fVar4;
		uint uVar5;
		float fVar6;
		Rect UVar7;
		Vector2 local_40;
		byte[] local_38 = new byte[16];
		ulong local_28;

		local_40.x = 0.0;
		local_40.y = 0.0;
		if (eventData != null) {
			local_38._8_8_ = 0;
			local_38._0_8_ = eventData._position_k__BackingField;
			cam = eventData.pressEventCamera;
			RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, (Vector2)local_38._0_8_, cam, ref local_40);
			if (rect != null) {
				UVar7 = rect.rect;
				local_38._0_4_ = UVar7.m_Width;
				local_38._4_4_ = UVar7.m_Height;
				local_28 = UVar7._0_8_;
				if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
					local_38._8_4_ = in_XMM1_Dc;
					local_38._0_8_ = UVar7._8_8_;
					local_38._12_4_ = in_XMM1_Dd;
				}
				fVar1 = (float)local_28;
				local_38._0_4_ = (float)local_38._0_4_ + fVar1;
				fVar6 = (float)((ulong)local_28 >> 0x20);
				local_38._4_4_ = (float)local_38._4_4_ + fVar6;
				uVar5 = 0;
				uVar3 = 0;
				if ((fVar1 != (float)local_38._0_4_) || (NAN(fVar1) || NAN((float)local_38._0_4_))) {
					fVar4 = (local_40.x - fVar1) / ((float)local_38._0_4_ - fVar1);
					fVar1 = 1.0;
					if (fVar4 <= 1.0) {
						fVar1 = fVar4;
					}
					uVar3 = -(uint)(0.0 <= fVar4) & (uint)fVar1;
				}
				if ((fVar6 != (float)local_38._4_4_) || (NAN(fVar6) || NAN((float)local_38._4_4_))) {
					fVar6 = (local_40.y - fVar6) / ((float)local_38._4_4_ - fVar6);
					fVar1 = 1.0;
					if (fVar6 <= 1.0) {
						fVar1 = fVar6;
					}
					uVar5 = -(uint)(0.0 <= fVar6) & (uint)fVar1;
				}
				auVar2._4_4_ = uVar5;
				auVar2._0_4_ = uVar3;
				auVar2._8_8_ = 0;
				auVar2 = maxps(ZEXT816(0), auVar2);
				return (Vector2)auVar2._0_8_;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x527A5C0", Offset = "0x52795C0", VA = "0x527A5C0")]
	private static void Place(RectTransform marker, float x, float y)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Place): 11 lines keep C-only constructs
		Vector2 value;
		RectTransform __this;
		uint in_XMM0_Db;
		uint in_XMM1_Db;
		byte[] auVar1 = new byte[16];
		Rect UVar2;

		if (marker != null) {
			__this = (RectTransform)marker.parent;
			if (__this != null) {
				if (__this.klass != typeof(RectTransform)) {
					throw new InvalidCastException();
				}
				UVar2 = __this.rect;
				auVar1._4_4_ = y;
				auVar1._0_4_ = x;
				auVar1._8_4_ = in_XMM0_Db;
				auVar1._12_4_ = in_XMM1_Db;
				auVar1 = minps(_DAT_01005870, auVar1);
				value.y = (float)(-(uint)(0.0 <= y) & auVar1._4_4_) * UVar2.m_Height;
				value.x = (float)(-(uint)(0.0 <= x) & auVar1._0_4_) * UVar2.m_Width;
				marker.anchoredPosition = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x527A3E0", Offset = "0x52793E0", VA = "0x527A3E0")]
	private static void SetTexture(ref Texture2D texture, RawImage target, int width, int height, Func<int, int, Color32> pixel)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$SetTexture): 11 lines keep C-only constructs
		Texture2D pUVar1;
		bool bVar2;
		uint uVar3;
		Texture __this;
		int x;
		int y;
		byte[] auVar4 = new byte[16];
		Color color;

		pUVar1 = *texture;
		bVar2 = ((Object)pUVar1 == null);
		if (bVar2) {
			__this = (Texture)il2cpp_codegen_object_new(typeof(Texture2D)) ;
			__this = new Texture2D(width, height, 4, false);
			if (__this == null) goto label_0537a5a4;
			__this.wrapMode = 1;
			*texture = (Texture2D)__this;
			if (target == null) goto label_0537a5a4;
			target.texture = (Texture)*texture;
		}
		if ((0 < height) && (0 < width)) {
			if (pixel == null) goto label_0537a5a4;
			y = 0;
			do {
				x = 0;
				do {
					pUVar1 = *texture;
					uVar3 = (*(code)pixel.invoke_impl)(pixel.method_code,x,y,pixel.method) ;
					if (pUVar1 == null) goto label_0537a5a4;
					color.b = (float)(uVar3 >> 0x10 & 0xff) / 255.0;
					color.a = (float)(uVar3 >> 0x18) / 255.0;
					auVar4._0_4_ = (float)(uVar3 & 0xff);
					auVar4._4_4_ = (float)(uVar3 >> 8 & 0xff);
					auVar4._8_8_ = 0;
					auVar4 = divps(auVar4, _DAT_01009880);
					color._0_8_ = auVar4._0_8_;
					pUVar1.SetPixel(x, y, color);
					x = x + 1;
				} while (width != x);
				y = y + 1;
			} while (y != height);
		}
		if (*texture != null) {
			(*texture).Apply(false);
			return;
		}
	label_0537a5a4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x527AA20", Offset = "0x5279A20", VA = "0x527AA20")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnDestroy): clean
		uint uVar1;
		Texture2D pUVar2;
		Object x;
		bool bVar3;

		if (Il2CppMethodInitialized_07542aa2 == false) {
			Il2CppMethodInitialized_07542aa2 = true;
			pUVar2 = this._squareTexture;
		}
		else {
			pUVar2 = this._squareTexture;
		}
		if (Il2CppMethodInitialized_07542aa4 == false) {
			Il2CppMethodInitialized_07542aa4 = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = ((Object)pUVar2 == null);
		if (bVar3) {
			pUVar2 = this._hueTexture;
		}
		else {
			GisketchUIColorPickerVisual.DestroyUnityObject((Object)pUVar2);
			pUVar2 = this._hueTexture;
		}
		if (Il2CppMethodInitialized_07542aa4 == false) {
			Il2CppMethodInitialized_07542aa4 = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = ((Object)pUVar2 == null);
		if (bVar3) {
			pUVar2 = this._alphaTexture;
		}
		else {
			GisketchUIColorPickerVisual.DestroyUnityObject((Object)pUVar2);
			pUVar2 = this._alphaTexture;
		}
		if (Il2CppMethodInitialized_07542aa4 == false) {
			Il2CppMethodInitialized_07542aa4 = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = ((Object)pUVar2 == null);
		if (bVar3) {
			pUVar2 = this._circleTexture;
		}
		else {
			GisketchUIColorPickerVisual.DestroyUnityObject((Object)pUVar2);
			pUVar2 = this._circleTexture;
		}
		if (Il2CppMethodInitialized_07542aa4 == false) {
			Il2CppMethodInitialized_07542aa4 = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = ((Object)pUVar2 == null);
		if (!bVar3) {
			GisketchUIColorPickerVisual.DestroyUnityObject((Object)pUVar2);
		}
		x = (Object)this._circleSprite;
		bVar3 = (x != null);
		if (bVar3) {
			GisketchUIColorPickerVisual.DestroyUnityObject((Object)this._circleSprite);
			return;
		}
		return;
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x527A690", Offset = "0x5279690", VA = "0x527A690")]
	private Sprite CircleSprite()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$CircleSprite): 18 lines keep C-only constructs
		Sprite* targetAddress;
		uint uVar1;
		Object x;
		double x_00;
		double dVar2;
		Il2CppMethodPointer pIVar3;
		Il2CppMethodPointer pIVar4;
		bool bVar5;
		MethodInfo method_00;
		Sprite pUVar6;
		int x_01;
		MethodInfo pMVar7;
		MethodInfo method_01;
		int y;
		Texture2D* targetAddress_00;
		float fVar8;
		float fVar9;
		Color color;
		Il2CppMethodPointer local_50;
		byte[] local_48 = new byte[16];

		x = (Object)this._circleSprite;
		targetAddress = &this._circleSprite;
		bVar5 = (x != null);
		if (bVar5) {
	label_0537aa09: ;
			return *targetAddress;
		}
		y = 0;
		method_00 = new Texture2D(0x20, 0x20, 4, false);
		if (method_00 != null) {
			method_00.wrapMode = 1;
			this._circleTexture = (Texture2D)method_00;
			targetAddress_00 = &this._circleTexture;
			do {
				pMVar7 = null;
				do {
					if (Il2CppMethodInitialized_0753e72f == false) {
						Il2CppMethodInitialized_0753e72f = true;
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					x_01 = (int)pMVar7;
					fVar8 = ((float)x_01 + -15.5) * ((float)x_01 + -15.5) + ((float)y + -15.5) * ((float)y + -15.5);
					if (fVar8 < 0.0) {
						fVar8 = sqrtf(fVar8);
					}
					else {
						fVar8 = SQRT(fVar8);
					}
					fVar8 = (16.0 - fVar8) + (16.0 - fVar8);
					local_48 = ZEXT416((uint)fVar8);
					fVar9 = 1.0;
					if (fVar8 <= 1.0) {
						fVar9 = fVar8;
					}
					if (Il2CppMethodInitialized_07541320 == false) {
						Il2CppMethodInitialized_07541320 = true;
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						fVar8 = (float)local_48._0_4_;
					}
					else {
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
						fVar8 = (float)local_48._0_4_;
					}
					local_48._0_4_ = fVar8;
					fVar8 = (float)(-(uint)(0.0 <= (float)local_48._0_4_) & (uint)(fVar9 * 255.0));
					local_48 = ZEXT416((uint)fVar8);
					x_00 = (double)fVar8;
					method_01 = (MethodInfo)&local_50;
					dVar2 = modf(x_00, (double)&local_50, method_00);
					if (0.0 <= (float)local_48._0_4_) {
						if ((dVar2 == 0.5) && (!NAN(dVar2))) {
							pIVar4 = (Il2CppMethodPointer)((double)local_50 + 1.0);
							goto joined_r0x0537a8d1;
						}
						pIVar3 = (Il2CppMethodPointer)floor(x_00 + 0.5, method_01);
					}
					else if ((dVar2 != -0.5) || (NAN(dVar2))) {
						pIVar3 = (Il2CppMethodPointer)ceil(x_00 + -0.5, method_01);
					}
					else {
						pIVar4 = (Il2CppMethodPointer)((double)local_50 + -1.0);
	joined_r0x0537a8d1: ;
						pIVar3 = local_50;
						if (((long)(double)local_50 & 1U) != 0) {
							pIVar3 = pIVar4;
						}
					}
					if (*targetAddress_00 == null) goto label_0537aa1b;
					color.a = (float)((int)(double)pIVar3 & 0xff) / 255.0;
					color.b = 1.0;
					color.r = 1.0;
					color.g = 1.0;
					method_00 = pMVar7;
					(*targetAddress_00).SetPixel(x_01, y, color);
					pMVar7 = (MethodInfo)(ulong)(x_01 + 1U);
				} while (x_01 + 1U != 0x20);
				y = y + 1;
			} while (y != 0x20);
			if (*targetAddress_00 != null) {
				(*targetAddress_00).Apply(false);
				pUVar6 = Sprite.Create(*targetAddress_00, (Rect)(ZEXT816(0x4200000042000000) << 0x40), (Vector2)0x3f0000003f000000, 32.0);
				*targetAddress = pUVar6;
				goto label_0537aa09;
			}
		}
	label_0537aa1b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x527AD80", Offset = "0x5279D80", VA = "0x527AD80")]
	private static byte Blend(byte back, byte front, float t)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Blend): 7 lines keep C-only constructs
		undefined3 in_register_00000031;
		int iVar1;
		uint in_register_00000034;
		undefined7 in_register_00000039;
		MethodInfo method_00;
		float fVar2;
		double dVar3;
		double dVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		Il2CppMethodPointer local_8;

		iVar1 = CONCAT31(in_register_00000031, front);
		fVar2 = 1.0;
		if (t <= 1.0) {
			fVar2 = t;
		}
		fVar2 = (float)(-(uint)(0.0 <= t) & (uint)fVar2);
		fVar7 = (float)(int)CONCAT71(in_register_00000039, back);
		fVar5 = (float)iVar1;
		fVar6 = 0.0;
		if (0.0 <= fVar2) {
			fVar6 = fVar2;
		}
		fVar7 = (fVar5 - fVar7) * fVar6 + fVar7;
		dVar3 = (double)fVar7;
		method_00 = (MethodInfo)&local_8;
		dVar4 = modf(dVar3, (double)method_00, (MethodInfo)CONCAT44(in_register_00000034, iVar1));
		if (0.0 <= fVar7) {
			if ((dVar4 != 0.5) || (NAN(dVar4))) {
				dVar3 = floor(dVar3 + 0.5, method_00);
				return (uint8_t)(int)dVar3;
			}
			if (((long)(double)local_8 & 1U) != 0) {
				return (uint8_t)(int)((double)local_8 + 1.0);
			}
		}
		else {
			if ((dVar4 != -0.5) || (NAN(dVar4))) {
				dVar3 = ceil(dVar3 + -0.5, method_00);
				return (uint8_t)(int)dVar3;
			}
			if (((long)(double)local_8 & 1U) != 0) {
				local_8 = (Il2CppMethodPointer)((double)local_8 + -1.0);
			}
		}
		return (uint8_t)(int)(double)local_8;
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x527AC80", Offset = "0x5279C80", VA = "0x527AC80")]
	private static void DestroyTexture(Texture2D texture)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$DestroyTexture): clean
		bool bVar1;

		bVar1 = ((Object)texture == null);
		if (bVar1) {
			return;
		}
		GisketchUIColorPickerVisual.DestroyUnityObject((Object)texture);
		return;
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x527ACE0", Offset = "0x5279CE0", VA = "0x527ACE0")]
	private static void DestroyUnityObject(UnityEngine.Object target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$DestroyUnityObject): clean
		uint uVar1;
		bool bVar2;

		bVar2 = Application.isPlaying;
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		if (bVar2) {
			if (uVar1 == 0) {
				Object.Destroy(target);
				return;
			}
			Object.Destroy(target);
			return;
		}
		if (uVar1 == 0) {
			Object.DestroyImmediate(target);
			return;
		}
		Object.DestroyImmediate(target);
		return;
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x527AED0", Offset = "0x5279ED0", VA = "0x527AED0")]
	public GisketchUIColorPickerVisual()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerVisual.c.

	// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c__DisplayClass30_0$$.ctor: clean
	private void c__DisplayClass30_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$<RefreshTextures>b__30_0: 27 lines keep C-only constructs
	private Color32 RefreshTextures_b__30_0(int x, int y)
	{
		byte[] auVar1 = new byte[16];
		float S;
		byte uVar2;
		byte uVar3;
		byte uVar4;
		uint extraout_EAX;
		uint uVar5;
		float fVar6;
		byte[] auVar7 = new byte[12];
		byte[] auVar8 = new byte[12];
		float fVar9;
		float fVar10;
		float fVar12;
		byte[] auVar11 = new byte[16];
		Color UVar13;
		float fStack_34;
		float fStack_28;

		fVar9 = this._value.H;
		fVar6 = floorf(fVar9);
		auVar11._4_4_ = (float)x;
		auVar11._0_4_ = (float)y;
		auVar11._8_8_ = 0;
		fVar9 = fVar9 - fVar6;
		auVar7 = ZEXT812(0x3f800000);
		auVar8 = ZEXT812(0x3f800000);
		if (fVar9 <= auVar8._0_4_) {
			auVar8._4_8_ = auVar8._4_8_;
			auVar8._0_4_ = fVar9;
		}
		fVar6 = 0.0;
		auVar11 = divps(auVar11, _DAT_01008780);
		fVar10 = auVar11._0_4_;
		fVar12 = auVar11._4_4_;
		auVar1._4_4_ = -(uint)(0.0 <= fVar10);
		auVar1._0_4_ = -(uint)(0.0 <= fVar10);
		auVar1._8_4_ = -(uint)(0.0 <= fVar12);
		auVar1._12_4_ = -(uint)(0.0 <= fVar12);
		uVar5 = movmskpd(extraout_EAX, auVar1);
		if ((uVar5 & 2) == 0) {
			S = 0.0;
		}
		else {
			S = 1.0;
			if (fVar12 <= 1.0) {
				S = fVar12;
			}
		}
		if ((uVar5 & 1) != 0) {
			if (fVar10 <= auVar7._0_4_) {
				auVar7._4_8_ = auVar7._4_8_;
				auVar7._0_4_ = fVar10;
			}
			fVar6 = auVar7._0_4_;
		}
		UVar13 = Color.HSVToRGB((float)(-(uint)(0.0 <= fVar9) & auVar8._0_4_), S, fVar6, true);
		fStack_28 = UVar13.b;
		uVar2 = GisketchUIColorPickerValue.ToByte(UVar13.r);
		fStack_34 = UVar13.g;
		uVar3 = GisketchUIColorPickerValue.ToByte(fStack_34);
		uVar4 = GisketchUIColorPickerValue.ToByte(fStack_28);
		return (Color32)(Color32)(CONCAT12(uVar4, CONCAT11(uVar3, uVar2)) | 0xff000000);
	}

	// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		if (Il2CppMethodInitialized_07542aa6 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchUIColorPickerVisual.c)) ;
			Il2CppMethodInitialized_07542aa6 = true;
		}
		__this = new GisketchUIColorPickerVisual.c();
		GisketchUIColorPickerVisual.c.__9 =(GisketchUIColorPickerVisual.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$<RefreshTextures>b__30_1: 1 lines keep C-only constructs
	private Color32 c__RefreshTextures_b__30_1(int x, int __)
	{
		byte uVar1;
		byte uVar2;
		byte uVar3;
		float fVar4;
		float fVar5;
		Color UVar6;
		float fStack_38;
		float fStack_24;

		fVar4 = floorf((float)x / 127.0);
		fVar4 = (float)x / 127.0 - fVar4;
		fVar5 = 1.0;
		if (fVar4 <= 1.0) {
			fVar5 = fVar4;
		}
		UVar6 = Color.HSVToRGB((float)(-(uint)(0.0 <= fVar4) & (uint)fVar5), 1.0, 1.0, true);
		uVar1 = GisketchUIColorPickerValue.ToByte(UVar6.r);
		fStack_24 = UVar6.g;
		uVar2 = GisketchUIColorPickerValue.ToByte(fStack_24);
		fStack_38 = UVar6.b;
		uVar3 = GisketchUIColorPickerValue.ToByte(fStack_38);
		return (Color32)(Color32)(CONCAT12(uVar3, CONCAT11(uVar2, uVar1)) | 0xff000000);
	}

	// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c__DisplayClass30_0$$<RefreshTextures>b__2: clean
	private Color32 c__DisplayClass30_0__RefreshTextures_b__2(int x, int y)
	{
		byte uVar1;
		byte uVar2;
		byte uVar3;
		uint uVar4;
		float t;

		t = (float)x / 383.0;
		uVar4 = 0xff969696;
		if ((y / 6 + x / 6 & 1U) == 0) {
			uVar4 = 0xffebebeb;
		}
		uVar1 = GisketchUIColorPickerVisual.Blend((uint8_t)uVar4, this.color._overlap_0._at_b._lead[0], t);
		uVar2 = GisketchUIColorPickerVisual.Blend((uint8_t)((uint)uVar4 >> 8), this.color._overlap_0._at_g.g, t) ;
		uVar3 = GisketchUIColorPickerVisual.Blend((uint8_t)((uint)uVar4 >> 0x10), this.color._overlap_0._at_b.b, t);
		return (Color32)(Color32)((uint)uVar1 | (uint)uVar2 << 8 | (uint)uVar3 << 0x10 | 0xff000000);
	}
}
