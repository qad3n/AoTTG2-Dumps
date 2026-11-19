// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPicker
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200009C")]
public sealed class GisketchUIColorPicker : AottgComponent
{
	[Token(Token = "0x200009D")]
	internal readonly struct Definition
	{
		[Token(Token = "0x4000359")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly string Id;

		[Token(Token = "0x400035A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly bool EnableAlpha;

		[Token(Token = "0x400035B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly Action<GisketchActionContext> Save;

		[Token(Token = "0x400035C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly bool LivePreview;

		[Token(Token = "0x400035D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
		public readonly bool Disabled;

		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x5272700", Offset = "0x5271700", VA = "0x5272700")]
		public Definition(string id, bool enableAlpha, Action<GisketchActionContext> save, bool livePreview, bool disabled)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker.Definition$$.ctor): clean
			this.Id = id;
			this.EnableAlpha = enableAlpha;
			this.Save = save;
			this.LivePreview = livePreview;
			this.Disabled = disabled;
			return;
		}
	}

	[Token(Token = "0x400034E")]
	private const string VisualType = "GisketchUIColorPickerVisual";

	[Token(Token = "0x400034F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Definition> Definitions;

	[Token(Token = "0x4000350")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, string> Values;

	[Token(Token = "0x4000351")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000352")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x4000353")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _value;

	[Token(Token = "0x4000354")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _enableAlpha;

	[Token(Token = "0x4000355")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Action<GisketchActionContext> _save;

	[Token(Token = "0x4000356")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool _livePreview;

	[Token(Token = "0x4000357")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private readonly bool _compact;

	[Token(Token = "0x4000358")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	private readonly bool _disabled;

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x5271FC0", Offset = "0x5270FC0", VA = "0x5271FC0")]
	static GisketchUIColorPicker()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$.cctor): 13 lines keep C-only constructs
		byte uVar1;
		uint uVar2;
		OrdinalIgnoreCaseComparer pSVar3;
		GisketchComponentRegistry pGVar5;
		Dictionary<object, object> __this;
		String value;
		MethodInfo pMVar6;
		sbyte cVar7;
		bool bVar8;
		Dictionary<string, GisketchUIColorPicker.Definition> __this_00;
		Dictionary<string, string> __this_01;
		GisketchComponentFactory value_00;
		byte puVar9;
		object ex;

		if (Il2CppMethodInitialized_07542a62 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchUIColorPicker_Definition_ctor) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07542a62 = true;
			if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor != 0) goto label_05371fec;
	label_053721f1: ;
			if (Il2CppMethodInitialized_07542886 != false) goto label_05371ff9;
	label_05372203: ;
			Il2CppMethodInitialized_07542886 = true;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) goto label_053721f1;
	label_05371fec: ;
			if (Il2CppMethodInitialized_07542886 == false) goto label_05372203;
	label_05371ff9: ;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pSVar3 = StringComparer.s_ordinalIgnoreCase;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, GisketchUIColorPicker.Definition>));
		__this_00 = new Dictionary<object, GisketchUIColorPicker.Definition>((System_Collections_Generic_IEqualityComparer_TKey__o)pSVar3);
		GisketchUIColorPicker.Definitions = __this_00;
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pSVar3 = StringComparer.s_ordinalIgnoreCase;
		__this_01 = new Dictionary<string, string>((System_Collections_Generic_IEqualityComparer_TKey__o)pSVar3);
		GisketchUIColorPicker.Values = __this_01;
		pGVar5 = GisketchComponentRegistry.Default;
		pMVar6 = MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_BuildVisual;
		value_00.method_ptr =(intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_BuildVisual.virtualMethodPointer;
		value_00.method = (intptr_t)pMVar6;
		value_00.m_target = null;
		uVar1 = pMVar6.parameters_count;
		value_00.method_code = (intptr_t)value_00;
		cVar7 = il2cpp_runtime_helper_030d61c0();
		if (cVar7 == false) {
			if (uVar1 != 3) {
				ex = il2cpp_codegen_get_argument_exception(null, "Delegate to an instance method cannot have null \'this\'.");
				throw ex;
			}
			puVar9 = &label_02d4ba20;
		}
		else {
			if (uVar1 != 4) {
				value_00.invoke_impl = value_00.method_ptr;
				value_00.method_code = (intptr_t)value_00.m_target;
				value_00.extra_arg = (intptr_t)&label_02d4b9b0;
				value = "GisketchUIColorPickerVisual";
				goto joined_r0x05372256;
			}
			puVar9 = &label_02d4ba50;
		}
		value_00.invoke_impl = (intptr_t)puVar9;
		value_00.extra_arg = (intptr_t)&label_02d4b9b0;
		value = "GisketchUIColorPickerVisual";
	joined_r0x05372256: ;
		"GisketchUIColorPickerVisual" = value;
		if (pGVar5 != null) {
			bVar8 = String.IsNullOrEmpty(value);
			if (bVar8) {
				return;
			}
			__this = (Dictionary<object, object>)pGVar5._factories;
			if (__this != null) {
				__this.set_Item((object)value, (object)value_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x5272330", Offset = "0x5271330", VA = "0x5272330")]
	public GisketchUIColorPicker(string id, string label, string value, [Optional] Action<GisketchActionContext> save, bool enableAlpha = false, bool livePreview = false, bool compact = false, bool disabled = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$.ctor): clean
		base();
		this._id = id;
		this._label = label;
		this._value = value;
		this._save = save;
		this._enableAlpha = enableAlpha;
		this._livePreview = livePreview;
		this._compact = compact;
		this._disabled = disabled;
		return;
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x52723C0", Offset = "0x52713C0", VA = "0x52723C0")]
	public static string Value(string id, string fallback, bool enableAlpha = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Value): 1 lines keep C-only constructs
		Dictionary<object, object> __this;
		bool bVar1;
		String local_28;

		local_28 = null;
		__this = (Dictionary<object, object>)GisketchUIColorPicker.Values;
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this.TryGetValue((object)id, (object*)&local_28);
		if (!bVar1) {
			local_28 = GisketchUIColorPickerValue.Normalize(fallback, enableAlpha, null);
		}
		return local_28;
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x5272590", Offset = "0x5271590", VA = "0x5272590")]
	public static void Register(string id, string value, [Optional] Action<GisketchActionContext> save, bool enableAlpha = false, bool livePreview = false, bool disabled = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Register): 6 lines keep C-only constructs
		Dictionary<object, object> __this;
		Dictionary<string, GisketchUIColorPicker.Definition> __this_00;
		GisketchUIColorPicker.Definition value_00;
		bool bVar1;
		String value_01;
		undefined7 in_register_00000009;
		MethodInfo method_00;
		String local_58;
		ulong uStack_50;
		Action<GisketchActionContext> pSStack_48;
		ulong uStack_40;
		Action<GisketchActionContext> local_38;

		method_00 = (MethodInfo)CONCAT71(in_register_00000009, enableAlpha);
		bVar1 = String.IsNullOrEmpty(id);
		if (bVar1) {
			return;
		}
		local_38 = save;
		__this = (Dictionary<object, object>)GisketchUIColorPicker.Values;
		value_01 = GisketchUIColorPickerValue.Normalize(value, enableAlpha, null);
		if (__this != null) {
			__this.set_Item((object)id, (object)value_01);
			__this_00 = GisketchUIColorPicker.Definitions;
			uStack_50 = 0;
			pSStack_48 = null;
			uStack_40 = 0;
			local_58 = id;
			uStack_50 = CONCAT71(uStack_50._1_7_, enableAlpha);
			pSStack_48 = local_38;
			uStack_40._0_2_ = CONCAT11(disabled, livePreview);
			if (__this_00 != null) {
				value_00._8_8_ = uStack_50;
				value_00.Id = local_58;
				value_00.Save = pSStack_48;
				value_00.LivePreview = livePreview;
				value_00.Disabled = disabled;
				value_00._26_6_ = uStack_40._2_6_;
				__this_00.set_Item((object)id, value_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x5272750", Offset = "0x5271750", VA = "0x5272750")]
	public static void SetValue(string id, string value, [Optional][DefaultParameterValue(false)] bool enableAlpha, [Optional] GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetValue): 2 lines keep C-only constructs
		Dictionary<string, GisketchUIColorPicker.Definition> __this;
		Dictionary<object, object> __this_00;
		bool bVar1;
		String value_00;
		Transform pUVar2;
		String pSVar3;
		GisketchUIColorPicker.Definition local_48;

		local_48.Save = null;
		local_48.LivePreview = false;
		local_48.Disabled = false;
		local_48._26_6_ = 0;
		local_48.Id = null;
		local_48.EnableAlpha = false;
		local_48._9_7_ = 0;
		bVar1 = String.IsNullOrEmpty(id);
		if (bVar1) {
			return;
		}
		__this = GisketchUIColorPicker.Definitions;
		if (__this != null) {
			bVar1 = __this.TryGetValue((object)id, ref local_48);
			if (bVar1) {
				enableAlpha = local_48.EnableAlpha;
			}
			value_00 = GisketchUIColorPickerValue.Normalize(value, (bool)(enableAlpha & 1), null);
			__this_00 = (Dictionary<object, object>)GisketchUIColorPicker.Values;
			if (__this_00 != null) {
				__this_00.set_Item((object)id, (object)value_00);
				pUVar2 = null;
				bVar1 = ((Object)source != null);
				if (bVar1) {
					if ((source == null) ||(pUVar2 = source.transform, pUVar2 == null)) goto label_0537296b;
					pUVar2 = pUVar2.root;
				}
				pSVar3 = String.Concat(id, "-swatch");
				GisketchUIColorPicker.SetSwatch(pUVar2, pSVar3, value_00);
				pSVar3 = String.Concat(id, "-value");
				GisketchUIColorPicker.SetText(pUVar2, pSVar3, value_00);
				return;
			}
		}
	label_0537296b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x5272BB0", Offset = "0x5271BB0", VA = "0x5272BB0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Build): 6 lines keep C-only constructs
		bool bVar1;
		bool livePreview;
		bool disabled;
		String pSVar2;
		Action<GisketchActionContext> save;
		GisketchUIColorPicker.c__DisplayClass16_0 __this_00;
		String* ppSVar3;
		String pSVar4;
		Action<AottgUi> __this_01;
		GisketchLength __this_02;
		GisketchLayoutDefinition layout;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchUIColorPicker.c__DisplayClass16_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			pSVar4 = this._id;
			pSVar2 = this._value;
			save = this._save;
			bVar1 = this._enableAlpha;
			livePreview = this._livePreview;
			disabled = this._disabled;
			GisketchUIColorPicker.Register(pSVar4, pSVar2, save, bVar1, livePreview, disabled);
			bVar1 = this._enableAlpha;
			if (bVar1 == false) {
				ppSVar3 = &"#FFFFFF";
			}
			else {
				ppSVar3 = &"#FFFFFFFF";
			}
			pSVar4 = this._id;
			pSVar2 = *ppSVar3;
			pSVar4 = GisketchUIColorPicker.Value(pSVar4, pSVar2, bVar1);
			ppSVar3 = &__this_00.value;
			__this_00.value = pSVar4;
			if (this._compact != false) {
				this.BuildCompact(ui, *ppSVar3);
				return;
			}
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass16_0_Build_b__0);
			pSVar4 = String.Concat(this._id, "-color-picker");
			__this_02 = new GisketchLength();
			if (__this_02 != null) {
				__this_02.value = 100.0;
				__this_02.unit = "percent";
				layout = AottgUi.Layout("Row", null, "Center", null, null, 10.0, __this_02, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				if (ui != null) {
					ui.Panel("row", __this_01, pSVar4, layout, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x5272EE0", Offset = "0x5271EE0", VA = "0x5272EE0")]
	private void BuildCompact(AottgUi ui, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$BuildCompact): 3 lines keep C-only constructs
		GisketchUIColorPicker.c__DisplayClass17_0 __this_00;
		Action<AottgUi> __this_01;
		String id;
		GisketchLength __this_02;
		GisketchLayoutDefinition layout;

		if (Il2CppMethodInitialized_07542a67 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0_BuildCompact_b__0) ;
			Il2CppMethodInitialized_07542a67 = true;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchUIColorPicker.c__DisplayClass17_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			__this_00.value = value;
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0_BuildCompact_b__0);
			id = String.Concat(this._id, "-color-picker");
			__this_02 = new GisketchLength();
			if (__this_02 != null) {
				__this_02.value = 70.0;
				__this_02.unit = "point";
				layout = AottgUi.Layout("Column", null, "Center", null, null, 4.0, __this_02, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				if (ui != null) {
					ui.Panel("clear", __this_01, id, layout, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x5273110", Offset = "0x5272110", VA = "0x5273110")]
	internal static string Current(string id, bool enableAlpha)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Current): clean
		String pSVar1;
		String pSVar2;

		pSVar1 = "#FFFFFFFF";
		pSVar2 = "#FFFFFF";
		if (enableAlpha) {
			pSVar2 = pSVar1;
		}
		pSVar2 = GisketchUIColorPicker.Value(id, pSVar2, enableAlpha);
		return pSVar2;
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x52731A0", Offset = "0x52721A0", VA = "0x52731A0")]
	internal static void Commit(string id, GisketchUIColorPickerValue value, GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Commit): 171 lines keep C-only constructs
		Dictionary<string, GisketchUIColorPicker.Definition> __this;
		Dictionary<object, object> __this_00;
		ushort uVar1;
		ushort uVar2;
		ushort uVar3;
		ushort uVar4;
		ushort uVar5;
		ushort uVar6;
		byte bVar10;
		byte bVar9;
		byte bVar8;
		byte bVar7;
		byte bVar14;
		byte bVar13;
		byte bVar12;
		byte bVar11;
		byte[] auVar15 = new byte[12];
		byte[] auVar16 = new byte[15];
		byte[] auVar17 = new byte[14];
		byte[] auVar18 = new byte[15];
		byte[] auVar19 = new byte[14];
		byte[] auVar20 = new byte[15];
		byte[] auVar21 = new byte[15];
		byte[] auVar22 = new byte[15];
		byte[] auVar23 = new byte[15];
		byte[] auVar24 = new byte[15];
		byte[] auVar25 = new byte[14];
		byte[] auVar26 = new byte[15];
		byte[] auVar27 = new byte[14];
		byte[] auVar28 = new byte[15];
		byte[] auVar29 = new byte[15];
		byte[] auVar30 = new byte[15];
		byte[] auVar31 = new byte[15];
		byte[] auVar32 = new byte[15];
		byte[] auVar33 = new byte[15];
		byte[] auVar34 = new byte[15];
		byte[] auVar35 = new byte[15];
		byte[] auVar36 = new byte[15];
		unkuint9 Var37;
		byte[] auVar38 = new byte[15];
		byte[] auVar39 = new byte[11];
		byte[] auVar40 = new byte[15];
		byte[] auVar41 = new byte[14];
		byte[] auVar42 = new byte[15];
		byte[] auVar43 = new byte[15];
		byte[] auVar44 = new byte[11];
		byte[] auVar45 = new byte[15];
		byte[] auVar46 = new byte[14];
		uint6 uVar47;
		ulong uVar48;
		Action<GisketchActionContext> pSVar49;
		bool bVar50;
		String pSVar51;
		Transform pUVar52;
		String pSVar53;
		GisketchNodeDefinition __this_01;
		uint uVar54;
		byte[] auVar55 = new byte[13];
		byte[] auVar56 = new byte[16];
		byte[] auVar57 = new byte[16];
		byte[] auVar58 = new byte[16];
		byte[] auVar59 = new byte[16];
		ushort uVar60;
		ushort uVar61;
		byte[] auVar62 = new byte[13];
		ulong in_XMM3_Qb;
		GisketchActionContext local_88;
		GisketchUIColorPicker.Definition local_68;
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[16];

		local_68.Save = null;
		local_68.LivePreview = false;
		local_68.Disabled = false;
		local_68._26_6_ = 0;
		local_68.Id = null;
		local_68._8_8_ = 0;
		__this = GisketchUIColorPicker.Definitions;
		if (__this == null) {
	label_05373526: ;
			throw new NullReferenceException();
		}
		bVar50 = __this.TryGetValue((object)id, ref local_68);
		uVar48 = local_68._8_8_;
		if (bVar50) {
			uVar54 = value._0_4_;
			auVar15._4_8_ = in_XMM3_Qb;
			auVar15._0_4_ = value.H;
			auVar57._0_8_ = auVar15._0_8_ << 0x20;
			auVar57._8_4_ = uVar54;
			auVar57._12_4_ = value.H;
			uVar1 = value._2_2_ & 0xff;
			uVar3 = auVar57._11_2_ & 0xff;
			bVar7 = ((value._0_8_ & 0xff0000) != 0) * (uVar1 < 0x100) * value.B - (0xff < uVar1);
			uVar60 = (ushort)bVar7;
			bVar8 = ((auVar57._8_8_ & 0xff000000) != 0) * (uVar3 < 0x100) * value.A - (0xff < uVar3);
			uVar2 = (ushort)bVar8;
			bVar9 = ((value._0_8_ & 0xff0000) != 0) * (uVar1 < 0x100) * value.B - (0xff < uVar1);
			uVar4 = (ushort)bVar9;
			bVar10 = ((auVar57._8_8_ & 0xff000000) != 0) * (uVar3 < 0x100) * value.A - (0xff < uVar3);
			bVar11 = (bVar7 != 0) * (uVar60 < 0x100) * bVar7 - (0xff < uVar60);
			uVar61 = (ushort)bVar11;
			bVar12 = (bVar8 != 0) * (uVar2 < 0x100) * bVar8 - (0xff < uVar2);
			bVar13 = (bVar9 != 0) * (uVar4 < 0x100) * bVar9 - (0xff < uVar4);
			uVar1 = (ushort)bVar10;
			bVar14 = (bVar10 != 0) * (uVar1 < 0x100) * bVar10 - (0xff < uVar1);
			bVar7 = (bVar7 != 0) * (uVar60 < 0x100) * bVar7 - (0xff < uVar60);
			bVar8 = (bVar8 != 0) * (uVar2 < 0x100) * bVar8 - (0xff < uVar2);
			bVar9 = (bVar9 != 0) * (uVar4 < 0x100) * bVar9 - (0xff < uVar4);
			bVar10 = (bVar10 != 0) * (uVar1 < 0x100) * bVar10 - (0xff < uVar1);
			auVar55 = ZEXT413(uVar54);
			uVar1 = (ushort)bVar12;
			auVar62[1] = (bVar12 != 0) * (uVar1 < 0x100) * bVar12 - (0xff < uVar1);
			auVar62[0] = (bVar11 != 0) * (uVar61 < 0x100) * bVar11 - (0xff < uVar61);
			uVar3 = (ushort)bVar13;
			auVar62[2] = (bVar13 != 0) * (uVar3 < 0x100) * bVar13 - (0xff < uVar3);
			uVar2 = (ushort)bVar14;
			auVar62[3] = (bVar14 != 0) * (uVar2 < 0x100) * bVar14 - (0xff < uVar2);
			uVar4 = (ushort)bVar7;
			auVar62[4] = (bVar7 != 0) * (uVar4 < 0x100) * bVar7 - (0xff < uVar4);
			uVar60 = (ushort)bVar8;
			auVar62[5] = (bVar8 != 0) * (uVar60 < 0x100) * bVar8 - (0xff < uVar60);
			uVar5 = (ushort)bVar9;
			auVar62[6] = (bVar9 != 0) * (uVar5 < 0x100) * bVar9 - (0xff < uVar5);
			uVar6 = (ushort)bVar10;
			auVar62[7] = (bVar10 != 0) * (uVar6 < 0x100) * bVar10 - (0xff < uVar6);
			auVar62[8] = (bVar11 != 0) * (uVar61 < 0x100) * bVar11 - (0xff < uVar61);
			auVar62[9] = (bVar12 != 0) * (uVar1 < 0x100) * bVar12 - (0xff < uVar1);
			auVar62[10] = (bVar13 != 0) * (uVar3 < 0x100) * bVar13 - (0xff < uVar3);
			auVar62[0xb] = (bVar14 != 0) * (uVar2 < 0x100) * bVar14 - (0xff < uVar2);
			auVar62[0xc] = (bVar7 != 0) * (uVar4 < 0x100) * bVar7 - (0xff < uVar4);
			auVar59[0xd] = (bVar8 != 0) * (uVar60 < 0x100) * bVar8 - (0xff < uVar60);
			auVar59._0_13_ = auVar62;
			auVar59[0xe] = (bVar9 != 0) * (uVar5 < 0x100) * bVar9 - (0xff < uVar5);
			auVar59[0xf] = (bVar10 != 0) * (uVar6 < 0x100) * bVar10 - (0xff < uVar6);
			if (Il2CppMethodInitialized_07542a90 == false) {
				local_48 = ZEXT416(uVar54);
				local_38 = auVar59;
				auVar55 = local_48._0_13_;
				auVar62 = local_38._0_13_;
				Il2CppMethodInitialized_07542a90 = true;
			}
			auVar18[0xd] = 0;
			auVar18._0_13_ = auVar55;
			auVar18[0xe] = auVar55[7];
			auVar21[0xc] = auVar55[6];
			auVar21._0_12_ = auVar55._0_12_;
			auVar21._13_2_ = auVar18._13_2_;
			auVar23[0xb] = 0;
			auVar23._0_11_ = auVar55._0_11_;
			auVar23._12_3_ = auVar21._12_3_;
			auVar26[10] = auVar55[5];
			auVar26._0_10_ = auVar55._0_10_;
			auVar26._11_4_ = auVar23._11_4_;
			auVar29[9] = 0;
			auVar29._0_9_ = auVar55._0_9_;
			auVar29._10_5_ = auVar26._10_5_;
			auVar31[8] = auVar55[4];
			auVar31._0_8_ = auVar55._0_8_;
			auVar31._9_6_ = auVar29._9_6_;
			auVar36._7_8_ = 0;
			auVar36._0_7_ = auVar31._8_7_;
			Var37 = CONCAT81(SUB158(auVar36 << 0x40, 7), auVar55[3]);
			auVar38._9_6_ = 0;
			auVar38._0_9_ = Var37;
			auVar39._1_10_ = SUB1510(auVar38 << 0x30, 5);
			auVar39[0] = auVar55[2];
			auVar40._11_4_ = 0;
			auVar40._0_11_ = auVar39;
			auVar33[2] = auVar55[1];
			auVar33._0_2_ = auVar55._0_2_;
			auVar33._3_12_ = SUB1512(auVar40 << 0x20, 3);
			auVar35._2_13_ = auVar33._2_13_;
			auVar35._0_2_ = auVar55._0_2_ & 0xff;
			auVar19._10_2_ = 0;
			auVar19._0_10_ = auVar35._0_10_;
			auVar19._12_2_ = (short)Var37;
			uVar47 = CONCAT42(auVar19._10_4_, auVar39._0_2_);
			auVar41._6_8_ = 0;
			auVar41._0_6_ = uVar47;
			auVar27._4_2_ = auVar33._2_2_;
			auVar27._0_4_ = auVar35._0_4_;
			auVar27._6_8_ = SUB148(auVar41 << 0x40, 6);
			auVar56._0_4_ = (float)(auVar35._0_4_ & 0xffff);
			auVar56._4_4_ = (float)auVar27._4_4_;
			auVar56._8_4_ = (float)(int)uVar47;
			auVar56._12_4_ = (float)(auVar19._10_4_ >> 0x10);
			auVar57 = divps(auVar56, _DAT_01009880);
			auVar16[0xd] = 0;
			auVar16._0_13_ = auVar62;
			auVar16[0xe] = auVar62[7];
			auVar20[0xc] = auVar62[6];
			auVar20._0_12_ = auVar62._0_12_;
			auVar20._13_2_ = auVar16._13_2_;
			auVar22[0xb] = 0;
			auVar22._0_11_ = auVar62._0_11_;
			auVar22._12_3_ = auVar20._12_3_;
			auVar24[10] = auVar62[5];
			auVar24._0_10_ = auVar62._0_10_;
			auVar24._11_4_ = auVar22._11_4_;
			auVar28[9] = 0;
			auVar28._0_9_ = auVar62._0_9_;
			auVar28._10_5_ = auVar24._10_5_;
			auVar30[8] = auVar62[4];
			auVar30._0_8_ = auVar62._0_8_;
			auVar30._9_6_ = auVar28._9_6_;
			auVar42._7_8_ = 0;
			auVar42._0_7_ = auVar30._8_7_;
			Var37 = CONCAT81(SUB158(auVar42 << 0x40, 7), auVar62[3]);
			auVar43._9_6_ = 0;
			auVar43._0_9_ = Var37;
			auVar44._1_10_ = SUB1510(auVar43 << 0x30, 5);
			auVar44[0] = auVar62[2];
			auVar45._11_4_ = 0;
			auVar45._0_11_ = auVar44;
			auVar32[2] = auVar62[1];
			auVar32._0_2_ = auVar62._0_2_;
			auVar32._3_12_ = SUB1512(auVar45 << 0x20, 3);
			auVar34._2_13_ = auVar32._2_13_;
			auVar34._0_2_ = auVar62._0_2_ & 0xff;
			auVar17._10_2_ = 0;
			auVar17._0_10_ = auVar34._0_10_;
			auVar17._12_2_ = (short)Var37;
			uVar47 = CONCAT42(auVar17._10_4_, auVar44._0_2_);
			auVar46._6_8_ = 0;
			auVar46._0_6_ = uVar47;
			auVar25._4_2_ = auVar32._2_2_;
			auVar25._0_4_ = auVar34._0_4_;
			auVar25._6_8_ = SUB148(auVar46 << 0x40, 6);
			auVar58._0_4_ = (float)(auVar34._0_4_ & 0xffff);
			auVar58._4_4_ = (float)auVar25._4_4_;
			auVar58._8_4_ = (float)(int)uVar47;
			auVar58._12_4_ = (float)(auVar17._10_4_ >> 0x10);
			auVar59 = divps(auVar58, _DAT_01009880);
			local_88.ElementId = auVar57._0_8_;
			local_88.GameObject = auVar59._0_8_;
			if (((ulong)SUB81(uVar48, 0) & 1) == 0) {
				pSVar51 = ColorUtility.ToHtmlStringRGB(ref local_88);
			}
			else {
				pSVar51 = ColorUtility.ToHtmlStringRGBA(ref local_88);
			}
			pSVar51 = String.Concat("#", pSVar51);
			__this_00 = (Dictionary<object, object>)GisketchUIColorPicker.Values;
			if (__this_00 == null) goto label_05373526;
			__this_00.set_Item((object)id, (object)pSVar51);
			pUVar52 = null;
			bVar50 = ((Object)source != null);
			if (bVar50) {
				if ((source == null) ||(pUVar52 = source.transform, pUVar52 == null)) goto label_05373526;
				pUVar52 = pUVar52.root;
			}
			pSVar53 = String.Concat(id, "-swatch");
			GisketchUIColorPicker.SetSwatch(pUVar52, pSVar53, pSVar51);
			pSVar53 = String.Concat(id, "-value");
			GisketchUIColorPicker.SetText(pUVar52, pSVar53, pSVar51);
			pSVar49 = local_68.Save;
			if (local_68.Save != null) {
				__this_01 = new GisketchNodeDefinition();
				if (__this_01 == null) goto label_05373526;
				__this_01.id = "save";
				__this_01.value = pSVar51;
				local_88.Node = null;
				local_88.InputSource = 0;
				local_88._28_4_ = 0;
				local_88.ElementId = null;
				local_88.GameObject = null;
				local_88 = new GisketchActionContext(id, source, __this_01);
				(*(code)pSVar49.invoke_impl)(pSVar49.method_code,pSVar49.method);
			}
		}
		return;
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x52735E0", Offset = "0x52725E0", VA = "0x52735E0")]
	internal static void Preview(string id, GisketchUIColorPickerValue value, GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Preview): 143 lines keep C-only constructs
		Dictionary<string, GisketchUIColorPicker.Definition> __this;
		ushort uVar1;
		ushort uVar2;
		ushort uVar3;
		ushort uVar4;
		ushort uVar5;
		ushort uVar6;
		byte bVar10;
		byte bVar9;
		byte bVar8;
		byte bVar7;
		byte bVar14;
		byte bVar13;
		byte bVar12;
		byte bVar11;
		byte[] auVar15 = new byte[12];
		byte[] auVar16 = new byte[15];
		byte[] auVar17 = new byte[14];
		byte[] auVar18 = new byte[15];
		byte[] auVar19 = new byte[14];
		byte[] auVar20 = new byte[15];
		byte[] auVar21 = new byte[15];
		byte[] auVar22 = new byte[15];
		byte[] auVar23 = new byte[14];
		byte[] auVar24 = new byte[15];
		byte[] auVar25 = new byte[14];
		byte[] auVar26 = new byte[15];
		byte[] auVar27 = new byte[15];
		byte[] auVar28 = new byte[15];
		byte[] auVar29 = new byte[15];
		byte[] auVar30 = new byte[15];
		byte[] auVar31 = new byte[15];
		byte[] auVar32 = new byte[15];
		unkuint9 Var33;
		byte[] auVar34 = new byte[15];
		byte[] auVar35 = new byte[11];
		byte[] auVar36 = new byte[15];
		byte[] auVar37 = new byte[14];
		byte[] auVar38 = new byte[15];
		byte[] auVar39 = new byte[15];
		byte[] auVar40 = new byte[11];
		byte[] auVar41 = new byte[15];
		byte[] auVar42 = new byte[14];
		uint6 uVar43;
		byte[] auVar44 = new byte[13];
		undefined3 uVar45;
		uint uVar46;
		undefined5 uVar47;
		byte[] auVar48 = new byte[12];
		byte[] auVar49 = new byte[14];
		ulong uVar50;
		Action<GisketchActionContext> pSVar51;
		bool bVar52;
		GisketchNodeDefinition __this_00;
		String pSVar53;
		byte[] auVar54 = new byte[16];
		ushort uVar55;
		ushort uVar56;
		ulong in_XMM1_Qb;
		byte[] auVar57 = new byte[16];
		byte[] auVar58 = new byte[16];
		GisketchActionContext local_98;
		GisketchUIColorPicker.Definition local_78;
		byte[] local_58 = new byte[16];
		byte local_48;
		sbyte cStack_47;
		sbyte cStack_46;
		sbyte cStack_45;
		sbyte cStack_44;
		sbyte cStack_43;
		sbyte cStack_42;
		sbyte cStack_41;
		sbyte cStack_40;
		sbyte cStack_3f;
		sbyte cStack_3e;
		sbyte cStack_3d;
		sbyte cStack_3c;
		sbyte cStack_3b;
		sbyte cStack_3a;
		sbyte cStack_39;

		local_78.Save = null;
		local_78.LivePreview = false;
		local_78.Disabled = false;
		local_78._26_6_ = 0;
		local_78.Id = null;
		local_78._8_8_ = 0;
		__this = GisketchUIColorPicker.Definitions;
		if (__this == null) {
	label_05373820: ;
			throw new NullReferenceException();
		}
		bVar52 = __this.TryGetValue((object)id, ref local_78);
		pSVar51 = local_78.Save;
		if (((bVar52) && (((ulong)local_78.LivePreview & 1) != 0)) &&(local_78.Save != null)) {
			__this_00 = new GisketchNodeDefinition();
			if (__this_00 == null) goto label_05373820;
			auVar15._4_8_ = in_XMM1_Qb;
			auVar15._0_4_ = value.H;
			auVar54._0_8_ = auVar15._0_8_ << 0x20;
			auVar54._8_4_ = value._0_4_;
			auVar54._12_4_ = value.H;
			uVar1 = value._2_2_ & 0xff;
			uVar3 = auVar54._11_2_ & 0xff;
			bVar7 = ((value._0_8_ & 0xff0000) != 0) * (uVar1 < 0x100) * value.B - (0xff < uVar1);
			uVar55 = (ushort)bVar7;
			bVar8 = ((auVar54._8_8_ & 0xff000000) != 0) * (uVar3 < 0x100) * value.A - (0xff < uVar3);
			uVar2 = (ushort)bVar8;
			bVar9 = ((value._0_8_ & 0xff0000) != 0) * (uVar1 < 0x100) * value.B - (0xff < uVar1);
			uVar4 = (ushort)bVar9;
			bVar10 = ((auVar54._8_8_ & 0xff000000) != 0) * (uVar3 < 0x100) * value.A - (0xff < uVar3);
			bVar11 = (bVar7 != 0) * (uVar55 < 0x100) * bVar7 - (0xff < uVar55);
			uVar56 = (ushort)bVar11;
			bVar12 = (bVar8 != 0) * (uVar2 < 0x100) * bVar8 - (0xff < uVar2);
			bVar13 = (bVar9 != 0) * (uVar4 < 0x100) * bVar9 - (0xff < uVar4);
			uVar1 = (ushort)bVar10;
			bVar14 = (bVar10 != 0) * (uVar1 < 0x100) * bVar10 - (0xff < uVar1);
			bVar7 = (bVar7 != 0) * (uVar55 < 0x100) * bVar7 - (0xff < uVar55);
			bVar8 = (bVar8 != 0) * (uVar2 < 0x100) * bVar8 - (0xff < uVar2);
			bVar9 = (bVar9 != 0) * (uVar4 < 0x100) * bVar9 - (0xff < uVar4);
			bVar10 = (bVar10 != 0) * (uVar1 < 0x100) * bVar10 - (0xff < uVar1);
			local_58 = ZEXT416(value._0_4_);
			local_48 = (bVar11 != 0) * (uVar56 < 0x100) * bVar11 - (0xff < uVar56);
			uVar1 = (ushort)bVar12;
			cStack_47 = (bVar12 != 0) * (uVar1 < 0x100) * bVar12 - (0xff < uVar1);
			uVar3 = (ushort)bVar13;
			cStack_46 = (bVar13 != 0) * (uVar3 < 0x100) * bVar13 - (0xff < uVar3);
			uVar2 = (ushort)bVar14;
			cStack_45 = (bVar14 != 0) * (uVar2 < 0x100) * bVar14 - (0xff < uVar2);
			uVar4 = (ushort)bVar7;
			cStack_44 = (bVar7 != 0) * (uVar4 < 0x100) * bVar7 - (0xff < uVar4);
			uVar55 = (ushort)bVar8;
			cStack_43 = (bVar8 != 0) * (uVar55 < 0x100) * bVar8 - (0xff < uVar55);
			uVar5 = (ushort)bVar9;
			cStack_42 = (bVar9 != 0) * (uVar5 < 0x100) * bVar9 - (0xff < uVar5);
			uVar6 = (ushort)bVar10;
			cStack_41 = (bVar10 != 0) * (uVar6 < 0x100) * bVar10 - (0xff < uVar6);
			cStack_40 = (bVar11 != 0) * (uVar56 < 0x100) * bVar11 - (0xff < uVar56);
			cStack_3f = (bVar12 != 0) * (uVar1 < 0x100) * bVar12 - (0xff < uVar1);
			cStack_3e = (bVar13 != 0) * (uVar3 < 0x100) * bVar13 - (0xff < uVar3);
			cStack_3d = (bVar14 != 0) * (uVar2 < 0x100) * bVar14 - (0xff < uVar2);
			cStack_3c = (bVar7 != 0) * (uVar4 < 0x100) * bVar7 - (0xff < uVar4);
			cStack_3b = (bVar8 != 0) * (uVar55 < 0x100) * bVar8 - (0xff < uVar55);
			cStack_3a = (bVar9 != 0) * (uVar5 < 0x100) * bVar9 - (0xff < uVar5);
			cStack_39 = (bVar10 != 0) * (uVar6 < 0x100) * bVar10 - (0xff < uVar6);
			__this_00.id = "preview";
			uVar50 = local_78._8_8_;
			auVar18[0xd] = 0;
			auVar18._0_13_ = local_58._0_13_;
			auVar18[0xe] = local_58[7];
			auVar20[0xc] = local_58[6];
			auVar20._0_12_ = local_58._0_12_;
			auVar20._13_2_ = auVar18._13_2_;
			auVar22[0xb] = 0;
			auVar22._0_11_ = local_58._0_11_;
			auVar22._12_3_ = auVar20._12_3_;
			auVar24[10] = local_58[5];
			auVar24._0_10_ = local_58._0_10_;
			auVar24._11_4_ = auVar22._11_4_;
			auVar27[9] = 0;
			auVar27._0_9_ = local_58._0_9_;
			auVar27._10_5_ = auVar24._10_5_;
			auVar28[8] = local_58[4];
			auVar28._0_8_ = local_58._0_8_;
			auVar28._9_6_ = auVar27._9_6_;
			auVar32._7_8_ = 0;
			auVar32._0_7_ = auVar28._8_7_;
			Var33 = CONCAT81(SUB158(auVar32 << 0x40, 7), local_58[3]);
			auVar34._9_6_ = 0;
			auVar34._0_9_ = Var33;
			auVar35._1_10_ = SUB1510(auVar34 << 0x30, 5);
			auVar35[0] = local_58[2];
			auVar36._11_4_ = 0;
			auVar36._0_11_ = auVar35;
			auVar29[2] = local_58[1];
			auVar29._0_2_ = local_58._0_2_;
			auVar29._3_12_ = SUB1512(auVar36 << 0x20, 3);
			auVar31._2_13_ = auVar29._2_13_;
			auVar31._0_2_ = local_58._0_2_ & 0xff;
			auVar19._10_2_ = 0;
			auVar19._0_10_ = auVar31._0_10_;
			auVar19._12_2_ = (short)Var33;
			uVar43 = CONCAT42(auVar19._10_4_, auVar35._0_2_);
			auVar37._6_8_ = 0;
			auVar37._0_6_ = uVar43;
			auVar25._4_2_ = auVar29._2_2_;
			auVar25._0_4_ = auVar31._0_4_;
			auVar25._6_8_ = SUB148(auVar37 << 0x40, 6);
			auVar58._0_4_ = (float)(auVar31._0_4_ & 0xffff);
			auVar58._4_4_ = (float)auVar25._4_4_;
			auVar58._8_4_ = (float)(int)uVar43;
			auVar58._12_4_ = (float)(auVar19._10_4_ >> 0x10);
			auVar54 = divps(auVar58, _DAT_01009880);
			uVar45 = CONCAT12(cStack_3f, CONCAT11(cStack_40, cStack_41));
			uVar46 = CONCAT13(cStack_3e, uVar45);
			uVar47 = CONCAT14(cStack_3d, uVar46);
			auVar49[5] = cStack_3c;
			auVar49._0_5_ = uVar47;
			auVar49._6_8_ = 0;
			auVar16[0xe] = cStack_41;
			auVar16._0_14_ = auVar49 << 0x38;
			auVar48._4_8_ = 0;
			auVar48._0_4_ = uVar46;
			auVar21._12_3_ = (int3)(CONCAT26(auVar16._13_2_, CONCAT15(cStack_42, uVar47)) >> 0x28);
			auVar21._0_12_ = auVar48 << 0x38;
			auVar26._10_5_ = (int5)(CONCAT44(auVar21._11_4_, CONCAT13(cStack_43, uVar45)) >> 0x18);
			auVar26._0_10_ = (unkuint10)CONCAT11(cStack_40, cStack_41) << 0x38;
			auVar38._7_8_ = 0;
			auVar38._0_7_ = (uint7)(CONCAT62(auVar26._9_6_, CONCAT11(cStack_44, cStack_41)) >> 8);
			Var33 = CONCAT81(SUB158(auVar38 << 0x40, 7), cStack_45);
			auVar39._9_6_ = 0;
			auVar39._0_9_ = Var33;
			auVar40._1_10_ = SUB1510(auVar39 << 0x30, 5);
			auVar40[0] = cStack_46;
			auVar41._11_4_ = 0;
			auVar41._0_11_ = auVar40;
			auVar44._1_12_ = SUB1512(auVar41 << 0x20, 3);
			auVar44[0] = cStack_47;
			auVar30[1] = 0;
			auVar30[0] = local_48;
			auVar30._2_13_ = auVar44;
			auVar17._10_2_ = 0;
			auVar17._0_10_ = auVar30._0_10_;
			auVar17._12_2_ = (short)Var33;
			uVar43 = CONCAT42(auVar17._10_4_, auVar40._0_2_);
			auVar42._6_8_ = 0;
			auVar42._0_6_ = uVar43;
			auVar23._4_2_ = auVar44._0_2_;
			auVar23._0_4_ = auVar30._0_4_;
			auVar23._6_8_ = SUB148(auVar42 << 0x40, 6);
			auVar57._0_4_ = (float)(auVar30._0_4_ & 0xffff);
			auVar57._4_4_ = (float)auVar23._4_4_;
			auVar57._8_4_ = (float)(int)uVar43;
			auVar57._12_4_ = (float)(auVar17._10_4_ >> 0x10);
			auVar58 = divps(auVar57, _DAT_01009880);
			local_98.ElementId = auVar54._0_8_;
			local_98.GameObject = auVar58._0_8_;
			if (((ulong)SUB81(uVar50, 0) & 1) == 0) {
				pSVar53 = ColorUtility.ToHtmlStringRGB(ref local_98);
			}
			else {
				pSVar53 = ColorUtility.ToHtmlStringRGBA(ref local_98);
			}
			pSVar53 = String.Concat("#", pSVar53);
			__this_00.value = pSVar53;
			local_98.Node = null;
			local_98.InputSource = 0;
			local_98._28_4_ = 0;
			local_98.ElementId = null;
			local_98.GameObject = null;
			local_98 = new GisketchActionContext(id, source, __this_00);
			(*(code)pSVar51.invoke_impl)(pSVar51.method_code,pSVar51.method);
		}
		return;
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x5273830", Offset = "0x5272830", VA = "0x5273830")]
	internal static void Cancel(string id, GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Cancel): 3 lines keep C-only constructs
		Dictionary<string, GisketchUIColorPicker.Definition> __this;
		Action<GisketchActionContext> pSVar1;
		bool bVar2;
		GisketchNodeDefinition __this_00;
		GisketchActionContext local_68;
		GisketchUIColorPicker.Definition local_48;

		local_48.Save = null;
		local_48.LivePreview = false;
		local_48.Disabled = false;
		local_48._26_6_ = 0;
		local_48.Id = null;
		local_48.EnableAlpha = false;
		local_48._9_7_ = 0;
		__this = GisketchUIColorPicker.Definitions;
		if (__this == null) {
	label_05373980: ;
			throw new NullReferenceException();
		}
		bVar2 = __this.TryGetValue((object)id, ref local_48);
		pSVar1 = local_48.Save;
		if (((bVar2) && (((ulong)local_48.LivePreview & 1) != 0)) &&(local_48.Save != null)) {
			__this_00 = new GisketchNodeDefinition();
			if (__this_00 == null) goto label_05373980;
			__this_00.id = "cancel";
			local_68.Node = null;
			local_68.InputSource = 0;
			local_68._28_4_ = 0;
			local_68.ElementId = null;
			local_68.GameObject = null;
			local_68 = new GisketchActionContext(id, source, __this_00);
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
		}
		return;
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x5273990", Offset = "0x5272990", VA = "0x5273990")]
	internal static GisketchNodeDefinition PopoverNode(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$PopoverNode): clean
		Dictionary<string, GisketchUIColorPicker.Definition> __this;
		String pSVar1;
		bool enableAlpha;
		GisketchNodeDefinition __this_00;
		String pSVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		GisketchNodeDefinition[] pGVar5;
		GisketchNodeDefinition pGVar6;
		String pSVar7;
		GisketchLength pGVar8;
		GisketchNodeDefinition[] pGVar9;
		GisketchUIColorPicker.Definition local_50;

		if (Il2CppMethodInitialized_07542a6c == false) {
			Il2CppMethodInitialized_07542a6c = true;
			if ((typeof(GisketchUIColorPicker)._2).cctor_finished_or_no_cctor == 0) goto label_05373b9e;
	label_053739c4: ;
			__this = GisketchUIColorPicker.Definitions;
		}
		else {
			if ((typeof(GisketchUIColorPicker)._2).cctor_finished_or_no_cctor != 0) goto label_053739c4;
	label_05373b9e: ;
			__this = GisketchUIColorPicker.Definitions;
		}
		if (__this != null) {
			local_50 = __this.get_Item((object)id);
			__this_00 = new GisketchNodeDefinition();
			if (__this_00 != null) {
				__this_00.type = "Panel";
				pSVar2 = String.Concat(id, "-popover");
				__this_00.id = pSVar2;
				__this_00.style = "popover";
				if (Il2CppMethodInitialized_07542a23 == 0) {
					Il2CppMethodInitialized_07542a23 = 1;
				}
				pGVar3 = new GisketchLength();
				if (pGVar3 != null) {
					pGVar3.value = 380.0;
					pGVar3.unit = "point";
					pGVar4 = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
					__this_00.layout = pGVar4;
					pGVar5 = (GisketchNodeDefinition[])new GisketchNodeDefinition[6];
					pGVar6 = new GisketchNodeDefinition();
					if (pGVar6 != null) {
						pGVar6.type = "Text";
						pSVar2 = String.Concat(id, "-title");
						pGVar6.id = pSVar2;
						pSVar2 = Aottg2GisketchLocale.Text("SettingsPopup.ColorPickPopup.Title");
						pGVar6.text = pSVar2;
						pGVar6.style = "subtext";
						pGVar6 = Aottg2GisketchLocale.Key(pGVar6, "SettingsPopup.ColorPickPopup.Title");
						if (pGVar5 != null) {
							if ((int)pGVar5.Length == 0) goto label_05374633;
							pGVar5[0] = pGVar6;
							pSVar2 = String.Concat(id, "-preview");
							pSVar1 = "#FFFFFFFF";
							pSVar7 = "#FFFFFF";
							enableAlpha = (bool)(local_50.EnableAlpha & 1);
							if (enableAlpha != false) {
								pSVar7 = pSVar1;
							}
							pSVar7 = GisketchUIColorPicker.Value(id, pSVar7, enableAlpha);
							pGVar3 = new GisketchLength();
							if (pGVar3 != null) {
								pGVar3.value = 100.0;
								pGVar3.unit = "percent";
								if (Il2CppMethodInitialized_07542a23 == 0) {
									Il2CppMethodInitialized_07542a23 = 1;
								}
								pGVar8 = new GisketchLength();
								if (pGVar8 != null) {
									pGVar8.value = 32.0;
									pGVar8.unit = "point";
									pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar3, pGVar8, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
									pGVar6 = GisketchUIColorPicker.SwatchNode(pSVar2, pSVar7, pGVar4);
									if ((pGVar5.Length & 0xfffffffe) == 0) goto label_05374633;
									pGVar5[1] = pGVar6;
									pGVar6 = new GisketchNodeDefinition();
									if (pGVar6 != null) {
										pGVar6.type = "GisketchUIColorPickerVisual";
										pSVar2 = String.Concat(id, "-visual");
										pGVar6.id = pSVar2;
										pGVar6.value = id;
										pGVar3 = new GisketchLength();
										if (pGVar3 != null) {
											pGVar3.value = 100.0;
											pGVar3.unit = "percent";
											pSVar2 = "Column";
											if ((local_50.EnableAlpha & 1U) == 0) {
												if ((Il2CppMethodInitialized_07542a23 & 1) == 0) {
													Il2CppMethodInitialized_07542a23 = 1;
												}
												pGVar8 = new GisketchLength();
												if (pGVar8 == null) goto label_0537462e;
												pGVar8.value = 220.0;
											}
											else {
												if ((Il2CppMethodInitialized_07542a23 & 1) == 0) {
													Il2CppMethodInitialized_07542a23 = 1;
												}
												pGVar8 = new GisketchLength();
												if (pGVar8 == null) goto label_0537462e;
												pGVar8.value = 260.0;
											}
											pGVar8.unit = "point";
											pGVar4 = AottgUi.Layout(pSVar2, null, null, null, null, 0.0, pGVar3, pGVar8, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
											pGVar6.layout = pGVar4;
											if (2 < (uint)pGVar5.Length) {
												pGVar5[2] = pGVar6;
												pSVar2 = String.Concat(id, "-rgb-row");
												pGVar9 = (GisketchNodeDefinition[])new GisketchNodeDefinition[3];
												pSVar7 = String.Concat(id, "-r-field");
												if ((typeof(GisketchUIColorPicker)._2). cctor_finished_or_no_cctor == 0) {
												}
												pGVar6 = GisketchUIColorPicker.RgbInput(id, "r");
												pGVar6 = GisketchUIColorPicker.Field(pSVar7, "R", pGVar6);
												if (pGVar9 == null) goto label_0537462e;
												if ((int)pGVar9.Length != 0) {
													pGVar9[0] = pGVar6;
													pSVar7 = String.Concat(id, "-g-field");
													pGVar6 = GisketchUIColorPicker.RgbInput(id, "g");
													pGVar6 = GisketchUIColorPicker.Field(pSVar7, "G", pGVar6);
													if ((pGVar9.Length & 0xfffffffe) != 0) {
														pGVar9[1] = pGVar6;
														pSVar7 = String.Concat(id, "-b-field");
														pGVar6 = GisketchUIColorPicker.RgbInput(id, "b");
														pGVar6 = GisketchUIColorPicker.Field(pSVar7, "B", pGVar6);
														if (2 < (uint)pGVar9.Length) {
															pGVar9[2] = pGVar6;
															pGVar6 = GisketchUIColorPicker.Row(pSVar2, pGVar9);
															if ((pGVar5.Length & 0xfffffffc) != 0) {
																pGVar5[3] = pGVar6;
																pSVar2 = String.Concat(id, "-hex-row");
																pGVar9 = (GisketchNodeDefinition[])new GisketchNodeDefinition[2];
																pSVar7 = String.Concat(id, "-hex-label");
																pGVar6 = GisketchUIColorPicker.Label(pSVar7, "HEX", 42.0);
																if (pGVar9 == null) goto label_0537462e;
																if ((int)pGVar9.Length != 0) {
																	pGVar9[0] = pGVar6;
																	pGVar6 = GisketchUIColorPicker.HexInput(id, enableAlpha);
																	if ((pGVar9.Length & 0xfffffffe) != 0) {
																		pGVar9[1] = pGVar6;
																		pGVar6 = GisketchUIColorPicker.Row(pSVar2, pGVar9);
																		if (4 < (uint)pGVar5.Length) {
																			pGVar5[4] = pGVar6;
																			pSVar2 = String.Concat(id, "-footer");
																			pGVar9 = (GisketchNodeDefinition[])new GisketchNodeDefinition[2];
																			pSVar7 = String.Concat(id, "-cancel");
																			pGVar6 = GisketchUIColorPicker.Button(pSVar7, "Common.Cancel", "buttonQuiet");
																			if (pGVar9 == null) goto label_0537462e;
																			if ((int)pGVar9.Length != 0) {
																				pGVar9[0] = pGVar6;
																				pSVar7 = String.Concat(id, "-save");
																				pGVar6 = GisketchUIColorPicker.Button(pSVar7, "Common.Save", "buttonPrimary");
																				if ((pGVar9.Length & 0xfffffffe) != 0) {
																					pGVar9[1] = pGVar6;
																					pGVar6 = GisketchUIColorPicker.Row(pSVar2, pGVar9);
																					if (5 < (uint)pGVar5.Length) {
																						pGVar5[5] = pGVar6;
																						__this_00.children = pGVar5;
																						return __this_00;
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
	label_05374633: ;
											throw new IndexOutOfRangeException();
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_0537462e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x5275520", Offset = "0x5274520", VA = "0x5275520")]
	public static void Open(GisketchActionContext context, string id, bool focusOnOpen = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Open): 3 lines keep C-only constructs
		Dictionary<string, GisketchUIColorPicker.Definition> __this;
		GisketchOverlayManager __this_00;
		bool bVar1;
		GisketchUIRoot root;
		String id_00;
		GisketchNodeDefinition root_00;
		Object x;
		GisketchUIColorPickerPopover __this_01;
		GisketchUIColorPicker.Definition local_58;

		local_58.Save = null;
		local_58.LivePreview = false;
		local_58.Disabled = false;
		local_58._26_6_ = 0;
		local_58.Id = null;
		local_58.EnableAlpha = false;
		local_58._9_7_ = 0;
		__this = GisketchUIColorPicker.Definitions;
		if (__this == null) goto label_05375754;
		bVar1 = __this.TryGetValue((object)id, ref local_58);
		if ((bVar1) && ((local_58._24_8_ & 0x100) == 0)) {
			root = null;
			bVar1 = ((Object)context.GameObject != null);
			if (bVar1) {
				if (context.GameObject == null) goto label_05375754;
				root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			}
			bVar1 = ((Object)root == null);
			if (!bVar1) {
				if (root == null) {
	label_05375754: ;
					throw new NullReferenceException();
				}
				__this_00 = root._Overlays_k__BackingField;
				if (__this_00 != null) {
					id_00 = String.Concat("color-picker-", id);
					root_00 = GisketchUIColorPicker.PopoverNode(id);
					x = (Object)__this_00.ShowDynamicPopover(id_00, root_00, context.GameObject, focusOnOpen, false, 8.0, true, 0);
					bVar1 = (x != null);
					if (bVar1) {
						if ((x != null) &&(__this_01 = x.AddComponent<GisketchUIColorPickerPopover>(), __this_01 != null)) {
							__this_01.Setup(id, context.GameObject, root);
							return;
						}
						goto label_05375754;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x5275DA0", Offset = "0x5274DA0", VA = "0x5275DA0")]
	private static bool BuildVisual(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$BuildVisual): 2 lines keep C-only constructs
		Dictionary<string, GisketchUIColorPicker.Definition> __this;
		bool bVar1;
		GisketchUIColorPickerVisual __this_00;
		GisketchUIColorPicker.Definition GStack_48;

		GStack_48.Save = null;
		GStack_48.LivePreview = false;
		GStack_48.Disabled = false;
		GStack_48._26_6_ = 0;
		GStack_48.Id = null;
		GStack_48.EnableAlpha = false;
		GStack_48._9_7_ = 0;
		if ((node == null) ||(bVar1 = String.IsNullOrEmpty(node.value))) {
			return true;
		}
		__this = GisketchUIColorPicker.Definitions;
		if (__this != null) {
			bVar1 = __this.TryGetValue((object)node.value, ref GStack_48);
			if (!bVar1) {
				return true;
			}
			if (((go != null) &&(__this_00 = go.AddComponent<GisketchUIColorPickerVisual>() , context != null)) &&(__this_00 != null)) {
				__this_00.Setup(node.value, (bool)(GStack_48.EnableAlpha & 1), context.Theme);
				return true;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x52747B0", Offset = "0x52737B0", VA = "0x52747B0")]
	private static GisketchNodeDefinition RgbInput(string id, string suffix)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$RgbInput): 1 lines keep C-only constructs
		GisketchNodeDefinition __this;
		String pSVar1;
		GisketchLength __this_00;
		GisketchLayoutDefinition pGVar2;
		Enum local_30;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "InputField";
			pSVar1 = String.Concat(id, "-", suffix);
			__this.id = pSVar1;
			__this.placeholder = "0";
			local_30.klass = (Enum)typeof(AottgInputType);
			local_30.monitor = (IntPtr)0xffffffffffffffff;
			pSVar1 = local_30.ToString();
			__this.inputType = pSVar1;
			__this.style = "inputField";
			__this.maxCharacters = 3;
			__this_00 = new GisketchLength();
			if (__this_00 != null) {
				__this_00.value = 100.0;
				__this_00.unit = "percent";
				pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, __this_00, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
				__this.layout = pGVar2;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x5275070", Offset = "0x5274070", VA = "0x5275070")]
	private static GisketchNodeDefinition HexInput(string id, bool alpha)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$HexInput): 3 lines keep C-only constructs
		GisketchNodeDefinition __this;
		String pSVar1;
		String* ppSVar2;
		GisketchLength __this_00;
		GisketchLayoutDefinition pGVar3;
		Enum local_30;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "InputField";
			pSVar1 = String.Concat(id, "-hex");
			__this.id = pSVar1;
			if (alpha) {
				ppSVar2 = &"#RRGGBBAA";
			}
			else {
				ppSVar2 = &"#RRGGBB";
			}
			__this.placeholder = *ppSVar2;
			local_30.klass = (Enum)typeof(AottgInputType);
			local_30.monitor = (IntPtr)0xffffffffffffffff;
			pSVar1 = local_30.ToString();
			__this.inputType = pSVar1;
			__this.style = "inputField";
			__this.maxCharacters = (uint)alpha * 2 + 7;
			__this_00 = new GisketchLength();
			if (__this_00 != null) {
				__this_00.value = 100.0;
				__this_00.unit = "percent";
				pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, __this_00, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				__this.layout = pGVar3;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x5274A00", Offset = "0x5273A00", VA = "0x5274A00")]
	private static GisketchNodeDefinition Field(string id, string label, GisketchNodeDefinition input)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Field): clean
		GisketchNodeDefinition __this;
		GisketchLength __this_00;
		GisketchLayoutDefinition pGVar1;
		GisketchNodeDefinition[] pGVar2;
		String id_00;
		GisketchNodeDefinition pGVar3;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "Panel";
			__this.id = id;
			__this.style = "clear";
			__this_00 = new GisketchLength();
			if (__this_00 != null) {
				__this_00.value = 100.0;
				__this_00.unit = "percent";
				pGVar1 = AottgUi.Layout("Row", null, "Center", null, null, 6.0, __this_00, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
				__this.layout = pGVar1;
				pGVar2 = (GisketchNodeDefinition[])new GisketchNodeDefinition[2];
				id_00 = String.Concat(id, "-label");
				if ((typeof(GisketchUIColorPicker)._2).cctor_finished_or_no_cctor == 0) {
				}
				pGVar3 = GisketchUIColorPicker.Label(id_00, label, 18.0);
				if (pGVar2 != null) {
					if ((int)pGVar2.Length != 0) {
						pGVar2[0] = pGVar3;
						if ((pGVar2.Length & 0xfffffffe) != 0) {
							pGVar2[1] = input;
							__this.children = pGVar2;
							return __this;
						}
					}
					throw new IndexOutOfRangeException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x5274EA0", Offset = "0x5273EA0", VA = "0x5274EA0")]
	private static GisketchNodeDefinition Label(string id, string text, float width)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Label): clean
		GisketchNodeDefinition __this;
		GisketchLength __this_00;
		GisketchLayoutDefinition pGVar1;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "Text";
			__this.id = id;
			__this.text = text;
			__this.style = "text";
			__this_00 = new GisketchLength();
			if (__this_00 != null) {
				__this_00.value = width;
				__this_00.unit = "point";
				pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, __this_00, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				__this.layout = pGVar1;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x5274CB0", Offset = "0x5273CB0", VA = "0x5274CB0")]
	private static GisketchNodeDefinition Row(string id, params GisketchNodeDefinition[] children)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Row): clean
		GisketchNodeDefinition __this;
		GisketchLength __this_00;
		GisketchLayoutDefinition pGVar1;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "Panel";
			__this.id = id;
			__this.style = "clear";
			__this_00 = new GisketchLength();
			if (__this_00 != null) {
				__this_00.value = 100.0;
				__this_00.unit = "percent";
				pGVar1 = AottgUi.Layout("Row", null, "Center", null, null, 8.0, __this_00, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				__this.layout = pGVar1;
				__this.children = children;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x5275320", Offset = "0x5274320", VA = "0x5275320")]
	private static GisketchNodeDefinition Button(string id, string key, string style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Button): clean
		GisketchNodeDefinition __this;
		String pSVar1;
		GisketchLength __this_00;
		GisketchLayoutDefinition pGVar2;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "Button";
			__this.id = id;
			pSVar1 = Aottg2GisketchLocale.Text(key);
			__this.text = pSVar1;
			__this.textKey = key;
			__this.style = style;
			__this_00 = new GisketchLength();
			if (__this_00 != null) {
				__this_00.value = 100.0;
				__this_00.unit = "percent";
				pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, __this_00, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				__this.layout = pGVar2;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x5274680", Offset = "0x5273680", VA = "0x5274680")]
	private static GisketchNodeDefinition SwatchNode(string id, string value, GisketchLayoutDefinition layout)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SwatchNode): clean
		GisketchNodeDefinition __this;

		__this = new GisketchNodeDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.type = "ColorSwatch";
		__this.id = id;
		__this.style = "profileColorSwatch";
		__this.value = value;
		__this.layout = layout;
		return __this;
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x52729B0", Offset = "0x52719B0", VA = "0x52729B0")]
	private static void SetSwatch(Transform root, string id, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetSwatch): clean
		Color UVar1;
		bool bVar2;
		Image x;
		Color local_28;

		local_28.r = 0.0;
		local_28.g = 0.0;
		local_28.b = 0.0;
		local_28.a = 0.0;
		x = GisketchUIColorPicker.Find<Image>(root, id);
		bVar2 = ((Object)x != null);
		if (bVar2) {
			bVar2 = ColorUtility.TryParseHtmlString(value, ref local_28);
			if (bVar2) {
				if (x == null) {
					throw new NullReferenceException();
				}
				UVar1.b = local_28.b;
				UVar1.a = local_28.a;
				UVar1.r = local_28.r;
				UVar1.g = local_28.g;
				x.set_color(UVar1);
			}
		}
		return;
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x5272AE0", Offset = "0x5271AE0", VA = "0x5272AE0")]
	private static void SetText(Transform root, string id, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetText): clean
		bool bVar1;
		TextMeshProUGUI x;

		x = GisketchUIColorPicker.Find<TextMeshProUGUI>(root, id);
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (x == null) {
				throw new NullReferenceException();
			}
			x.set_text(value);
			return;
		}
		return;
	}

	[Token(Token = "0x60004D5")]
	internal static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x5274640", Offset = "0x5273640", VA = "0x5274640")]
	internal static string PreviewId(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$PreviewId): clean
		String pSVar1;

		pSVar1 = String.Concat(id, "-preview");
		return pSVar1;
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x5274770", Offset = "0x5273770", VA = "0x5274770")]
	internal static string VisualId(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$VisualId): clean
		String pSVar1;

		pSVar1 = String.Concat(id, "-visual");
		return pSVar1;
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x52760D0", Offset = "0x52750D0", VA = "0x52760D0")]
	internal static string HexId(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$HexId): clean
		String pSVar1;

		pSVar1 = String.Concat(id, "-hex");
		return pSVar1;
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x5276110", Offset = "0x5275110", VA = "0x5276110")]
	private static string ButtonId(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$ButtonId): clean
		String pSVar1;

		pSVar1 = String.Concat(id, "-button");
		return pSVar1;
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x5272970", Offset = "0x5271970", VA = "0x5272970")]
	private static string SwatchId(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SwatchId): clean
		String pSVar1;

		pSVar1 = String.Concat(id, "-swatch");
		return pSVar1;
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x5272AA0", Offset = "0x5271AA0", VA = "0x5272AA0")]
	private static string TextId(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c (Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$TextId): clean
		String pSVar1;

		pSVar1 = String.Concat(id, "-value");
		return pSVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPicker.c.

	// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Find<object>: 2 lines keep C-only constructs
	private static object Find_object(Transform root, String id)
	{
		uint uVar1;
		uint uVar2;
		Object x;
		bool bVar3;
		Object[] pSVar4;
		ulong uVar5;
		Object __this;
		String a;
		ulong uVar6;

		if ((method.rgctx_data == null) &&(il2cpp_codegen_initialize_runtime_metadata(&typeof(Object)), method.rgctx_data == null)) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = ((Object)root == null);
		if (!bVar3) {
			if ((root == null) ||(pSVar4 = root.GetComponentsInChildren<object>(true), pSVar4 == null)) {
	label_0363ce4b: ;
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar4.Length) {
				uVar5 = pSVar4.Length & 0xffffffff;
				uVar6 = 0;
				do {
					if (uVar5 <= uVar6) {
						throw new IndexOutOfRangeException();
					}
					x = (Object)pSVar4[uVar6];
					bVar3 = (x != null);
					if (bVar3) {
						if ((x == null) ||(__this = (Object)x.gameObject, __this == null)) goto label_0363ce4b;
						a = __this.name;
						bVar3 = (a == id);
						if (bVar3) {
							return (object)x;
						}
					}
					uVar6 = uVar6 + 1;
					uVar2 = (uint)pSVar4.Length;
					uVar5 = (ulong)uVar2;
				} while ((long)uVar6 < (long)(int)uVar2);
			}
		}
		return null;
	}

	// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass17_0$$.ctor: clean
	private void c__DisplayClass17_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$<Build>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass16_0__Build_b__0(AottgUi row)
	{
		GisketchUIColorPicker pGVar1;
		AottgActionRegistry __this_00;
		AottgUi __this_01;
		String pSVar2;
		Action<GisketchActionContext> __this_02;
		String actionId;
		GisketchNodeDefinition pGVar3;
		GisketchLength pGVar4;
		GisketchLength __this_03;
		GisketchLayoutDefinition pGVar5;
		GisketchNodeDefinition[] pGVar6;
		String pSVar7;
		MethodInfo method_00;
		GisketchNodeDefinition pGVar8;
		Nullable<bool>[] aSStack_48 = new Nullable<bool>[4];
		String pSStack_40;
		AottgUi pGStack_38;

		pGVar1 = this.__4__this;
		if (pGVar1 != null) {
			pSVar7 = pGVar1._label;
			pSVar2 = String.Concat(pGVar1._id, "-label");
			if (row != null) {
				row.Text(pSVar7, "subtext", pSVar2, null, null);
				pSVar7 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				__this_02 = this.__9__1;
				if (__this_02 == null) {
					__this_02 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass16_0_Build_b__1);
					this.__9__1 = __this_02;
				}
				pGVar1 = this.__4__this;
				if (pGVar1 != null) {
					pSVar2 = pGVar1._id;
					pSVar2 = String.Concat(pSVar2, "-button");
					__this_00 = row._actions;
					if (__this_00 == null) {
						actionId = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					else {
						actionId = __this_00.Register(row._ownerId, __this_02);
					}
					pGVar3 = row.Button(3, pSVar7, actionId, pSVar2, null, null, null);
					pGVar1 = this.__4__this;
					if (pGVar1 != null) {
						aSStack_48[0].hasValue = false;
						aSStack_48[0].value = false;
						aSStack_48 = new Nullable<bool>(pGVar1._disabled == false);
						if (pGVar3 != null) {
							pGVar3.enabled = aSStack_48[0];
							pGStack_38 = row;
							pGVar4 = new GisketchLength();
							if (pGVar4 != null) {
								pGVar4.value = 58.0;
								pGVar4.unit = "point";
								__this_03 = new GisketchLength();
								if (__this_03 != null) {
									__this_03.value = 58.0;
									__this_03.unit = "point";
									pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, __this_03, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
									pGVar3.layout = pGVar5;
									pGVar6 = (GisketchNodeDefinition[])new GisketchNodeDefinition[1];
									pGVar1 = this.__4__this;
									if (pGVar1 != null) {
										pSVar7 = pGVar1._id;
										pSVar7 = String.Concat(pSVar7, "-swatch");
										pSStack_40 = this.value;
										pGVar4 = new GisketchLength();
										if (pGVar4 != null) {
											pGVar4.value = 42.0;
											pGVar4.unit = "point";
											method_00 = new GisketchLength();
											if (method_00 != null) {
												((GisketchLength)&method_00.invoker_method).value = 42.0;
												method_00.name = (char *)"point";
												pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, (GisketchLength)method_00, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
												pGVar8 = GisketchUIColorPicker.SwatchNode(pSVar7, pSStack_40, pGVar5);
												__this_01 = pGStack_38;
												if (pGVar6 != null) {
													if ((int)pGVar6.Length == 0) {
														throw new IndexOutOfRangeException();
													}
													pGVar6[0] = pGVar8;
													pGVar3.children = pGVar6;
													pGVar1 = this.__4__this;
													if (pGVar1 != null) {
														pSVar7 = this.value;
														pSVar2 = pGVar1._id;
														pSVar2 = String.Concat(pSVar2, "-value");
														__this_01.Text(pSVar7, "text", pSVar2, null, null);
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
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$<Build>b__1: clean
	private void c__DisplayClass16_0__Build_b__1(GisketchActionContext context)
	{
		GisketchUIColorPicker pGVar1;
		String id;

		pGVar1 = this.__4__this;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		id = pGVar1._id;
		if ((typeof(GisketchUIColorPicker)._2).cctor_finished_or_no_cctor == 0) {
			GisketchUIColorPicker.Open(context, id, true);
			return;
		}
		GisketchUIColorPicker.Open(context, id, true);
		return;
	}

	// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass17_0$$<BuildCompact>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass17_0__BuildCompact_b__0(AottgUi field)
	{
		GisketchUIColorPicker pGVar1;
		String pSVar2;
		AottgActionRegistry __this_00;
		String pSVar3;
		Action<GisketchActionContext> __this_01;
		String actionId;
		GisketchNodeDefinition pGVar4;
		GisketchLength pGVar5;
		GisketchLength pGVar6;
		GisketchLayoutDefinition pGVar7;
		GisketchNodeDefinition[] pGVar8;
		GisketchNodeDefinition pGVar9;
		Nullable<bool>[] aSStack_38 = new Nullable<bool>[4];

		if (Il2CppMethodInitialized_07542a81 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0_BuildCompact_b__1) ;
			Il2CppMethodInitialized_07542a81 = true;
		}
		pGVar1 = this.__4__this;
		if (pGVar1 != null) {
			pSVar2 = pGVar1._label;
			pSVar3 = String.Concat(pGVar1._id, "-label");
			if (field != null) {
				field.Text(pSVar2, "accountInputLabel", pSVar3, null, null);
				pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				__this_01 = this.__9__1;
				if (__this_01 == null) {
					__this_01 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_c__DisplayClass17_0_BuildCompact_b__1);
					this.__9__1 = __this_01;
				}
				pGVar1 = this.__4__this;
				if (pGVar1 != null) {
					pSVar3 = pGVar1._id;
					pSVar3 = String.Concat(pSVar3, "-button");
					__this_00 = field._actions;
					if (__this_00 == null) {
						actionId = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					else {
						actionId = __this_00.Register(field._ownerId, __this_01);
					}
					pGVar4 = field.Button(3, pSVar2, actionId, pSVar3, null, null, null);
					pGVar1 = this.__4__this;
					if (pGVar1 != null) {
						aSStack_38[0].hasValue = false;
						aSStack_38[0].value = false;
						aSStack_38 = new Nullable<bool>(pGVar1._disabled == false);
						if (pGVar4 != null) {
							pGVar4.enabled = aSStack_38[0];
							pGVar5 = new GisketchLength();
							if (pGVar5 != null) {
								pGVar5.value = 58.0;
								pGVar5.unit = "point";
								pGVar6 = new GisketchLength();
								if (pGVar6 != null) {
									pGVar6.value = 58.0;
									pGVar6.unit = "point";
									pGVar7 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar5, pGVar6, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
									pGVar4.layout = pGVar7;
									pGVar8 = (GisketchNodeDefinition[])new GisketchNodeDefinition[1];
									pGVar1 = this.__4__this;
									if (pGVar1 != null) {
										pSVar2 = pGVar1._id;
										pSVar3 = String.Concat(pSVar2, "-swatch");
										pSVar2 = this.value;
										pGVar5 = new GisketchLength();
										if (pGVar5 != null) {
											pGVar5.value = 42.0;
											pGVar5.unit = "point";
											pGVar6 = new GisketchLength();
											if (pGVar6 != null) {
												pGVar6.value = 42.0;
												pGVar6.unit = "point";
												pGVar7 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar5, pGVar6, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
												pGVar9 = GisketchUIColorPicker.SwatchNode(pSVar3, pSVar2, pGVar7);
												if (pGVar8 != null) {
													if ((int)pGVar8.Length == 0) {
														throw new IndexOutOfRangeException();
													}
													pGVar8[0] = pGVar9;
													pGVar4.children = pGVar8;
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
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass17_0$$<BuildCompact>b__1: clean
	private void c__DisplayClass17_0__BuildCompact_b__1(GisketchActionContext context)
	{
		GisketchUIColorPicker pGVar1;
		String id;

		pGVar1 = this.__4__this;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		id = pGVar1._id;
		if ((typeof(GisketchUIColorPicker)._2).cctor_finished_or_no_cctor == 0) {
			GisketchUIColorPicker.Open(context, id, true);
			return;
		}
		GisketchUIColorPicker.Open(context, id, true);
		return;
	}
}
