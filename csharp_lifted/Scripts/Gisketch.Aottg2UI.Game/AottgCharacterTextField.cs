// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextField
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002F9")]
internal sealed class AottgCharacterTextField : AottgComponent
{
	[Token(Token = "0x4000F25")]
	private const int VisibleLimit = 31;

	[Token(Token = "0x4000F26")]
	private const int RawInputLimit = 512;

	[Token(Token = "0x4000F27")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, string> Values;

	[Token(Token = "0x4000F28")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000F29")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _labelKey;

	[Token(Token = "0x4000F2A")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _placeholderKey;

	[Token(Token = "0x4000F2B")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _value;

	[Token(Token = "0x4000F2C")]
	[FieldOffset(Offset = "0x30")]
	private readonly bool _enabled;

	[Token(Token = "0x4000F2D")]
	[FieldOffset(Offset = "0x38")]
	private readonly string _effectPrefix;

	[Token(Token = "0x4000F2E")]
	[FieldOffset(Offset = "0x40")]
	private readonly Action<GisketchActionContext> _changed;

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x57EDF10", Offset = "0x57ECF10", VA = "0x57EDF10")]
	public AottgCharacterTextField(string id, string labelKey, string placeholderKey, string value, bool enabled, string effectPrefix, Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c (Gisketch.Aottg2UI.Game.AottgCharacterTextField$$.ctor): clean
		base();
		this._id = id;
		this._labelKey = labelKey;
		this._placeholderKey = placeholderKey;
		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._value = value;
		this._enabled = enabled;
		this._effectPrefix = effectPrefix;
		this._changed = changed;
		return;
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x57DF000", Offset = "0x57DE000", VA = "0x57DF000")]
	public static string Value(string id, string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c (Gisketch.Aottg2UI.Game.AottgCharacterTextField$$Value): 1 lines keep C-only constructs
		Dictionary<object, object> __this;
		bool bVar1;
		String local_20;

		local_20 = null;
		__this = (Dictionary<object, object>)AottgCharacterTextField.Values;
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this.TryGetValue((object)id, (object*)&local_20);
		if ((!bVar1) && (local_20 = fallback, fallback == null)) {
			local_20 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return local_20;
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x57E55F0", Offset = "0x57E45F0", VA = "0x57E55F0")]
	public static void SetValue(GameObject source, string id, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c (Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetValue): 3 lines keep C-only constructs
		Dictionary<object, object> __this;
		bool bVar1;
		Transform pUVar2;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_07545571 == false) {
			Il2CppMethodInitialized_07545571 = true;
			if (value == null) goto label_058e5668;
	label_058e5610: ;
			if ((typeof(AottgCharacterTextField)._2).cctor_finished_or_no_cctor != 0) goto label_058e5624;
	label_058e5694: ;
			__this = (Dictionary<object, object>)AottgCharacterTextField.Values;
			method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item;
		}
		else {
			if (value != null) goto label_058e5610;
	label_058e5668: ;
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
			if ((typeof(AottgCharacterTextField)._2).cctor_finished_or_no_cctor == 0) goto label_058e5694;
	label_058e5624: ;
			__this = (Dictionary<object, object>)AottgCharacterTextField.Values;
			method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item;
		}
		MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item = method_00;
		if (__this == null) {
	label_058e5739: ;
			throw new NullReferenceException();
		}
		__this.set_Item((object)id, (object)value);
		pUVar2 = null;
		bVar1 = ((Object)source != null);
		if (bVar1) {
			if ((source == null) ||(pUVar2 = source.transform, pUVar2 == null)) goto label_058e5739;
			pUVar2 = pUVar2.root;
		}
		AottgCharacterTextField.SetInputText(pUVar2, id, value);
		return;
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x57DF7C0", Offset = "0x57DE7C0", VA = "0x57DF7C0")]
	public static void SetFont(GameObject source, string id, string font)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c (Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFont): clean
		bool bVar1;
		Transform pUVar2;

		pUVar2 = null;
		bVar1 = ((Object)source != null);
		if (bVar1) {
			if (source != null) {
				pUVar2 = source.transform;
				if (pUVar2 != null) {
					pUVar2 = pUVar2.root;
					goto label_058df844;
				}
			}
			throw new NullReferenceException();
		}
	label_058df844: ;
		AottgCharacterTextField.SetInputFont(pUVar2, id, font);
		return;
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x57EE380", Offset = "0x57ED380", VA = "0x57EE380")]
	public static string VisibleText(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c (Gisketch.Aottg2UI.Game.AottgCharacterTextField$$VisibleText): clean
		uint uVar1;
		String pSVar2;

		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
			uVar1 = ((typeof(MiscExtensions))._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(MiscExtensions))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = MiscExtensions.StripRichText(value);
		pSVar2 = MiscExtensions.StripHex(pSVar2);
		return pSVar2;
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x57EE410", Offset = "0x57ED410", VA = "0x57EE410", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c (Gisketch.Aottg2UI.Game.AottgCharacterTextField$$Build): 1 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> __this_00;
		Action<AottgUi> __this_01;
		String id;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;

		if (Il2CppMethodInitialized_07545574 == false) {
			Il2CppMethodInitialized_07545574 = true;
			uVar1 = (typeof(AottgCharacterTextField)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgCharacterTextField)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (Dictionary<object, object>)AottgCharacterTextField.Values;
		}
		else {
			__this_00 = *(Dictionary<object, object>*)(typeof(AottgCharacterTextField)).static_fields;
		}
		if (__this_00 != null) {
			__this_00.set_Item((object)this._id, (object)this._value);
			__this_01 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__15_0);
			id = String.Concat(this._id, "-field");
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Column", null, null, null, null, 5.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if ((ui != null) &&(pGVar2 = ui.Panel("default", __this_01, id, layout, null), pGVar2 != null)) {
				pGVar2.active = this._enabled;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x57EE620", Offset = "0x57ED620", VA = "0x57EE620")]
	private static bool IsEnabled(GisketchActionContext context, string id, bool fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c (Gisketch.Aottg2UI.Game.AottgCharacterTextField$$IsEnabled): clean
		GisketchUIState __this;
		bool bVar1;
		GisketchUIRoot x;
		String key;

		x = null;
		bVar1 = ((Object)context.GameObject != null);
		if (bVar1) {
			if (context.GameObject == null) goto label_058ee754;
			x = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		bVar1 = ((Object)x == null);
		if (!bVar1) {
			if (x == null) {
	label_058ee754: ;
				throw new NullReferenceException();
			}
			__this = x._State_k__BackingField;
			if (__this != null) {
				key = String.Concat(id, ".enabled");
				bVar1 = __this.GetBool(key, fallback);
				return bVar1;
			}
		}
		return fallback;
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x57EE7A0", Offset = "0x57ED7A0", VA = "0x57EE7A0")]
	private static void SetFromInput(GisketchActionContext context, string id, Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c (Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFromInput): 4 lines keep C-only constructs
		Dictionary<object, object> __this;
		Object x;
		bool bVar1;
		TMP_InputField __this_00;
		String* ppSVar2;
		String pSVar3;
		bool local_41;
		AottgCharacterTextColorCodec.Document local_40;
		String local_38;

		if (Il2CppMethodInitialized_07545576 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
			Il2CppMethodInitialized_07545576 = true;
		}
		x = (Object)context.GameObject;
		__this_00 = null;
		bVar1 = (x != null);
		if (bVar1) {
			if (x == null) goto label_058ee9de;
			__this_00 = x.GetComponent<TMP_InputField>();
		}
		bVar1 = ((Object)__this_00 != null);
		if (bVar1) {
			if (__this_00 == null) goto label_058ee9de;
			ppSVar2 = &__this_00.m_Text;
		}
		else {
			ppSVar2 = *(String**)(g_data_07556758 + 0xb8);
		}
		pSVar3 = *ppSVar2;
		pSVar3 = AottgCharacterTextField.CleanInput(pSVar3);
		bVar1 = ((Object)__this_00 != null);
		if (bVar1) {
			if (__this_00 == null) goto label_058ee9de;
			bVar1 = (__this_00.m_Text != pSVar3);
			if (bVar1) {
				__this_00.SetTextWithoutNotify(pSVar3);
			}
		}
		__this = (Dictionary<object, object>)AottgCharacterTextField.Values;
		local_40 = null;
		local_38 = null;
		if (pSVar3 == null) {
			pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		bVar1 = AottgCharacterTextColorCodec.TryImport(pSVar3, null, ref local_40, ref local_38, ref local_41);
		if (bVar1) {
			if (local_40 == null) goto label_058ee9de;
			pSVar3 = AottgCharacterTextColorCodec.Serialize(local_40.Text, (IList<string>)local_40.Colors);
		}
		if (__this != null) {
			__this.set_Item((object)id, (object)pSVar3);
			if (changed != null) {
				(*(code)changed.invoke_impl)(changed.method_code,changed.method);
			}
			return;
		}
	label_058ee9de: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x57EE9F0", Offset = "0x57ED9F0", VA = "0x57EE9F0")]
	private static string CleanInput(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c (Gisketch.Aottg2UI.Game.AottgCharacterTextField$$CleanInput): clean
		uint uVar1;
		String pSVar2;

		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
			uVar1 = ((typeof(MiscExtensions))._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(MiscExtensions))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = MiscExtensions.StripRichText(value);
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = pSVar2.Replace("\n", (String)**(ulong*)(g_data_07556758 + 0xb8));
		return pSVar2;
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x57EE760", Offset = "0x57ED760", VA = "0x57EE760")]
	public static string EnabledKey(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c (Gisketch.Aottg2UI.Game.AottgCharacterTextField$$EnabledKey): clean
		String pSVar1;

		pSVar1 = String.Concat(id, ".enabled");
		return pSVar1;
	}

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x57EDFE0", Offset = "0x57ECFE0", VA = "0x57EDFE0")]
	private static void SetInputText(Transform root, string id, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c (Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetInputText): clean
		uint uVar1;
		TMP_InputField pTVar2;
		bool bVar3;
		Object[] pSVar4;
		ulong uVar5;
		Object pUVar6;
		String pSVar7;
		int iVar8;
		ulong uVar9;

		bVar3 = ((Object)root == null);
		if (bVar3) {
			return;
		}
		if ((root == null) ||(pSVar4 = root.GetComponentsInChildren<TMP_InputField>(true), pSVar4 == null)) {
	label_058ee1f4: ;
			throw new NullReferenceException();
		}
		iVar8 = (int)pSVar4.Length;
		uVar5 = pSVar4.Length & 0xffffffff;
		if (value == null) {
			if (iVar8 < 1) {
				return;
			}
			uVar9 = 0;
			while (uVar9 < uVar5) {
				pTVar2 = (TMP_InputField)pSVar4[uVar9];
				bVar3 = ((Object)pTVar2 != null);
				if (bVar3) {
					if ((pTVar2 == null) ||(pUVar6 = (Object)pTVar2.gameObject, pUVar6 == null)) goto label_058ee1f4;
					pSVar7 = pUVar6.name;
					bVar3 = (pSVar7 == id);
					if (bVar3) {
						pTVar2.SetTextWithoutNotify((String)**(ulong*)(g_data_07556758 + 0xb8));
						pTVar2.ForceLabelUpdate();
					}
				}
				uVar9 = uVar9 + 1;
				uVar1 = (uint)pSVar4.Length;
				uVar5 = (ulong)uVar1;
				if ((long)(int)uVar1 <= (long)uVar9) {
					return;
				}
			}
		}
		else {
			if (iVar8 < 1) {
				return;
			}
			uVar9 = 0;
			while (uVar9 < uVar5) {
				pTVar2 = (TMP_InputField)pSVar4[uVar9];
				bVar3 = ((Object)pTVar2 != null);
				if (bVar3) {
					if ((pTVar2 == null) ||(pUVar6 = (Object)pTVar2.gameObject, pUVar6 == null)) goto label_058ee1f4;
					pSVar7 = pUVar6.name;
					bVar3 = (pSVar7 == id);
					if (bVar3) {
						pTVar2.SetTextWithoutNotify(value);
						pTVar2.ForceLabelUpdate();
					}
				}
				uVar9 = uVar9 + 1;
				uVar1 = (uint)pSVar4.Length;
				uVar5 = (ulong)uVar1;
				if ((long)(int)uVar1 <= (long)uVar9) {
					return;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x57EE200", Offset = "0x57ED200", VA = "0x57EE200")]
	private static void SetInputFont(Transform root, string id, string font)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c (Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetInputFont): clean
		uint uVar1;
		TMP_InputField input;
		bool bVar2;
		Object[] pSVar3;
		ulong uVar4;
		Object __this;
		String a;
		ulong uVar5;

		bVar2 = ((Object)root == null);
		if (bVar2) {
			return;
		}
		if ((root == null) ||(pSVar3 = root.GetComponentsInChildren<TMP_InputField>(true), pSVar3 == null)) {
	label_058ee377: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar3.Length < 1) {
			return;
		}
		uVar4 = pSVar3.Length & 0xffffffff;
		uVar5 = 0;
		do {
			if (uVar4 <= uVar5) {
				throw new IndexOutOfRangeException();
			}
			input = (TMP_InputField)pSVar3[uVar5];
			bVar2 = ((Object)input != null);
			if (bVar2) {
				if ((input == null) ||(__this = (Object)input.gameObject, __this == null)) goto label_058ee377;
				a = __this.name;
				bVar2 = (a == id);
				if (bVar2) {
					NameFontCatalog.Apply(input, font);
				}
			}
			uVar5 = uVar5 + 1;
			uVar1 = (uint)pSVar3.Length;
			uVar4 = (ulong)uVar1;
			if ((long)(int)uVar1 <= (long)uVar5) {
				return;
			}
		} while(true);
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x57EEAC0", Offset = "0x57EDAC0", VA = "0x57EEAC0")]
	public static void SetFieldVisible(GameObject source, string id, bool visible)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c (Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFieldVisible): clean
		uint uVar1;
		Object x;
		bool bVar2;
		Transform pUVar3;
		Object[] pSVar4;
		ulong uVar5;
		Object __this;
		String a;
		String b;
		GameObject __this_00;
		ulong uVar6;

		pUVar3 = null;
		bVar2 = ((Object)source != null);
		if (bVar2) {
			if ((source == null) ||(pUVar3 = source.transform, pUVar3 == null)) goto label_058eec91;
			pUVar3 = pUVar3.root;
		}
		bVar2 = ((Object)pUVar3 == null);
		if (bVar2) {
			return;
		}
		if ((pUVar3 != null) &&(pSVar4 = pUVar3.GetComponentsInChildren<Transform>(true), pSVar4 != null)) {
			if ((int)pSVar4.Length < 1) {
				return;
			}
			uVar5 = pSVar4.Length & 0xffffffff;
			uVar6 = 0;
			do {
				if (uVar5 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				x = (Object)pSVar4[uVar6];
				bVar2 = (x != null);
				if (bVar2) {
					if ((x == null) ||(__this = (Object)x.gameObject, __this == null)) break;
					a = __this.name;
					b = String.Concat(id, "-field");
					bVar2 = (a == b);
					if (bVar2) {
						__this_00 = x.gameObject;
						if (__this_00 == null) break;
						__this_00.SetActive(visible);
					}
				}
				uVar6 = uVar6 + 1;
				uVar1 = (uint)pSVar4.Length;
				uVar5 = (ulong)uVar1;
				if ((long)(int)uVar1 <= (long)uVar6) {
					return;
				}
			} while(true);
		}
	label_058eec91: ;
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextField.c.

	// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$.cctor: 1 lines keep C-only constructs
	static AottgCharacterTextField()
	{
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		Dictionary<string, string> __this;

		if (Il2CppMethodInitialized_0754557c == false) {
			Il2CppMethodInitialized_0754557c = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this = new Dictionary<string, string>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		AottgCharacterTextField.Values = __this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_0: 2 lines keep C-only constructs
	private void Build_b__15_0(AottgUi field)
	{
		AottgCharacterTextField.c__DisplayClass15_0 __this_00;
		GisketchNodeDefinition pGVar1;
		Action<AottgUi> __this_01;
		String id;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgCharacterTextField.c__DisplayClass15_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			if (field != null) {
				pGVar1 = field.TextKey(this._labelKey, "accountInputLabel", null, null, null);
				__this_00.label = pGVar1;
				__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_c__DisplayClass15_0_Build_b__1);
				id = String.Concat(this._id, "-row");
				width = AottgUi.Percent(100.0);
				layout = AottgUi.Layout("Row", null, "Center", null, null, 10.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				field.Panel("row", __this_01, id, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterTextField.<>c__DisplayClass15_0$$.ctor: clean
	private void c__DisplayClass15_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_2: clean
	private void Build_b__15_2(GisketchActionContext context)
	{
		String id;
		Action<GisketchActionContext> changed;

		id = this._id;
		changed = this._changed;
		if ((typeof(AottgCharacterTextField)._2).cctor_finished_or_no_cctor == 0) {
		}
		AottgCharacterTextField.SetFromInput(context, id, changed);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_3: clean
	private void Build_b__15_3(GisketchActionContext context)
	{
		String id;
		String effectPrefix;
		bool bVar1;

		id = this._id;
		effectPrefix = this._effectPrefix;
		bVar1 = this._enabled;
		if ((typeof(AottgCharacterTextField)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar1 = AottgCharacterTextField.IsEnabled(context, id, bVar1);
		AottgCharacterSetEffectsDialog.Open(context, id, effectPrefix, bVar1);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterTextField.<>c__DisplayClass15_0$$<Build>b__1: 3 lines keep C-only constructs
	private void c__DisplayClass15_0__Build_b__1(AottgUi row)
	{
		AottgCharacterTextField pGVar1;
		String pSVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		Action<GisketchActionContext> pSVar5;
		GisketchNodeDefinition pGVar6;
		GisketchUIBindingDefinition pGVar7;
		String pSVar8;
		Nullable<bool>[] aSStack_50 = new Nullable<bool>[4];
		Nullable<bool>[] aSStack_48 = new Nullable<bool>[4];
		AottgUi pGStack_40;
		String pSStack_38;

		pGVar1 = this.__4__this;
		if ((pGVar1 != null) &&(pGVar6 = this.label, pGVar6 != null)) {
			pSVar8 = pGVar1._id;
			pSStack_38 = pGVar6.text;
			pSVar2 = pGVar1._placeholderKey;
			pGStack_40 = row;
			pSVar2 = Aottg2GisketchLocale.Text(pSVar2);
			pGVar3 = AottgUi.Percent(100.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			pGVar1 = this.__4__this;
			pSVar5 = new Action<GisketchActionContext>((object)pGVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__15_2);
			if (pGStack_40 != null) {
				pGVar6 = pGStack_40.FormInput(pSVar8, pSStack_38, pSVar2, 0, "characterTextInput", pGVar4, null, pSVar5, 0.2, 0x200, null, null);
				pGVar1 = this.__4__this;
				if ((pGVar1 != null) &&(pGVar6 != null)) {
					pGVar6.textKey = pGVar1._placeholderKey;
					pGVar1 = this.__4__this;
					if (pGVar1 != null) {
						pGVar6.value = pGVar1._value;
						pGVar1 = this.__4__this;
						if (pGVar1 != null) {
							aSStack_48[0].hasValue = false;
							aSStack_48[0].value = false;
							aSStack_48 = new Nullable<bool>(pGVar1._enabled);
							pGVar6.enabled = aSStack_48[0];
							pGVar7 = new GisketchUIBindingDefinition();
							pGVar1 = this.__4__this;
							if (pGVar1 != null) {
								pSVar8 = pGVar1._id;
								pSVar8 = String.Concat(pSVar8, ".enabled");
								if (pGVar7 != null) {
									pGVar7.enabled = pSVar8;
									pGVar6.bind = pGVar7;
									pGVar1 = this.__4__this;
									pSVar5 = new Action<GisketchActionContext>((object)pGVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__15_3);
									pGVar1 = this.__4__this;
									if (pGVar1 != null) {
										pSVar8 = String.Concat(pGVar1._id, "-set-effects");
										pGVar6 = pGStack_40.ButtonKey(0, "MainMenu.Profile.SetEffects", pSVar5, pSVar8, null, null, "UI/Icons/Profile/SparkleIcon");
										pGVar1 = this.__4__this;
										if (pGVar1 != null) {
											aSStack_50[0].hasValue = false;
											aSStack_50[0].value = false;
											aSStack_50 = new Nullable<bool>(pGVar1._enabled);
											if (pGVar6 != null) {
												pGVar6.enabled = aSStack_50[0];
												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchUIBindingDefinition));
												pGVar7 = new GisketchUIBindingDefinition();
												pGVar1 = this.__4__this;
												if (pGVar1 != null) {
													pSVar8 = pGVar1._id;
													pSVar8 = String.Concat(pSVar8, ".enabled") ;
													if (pGVar7 != null) {
														pGVar7.enabled = pSVar8;
														pGVar6.bind = pGVar7;
														pGVar3 = AottgUi.Points(160.0);
														pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
														pGVar6.layout = pGVar4;
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
}
