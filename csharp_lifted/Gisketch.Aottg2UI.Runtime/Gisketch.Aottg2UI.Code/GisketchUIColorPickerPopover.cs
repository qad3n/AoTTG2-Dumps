// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x20000A0")]
internal sealed class GisketchUIColorPickerPopover : MonoBehaviour
{
	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x20")]
	private string _id;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x28")]
	private bool _enableAlpha;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _source;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x38")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x40")]
	private GisketchUIColorPickerValue _value;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x50")]
	private TMP_InputField _r;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x58")]
	private TMP_InputField _g;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x60")]
	private TMP_InputField _b;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x68")]
	private TMP_InputField _hex;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x70")]
	private GisketchUIColorPickerVisual _visual;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x78")]
	private bool _syncing;

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x5275760", Offset = "0x5274760", VA = "0x5275760")]
	public void Setup(string id, GameObject source, GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Setup): 12 lines keep C-only constructs
		GisketchUIColorPickerValue value;
		GisketchUIColorPickerVisual* targetAddress;
		byte uVar1;
		byte uVar2;
		byte uVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		String pSVar8;
		bool bVar9;
		Transform pUVar10;
		String pSVar11;
		GisketchUIColorPickerVisual pGVar12;
		TMP_InputField pTVar13;
		UnityAction pUVar14;
		Action<GisketchUIColorPickerValue> __this_00;
		Action<GisketchUIColorPickerValue> pSVar15;
		Delegate obj;
		MethodInfo pMVar16;
		Action<GisketchUIColorPickerValue> a;
		Color rgbColor;
		float fStack_44;
		float fStack_40;
		float fStack_3c;
		GisketchUIColorPickerVisual* local_38;

		this._id = id;
		this._source = source;
		this._root = root;
		pUVar10 = this.transform;
		pSVar11 = String.Concat(id, "-visual");
		pGVar12 = GisketchUIColorPicker.Find<GisketchUIColorPickerVisual>(pUVar10, pSVar11);
		pMVar16 = (MethodInfo)&pGVar12._EnableAlpha_k__BackingField;
		if (pGVar12 == null) {
			pMVar16 = (MethodInfo)&this._enableAlpha;
		}
		bVar9 = *(bool)&pMVar16.methodPointer;
		this._enableAlpha = bVar9;
		pSVar8 = "#FFFFFFFF";
		pSVar11 = "#FFFFFF";
		if (bVar9 != false) {
			pSVar11 = pSVar8;
		}
		pSVar11 = GisketchUIColorPicker.Value(id, pSVar11, bVar9);
		value = &this._value;
		bVar9 = GisketchUIColorPickerValue.TryParse(pSVar11, this._enableAlpha, value);
		if (!bVar9) {
			fStack_3c = 0.0;
			fStack_44 = 0.0;
			fStack_40 = 0.0;
			rgbColor.b = 1.0;
			rgbColor.a = 1.0;
			rgbColor.r = 1.0;
			rgbColor.g = 1.0;
			Color.RGBToHSV(rgbColor, ref fStack_44, ref fStack_40, ref fStack_3c);
			value.R = (char)0xffffffff;
			value.G = (char)(0xffffffff >> 8);
			value.B = (char)(0xffffffff >> 0x10);
			value.A = (char)(0xffffffff >> 0x18);
			value.H = fStack_44;
			this._value.S = fStack_40;
			this._value.V = fStack_3c;
		}
		pUVar10 = this.transform;
		pSVar11 = String.Concat(id, "-r");
		pTVar13 = GisketchUIColorPicker.Find<TMP_InputField>(pUVar10, pSVar11);
		this._r = pTVar13;
		pUVar10 = this.transform;
		pSVar11 = String.Concat(id, "-g");
		pTVar13 = GisketchUIColorPicker.Find<TMP_InputField>(pUVar10, pSVar11);
		this._g = pTVar13;
		pUVar10 = this.transform;
		pSVar11 = String.Concat(id, "-b");
		pTVar13 = GisketchUIColorPicker.Find<TMP_InputField>(pUVar10, pSVar11);
		this._b = pTVar13;
		pUVar10 = this.transform;
		pSVar11 = String.Concat(id, "-hex");
		pTVar13 = GisketchUIColorPicker.Find<TMP_InputField>(pUVar10, pSVar11);
		this._hex = pTVar13;
		pUVar10 = this.transform;
		pSVar11 = String.Concat(id, "-visual");
		pGVar12 = GisketchUIColorPicker.Find<GisketchUIColorPickerVisual>(pUVar10, pSVar11);
		targetAddress = &this._visual;
		this._visual = pGVar12;
		this.WireRgbInput(this._r);
		this.WireRgbInput(this._g);
		this.WireRgbInput(this._b);
		this.WireHexInput(this._hex);
		pSVar11 = String.Concat(id, "-cancel");
		pMVar16 = null;
		pUVar14 = new UnityAction((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_Cancel);
		this.WireButton(pSVar11, pUVar14);
		pSVar11 = String.Concat(id, "-save");
		pMVar16 = null;
		pUVar14 = new UnityAction((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_Save);
		this.WireButton(pSVar11, pUVar14);
		pGVar12 = this._visual;
		pMVar16 = null;
		bVar9 = ((Object)pGVar12 != null);
		if (!bVar9) {
	label_05375d48: ;
			this.SyncFields();
			return;
		}
		pGVar12 = this._visual;
		local_38 = targetAddress;
		__this_00 = new Action<GisketchUIColorPickerValue>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnVisualChanged);
		if (pGVar12 != null) {
			a = pGVar12.Changed;
			do {
				obj = Delegate.Combine((Delegate)a, (Delegate)__this_00);
				pMVar16 = null;
				if ((obj != null) &&(pMVar16 = (MethodInfo)((object)obj as Action<GisketchUIColorPickerValue>), pMVar16 == null)) {
					throw new InvalidCastException();
				}
				pSVar15 = il2cpp_codegen_interlocked_compare_exchange_ref(&pGVar12.Changed, pMVar16, a);
				bVar9 = pSVar15 != a;
				a = pSVar15;
			} while (bVar9);
			pGVar12 = *local_38;
			if (pGVar12 != null) {
				fVar5 = this._value.S;
				fVar6 = this._value.V;
				uVar1 = this._value.G;
				uVar2 = this._value.B;
				uVar3 = this._value.A;
				fVar4 = this._value.H;
				pGVar12._value.R = this._value.R;
				pGVar12._value.G = uVar1;
				pGVar12._value.B = uVar2;
				pGVar12._value.A = uVar3;
				pGVar12._value.H = fVar4;
				pGVar12._value.S = fVar5;
				pGVar12._value.V = fVar6;
				pGVar12.RefreshTextures();
				pGVar12.RefreshMarkers();
				goto label_05375d48;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x52777B0", Offset = "0x52767B0", VA = "0x52777B0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnDestroy): 2 lines keep C-only constructs
		GisketchUIColorPickerVisual pGVar1;
		bool bVar3;
		Action<GisketchUIColorPickerValue> __this_00;
		Action<GisketchUIColorPickerValue> pSVar4;
		Delegate obj;
		object value;
		Action<GisketchUIColorPickerValue> source;

		pGVar1 = this._visual;
		bVar3 = ((Object)pGVar1 != null);
		if (bVar3) {
			pGVar1 = this._visual;
			__this_00 = new Action<GisketchUIColorPickerValue>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnVisualChanged);
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			source = pGVar1.Changed;
			do {
				obj = Delegate.Remove((Delegate)source, (Delegate)__this_00);
				value = null;
				if (obj != null) {
					value = ((object)obj as Action<GisketchUIColorPickerValue>);
					if (value == null) {
						throw new InvalidCastException();
					}
				}
				pSVar4 = il2cpp_codegen_interlocked_compare_exchange_ref(&pGVar1.Changed, value, source);
				bVar3 = pSVar4 != source;
				source = pSVar4;
			} while (bVar3);
		}
		return;
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x52779B0", Offset = "0x52769B0", VA = "0x52779B0")]
	private void OnVisualChanged(GisketchUIColorPickerValue value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnVisualChanged): 2 lines keep C-only constructs
		String id;
		GameObject source;
		GisketchUIColorPickerValue value_00;
		MethodInfo pMVar1;

		pMVar1 = value._0_8_;
		if (this._syncing != false) {
			return;
		}
		*(MethodInfo*)&this._value = pMVar1;
		this._value.S = value.S;
		this._value.V = value.V;
		this.SyncFields();
		id = this._id;
		source = this._source;
		value_00 = this._value;
		GisketchUIColorPicker.Preview(id, (GisketchUIColorPickerValue)value_00, source);
		return;
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x5277A60", Offset = "0x5276A60", VA = "0x5277A60")]
	private void OnRgbChanged(string _)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnRgbChanged): 13 lines keep C-only constructs
		bool bVar1;
		byte[] auVar2 = new byte[16];
		byte[] auVar3 = new byte[16];
		Color rgbColor;
		byte local_1b;
		byte local_1a;
		byte local_19;
		GisketchUIColorPickerValue local_18;

		local_19 = 0;
		local_1a = 0;
		local_1b = 0;
		if (this._syncing == false) {
			bVar1 = this.TryRgb(ref local_19, ref local_1a, ref local_1b);
			if (bVar1) {
				local_18.G = local_1a;
				local_18.R = local_19;
				auVar2._0_4_ = (float)local_19;
				auVar2._4_4_ = (float)local_1a;
				auVar2._8_8_ = 0;
				auVar2 = divps(auVar2, _DAT_01009880);
				local_18.A = this._value.A;
				local_18.B = local_1b;
				local_18._4_12_ = SUB1612((byte[])0x0, 4);
				auVar3._0_4_ = (float)local_1b;
				auVar3._4_4_ = (float)local_18.A;
				auVar3._8_8_ = 0;
				auVar3 = divps(auVar3, _DAT_01009880);
				rgbColor._0_8_ = auVar2._0_8_;
				rgbColor._8_8_ = auVar3._0_8_;
				Color.RGBToHSV(rgbColor, ref local_18.H, ref local_18.S, ref local_18.V);
				this.SetValue(local_18, true);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x5278030", Offset = "0x5277030", VA = "0x5278030")]
	private void OnHexChanged(string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnHexChanged): clean
		TMP_InputField pTVar1;
		GisketchUIColorPickerValue value;
		bool bVar2;
		String b;
		GisketchUIColorPickerValue GStack_28;

		GStack_28.R = 0;
		GStack_28.G = 0;
		GStack_28.B = 0;
		GStack_28.A = 0;
		GStack_28.H = 0.0;
		GStack_28.S = 0.0;
		GStack_28.V = 0.0;
		if (this._syncing == false) {
			pTVar1 = this._hex;
			bVar2 = ((Object)pTVar1 == null);
			if (!bVar2) {
				b = GisketchUIColorPickerValue.FilterHexInput(text, this._enableAlpha);
				pTVar1 = this._hex;
				if (pTVar1 == null) {
	label_05378115: ;
					throw new NullReferenceException();
				}
				bVar2 = (pTVar1.m_Text != b);
				if (bVar2) {
					pTVar1 = this._hex;
					if (pTVar1 == null) goto label_05378115;
					pTVar1.SetTextWithoutNotify(b);
				}
				bVar2 = GisketchUIColorPickerValue.TryParse(b, this._enableAlpha, ref GStack_28);
				if (bVar2) {
					value.S = GStack_28.S;
					value.V = GStack_28.V;
					value.R = GStack_28.R;
					value.G = GStack_28.G;
					value.B = GStack_28.B;
					value.A = GStack_28.A;
					value.H = GStack_28.H;
					this.SetValue(value, true);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x52782E0", Offset = "0x52772E0", VA = "0x52782E0")]
	private void Save()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Save): 10 lines keep C-only constructs
		TMP_InputField pTVar1;
		String id;
		GameObject source;
		GisketchUIRoot pGVar2;
		GisketchOverlayManager __this_00;
		ulong uVar3;
		ulong uVar4;
		bool bVar5;
		String* ppSVar6;
		float fVar7;
		float fVar8;
		GisketchUIColorPickerValue value;
		GisketchUIColorPickerValue GStack_48;
		float fStack_38;
		float fStack_34;

		GStack_48.R = 0;
		GStack_48.G = 0;
		GStack_48.B = 0;
		GStack_48.A = 0;
		GStack_48.H = 0.0;
		GStack_48.S = 0.0;
		GStack_48.V = 0.0;
		pTVar1 = this._hex;
		bVar5 = ((Object)pTVar1 != null);
		if (bVar5) {
			pTVar1 = this._hex;
			if (pTVar1 == null) {
				throw new NullReferenceException();
			}
			ppSVar6 = &pTVar1.m_Text;
		}
		else {
			ppSVar6 = *(String**)(g_data_07556758 + 0xb8);
		}
		bVar5 = GisketchUIColorPickerValue.TryParse(*ppSVar6, this._enableAlpha, ref GStack_48);
		uVar3 = GStack_48._0_8_;
		if (bVar5) {
			id = this._id;
			source = this._source;
			fVar7 = GStack_48.S;
			fVar8 = GStack_48.V;
			if ((typeof(GisketchUIColorPicker)._2).cctor_finished_or_no_cctor == 0) {
				fStack_38 = GStack_48.S;
				fStack_34 = GStack_48.V;
				fVar7 = fStack_38;
				fVar8 = fStack_34;
			}
			uVar4 = GStack_48._0_8_;
			value.V = fVar8;
			value.S = fVar7;
			GStack_48.R = (uint8_t)uVar3;
			GStack_48.G = SUB81(uVar3, 1);
			GStack_48.B = SUB81(uVar3, 2);
			GStack_48.A = SUB81(uVar3, 3);
			GStack_48.H = SUB84(uVar3, 4);
			value.R = GStack_48.R;
			value.G = GStack_48.G;
			value.B = GStack_48.B;
			value.A = GStack_48.A;
			value.H = GStack_48.H;
			GStack_48._0_8_ = uVar4;
			GisketchUIColorPicker.Commit(id, value, source);
			pGVar2 = this._root;
			if ((pGVar2 != null) &&(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 != null)) {
				__this_00.CloseTop(true);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x5278410", Offset = "0x5277410", VA = "0x5278410")]
	private void Cancel()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Cancel): clean
		String id;
		GameObject source;
		GisketchUIRoot pGVar1;
		GisketchOverlayManager __this_00;

		id = this._id;
		source = this._source;
		if ((typeof(GisketchUIColorPicker)._2).cctor_finished_or_no_cctor == 0) {
		}
		GisketchUIColorPicker.Cancel(id, source);
		pGVar1 = this._root;
		if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
			return;
		}
		__this_00.CloseTop(true);
		return;
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x5277F30", Offset = "0x5276F30", VA = "0x5277F30")]
	private void SetValue(GisketchUIColorPickerValue value, bool visual)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SetValue): 2 lines keep C-only constructs
		GisketchUIColorPickerVisual pGVar1;
		String id;
		GameObject source;
		GisketchUIColorPickerValue value_00;
		byte uVar2;
		byte uVar3;
		byte uVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		bool bVar8;
		MethodInfo pMVar9;

		pMVar9 = value._0_8_;
		*(MethodInfo*)&this._value = pMVar9;
		this._value.S = value.S;
		this._value.V = value.V;
		this.SyncFields();
		if (visual) {
			pGVar1 = this._visual;
			bVar8 = ((Object)pGVar1 != null);
			if (bVar8) {
				pGVar1 = this._visual;
				if (pGVar1 == null) {
					throw new NullReferenceException();
				}
				fVar6 = this._value.S;
				fVar7 = this._value.V;
				uVar2 = this._value.G;
				uVar3 = this._value.B;
				uVar4 = this._value.A;
				fVar5 = this._value.H;
				pGVar1._value.R = this._value.R;
				pGVar1._value.G = uVar2;
				pGVar1._value.B = uVar3;
				pGVar1._value.A = uVar4;
				pGVar1._value.H = fVar5;
				pGVar1._value.S = fVar6;
				pGVar1._value.V = fVar7;
				pGVar1.RefreshTextures();
				pGVar1.RefreshMarkers();
			}
		}
		id = this._id;
		source = this._source;
		value_00 = this._value;
		GisketchUIColorPicker.Preview(id, (GisketchUIColorPickerValue)value_00, source);
		return;
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x5277550", Offset = "0x5276550", VA = "0x5277550")]
	private void SyncFields()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SyncFields): 75 lines keep C-only constructs
		GisketchUIColorPickerValue __this_00;
		ushort uVar1;
		ushort uVar2;
		uint uVar3;
		uint uVar4;
		TMP_InputField pTVar5;
		byte[] auVar6 = new byte[13];
		byte[] auVar7 = new byte[13];
		byte[] auVar8 = new byte[13];
		byte[] auVar9 = new byte[13];
		byte[] auVar10 = new byte[13];
		byte[] auVar11 = new byte[13];
		ulong uVar12;
		uint3 uVar13;
		byte[] auVar14 = new byte[13];
		byte[] auVar15 = new byte[13];
		bool bVar16;
		String pSVar17;
		Transform root;
		Image x;
		byte[] auVar18 = new byte[16];
		byte[] auVar19 = new byte[16];
		byte[] auVar20 = new byte[16];
		byte[] auVar21 = new byte[16];
		Color UVar22;
		Color local_40;

		this._syncing = true;
		pTVar5 = this._r;
		__this_00 = &this._value;
		pSVar17 = __this_00.ToString();
		GisketchUIColorPickerPopover.SetText(pTVar5, pSVar17);
		pTVar5 = this._g;
		pSVar17 = (this._value.G).ToString();
		GisketchUIColorPickerPopover.SetText(pTVar5, pSVar17);
		pTVar5 = this._b;
		pSVar17 = (this._value.B).ToString();
		GisketchUIColorPickerPopover.SetText(pTVar5, pSVar17);
		pTVar5 = this._hex;
		bVar16 = this._enableAlpha;
		uVar1._0_1_ = this._value.B;
		uVar1._1_1_ = this._value.A;
		uVar3._0_1_ = __this_00.R;
		uVar3._1_1_ = __this_00.G;
		uVar3._2_1_ = __this_00.B;
		uVar3._3_1_ = __this_00.A;
		uVar13 = CONCAT12(uVar3._1_1_, (short)uVar3);
		uVar12 = (ulong)uVar13 & 0xffffffffffff00ff;
		auVar6._8_4_ = 0;
		auVar6._0_8_ = uVar12;
		auVar6[0xc] = uVar3._3_1_;
		auVar7[8] = uVar3._2_1_;
		auVar7._0_8_ = uVar12;
		auVar7[9] = 0;
		auVar7._10_3_ = auVar6._10_3_;
		auVar14._5_8_ = 0;
		auVar14._0_5_ = auVar7._8_5_;
		auVar8[4] = uVar3._1_1_;
		auVar8._0_4_ = (uint)uVar12;
		auVar8[5] = 0;
		auVar8._6_7_ = SUB137(auVar14 << 0x40, 6);
		auVar18._0_4_ = (float)((uint)uVar12 & 0xffff);
		auVar18._4_4_ = (float)auVar8._4_4_;
		auVar18._8_4_ = (float)auVar7._8_4_;
		auVar18._12_4_ = (float)(uint3)(auVar6._10_3_ >> 0x10);
		auVar18 = divps(auVar18, _DAT_01009880);
		auVar20._0_4_ = (float)(uVar1 & 0xff);
		auVar20._4_4_ = (float)(byte)uVar1._1_1_;
		auVar20._8_8_ = 0;
		auVar20 = divps(auVar20, _DAT_01009880);
		local_40._0_8_ = auVar18._0_8_;
		local_40._8_8_ = auVar20._0_8_;
		if (bVar16 == false) {
			pSVar17 = ColorUtility.ToHtmlStringRGB(ref local_40);
		}
		else {
			pSVar17 = ColorUtility.ToHtmlStringRGBA(ref local_40);
		}
		pSVar17 = String.Concat("#", pSVar17);
		GisketchUIColorPickerPopover.SetText(pTVar5, pSVar17);
		root = this.transform;
		pSVar17 = this._id;
		pSVar17 = String.Concat(pSVar17, "-preview");
		x = GisketchUIColorPicker.Find<Image>(root, pSVar17);
		bVar16 = ((Object)x != null);
		if (bVar16) {
			if (x == null) {
				throw new NullReferenceException();
			}
			uVar2._0_1_ = this._value.B;
			uVar2._1_1_ = this._value.A;
			auVar21._0_4_ = (float)(uVar2 & 0xff);
			auVar21._4_4_ = (float)(byte)uVar2._1_1_;
			auVar21._8_8_ = 0;
			auVar20 = divps(auVar21, _DAT_01009880);
			uVar4._0_1_ = __this_00.R;
			uVar4._1_1_ = __this_00.G;
			uVar4._2_1_ = __this_00.B;
			uVar4._3_1_ = __this_00.A;
			uVar13 = CONCAT12(uVar4._1_1_, (short)uVar4);
			uVar12 = (ulong)uVar13 & 0xffffffffffff00ff;
			auVar9._8_4_ = 0;
			auVar9._0_8_ = uVar12;
			auVar9[0xc] = uVar4._3_1_;
			auVar10[8] = uVar4._2_1_;
			auVar10._0_8_ = uVar12;
			auVar10[9] = 0;
			auVar10._10_3_ = auVar9._10_3_;
			auVar15._5_8_ = 0;
			auVar15._0_5_ = auVar10._8_5_;
			auVar11[4] = uVar4._1_1_;
			auVar11._0_4_ = (uint)uVar12;
			auVar11[5] = 0;
			auVar11._6_7_ = SUB137(auVar15 << 0x40, 6);
			auVar19._0_4_ = (float)((uint)uVar12 & 0xffff);
			auVar19._4_4_ = (float)auVar11._4_4_;
			auVar19._8_4_ = (float)auVar10._8_4_;
			auVar19._12_4_ = (float)(uint3)(auVar9._10_3_ >> 0x10);
			auVar18 = divps(auVar19, _DAT_01009880);
			UVar22._0_8_ = auVar18._0_8_;
			UVar22._8_8_ = auVar20._0_8_;
			x.set_color(UVar22);
		}
		this._syncing = false;
		return;
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x5277B40", Offset = "0x5276B40", VA = "0x5277B40")]
	private bool TryRgb(out byte r, out byte g, out byte b)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$TryRgb): clean
		TMP_InputField pTVar1;
		bool bVar2;
		bool bVar3;
		bool bVar4;
		CultureInfo pSVar5;
		String pSVar6;
		int iVar7;
		int iVar8;
		bool bVar9;
		int local_4c;
		int local_48;
		int local_44;
		byte local_40;
		byte local_38;

		local_40 = g;
		pTVar1 = this._r;
		bVar2 = ((Object)pTVar1 != null);
		if (bVar2) {
			pTVar1 = this._r;
			if (pTVar1 == null) goto label_05377ea9;
			pSVar6 = pTVar1.m_Text;
		}
		else {
			pSVar6 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		local_4c = 0;
		*r = 0;
		local_38 = r;
		pSVar5 = CultureInfo.InvariantCulture;
		bVar2 = Int32.TryParse(pSVar6, 7, (IFormatProvider)pSVar5, ref local_4c);
		if (bVar2) {
			iVar7 = 0xff;
			if (local_4c < 0xff) {
				iVar7 = local_4c;
			}
			iVar8 = 0;
			if (0 < iVar7) {
				iVar8 = iVar7;
			}
			*local_38 = (uint8_t)iVar8;
		}
		pTVar1 = this._g;
		bVar3 = ((Object)pTVar1 != null);
		if (bVar3) {
			pTVar1 = this._g;
			if (pTVar1 == null) goto label_05377ea9;
			pSVar6 = pTVar1.m_Text;
		}
		else {
			pSVar6 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		local_48 = 0;
		*local_40 = 0;
		pSVar5 = CultureInfo.InvariantCulture;
		bVar3 = Int32.TryParse(pSVar6, 7, (IFormatProvider)pSVar5, ref local_48);
		if (bVar3) {
			iVar7 = 0xff;
			if (local_48 < 0xff) {
				iVar7 = local_48;
			}
			iVar8 = 0;
			if (0 < iVar7) {
				iVar8 = iVar7;
			}
			*local_40 = (uint8_t)iVar8;
		}
		pTVar1 = this._b;
		bVar4 = ((Object)pTVar1 != null);
		if (bVar4) {
			pTVar1 = this._b;
			if (pTVar1 == null) {
	label_05377ea9: ;
				throw new NullReferenceException();
			}
			pSVar6 = pTVar1.m_Text;
		}
		else {
			pSVar6 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		local_44 = 0;
		*b = 0;
		pSVar5 = CultureInfo.InvariantCulture;
		bVar4 = Int32.TryParse(pSVar6, 7, (IFormatProvider)pSVar5, ref local_44);
		if (bVar4) {
			iVar7 = 0xff;
			if (local_44 < 0xff) {
				iVar7 = local_44;
			}
			if (iVar7 < 1) {
				iVar7 = 0;
			}
			*b = (uint8_t)iVar7;
			if ((bVar2 && bVar3) && bVar4) {
				pTVar1 = this._r;
				pSVar6 = local_38.ToString();
				GisketchUIColorPickerPopover.SetText(pTVar1, pSVar6);
				pTVar1 = this._g;
				pSVar6 = local_40.ToString();
				GisketchUIColorPickerPopover.SetText(pTVar1, pSVar6);
				pTVar1 = this._b;
				pSVar6 = b.ToString();
				GisketchUIColorPickerPopover.SetText(pTVar1, pSVar6);
			}
		}
		else {
		}
		return bVar9;
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x52770A0", Offset = "0x52760A0", VA = "0x52770A0")]
	private void WireRgbInput(TMP_InputField input)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireRgbInput): 3 lines keep C-only constructs
		TMP_InputField.OnChangeEvent __this_00;
		bool bVar1;
		TMP_InputField.OnValidateInput __this_01;
		TMP_InputField.OnValidateInput pTVar2;
		UnityAction<T0> __this_02;

		bVar1 = ((Object)input == null);
		if (bVar1) {
			return;
		}
		if (input != null) {
			pTVar2 = input.m_OnValidateInput;
			__this_01 = new TMP_InputField.OnValidateInput(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_ValidateDigit);
			pTVar2 = (TMP_InputField.OnValidateInput)Delegate.Combine((Delegate)pTVar2, (Delegate)__this_01);
			if ((pTVar2 != null) &&(pTVar2.klass != typeof(TMP_InputField.OnValidateInput))) {
				throw new InvalidCastException();
			}
			input.onValidateInput = pTVar2;
			__this_00 = input.m_OnValueChanged;
			__this_02 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnRgbChanged);
			if (__this_00 != null) {
				__this_00.AddListener(__this_02);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x5277200", Offset = "0x5276200", VA = "0x5277200")]
	private void WireHexInput(TMP_InputField input)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireHexInput): 3 lines keep C-only constructs
		TMP_InputField.OnChangeEvent __this_00;
		bool bVar1;
		TMP_InputField.OnValidateInput __this_01;
		TMP_InputField.OnValidateInput pTVar2;
		UnityAction<T0> __this_02;

		bVar1 = ((Object)input == null);
		if (bVar1) {
			return;
		}
		if (input != null) {
			pTVar2 = input.m_OnValidateInput;
			__this_01 = new TMP_InputField.OnValidateInput(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_ValidateHex);
			pTVar2 = (TMP_InputField.OnValidateInput)Delegate.Combine((Delegate)pTVar2, (Delegate)__this_01);
			if ((pTVar2 != null) &&(pTVar2.klass != typeof(TMP_InputField.OnValidateInput))) {
				throw new InvalidCastException();
			}
			input.onValidateInput = pTVar2;
			__this_00 = input.m_OnValueChanged;
			__this_02 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnHexChanged);
			if (__this_00 != null) {
				__this_00.AddListener(__this_02);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x5277360", Offset = "0x5276360", VA = "0x5277360")]
	private void WireButton(string id, UnityAction action)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireButton): clean
		UnityEvent __this_00;
		bool bVar1;
		Transform root;
		Button x;

		root = this.transform;
		x = GisketchUIColorPicker.Find<Button>(root, id);
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if ((x == null) ||(__this_00 = (UnityEvent)x.m_OnClick, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.AddListener(action);
			return;
		}
		return;
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x5278490", Offset = "0x5277490", VA = "0x5278490")]
	private static void SetText(TMP_InputField input, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SetText): clean
		bool bVar1;

		bVar1 = ((Object)input != null);
		if (bVar1) {
			if (input == null) {
				throw new NullReferenceException();
			}
			bVar1 = (input.m_Text != value);
			if (bVar1) {
				input.SetTextWithoutNotify(value);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x52785D0", Offset = "0x52775D0", VA = "0x52785D0")]
	private static char ValidateDigit(string text, int charIndex, char addedChar)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$ValidateDigit): clean
		ushort uVar1;

		if ((ushort)(addedChar - 0x30) < 10) {
		}
		return uVar1;
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x52785E0", Offset = "0x52775E0", VA = "0x52785E0")]
	private static char ValidateHex(string text, int charIndex, char addedChar)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$ValidateHex): clean
		ushort uVar1;
		ushort uVar2;

		uVar1 = Char.ToUpperInvariant(addedChar);
		if (uVar1 == 0x23) {
			if (charIndex == 0) {
			}
		}
		else {
			if ((ushort)(uVar1 - 0x41) < 6) {
			}
			if ((ushort)(uVar1 - 0x30) < 10) {
			}
		}
		return uVar2;
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x5278640", Offset = "0x5277640", VA = "0x5278640")]
	public GisketchUIColorPickerPopover()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$.ctor): clean
		base();
		return;
	}
}
