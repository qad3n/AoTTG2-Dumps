// ==================== AoTTG2 cross-reference ====================
// Type: UI.LanguageFonts
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/LanguageFonts.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000878")]
internal static class LanguageFonts
{
	[Token(Token = "0x4002AF4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConditionalWeakTable<Text, Font> DesignedFonts;

	[Token(Token = "0x4002AF5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ConditionalWeakTable<Text, string> AssignedValues;

	[Token(Token = "0x4002AF6")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ConditionalWeakTable<Text, Font> PinnedFonts;

	[Token(Token = "0x4002AF7")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<Font, Font> LegacyFonts;

	[Token(Token = "0x4002AF8")]
	[FieldOffset(Offset = "0x20")]
	private static string _legacyFontsLanguage;

	[Token(Token = "0x4002AF9")]
	[FieldOffset(Offset = "0x28")]
	private static bool _rightToLeftLanguage;

	[Token(Token = "0x4002AFA")]
	[FieldOffset(Offset = "0x30")]
	private static TMP_FontAsset _designedDefault;

	[Token(Token = "0x60050C3")]
	[Address(RVA = "0x5C54A10", Offset = "0x5C53A10", VA = "0x5C54A10")]
	public static void Apply()
	{
		// Lifted from source/cpp/UI/LanguageFonts.c (UI.LanguageFonts$$Apply): 1 lines keep C-only constructs
		uint uVar1;
		object @object;
		bool bVar3;
		TMP_FontAsset pTVar4;
		UI_LanguageFonts___c_StaticFields pUVar5;
		Action __this;

		pTVar4 = LanguageFonts._designedDefault;
		bVar3 = ((Object)pTVar4 == null);
		if (!bVar3) goto label_05d54b7d;
		pTVar4 = TMP_Settings.defaultFontAsset;
		LanguageFonts._designedDefault = pTVar4;
		if ((typeof(LanguageFonts.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar5 = typeof(LanguageFonts.c).static_fields;
			__this = pUVar5.__9__7_0;
			if (__this == null) goto label_05d54bfa;
	label_05d54b5b: ;
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar5 = typeof(LanguageFonts.c).static_fields;
			__this = pUVar5.__9__7_0;
			if (__this != null) goto label_05d54b5b;
	label_05d54bfa: ;
			if ((typeof(LanguageFonts.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar5 = typeof(LanguageFonts.c).static_fields;
			}
			@object = (object)pUVar5.__9;
			__this = new Action(@object, (intptr_t)MethodInfo_UI_LanguageFonts_c_Apply_b__7_0) ;
			pUVar5 = typeof(LanguageFonts.c).static_fields;
			pUVar5.__9__7_0 = __this;
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		Application.add_quitting(__this);
	label_05d54b7d: ;
		pTVar4 = GisketchTypography.Resolve("text", 400, null);
		TMP_Settings.defaultFontAsset = pTVar4;
		GisketchFontFallback.ApplyLanguage();
		return;
	}

	[Token(Token = "0x60050C4")]
	[Address(RVA = "0x5C54C80", Offset = "0x5C53C80", VA = "0x5C54C80")]
	public static void Localize(GameObject root)
	{
		// Lifted from source/cpp/UI/LanguageFonts.c (UI.LanguageFonts$$Localize): clean
		uint uVar1;
		Text text;
		ConditionalWeakTable<Text, Font> __this;
		bool bVar2;
		Object[] pSVar3;
		ulong uVar4;
		Font font;
		MethodInfo method_00;
		ulong uVar5;
		object local_38;

		local_38 = null;
		if (root != null) {
			pSVar3 = root.GetComponentsInChildren<Text>(true);
			if (pSVar3 != null) {
				if (0 < (int)pSVar3.Length) {
					uVar4 = pSVar3.Length & 0xffffffff;
					uVar5 = 0;
					do {
						if (uVar4 <= uVar5) {
							throw new IndexOutOfRangeException();
						}
						text = (Text)pSVar3[uVar5];
						__this = LanguageFonts.PinnedFonts;
						if (__this == null) goto label_05d54df7;
						bVar2 = __this.TryGetValue((object)text, ref local_38);
						if (!bVar2) {
							font = LanguageFonts.DesignedFont(text);
							method_00 = (MethodInfo)LanguageFonts.LegacyFont(font);
							if (text == null) goto label_05d54df7;
							text.font = (Font)method_00;
							if (LanguageFonts._rightToLeftLanguage != false) {
								LanguageFonts.EnsureRightToLeftLines(text);
							}
						}
						uVar5 = uVar5 + 1;
						uVar1 = (uint)pSVar3.Length;
						uVar4 = (ulong)uVar1;
					} while ((long)uVar5 < (long)(int)uVar1);
				}
				return;
			}
		}
	label_05d54df7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050C5")]
	[Address(RVA = "0x5C54F00", Offset = "0x5C53F00", VA = "0x5C54F00")]
	public static Font LegacyFont(Font font)
	{
		// Lifted from source/cpp/UI/LanguageFonts.c (UI.LanguageFonts$$LegacyFont): 7 lines keep C-only constructs
		GeneralSettings pSVar1;
		StringSetting pSVar2;
		Dictionary<object, object> pSVar3;
		bool bVar5;
		String pSVar6;
		Il2CppClass klass;
		Font local_20;

		local_20 = null;
		bVar5 = ((Object)font == null);
		if (bVar5) {
			return null;
		}
		pSVar1 = SettingsManager.GeneralSettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.Language, pSVar2 != null)) {
			pSVar6 = pSVar2._value;
			bVar5 = (LanguageFonts._legacyFontsLanguage != pSVar6);
			klass = typeof(LanguageFonts);
			if (bVar5) {
				pSVar3 = (Dictionary<object, object>)LanguageFonts.LegacyFonts;
				if (pSVar3 == null) goto label_05d55186;
				pSVar3.Clear();
				LanguageFonts._legacyFontsLanguage = pSVar6;
				pSVar6 = UIManager.GetLanguageLetters();
				bVar5 = GisketchArabicText.HasPresentationForms(pSVar6);
				klass = typeof(LanguageFonts);
				LanguageFonts._rightToLeftLanguage = bVar5;
			}
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				klass = typeof(LanguageFonts);
			}
			pSVar3 = (Dictionary<object, object>)klass.static_fields.LegacyFonts;
			if (pSVar3 != null) {
				bVar5 = pSVar3.TryGetValue((object)font, (object*)&local_20);
				if (!bVar5) {
					pSVar6 = UIManager.GetLanguageLetters();
					local_20 = GisketchTypography.LegacyFont(font, pSVar6);
					pSVar3 = (Dictionary<object, object>)LanguageFonts.LegacyFonts;
					if (pSVar3 == null) goto label_05d55186;
					pSVar3.set_Item((object)font, (object)local_20);
				}
				return local_20;
			}
		}
	label_05d55186: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050C6")]
	[Address(RVA = "0x5C55250", Offset = "0x5C54250", VA = "0x5C55250")]
	public static void KeepDesignedFont(Text text)
	{
		// Lifted from source/cpp/UI/LanguageFonts.c (UI.LanguageFonts$$KeepDesignedFont): clean
		uint uVar1;
		ConditionalWeakTable<Text, Font> __this;
		Font value;

		if (Il2CppMethodInitialized_07547f1c == false) {
			Il2CppMethodInitialized_07547f1c = true;
			uVar1 = (typeof(LanguageFonts)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(LanguageFonts)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			value = LanguageFonts.DesignedFont(text);
		}
		else {
			value = LanguageFonts.DesignedFont(text);
		}
		if (text != null) {
			text.font = value;
			__this = LanguageFonts.PinnedFonts;
			if (__this != null) {
				__this.AddOrUpdate((object)text, (object)value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050C7")]
	[Address(RVA = "0x5C53D90", Offset = "0x5C52D90", VA = "0x5C53D90")]
	public static void SetText(Text text, string value)
	{
		// Lifted from source/cpp/UI/LanguageFonts.c (UI.LanguageFonts$$SetText): 1 lines keep C-only constructs
		ConditionalWeakTable<Text, string> pSVar1;
		bool bVar2;
		Text b;
		String a;
		Font pUVar3;
		Text pUVar4;
		String local_28;

		local_28 = null;
		b = (Text)GisketchArabicText.ToVisual(value, false);
		pSVar1 = LanguageFonts.AssignedValues;
		if (pSVar1 != null) {
			pUVar4 = text;
			bVar2 = pSVar1.TryGetValue((object)text, (object*)&local_28);
			if ((bVar2) &&(pUVar4 = (Text)value, bVar2 = (local_28 == value), bVar2)) {
				if (text == null) goto label_05d53f38;
				a = text.get_text();
				pUVar4 = b;
				bVar2 = (a == (String)b);
				if (bVar2) {
					return;
				}
			}
			pUVar3 = LanguageFonts.DesignedFont(text);
			pUVar3 = LanguageFonts.LegacyFont(pUVar3);
			if (text != null) {
				text.font = pUVar3;
				text.set_text((String)b);
				pSVar1 = LanguageFonts.AssignedValues;
				if (pSVar1 != null) {
					pUVar4 = text;
					pSVar1.AddOrUpdate((object)text, (object)value);
					if (b != (Text)value) {
						LanguageFonts.EnsureRightToLeftLines(text);
					}
					return;
				}
			}
		}
	label_05d53f38: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050C8")]
	[Address(RVA = "0x5C55190", Offset = "0x5C54190", VA = "0x5C55190")]
	private static void EnsureRightToLeftLines(Text text)
	{
		// Lifted from source/cpp/UI/LanguageFonts.c (UI.LanguageFonts$$EnsureRightToLeftLines): clean
		bool bVar1;
		GisketchRtlTextLines x;
		GameObject __this;

		if (text != null) {
			x = text.GetComponent<GisketchRtlTextLines>();
			bVar1 = ((Object)x == null);
			if (!bVar1) {
				return;
			}
			__this = text.gameObject;
			if (__this != null) {
				__this.AddComponent<GisketchRtlTextLines>();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050C9")]
	[Address(RVA = "0x5C54E10", Offset = "0x5C53E10", VA = "0x5C54E10")]
	private static Font DesignedFont(Text text)
	{
		// Lifted from source/cpp/UI/LanguageFonts.c (UI.LanguageFonts$$DesignedFont): 1 lines keep C-only constructs
		ConditionalWeakTable<Text, Font> pSVar1;
		bool bVar2;
		Font local_18;

		local_18 = null;
		pSVar1 = LanguageFonts.DesignedFonts;
		if (pSVar1 != null) {
			bVar2 = pSVar1.TryGetValue((object)text, (object*)&local_18);
			if (bVar2) {
				return local_18;
			}
			if (text != null) {
				local_18 = text.font;
				pSVar1 = LanguageFonts.DesignedFonts;
				if (pSVar1 != null) {
					pSVar1.Add((object)text, (object)local_18);
					return local_18;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/LanguageFonts.c.

	// UI.LanguageFonts$$.cctor: 1 lines keep C-only constructs
	static LanguageFonts()
	{
		UI_LanguageFonts_StaticFields pUVar1;
		ConditionalWeakTable<Text, Font> pSVar2;
		ConditionalWeakTable<Text, string> __this;
		Dictionary<Font, Font> __this_00;

		pSVar2 = new ConditionalWeakTable<Text, Font>();
		LanguageFonts.DesignedFonts = pSVar2;
		__this = il2cpp_codegen_object_new(typeof(ConditionalWeakTable<Text, string>));
		__this = new ConditionalWeakTable<object, object>();
		pUVar1 = typeof(LanguageFonts).static_fields;
		pUVar1.AssignedValues = __this;
		pSVar2 = new ConditionalWeakTable<Text, Font>();
		pUVar1 = typeof(LanguageFonts).static_fields;
		pUVar1.PinnedFonts = pSVar2;
		__this_00 = new Dictionary<Font, Font>();
		pUVar1 = typeof(LanguageFonts).static_fields;
		pUVar1.LegacyFonts = __this_00;
		return;
	}

	// UI.LanguageFonts.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new LanguageFonts.c();
		LanguageFonts.c.__9 = (LanguageFonts.c)__this;
		return;
	}

	// UI.LanguageFonts.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.LanguageFonts.<>c$$<Apply>b__7_0: clean
	private void c__Apply_b__7_0()
	{
		TMP_FontAsset value;

		value = LanguageFonts._designedDefault;
		if ((typeof(TMP_Settings)._2).cctor_finished_or_no_cctor == 0) {
			TMP_Settings.defaultFontAsset = value;
			return;
		}
		TMP_Settings.defaultFontAsset = value;
		return;
	}
}
