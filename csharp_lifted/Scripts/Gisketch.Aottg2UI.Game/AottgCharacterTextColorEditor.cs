// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002F6")]
internal sealed class AottgCharacterTextColorEditor : AottgComponent
{
	[Token(Token = "0x20002F7")]
	private readonly struct Options
	{
		[Token(Token = "0x4000F05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly string PickerId;

		[Token(Token = "0x4000F06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly string ColorsEnabledKey;

		[Token(Token = "0x4000F07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly bool ColorsEnabled;

		[Token(Token = "0x4000F08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Action<GameObject> Imported;

		[Token(Token = "0x4000F09")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly string PreviewEffectType;

		[Token(Token = "0x4000F0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly IList<string> PreviewEffectColors;

		[Token(Token = "0x4000F0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly string PreviewFont;

		[Token(Token = "0x600125F")]
		[Address(RVA = "0x57EB730", Offset = "0x57EA730", VA = "0x57EB730")]
		public Options(string pickerId, string colorsEnabledKey, bool colorsEnabled, Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditor.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor.Options$$.ctor): clean
			this.PickerId = pickerId;
			this.ColorsEnabledKey = colorsEnabledKey;
			this.ColorsEnabled = colorsEnabled;
			this.Imported = imported;
			this.PreviewEffectType = previewEffectType;
			this.PreviewEffectColors = previewEffectColors;
			this.PreviewFont = previewFont;
			return;
		}
	}

	[Token(Token = "0x4000EF8")]
	private const int MaxRawCharacters = 279;

	[Token(Token = "0x4000EF9")]
	private const string NodeType = "AottgCharacterTextColorEditor";

	[Token(Token = "0x4000EFA")]
	private const string InputId = "profile-character-text-color-editor-input";

	[Token(Token = "0x4000EFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Options> EditorOptions;

	[Token(Token = "0x4000EFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _value;

	[Token(Token = "0x4000EFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _pickerId;

	[Token(Token = "0x4000EFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _colorsEnabledKey;

	[Token(Token = "0x4000EFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _colorsEnabled;

	[Token(Token = "0x4000F00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private readonly bool _inputEnabled;

	[Token(Token = "0x4000F01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Action<GameObject> _imported;

	[Token(Token = "0x4000F02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _previewEffectType;

	[Token(Token = "0x4000F03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly IList<string> _previewEffectColors;

	[Token(Token = "0x4000F04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _previewFont;

	[Token(Token = "0x600125B")]
	[Address(RVA = "0x57EB020", Offset = "0x57EA020", VA = "0x57EB020")]
	static AottgCharacterTextColorEditor()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditor.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$.cctor): 4 lines keep C-only constructs
		GisketchComponentRegistry __this;
		Dictionary<string, AottgCharacterTextColorEditor.Options> __this_00;
		GisketchComponentFactory __this_01;

		if (Il2CppMethodInitialized_0754554e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgCharacterTextColorEditor)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_0754554e = true;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, AottgCharacterTextColorEditor.Options>));
		__this_00 = new Dictionary<object, AottgCharacterTextColorEditor.Options>();
		AottgCharacterTextColorEditor.EditorOptions = __this_00;
		__this = GisketchComponentRegistry.Default;
		__this_01 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_BuildEditor);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("AottgCharacterTextColorEditor", __this_01);
		return;
	}

	[Token(Token = "0x600125C")]
	[Address(RVA = "0x57E2D90", Offset = "0x57E1D90", VA = "0x57E2D90")]
	public AottgCharacterTextColorEditor(string value, string pickerId, string colorsEnabledKey, bool colorsEnabled, [Optional][DefaultParameterValue(true)] bool inputEnabled, [Optional] Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditor.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$.ctor): clean
		base();
		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._value = value;
		this._pickerId = pickerId;
		this._colorsEnabledKey = colorsEnabledKey;
		this._colorsEnabled = colorsEnabled;
		this._inputEnabled = inputEnabled;
		this._imported = imported;
		this._previewEffectType = previewEffectType;
		this._previewEffectColors = previewEffectColors;
		this._previewFont = previewFont;
		return;
	}

	[Token(Token = "0x600125D")]
	[Address(RVA = "0x57EB150", Offset = "0x57EA150", VA = "0x57EB150", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditor.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$Build): 8 lines keep C-only constructs
		bool bVar1;
		Action<GameObject> pSVar2;
		String pSVar3;
		IList<string> pSVar4;
		String pSVar5;
		AottgCharacterTextColorEditor.Options value;
		AottgCharacterTextColorEditor pGVar6;
		GisketchNodeDefinition __this_00;
		GisketchLength pGVar7;
		GisketchLength pGVar8;
		GisketchLayoutDefinition pGVar9;
		GisketchNodeDefinition[] pGVar10;
		GisketchNodeDefinition __this_01;
		String pSVar11;
		Nullable<bool>[] aSStack_a8 = new Nullable<bool>[4];
		String pSStack_a0;
		String pSStack_98;
		ulong uStack_90;
		Action<GameObject> pSStack_88;
		String pSStack_80;
		IList<string> pSStack_78;
		String pSStack_70;
		AottgUi pGStack_68;
		AottgCharacterTextColorCodec.Document pGStack_60;
		AottgCharacterTextColorEditor pGStack_58;
		Dictionary<string, AottgCharacterTextColorEditor.Options> pSStack_50;
		Enum SStack_48;

		pGStack_68 = ui;
		if (Il2CppMethodInitialized_0754554f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgCharacterTextColorEditor)) ;
			Il2CppMethodInitialized_0754554f = true;
		}
		pGStack_60 = AottgCharacterTextColorCodec.Parse(this._value);
		pSStack_50 = AottgCharacterTextColorEditor.EditorOptions;
		pSStack_a0 = this._pickerId;
		pSVar11 = this._colorsEnabledKey;
		bVar1 = this._colorsEnabled;
		pSVar2 = this._imported;
		pSVar3 = this._previewEffectType;
		pSVar4 = this._previewEffectColors;
		pSVar5 = this._previewFont;
		pSStack_78 = null;
		pSStack_70 = null;
		pSStack_88 = null;
		pSStack_80 = null;
		pSStack_98 = null;
		uStack_90 = 0;
		pGStack_58 = this;
		pSStack_98 = pSVar11;
		uStack_90 = CONCAT71(uStack_90._1_7_, bVar1);
		pSStack_88 = pSVar2;
		pSStack_80 = pSVar3;
		pSStack_78 = pSVar4;
		pSStack_70 = pSVar5;
		if (pSStack_50 !=null) {
			value.ColorsEnabledKey = pSStack_98;
			value.PickerId = pSStack_a0;
			value._16_8_ = uStack_90;
			value.Imported = pSStack_88;
			value.PreviewEffectType = pSStack_80;
			value.PreviewEffectColors._0_4_ = (int)pSStack_78;
			value.PreviewEffectColors._4_4_ = (int)((ulong)pSStack_78 >> 0x20);
			value.PreviewFont._0_4_ = (int)pSStack_70;
			value.PreviewFont._4_4_ = (int)((ulong)pSStack_70 >> 0x20);
			pSStack_50.set_Item((Il2CppObject *)"profile-character-text-color-editor", value);
			__this_00 = new GisketchNodeDefinition();
			if (__this_00 != null) {
				__this_00.type = "AottgCharacterTextColorEditor";
				__this_00.id = "profile-character-text-color-editor";
				pGVar6 = pGStack_58;
				__this_00.value = pGStack_58._value;
				__this_00.style = "clear";
				pGVar7 = AottgUi.Percent(100.0);
				pGVar8 = AottgUi.Points(112.0);
				pGVar9 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, pGVar7, pGVar8, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				__this_00.layout = pGVar9;
				pGVar10 = (GisketchNodeDefinition[])new GisketchNodeDefinition[1];
				__this_01 = new GisketchNodeDefinition();
				if (__this_01 != null) {
					__this_01.type = "InputField";
					__this_01.id = "profile-character-text-color-editor-input";
					__this_01.placeholder = (String)**(ulong*)(g_data_07556758 + 0xb8);
					SStack_48.klass = (Enum)typeof(AottgInputType);
					SStack_48.monitor = (IntPtr)0xffffffffffffffff;
					pSVar11 = SStack_48.ToString();
					__this_01.inputType = pSVar11;
					__this_01.style = "characterTextColorInput";
					if (pGStack_60 != null) {
						__this_01.value = pGStack_60.Text;
						aSStack_a8[0].hasValue = false;
						aSStack_a8[0].value = false;
						aSStack_a8 = new Nullable<bool>(pGVar6._inputEnabled);
						__this_01.enabled = aSStack_a8[0];
						__this_01.formKey = "profile-character-text-color-editor-input";
						__this_01.formLabel = "Text";
						__this_01.maxCharacters = 0x117;
						pGVar7 = AottgUi.Percent(100.0);
						pGVar8 = AottgUi.Points(112.0);
						pGVar9 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar7, pGVar8, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
						__this_01.layout = pGVar9;
						if (pGVar10 != null) {
							if ((int)pGVar10.Length == 0) {
								throw new IndexOutOfRangeException();
							}
							pGVar10[0] = __this_01;
							__this_00.children = pGVar10;
							if (pGStack_68 != null) {
								pGStack_68.Add(__this_00);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600125E")]
	[Address(RVA = "0x57EB7D0", Offset = "0x57EA7D0", VA = "0x57EB7D0")]
	private static bool BuildEditor(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditor.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$BuildEditor): 3 lines keep C-only constructs
		Dictionary<string, AottgCharacterTextColorEditor.Options> __this;
		bool bVar1;
		AottgCharacterTextColorEditorRuntime __this_00;
		String previewFont;
		byte bVar2;
		String pickerId;
		String previewEffectType;
		IList<string> previewEffectColors;
		String pSStack_c8;
		String pSStack_c0;
		ulong uStack_b8;
		Action<GameObject> pSStack_b0;
		String pSStack_a8;
		IList<string> pSStack_a0;
		String[] apSStack_98 = new String[2];
		String pSStack_88;
		Action<GameObject> pSStack_80;
		GameObject pUStack_78;
		GisketchBuildContext pGStack_70;
		AottgCharacterTextColorEditor.Options GStack_68;

		pUStack_78 = go;
		pGStack_70 = context;
		if (Il2CppMethodInitialized_07545550 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgCharacterTextColorEditor)) ;
			Il2CppMethodInitialized_07545550 = true;
		}
		GStack_68.PreviewEffectType = null;
		GStack_68.PreviewEffectColors = null;
		GStack_68.ColorsEnabled = false;
		GStack_68._17_7_ = 0;
		GStack_68.Imported = null;
		GStack_68.PickerId = null;
		GStack_68.ColorsEnabledKey = null;
		GStack_68.PreviewFont = null;
		if ((node != null) &&(__this = AottgCharacterTextColorEditor.EditorOptions, __this != null)) {
			bVar1 = __this.TryGetValue((object)node.id, ref GStack_68);
			if (bVar1) {
				pSStack_88 = GStack_68.ColorsEnabledKey;
				pSStack_80 = GStack_68.Imported;
				previewFont = GStack_68.PreviewFont;
				pickerId = GStack_68.PickerId;
				previewEffectType = GStack_68.PreviewEffectType;
				previewEffectColors = GStack_68.PreviewEffectColors;
				bVar2 = GStack_68.ColorsEnabled;
			}
			else {
				pSStack_a8 = null;
				pSStack_a0 = null;
				uStack_b8 = 0;
				pSStack_b0 = null;
				pSStack_c8 = null;
				pSStack_c0 = null;
				apSStack_98[0] = null;
				pSStack_c0 = null;
				uStack_b8 = CONCAT71(uStack_b8._1_7_, 1);
				pSStack_b0 = null;
				pSStack_a8 = null;
				pSStack_a0 = null;
				apSStack_98[0] = null;
				pSStack_88 = pSStack_c0;
				pSStack_80 = pSStack_b0;
				previewFont = apSStack_98[0];
				pickerId = pSStack_c8;
				previewEffectType = pSStack_a8;
				previewEffectColors = pSStack_a0;
				bVar2 = (byte)uStack_b8;
			}
			if (pUStack_78 != null) {
				__this_00 = (AottgCharacterTextColorEditorRuntime)pUStack_78.AddComponent<AottgCharacterTextColorEditorRuntime>();
				if ((pGStack_70 != null) &&(__this_00 != null)) {
					__this_00.Setup("profile-character-text-color-editor-input", node.value, pickerId, pGStack_70.State, pSStack_88, (bool)(bVar2 & 1), pSStack_80, previewEffectType, previewEffectColors, previewFont);
					return true;
				}
			}
		}
		throw new NullReferenceException();
	}
}
