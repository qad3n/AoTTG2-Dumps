// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgSliderControl
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D2")]
public sealed class AottgSliderControl : Selectable, IBeginDragHandler, IEventSystemHandler, IDragHandler, IEndDragHandler, ISubmitHandler
{
	[Token(Token = "0x400043F")]
	private const float NavigationStep = 0.05f;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x100")]
	private RectTransform _track;

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x108")]
	private RectTransform _fill;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x110")]
	private RectTransform _thumb;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x118")]
	private RectTransform _thumbFace;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x120")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x128")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x130")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x138")]
	private GameObject _target;

	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x140")]
	private float _min;

	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x144")]
	private float _max;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x148")]
	private float _railHeight;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x14C")]
	private float _lastVisualTrackWidth;

	[Token(Token = "0x170000A7")]
	public float Value
	{
		[Token(Token = "0x6000686")]
		[Address(RVA = "0x529B730", Offset = "0x529A730", VA = "0x529B730")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$get_Value): clean
			return this._Value_k__BackingField;
		}
		[Token(Token = "0x6000687")]
		[Address(RVA = "0x529B740", Offset = "0x529A740", VA = "0x529B740")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$set_Value): clean
			this._Value_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x529B750", Offset = "0x529A750", VA = "0x529B750")]
	public void Setup(RectTransform track, RectTransform fill, RectTransform thumb, RectTransform thumbFace, TextMeshProUGUI label, GisketchNodeDefinition node, IGisketchActionHandler actions, GameObject target, float railHeight)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$Setup): 6 lines keep C-only constructs
		String s;
		bool bVar1;
		ulong in_RAX;
		CultureInfo provider;
		MethodInfo method_00;
		float fVar2;
		ulong local_38;

		local_38._4_4_ = (float)((ulong)in_RAX >> 0x20);
		local_38._0_4_ = railHeight;
		this._track = track;
		this._fill = fill;
		this._thumb = thumb;
		this._thumbFace = thumbFace;
		this._label = label;
		this._node = node;
		this._actions = actions;
		this._target = target;
		this._railHeight = (float)local_38;
		if (node == null) {
			throw new NullReferenceException();
		}
		fVar2 = (node.min).GetValueOrDefault(0.0);
		this._min = fVar2;
		fVar2 = (node.max).GetValueOrDefault(1.0);
		this._max = fVar2;
		this._lastVisualTrackWidth = -1.0;
		s = node.value;
		local_38 = CONCAT44(local_38._4_4_, this._min);
		local_38 = local_38 & 0xffffffff;
		provider = CultureInfo.InvariantCulture;
		method_00 = (MethodInfo)((long)&local_38 + 4);
		bVar1 = Single.TryParse(s, 0xa7, (IFormatProvider)provider, (float)method_00);
		if (bVar1) {
			fVar2 = local_38._4_4_;
		}
		else {
			fVar2 = (float)local_38;
		}
		this.SetValue(fVar2, false, 0);
		return;
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x529BBF0", Offset = "0x529ABF0", VA = "0x529BBF0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$LateUpdate): clean
		this.RefreshVisualsForLayout();
		return;
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x529BC00", Offset = "0x529AC00", VA = "0x529BC00")]
	internal void RefreshVisualsForLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$RefreshVisualsForLayout): clean
		float fVar1;
		RectTransform pUVar2;
		bool bVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		Rect UVar8;

		pUVar2 = this._track;
		bVar3 = ((Object)pUVar2 != null);
		if (bVar3) {
			pUVar2 = this._track;
			if (pUVar2 == null) {
				throw new NullReferenceException();
			}
			UVar8 = pUVar2.rect;
			fVar4 = UVar8.m_Width;
			if (0.0 < fVar4) {
				fVar1 = this._lastVisualTrackWidth;
				fVar6 = ABS(fVar1);
				fVar5 = ABS(fVar4);
				if (ABS(fVar4) <= fVar6) {
					fVar5 = fVar6;
				}
				fVar7 = Mathf.Epsilon * 8.0;
				fVar6 = fVar5 * 1e-06;
				if (fVar5 * 1e-06 <= fVar7) {
					fVar6 = fVar7;
				}
				if (fVar6 <= ABS(fVar1 - fVar4)) {
					this.RefreshVisuals();
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x529C160", Offset = "0x529B160", VA = "0x529C160")]
	public void SetNormalizedValue(float normalized, bool notify)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetNormalizedValue): clean
		float fVar1;
		float fVar2;
		float fVar3;

		fVar1 = this._min;
		fVar2 = 1.0;
		if (normalized <= 1.0) {
			fVar2 = normalized;
		}
		fVar2 = (float)(-(uint)(0.0 <= normalized) & (uint)fVar2);
		fVar3 = 0.0;
		if (0.0 <= fVar2) {
			fVar3 = fVar2;
		}
		this.SetValue((this._max - fVar1) * fVar3 + fVar1, notify, 0);
		return;
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x529C1B0", Offset = "0x529B1B0", VA = "0x529C1B0")]
	public void SetValueWithoutNotify(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetValueWithoutNotify): clean


		this.SetValue(value, false, 0);
		return;
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x529C1C0", Offset = "0x529B1C0", VA = "0x529C1C0", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnPointerDown): clean
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;

		this.OnPointerDown(eventData);
		pGVar1 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar1._Mode_k__BackingField != 0) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar1 = typeof(GisketchFocusInputMode).static_fields;
				pGVar1._Mode_k__BackingField = 0;
				pSVar2 = pGVar1.Changed;
			}
			else {
				pGVar1._Mode_k__BackingField = 0;
				pSVar2 = pGVar1.Changed;
			}
			if (pSVar2 != null) {
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code);
			}
		}
		GisketchUiSounds.Play(0);
		this.SetFromPointer(eventData);
		return;
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x529C510", Offset = "0x529B510", VA = "0x529C510", Slot = "39")]
	public void OnBeginDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnBeginDrag): 4 lines keep C-only constructs
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;

		pGVar1 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar1._Mode_k__BackingField != 0) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar1 = typeof(GisketchFocusInputMode).static_fields;
				pGVar1._Mode_k__BackingField = 0;
				pSVar2 = pGVar1.Changed;
				method = extraout_RDX_02;
			}
			else {
				pGVar1._Mode_k__BackingField = 0;
				pSVar2 = pGVar1.Changed;
			}
			if (pSVar2 != null) {
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
				method = extraout_RDX_01;
			}
		}
		this.SetFromPointer(eventData);
		if (eventData == null) {
			return;
		}
		eventData.Use();
		return;
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x529C5F0", Offset = "0x529B5F0", VA = "0x529C5F0", Slot = "40")]
	public void OnDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnDrag): clean
		this.SetFromPointer(eventData);
		if (eventData == null) {
			return;
		}
		eventData.Use();
		return;
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x529C620", Offset = "0x529B620", VA = "0x529C620", Slot = "41")]
	public void OnEndDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnEndDrag): clean
		if (eventData == null) {
			return;
		}
		eventData.Use();
		return;
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x529C640", Offset = "0x529B640", VA = "0x529C640", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnPointerUp): clean
		this.OnPointerUp(eventData);
		GisketchUiSounds.Play(1);
		return;
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x529C6A0", Offset = "0x529B6A0", VA = "0x529C6A0", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnMove): clean
		Action pSVar1;
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar2;
		float fVar3;

		if (eventData == null) {
			throw new NullReferenceException();
		}
		if ((eventData._moveDir_k__BackingField & 0xfffffffdU) != 0) {
			this.OnMove(eventData);
			return;
		}
		pGVar2 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar2._Mode_k__BackingField != 1) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar2 = typeof(GisketchFocusInputMode).static_fields;
			}
			pGVar2._Mode_k__BackingField = 1;
			pSVar1 = pGVar2.Changed;
			if (pSVar1 != null) {
				(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
			}
		}
		fVar3 = (this._max - this._min) * 0.05;
		if (eventData._moveDir_k__BackingField != 2) {
			fVar3 = -fVar3;
		}
		this.SetValue(fVar3 + this._Value_k__BackingField, true, 2);
		GisketchUiSounds.Play(0);
		eventData.Use();
		return;
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x529C800", Offset = "0x529B800", VA = "0x529C800", Slot = "42")]
	public void OnSubmit(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnSubmit): clean
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;

		pGVar1 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar1._Mode_k__BackingField != 1) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar1 = typeof(GisketchFocusInputMode).static_fields;
				pGVar1._Mode_k__BackingField = 1;
				pSVar2 = pGVar1.Changed;
			}
			else {
				pGVar1._Mode_k__BackingField = 1;
				pSVar2 = pGVar1.Changed;
			}
			if (pSVar2 != null) {
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x529C2D0", Offset = "0x529B2D0", VA = "0x529C2D0")]
	private void SetFromPointer(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetFromPointer): 17 lines keep C-only constructs
		RectTransform pUVar1;
		Vector2 UVar2;
		bool bVar3;
		Camera cam;
		float fVar4;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		float fVar5;
		float fVar6;
		Rect UVar7;
		Vector2 local_50;
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[16];

		local_50.x = 0.0;
		local_50.y = 0.0;
		pUVar1 = this._track;
		bVar3 = ((Object)pUVar1 == null);
		if ((eventData == null) || (bVar3)) {
			return;
		}
		pUVar1 = this._track;
		local_48._8_8_ = 0;
		local_48._0_8_ = eventData._position_k__BackingField;
		cam = eventData.pressEventCamera;
		RectTransformUtility.ScreenPointToLocalPointInRectangle(pUVar1, (Vector2)local_48._0_8_, cam, ref local_50);
		pUVar1 = this._track;
		if (pUVar1 != null) {
			UVar7 = pUVar1.rect;
			local_48._8_4_ = in_XMM1_Dc;
			local_48._0_8_ = UVar7._8_8_;
			local_48._12_4_ = in_XMM1_Dd;
			pUVar1 = this._track;
			if (pUVar1 != null) {
				UVar2 = pUVar1.pivot;
				local_38._8_4_ = extraout_XMM0_Dc;
				local_38._0_4_ = UVar2.x;
				local_38._4_4_ = UVar2.y;
				local_38._12_4_ = extraout_XMM0_Dd;
				pUVar1 = this._thumbFace;
				bVar3 = ((Object)pUVar1 != null);
				if (bVar3) {
					pUVar1 = this._thumbFace;
					if (pUVar1 == null) goto label_0539c509;
					UVar2 = pUVar1.sizeDelta;
					fVar4 = UVar2.x * 0.5;
				}
				else {
					fVar4 = 12.0;
				}
				fVar6 = 0.0;
				if (fVar4 + fVar4 < (float)local_48._0_4_) {
					fVar5 = (float)local_48._0_4_ - fVar4;
					fVar6 = 0.0;
					if ((fVar4 != fVar5) || (NAN(fVar4) || NAN(fVar5))) {
						fVar4 = (((float)local_48._0_4_ * (float)local_38._0_4_ + local_50.x) - fVar4) / (fVar5 - fVar4);
						fVar6 = 1.0;
						if (fVar4 <= 1.0) {
							fVar6 = fVar4;
						}
						fVar6 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar6);
					}
				}
				fVar4 = this._min;
				fVar5 = 0.0;
				if (0.0 <= fVar6) {
					fVar5 = fVar6;
				}
				this.SetValue((this._max - fVar4) * fVar5 + fVar4, true, 1);
				return;
			}
		}
	label_0539c509: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x529B9E0", Offset = "0x529A9E0", VA = "0x529B9E0")]
	private void SetValue(float value, bool notify, GisketchActionInputSource source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetValue): 5 lines keep C-only constructs
		float fVar1;
		GisketchNodeDefinition pGVar2;
		object obj;
		String actionId;
		GisketchActionContext context;
		bool bVar5;
		CultureInfo provider;
		MethodInfo method_00;
		undefined7 in_register_00000031;
		float fVar9;
		float fVar10;
		float local_7c;
		GisketchActionContext local_78;
		float local_58;
		String local_48;
		GameObject pUStack_40;
		GisketchNodeDefinition local_38;
		int iStack_30;
		uint uStack_2c;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, notify);
		if (g_data_07542b7b == false) {
			local_58 = value;
			g_data_07542b7b = true;
			value = local_58;
		}
		local_7c = 0.0;
		fVar9 = this._min;
		fVar1 = this._max;
		fVar10 = fVar9;
		if (fVar1 <= fVar9) {
			fVar10 = fVar1;
		}
		if (fVar9 <= fVar1) {
			fVar9 = fVar1;
		}
		if (value <= fVar9) {
			fVar9 = value;
		}
		fVar9 = (float)(~-(uint)(fVar10 <= value) & (uint)fVar10 | (uint)fVar9 & -(uint)(fVar10 <= value));
		this._Value_k__BackingField = fVar9;
		pGVar2 = this._node;
		if (pGVar2 != null) {
			local_7c = fVar9;
			provider = CultureInfo.InvariantCulture;
			method_00 = (MethodInfo)local_7c.ToString((IFormatProvider)provider);
			pGVar2.value = (String)method_00;
		}
		this.RefreshVisuals();
		if (notify) {
			pGVar2 = this._node;
			if (pGVar2 == null) {
				bVar5 = String.IsNullOrEmpty(null);
				if (bVar5) {
					return;
				}
			}
			else {
				bVar5 = String.IsNullOrEmpty(pGVar2.action);
				if (bVar5) {
					return;
				}
			}
			obj = (object)this._actions;
			if (obj != null) {
				pGVar2 = this._node;
				if (pGVar2 == null) {
					throw new NullReferenceException();
				}
				actionId = pGVar2.action;
				local_78.Node = null;
				local_78.InputSource = 0;
				local_78._28_4_ = 0;
				local_78.ElementId = null;
				local_78.GameObject = null;
				local_78 = new GisketchActionContext(pGVar2.id, this._target, pGVar2, source);
				local_38 = local_78.Node;
				iStack_30 = local_78.InputSource;
				uStack_2c = local_78._28_4_;
				local_48 = local_78.ElementId;
				pUStack_40 = local_78.GameObject;
				context.GameObject = pUStack_40;
				context.ElementId = local_48;
				context.Node = local_38;
				context.InputSource = iStack_30;
				context._28_4_ = uStack_2c;
				obj.HandleAction(actionId, context);
			}
		}
		return;
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x529BD60", Offset = "0x529AD60", VA = "0x529BD60")]
	private void RefreshVisuals()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$RefreshVisuals): 23 lines keep C-only constructs
		TextMeshProUGUI pTVar1;
		RectTransform pUVar2;
		bool bVar3;
		String pSVar4;
		MethodInfo method_00;
		MethodInfo method_01;
		double dVar5;
		Vector2 UVar6;
		Vector2 value;
		byte[] auVar7 = new byte[12];
		float fVar8;
		uint uVar9;
		uint uVar10;
		float fVar11;
		float fVar12;
		Rect UVar13;
		int local_5c;
		byte[] local_58 = new byte[8];
		uint uStack_50;
		uint uStack_4c;
		byte[] local_48 = new byte[16];
		double local_30;
		Il2CppMethodPointer local_28;

		local_5c = 0;
		fVar11 = this._min;
		fVar8 = this._max;
		if ((fVar11 != fVar8) || (NAN(fVar11) || NAN(fVar8))) {
			fVar11 = (this._Value_k__BackingField - fVar11) / (fVar8 - fVar11);
			auVar7 = ZEXT812(0x3f800000);
			if (fVar11 <= auVar7._0_4_) {
				auVar7._4_8_ = auVar7._4_8_;
				auVar7._0_4_ = fVar11;
			}
			local_48 = ZEXT416(-(uint)(0.0 <= fVar11) & auVar7._0_4_);
		}
		else {
			local_48 = ZEXT816(0);
		}
		uVar10 = 0;
		uVar9 = 0;
		pTVar1 = this._label;
		method_00 = null;
		bVar3 = ((Object)pTVar1 != null);
		if (bVar3) {
			pTVar1 = this._label;
			local_58._0_4_ = (float)local_48._0_4_ * 100.0;
			fVar11 = (float)local_48._0_4_ * 100.0;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				fVar11 = (float)local_58._0_4_;
			}
			local_30 = (double)fVar11;
			method_01 = (MethodInfo)&local_28;
			dVar5 = modf(local_30, (double)method_01, method_00);
			uVar9 = 0;
			uVar10 = 0;
			if (0.0 <= (float)local_58._0_4_) {
				if ((dVar5 != 0.5) || (NAN(dVar5))) {
					local_28 = (Il2CppMethodPointer)floor(local_30 + 0.5, method_01);
				}
				else if (((long)(double)local_28 & 1U) != 0) {
					local_28 = (Il2CppMethodPointer)((double)local_28 + 1.0);
				}
			}
			else if ((dVar5 != -0.5) || (NAN(dVar5))) {
				local_28 = (Il2CppMethodPointer)ceil(local_30 + -0.5, method_01);
			}
			else if (((long)(double)local_28 & 1U) != 0) {
				local_28 = (Il2CppMethodPointer)((double)local_28 + -1.0);
			}
			local_5c = (int32_t)(double)local_28;
			pSVar4 = local_5c.ToString();
			pSVar4 = String.Concat(pSVar4, "%");
			if (pTVar1 == null) goto label_0539c150;
			pTVar1.set_text(pSVar4);
		}
		pUVar2 = this._track;
		bVar3 = ((Object)pUVar2 != null);
		if (!bVar3) {
			return;
		}
		pUVar2 = this._track;
		if (pUVar2 != null) {
			UVar13 = pUVar2.rect;
			local_58._0_4_ = UVar13.m_Width;
			local_58._4_4_ = UVar13.m_Height;
			if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
				uStack_50 = uVar9;
				local_58 = (byte[])UVar13._8_8_;
				uStack_4c = uVar10;
				uVar9 = uStack_50;
				uVar10 = uStack_4c;
			}
			if ((float)local_58._0_4_ <= 0.0) {
				return;
			}
			uStack_50 = uVar9;
			uStack_4c = uVar10;
			this._lastVisualTrackWidth = (float)local_58._0_4_;
			pUVar2 = this._thumbFace;
			bVar3 = ((Object)pUVar2 != null);
			if (bVar3) {
				pUVar2 = this._thumbFace;
				if (pUVar2 == null) goto label_0539c150;
				UVar6 = pUVar2.sizeDelta;
				fVar11 = UVar6.x * 0.5;
			}
			else {
				fVar11 = 12.0;
			}
			pUVar2 = this._thumb;
			if (pUVar2 != null) {
				fVar8 = fVar11;
				if (fVar11 <= (float)local_58._0_4_ - fVar11) {
					fVar8 = (float)local_58._0_4_ - fVar11;
				}
				fVar12 = 0.0;
				if (0.0 <= (float)local_48._0_4_) {
					fVar12 = (float)local_48._0_4_;
				}
				fVar11 = (fVar8 - fVar11) * fVar12 + fVar11;
				local_48 = ZEXT416((uint)fVar11);
				UVar6.y = 0.0;
				UVar6.x = fVar11;
				pUVar2.anchoredPosition = UVar6;
				pUVar2 = this._fill;
				if (pUVar2 != null) {
					pUVar2.anchorMin = (Vector2)0x3f00000000000000;
					pUVar2 = this._fill;
					if (pUVar2 != null) {
						pUVar2.anchorMax = (Vector2)0x3f00000000000000;
						pUVar2 = this._fill;
						if (pUVar2 != null) {
							pUVar2.offsetMin = (Vector2)((ulong)(uint)(this._railHeight * -0.5) << 0x20);
							pUVar2 = this._fill;
							if (pUVar2 != null) {
								value.y = this._railHeight * 0.5;
								value.x = (float)local_48._0_4_;
								pUVar2.offsetMax = value;
								return;
							}
						}
					}
				}
			}
		}
	label_0539c150: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x529C8B0", Offset = "0x529B8B0", VA = "0x529C8B0")]
	private float ThumbWidth()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$ThumbWidth): clean
		RectTransform pUVar1;
		bool bVar2;
		Vector2 UVar3;

		pUVar1 = this._thumbFace;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._thumbFace;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			UVar3 = pUVar1.sizeDelta;
			return UVar3.x;
		}
		return 24.0;
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x529B950", Offset = "0x529A950", VA = "0x529B950")]
	private static float ParseFloat(string value, float fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$ParseFloat): clean
		bool bVar1;
		CultureInfo provider;
		float local_10;
		float local_c;

		local_10 = 0.0;
		provider = CultureInfo.InvariantCulture;
		bVar1 = Single.TryParse(value, 0xa7, (IFormatProvider)provider, ref local_10);
		if (bVar1) {
			return local_10;
		}
		return local_c;
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x529C940", Offset = "0x529B940", VA = "0x529C940")]
	public AottgSliderControl()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSliderControl.c (Gisketch.Aottg2UI.Actions.AottgSliderControl$$.ctor): clean
		this._lastVisualTrackWidth = -1.0;
		if ((typeof(Selectable)._2).cctor_finished_or_no_cctor == 0) {
			base();
			return;
		}
		base();
		return;
	}
}
