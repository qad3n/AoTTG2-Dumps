// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchTypographyLocale
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000032")]
public static class GisketchTypographyLocale
{
	[Token(Token = "0x40000FB")]
	private const string LatinDisplayKey = "Barlow-Bold SDF";

	[Token(Token = "0x40000FC")]
	private const string NotoKey = "NotoSans-Regular SDF";

	[Token(Token = "0x40000FD")]
	private const string ArabicKey = "NotoSansArabic-VariableFont_wdth,wght SDF";

	[Token(Token = "0x40000FE")]
	private const string SimplifiedChineseKey = "NotoSansSC-Regular SDF";

	[Token(Token = "0x40000FF")]
	private const string JapaneseKey = "NotoSansJP-Regular SDF";

	[Token(Token = "0x4000100")]
	private const string KoreanKey = "NotoSansKR-Regular SDF";

	[Token(Token = "0x4000101")]
	private const string ThaiKey = "NotoSansThai-Regular SDF";

	[Token(Token = "0x4000102")]
	public const string SymbolKey = "Symbola SDF";

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] FallbackFontKeys;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type SettingsManagerType;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Type GeneralSettingsType;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Type StringSettingType;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x20")]
	private static readonly FieldInfo GeneralSettingsField;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x28")]
	private static readonly FieldInfo LanguageField;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x30")]
	private static readonly PropertyInfo ValueProperty;

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x5242000", Offset = "0x5241000", VA = "0x5242000")]
	public static string CurrentLanguageName()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c (Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$CurrentLanguageName): 1 lines keep C-only constructs
		FieldInfo pSVar1;
		PropertyInfo __this;
		bool bVar2;
		long lVar3;
		object obj;
		String pSVar4;
		String value;

		bVar2 = (GisketchTypographyLocale. GeneralSettingsField == null);
		if (!bVar2) {
			bVar2 = (GisketchTypographyLocale. LanguageField == null);
			if (!bVar2) {
				bVar2 = (GisketchTypographyLocale. ValueProperty == null);
				if (!bVar2) {
					pSVar1 = GisketchTypographyLocale. GeneralSettingsField;
					if (pSVar1 == null) {
	label_053421c0: ;
						throw new NullReferenceException();
					}
					lVar3 = pSVar1.unknown(0);
					value = null;
					if (lVar3 != 0) {
						pSVar1 = GisketchTypographyLocale.LanguageField;
						if (pSVar1 == null) goto label_053421c0;
						obj = (object)pSVar1.unknown(lVar3);
						if (obj == null) {
							value = null;
						}
						else {
							__this = GisketchTypographyLocale.ValueProperty ;
							if (__this == null) goto label_053421c0;
							pSVar4 = (String)__this.GetValue(obj) ;
							value = null;
							if ((pSVar4 != null) &&(value = null, (Il2CppClass)pSVar4.klass == g_data_07556758)) {
								value = pSVar4;
							}
						}
					}
					bVar2 = String.IsNullOrEmpty(value);
					if (!bVar2) {
						return value;
					}
				}
			}
		}
		return "English";
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x5242E00", Offset = "0x5241E00", VA = "0x5242E00")]
	public static string FontKeyForLanguage(string baseKey, string languageName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c (Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$FontKeyForLanguage): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_075428bc == false) {
			Il2CppMethodInitialized_075428bc = true;
			uVar1 = (typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = (languageName == "English");
		if (!bVar2) {
			method_00 = (MethodInfo *)"Indonesian";
			bVar2 = (languageName == "Indonesian");
			if (!bVar2) {
				bVar2 = GisketchTypographyLocale.UsesLatinFonts(languageName);
				uVar1 = (typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor;
				if (!bVar2) {
					if (uVar1 == 0) {
					}
					return pSVar3;
				}
				if (uVar1 == 0) {
				}
				if (baseKey == null) {
					throw new NullReferenceException();
				}
				bVar2 = baseKey.StartsWith("Barlow-");
				if (!bVar2) {
					baseKey = "Barlow-Bold SDF";
				}
			}
		}
		return baseKey;
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x52426C0", Offset = "0x52416C0", VA = "0x52426C0")]
	public static float SizeScale(string baseKey, string languageName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c (Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$SizeScale): clean
		bool bVar1;
		String a;
		float fVar2;

		if ((typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor == 0) {
		}
		a = GisketchTypographyLocale.FontKeyForLanguage(baseKey, languageName);
		bVar1 = (a == baseKey);
		if (!bVar1) {
			bVar1 = (baseKey == "header SDF");
			if (bVar1) {
				bVar1 = (a == "Barlow-Bold SDF");
				if (bVar1) {
				}
				else {
				}
			}
			else {
				bVar1 = (baseKey == "JEK5 SDF");
				if (bVar1) {
					bVar1 = (a == "Barlow-Bold SDF");
					if (bVar1) {
					}
					else {
					}
				}
				else {
					if (baseKey == null) {
						throw new NullReferenceException();
					}
					bVar1 = baseKey.StartsWith("Barlow-");
					if (bVar1) {
						bVar1 = (a == "NotoSans-Regular SDF");
						if (bVar1) {
						}
						else {
						}
					}
				}
			}
		}
		return fVar2;
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x5243510", Offset = "0x5242510", VA = "0x5243510")]
	public static string CharacterFontKey(int unicode, string languageName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c (Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$CharacterFontKey): 1 lines keep C-only constructs
		String* ppSVar1;
		String pSVar2;

		if ((unicode < 0x10000) && (unicode - 0x2c00U < 0xfffff590)) {
			if (unicode - 0xe80U < 0xffffff80) {
				if (((unicode - 0xff00U < 0xffffff70) && (unicode - 0x900U < 0xfffffd00)) &&(unicode - 0xfe00U < 0xfffffd50)) {
					if (((unicode - 0xd7b0U < 0xffffd450) && ((unicode & 0xffffff00U) != 0x1100)) &&(unicode - 0x3190U < 0xffffffa0)) {
						if ((unicode - 0x3100U < 0xffffff40) && (unicode - 0x3200U < 0xfffffff0)) {
							if ((((unicode - 0xf900U < 0x200) || (unicode - 0x3400U < 0x6c00)) || (unicode - 0x2e80U < 0x160)) || (((unicode & 0xffffffc0U) == 0x3000 || (unicode - 0xff00U < 0xf0)))) {
								return pSVar2;
							}
							ppSVar1 = &"NotoSans-Regular SDF";
						}
						else {
							ppSVar1 = &"NotoSansJP-Regular SDF";
						}
					}
					else {
						ppSVar1 = &"NotoSansKR-Regular SDF";
					}
				}
				else {
					ppSVar1 = &"NotoSansArabic-VariableFont_wdth,wght SDF";
				}
			}
			else {
				ppSVar1 = &"NotoSansThai-Regular SDF";
			}
		}
		else {
			ppSVar1 = &"Symbola SDF";
		}
		return *ppSVar1;
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x52436D0", Offset = "0x52426D0", VA = "0x52436D0")]
	private static string HanFontKey(string languageName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c (Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$HanFontKey): clean
		bool bVar1;
		String a;

		a = GisketchTypographyLocale.ScriptFontKey(languageName);
		bVar1 = (a == "NotoSans-Regular SDF");
		if (((bVar1) || (bVar1 = (a == "NotoSansArabic-VariableFont_wdth,wght SDF"))) ||(bVar1 = (a == "NotoSansThai-Regular SDF"))) {
			return "NotoSansSC-Regular SDF";
		}
		return a;
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x52430D0", Offset = "0x52420D0", VA = "0x52430D0")]
	public static bool SupportsLegacyText(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c (Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$SupportsLegacyText): clean
		bool bVar1;

		bVar1 = (key != "NotoSansArabic-VariableFont_wdth,wght SDF");
		return bVar1;
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x5242C90", Offset = "0x5241C90", VA = "0x5242C90")]
	public static bool UsesDesignedFonts(string languageName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c (Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$UsesDesignedFonts): clean
		bool bVar1;

		bVar1 = (languageName == "English");
		if (bVar1) {
			return true;
		}
		bVar1 = (languageName == "Indonesian");
		return bVar1;
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x5243110", Offset = "0x5242110", VA = "0x5243110")]
	private static bool UsesLatinFonts(string languageName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c (Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$UsesLatinFonts): 2 lines keep C-only constructs
		bool bVar1;
		uint uVar2;
		String* ppSVar3;

		uVar2 = _PrivateImplementationDetails_.ComputeStringHash(languageName);
		if (uVar2 < 0xa289821b) {
			if (uVar2 < 0x2b3a09a1) {
				if (uVar2 == 0x7ffda29) {
					ppSVar3 = &"Polski";
				}
				else if (uVar2 == 0x19f0b05e) {
					ppSVar3 = &"Espa\xc3\xb1ol";
				}
				else {
					if (uVar2 != 0x2b3a09a0) {
						return false;
					}
					ppSVar3 = &"PT-BR";
				}
			}
			else if (uVar2 < 0x6ea5fa0d) {
				if (uVar2 == 0x4b11e090) {
					ppSVar3 = &"Magyar";
				}
				else {
					if (uVar2 != 0x6ea5fa0c) {
						return false;
					}
					ppSVar3 = &"Italiano";
				}
			}
			else if (uVar2 == 0x8a78f070) {
				ppSVar3 = &"Suomi";
			}
			else {
				if (uVar2 != 0xa289821a) {
					return false;
				}
				ppSVar3 = &"Rom\xc3\xa2n\xc4\x83";
			}
		}
		else if (uVar2 < 0xbbfbc980) {
			if (uVar2 == 0xa776196e) {
				ppSVar3 = &"Catal\xc3\xa0";
			}
			else if (uVar2 == 0xb297e9d1) {
				ppSVar3 = &"Dutch";
			}
			else {
				if (uVar2 != 0xbbfbc97f) {
					return false;
				}
				ppSVar3 = &"\xc4\x8ce\xc5\xa1tina";
			}
		}
		else if (uVar2 < 0xf41f19e4) {
			if (uVar2 == 0xca98de7e) {
				ppSVar3 = &"T\xc3\xbcrk\xc3\xa7e";
			}
			else {
				if (uVar2 != 0xf41f19e3) {
					return false;
				}
				ppSVar3 = &"Deutsch";
			}
		}
		else if (uVar2 == 0xfeab4202) {
			ppSVar3 = &"Ti\xe1\xba\xbfng Vi\xe1\xbb\x87t";
		}
		else {
			if (uVar2 != 0xf8f1b0d6) {
				return false;
			}
			ppSVar3 = &"Fran\xc3\xa7ais";
		}
		bVar1 = (languageName == *ppSVar3);
		if (bVar1) {
			return true;
		}
		return false;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x5243370", Offset = "0x5242370", VA = "0x5243370")]
	private static string ScriptFontKey(string languageName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c (Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$ScriptFontKey): clean
		bool bVar1;

		bVar1 = (languageName == "\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87");
		if (bVar1) {
			return "NotoSansSC-Regular SDF";
		}
		bVar1 = (languageName == "\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87");
		if (bVar1) {
			return "NotoSansTC-Regular SDF";
		}
		bVar1 = (languageName == "\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e");
		if (bVar1) {
			return "NotoSansJP-Regular SDF";
		}
		bVar1 = (languageName == "\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4");
		if (bVar1) {
			return "NotoSansKR-Regular SDF";
		}
		bVar1 = (languageName == "\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9");
		if (bVar1) {
			return "NotoSansArabic-VariableFont_wdth,wght SDF";
		}
		bVar1 = (languageName == "\xe0\xb9\x84\xe0\xb8\x97\xe0\xb8\xa2");
		if (bVar1) {
			return "NotoSansThai-Regular SDF";
		}
		return "NotoSans-Regular SDF";
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x5243330", Offset = "0x5242330", VA = "0x5243330")]
	private static bool IsBarlowKey(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c (Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$IsBarlowKey): clean
		bool bVar1;

		if (key == null) {
			throw new NullReferenceException();
		}
		bVar1 = key.StartsWith("Barlow-");
		return bVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypographyLocale.c.

	// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$.cctor: 3 lines keep C-only constructs
	static GisketchTypographyLocale()
	{
		Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_StaticFields pGVar1;
		bool bVar2;
		String[] pSVar3;
		Type pSVar4;
		FieldInfo pSVar5;
		PropertyInfo pSVar6;

		pSVar3 = (String[])new string[8];
		if (pSVar3 == null) {
	label_05343c2b: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar3.Length != 0) {
			pSVar3[0] = "NotoSans-Regular SDF";
			if ((pSVar3.Length & 0xfffffffe) != 0) {
				pSVar3[1] = "NotoSansSC-Regular SDF";
				if (2 < (uint)pSVar3.Length) {
					pSVar3[2] = "NotoSansTC-Regular SDF";
					if ((pSVar3.Length & 0xfffffffc) != 0) {
						pSVar3[3] = "NotoSansJP-Regular SDF";
						if (4 < (uint)pSVar3.Length) {
							pSVar3[4] = "NotoSansKR-Regular SDF";
							if (5 < (uint)pSVar3.Length) {
								pSVar3[5] = "NotoSansArabic-VariableFont_wdth,wght SDF";
								if (6 < (uint)pSVar3.Length) {
									pSVar3[6] = "NotoSansThai-Regular SDF";
									if ((pSVar3.Length & 0xfffffff8) != 0) {
										pSVar3[7] = "Symbola SDF";
										GisketchTypographyLocale.FallbackFontKeys = pSVar3;
										pSVar4 = (Type)il2cpp_runtime_helper_030d66e0("Settings.SettingsManager, Scripts", MethodInfo_System_Type_GetType, MethodInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_cctor);
										pGVar1 = typeof(GisketchTypographyLocale).static_fields;
										pGVar1.SettingsManagerType = pSVar4;
										pSVar4 = (Type)il2cpp_runtime_helper_030d66e0("Settings.GeneralSettings, Scripts", MethodInfo_System_Type_GetType, MethodInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_cctor);
										pGVar1 = typeof(GisketchTypographyLocale).static_fields;
										pGVar1.GeneralSettingsType = pSVar4;
										pSVar4 = (Type)il2cpp_runtime_helper_030d66e0("Settings.StringSetting, Scripts", MethodInfo_System_Type_GetType, MethodInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_cctor);
										pGVar1 = typeof(GisketchTypographyLocale).static_fields;
										pGVar1.StringSettingType = pSVar4;
										pSVar5 = null;
										bVar2 = (typeof(GisketchTypographyLocale). static_fields.SettingsManagerType != null);
										if (bVar2) {
											pSVar4 = GisketchTypographyLocale. SettingsManagerType;
											if (pSVar4 == null) goto label_05343c2b;
											pSVar5 = (FieldInfo)pSVar4.unknown("GeneralSettings");
										}
										pGVar1 = typeof(GisketchTypographyLocale).static_fields;
										pGVar1.GeneralSettingsField = pSVar5;
										pSVar4 = GisketchTypographyLocale. GeneralSettingsType;
										pSVar5 = null;
										bVar2 = (pSVar4 != null);
										if (bVar2) {
											pSVar4 = GisketchTypographyLocale. GeneralSettingsType;
											if (pSVar4 == null) goto label_05343c2b;
											pSVar5 = (FieldInfo)pSVar4.unknown("Language");
										}
										pGVar1 = typeof(GisketchTypographyLocale).static_fields;
										pGVar1.LanguageField = pSVar5;
										pSVar4 = GisketchTypographyLocale. StringSettingType;
										pSVar6 = null;
										bVar2 = (pSVar4 != null);
										if (bVar2) {
											pSVar4 = GisketchTypographyLocale. StringSettingType;
											if (pSVar4 == null) goto label_05343c2b;
											pSVar6 = pSVar4.GetProperty("Value", 0x34);
										}
										pGVar1 = typeof(GisketchTypographyLocale).static_fields;
										pGVar1.ValueProperty = pSVar6;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
