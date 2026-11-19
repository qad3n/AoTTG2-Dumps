// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchTypography
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000031")]
public static class GisketchTypography
{
	[Token(Token = "0x40000FA")]
	private const string FontRoot = "UI/Fonts/";

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x5241DB0", Offset = "0x5240DB0", VA = "0x5241DB0")]
	public static TMP_FontAsset Resolve(string family, int weight, [Optional] string requiredText)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c (Gisketch.Aottg2UI.Styling.GisketchTypography$$Resolve): clean
		bool bVar1;
		String pSVar2;
		String pSVar3;
		TMP_FontAsset pTVar4;
		String local_30;

		local_30 = null;
		if ((typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor == 0) {
			pSVar2 = GisketchTypographyLocale.CurrentLanguageName();
		}
		else {
			pSVar2 = GisketchTypographyLocale.CurrentLanguageName();
		}
		pSVar3 = GisketchTypography.Key(family, weight);
		if ((typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar2 = GisketchTypographyLocale.FontKeyForLanguage(pSVar3, pSVar2);
		pSVar3 = String.Concat("UI/Fonts/", pSVar2);
		pTVar4 = Resources.Load<TMP_FontAsset>(pSVar3);
		bVar1 = ((Object)pTVar4 == null);
		if (bVar1) {
			String.Concat("Missing AoTTG UI font asset ", pSVar2, ".");
			pTVar4 = TMP_Settings.defaultFontAsset;
			return pTVar4;
		}
		bVar1 = GisketchTypography.HasUsableMaterial(pTVar4, ref local_30);
		if (bVar1) {
			bVar1 = String.IsNullOrEmpty(requiredText);
			if (!bVar1) {
				GisketchTypography.ForText(requiredText, pTVar4);
			}
		}
		else {
			String.Concat("Invalid AoTTG UI font asset ", pSVar2, ": ", local_30);
			pTVar4 = TMP_Settings.defaultFontAsset;
		}
		return pTVar4;
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x5242230", Offset = "0x5241230", VA = "0x5242230")]
	public static TMP_FontAsset Load(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c (Gisketch.Aottg2UI.Styling.GisketchTypography$$Load): clean
		String path;
		TMP_FontAsset pTVar1;

		path = String.Concat("UI/Fonts/", key);
		pTVar1 = Resources.Load<TMP_FontAsset>(path);
		return pTVar1;
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x5242460", Offset = "0x5241460", VA = "0x5242460")]
	public static string Key(string family, int weight)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c (Gisketch.Aottg2UI.Styling.GisketchTypography$$Key): 2 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		String* ppSVar3;

		bVar1 = String.IsNullOrEmpty(family);
		if (bVar1) {
			pSVar2 = "barlow";
		}
		else {
			if (family == null) {
	label_05342645: ;
				throw new NullReferenceException();
			}
			pSVar2 = family.Trim();
			if (pSVar2 == null) goto label_05342645;
			pSVar2 = pSVar2.ToLowerInvariant();
		}
		bVar1 = (pSVar2 == "subtext");
		if (bVar1) {
			ppSVar3 = &"jek5";
		}
		else {
			bVar1 = (pSVar2 == "text");
			if (!bVar1) goto label_0534259e;
			ppSVar3 = &"barlow";
		}
		pSVar2 = *ppSVar3;
	label_0534259e: ;
		bVar1 = (pSVar2 == "header");
		if (bVar1) {
			ppSVar3 = &"header SDF";
		}
		else {
			bVar1 = (pSVar2 == "menutext");
			if (bVar1) {
				ppSVar3 = &"IntensaFuente SDF";
			}
			else {
				bVar1 = (pSVar2 == "jek5");
				if (bVar1) {
					ppSVar3 = &"JEK5 SDF";
				}
				else if (weight < 0x1c3) {
					ppSVar3 = &"Barlow-Regular SDF";
				}
				else if ((uint)weight < 0x227) {
					ppSVar3 = &"Barlow-Medium SDF";
				}
				else if ((uint)weight < 0x28b) {
					ppSVar3 = &"Barlow-SemiBold SDF";
				}
				else {
					ppSVar3 = &"Barlow-Bold SDF";
				}
			}
		}
		return *ppSVar3;
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x5242650", Offset = "0x5241650", VA = "0x5242650")]
	public static float FontSize(string family, int weight, float size)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c (Gisketch.Aottg2UI.Styling.GisketchTypography$$FontSize): clean
		String baseKey;
		String languageName;
		float fVar1;

		baseKey = GisketchTypography.Key(family, weight);
		languageName = GisketchTypographyLocale.CurrentLanguageName();
		fVar1 = GisketchTypographyLocale.SizeScale(baseKey, languageName);
		return fVar1 * size;
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x5242390", Offset = "0x5241390", VA = "0x5242390")]
	public static TMP_FontAsset ForText(string text, TMP_FontAsset preferred)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c (Gisketch.Aottg2UI.Styling.GisketchTypography$$ForText): clean
		bool bVar1;
		ushort uVar2;
		String characters;
		uint index;

		bVar1 = ((Object)preferred != null);
		if (((text != null) && (bVar1)) && (0 < text._stringLength)) {
			index = 0;
			do {
				uVar2 = text.get_Chars(index);
				if (0x7e < uVar2) {
					characters = GisketchTypography.VisibleCharacters(text);
					GisketchFontFallback.Ensure(preferred, characters);
					return preferred;
				}
				index = index + 1;
			} while ((int)index < text._stringLength);
		}
		return preferred;
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x5242B20", Offset = "0x5241B20", VA = "0x5242B20")]
	public static Font LegacyFont(Font designed, string languageLetters)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c (Gisketch.Aottg2UI.Styling.GisketchTypography$$LegacyFont): 4 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		MethodInfo method_00;
		String key;
		Font x;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075428b5 == false) {
			Il2CppMethodInitialized_075428b5 = true;
			uVar1 = (typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor;
			klass = typeof(GisketchTypographyLocale);
		}
		else {
			uVar1 = (typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor;
			klass = typeof(GisketchTypographyLocale);
		}
		typeof(GisketchTypographyLocale) =(GisketchTypographyLocale)klass;
		if (uVar1 == 0) {
			method_00 = (MethodInfo)GisketchTypographyLocale.CurrentLanguageName();
		}
		else {
			method_00 = (MethodInfo)GisketchTypographyLocale.CurrentLanguageName();
		}
		bVar2 = ((String)method_00 == "English");
		if (((!bVar2) &&(bVar2 = ((String)method_00 == "Indonesian"), !bVar2)) &&(bVar2 = GisketchTypography.Covers(designed, languageLetters), !bVar2 )) {
			if ((typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor == 0) {
			}
			key = GisketchTypographyLocale.FontKeyForLanguage("Barlow-Regular SDF", (String)method_00);
			x = GisketchTypography.SourceFont(key);
			bVar2 = ((Object)x != null);
			if (bVar2) {
				designed = x;
			}
		}
		return designed;
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x52421D0", Offset = "0x52411D0", VA = "0x52421D0")]
	public static string KeyForLanguage(string family, int weight, string languageName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c (Gisketch.Aottg2UI.Styling.GisketchTypography$$KeyForLanguage): clean
		String pSVar1;

		pSVar1 = GisketchTypography.Key(family, weight);
		if ((typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar1 = GisketchTypographyLocale.FontKeyForLanguage(pSVar1, languageName);
		return pSVar1;
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x5242F80", Offset = "0x5241F80", VA = "0x5242F80")]
	private static Font SourceFont(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c (Gisketch.Aottg2UI.Styling.GisketchTypography$$SourceFont): clean
		uint uVar1;
		bool bVar2;
		String path;
		TMP_FontAsset x;
		Font pUVar3;

		if (Il2CppMethodInitialized_075428b7 == false) {
			Il2CppMethodInitialized_075428b7 = true;
			uVar1 = (typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = (key != "NotoSansArabic-VariableFont_wdth,wght SDF");
		if (bVar2) {
			path = String.Concat("UI/Fonts/", key);
			x = Resources.Load<TMP_FontAsset>(path);
			bVar2 = ((Object)x != null);
			if (bVar2) {
				if (x == null) {
					throw new NullReferenceException();
				}
			}
		}
		return pUVar3;
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x5242CF0", Offset = "0x5241CF0", VA = "0x5242CF0")]
	private static bool Covers(Font font, string characters)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c (Gisketch.Aottg2UI.Styling.GisketchTypography$$Covers): 3 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		ushort uVar3;
		uint in_EAX;
		int iVar4;
		int index;
		ulong uStack_38;

		uStack_38._0_4_ = in_EAX;
		uStack_38 = (ulong)(uint)uStack_38;
		bVar2 = false;
		bVar1 = ((Object)font == null);
		if (!bVar1) {
			bVar2 = false;
			iVar4 = FontEngine.LoadFontFace(font);
			if (iVar4 == 0) {
				if (characters == null) {
					throw new NullReferenceException();
				}
				if (characters._stringLength < 1) {
					bVar2 = true;
				}
				else {
					index = 0;
					do {
						uVar3 = characters.get_Chars(index);
						bVar2 = FontEngine.TryGetGlyphIndex((uint)uVar3, (uint)((long)&uStack_38 + 4));
					} while ((bVar2) && (index = index + 1, index < characters._stringLength));
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x5242890", Offset = "0x5241890", VA = "0x5242890")]
	private static bool IsAscii(string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c (Gisketch.Aottg2UI.Styling.GisketchTypography$$IsAscii): clean
		ushort uVar1;
		bool bVar2;
		int index;

		bVar2 = true;
		if ((text != null) && (0 < text._stringLength)) {
			index = 0;
			do {
				uVar1 = text.get_Chars(index);
				bVar2 = uVar1 < 0x7f;
				if (!bVar2) {
					return bVar2;
				}
				index = index + 1;
			} while (index < text._stringLength);
		}
		return bVar2;
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x52428E0", Offset = "0x52418E0", VA = "0x52428E0")]
	private static string VisibleCharacters(string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c (Gisketch.Aottg2UI.Styling.GisketchTypography$$VisibleCharacters): clean
		int capacity;
		bool bVar1;
		bool bVar2;
		ushort uVar3;
		StringBuilder __this;
		String pSVar4;
		int index;

		bVar2 = String.IsNullOrEmpty(text);
		if (bVar2) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (text != null) {
			capacity = text._stringLength;
			__this = new StringBuilder(capacity);
			if (0 < text._stringLength) {
				bVar2 = false;
				index = 0;
				if (__this == null) {
					do {
						uVar3 = text.get_Chars(index);
						bVar1 = true;
						if (uVar3 != 0x3c) {
							if ((bool)(uVar3 == 0x3e & bVar2)) {
								bVar1 = false;
							}
							else {
								bVar1 = bVar2;
								if (!bVar2) {
									bVar2 = Char.IsWhiteSpace(uVar3);
									if (!bVar2) {
										bVar2 = Char.IsControl(uVar3);
										if (!bVar2) goto label_05342b17;
									}
								}
							}
						}
						bVar2 = bVar1;
						index = index + 1;
					} while (index < text._stringLength);
				}
				else {
					do {
						uVar3 = text.get_Chars(index);
						bVar1 = true;
						if (((uVar3 != 0x3c) && (bVar1 = false, !(bool)(uVar3 == 0x3e & bVar2))) && (bVar1 = bVar2, !bVar2)) {
							bVar2 = Char.IsWhiteSpace(uVar3);
							if (!bVar2) {
								bVar2 = Char.IsControl(uVar3);
								if (!bVar2) {
									__this.Append(uVar3);
								}
							}
						}
						bVar2 = bVar1;
						index = index + 1;
					} while (index < text._stringLength);
				}
			}
			if (__this != null) {
				return pSVar4;
			}
		}
	label_05342b17: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x52422A0", Offset = "0x52412A0", VA = "0x52422A0")]
	private static bool HasUsableMaterial(TMP_FontAsset font, out string error)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c (Gisketch.Aottg2UI.Styling.GisketchTypography$$HasUsableMaterial): 2 lines keep C-only constructs
		Material pUVar1;
		bool bVar2;
		int iVar3;
		String* ppSVar4;

		if (font == null) {
	label_05342388: ;
			throw new NullReferenceException();
		}
		pUVar1 = font.m_Material;
		bVar2 = ((Object)pUVar1 == null);
		if (bVar2) {
			ppSVar4 = &"material is missing";
	label_0534232a: ;
			*error = *ppSVar4;
			bVar2 = false;
		}
		else {
			iVar3 = SystemInfo.graphicsDeviceType;
			if (iVar3 != 4) {
				pUVar1 = font.m_Material;
				if (pUVar1 == null) goto label_05342388;
				bVar2 = pUVar1.HasProperty("_FaceColor");
				if (!bVar2) {
					ppSVar4 = &"material is missing _FaceColor";
					goto label_0534232a;
				}
			}
			*error = null;
			bVar2 = true;
		}
		return bVar2;
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x5242290", Offset = "0x5241290", VA = "0x5242290")]
	private static void ReportError(string message)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTypography.c (Gisketch.Aottg2UI.Styling.GisketchTypography$$ReportError): clean
		return;
	}
}
