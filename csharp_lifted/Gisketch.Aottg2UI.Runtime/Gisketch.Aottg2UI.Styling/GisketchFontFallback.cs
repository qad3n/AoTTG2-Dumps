// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchFontFallback
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000027")]
public static class GisketchFontFallback
{
	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<TMP_Text> Pending;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x8")]
	private static int _designedCount;

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x522F480", Offset = "0x522E480", VA = "0x522F480")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
	private static void Install()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c (Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Install): 4 lines keep C-only constructs
		TMP_Text.MissingCharacterEventCallback pTVar1;
		Action pSVar2;

		pTVar1 = new TMP_Text.MissingCharacterEventCallback(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_OnMissingCharacter);
		TMP_Text.remove_OnMissingCharacter(pTVar1);
		pTVar1 = new TMP_Text.MissingCharacterEventCallback(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_OnMissingCharacter);
		TMP_Text.add_OnMissingCharacter(pTVar1);
		pSVar2 = new Action(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_Restore);
		Application.remove_quitting(pSVar2);
		pSVar2 = new Action(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_Restore);
		Application.add_quitting(pSVar2);
		return;
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x522F5C0", Offset = "0x522E5C0", VA = "0x522F5C0")]
	public static void Ensure(TMP_FontAsset preferred, string characters)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c (Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Ensure): clean
		int index;
		uint uVar1;
		bool bVar2;
		ushort uVar3;
		ushort uVar4;
		uint unicode;
		int index_00;

		if (Il2CppMethodInitialized_0754285a == false) {
			Il2CppMethodInitialized_0754285a = true;
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = Application.isPlaying;
		}
		else {
			bVar2 = Application.isPlaying;
		}
		if (bVar2) {
			if (characters == null) {
				throw new NullReferenceException();
			}
			if (0 < characters._stringLength) {
				index_00 = 0;
				do {
					uVar3 = characters.get_Chars(index_00);
					uVar4 = characters.get_Chars(index_00);
					bVar2 = Char.IsHighSurrogate(uVar4);
					if ((!bVar2) || (index = index_00 + 1, characters._stringLength <= index)) {
	label_0532f770: ;
						uVar4 = characters.get_Chars(index_00);
						bVar2 = Char.IsSurrogate(uVar4);
						if (!bVar2) {
							unicode = (uint)uVar3;
							uVar1 = (typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor;
							goto joined_r0x0532f7bc;
						}
					}
					else {
						uVar4 = characters.get_Chars(index);
						bVar2 = Char.IsLowSurrogate(uVar4);
						if (!bVar2) goto label_0532f770;
						uVar3 = characters.get_Chars(index_00);
						uVar4 = characters.get_Chars(index);
						unicode = Char.ConvertToUtf32(uVar3, uVar4);
						uVar1 = (typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor;
						index_00 = index;
	joined_r0x0532f7bc: ;
						if (uVar1 == 0) {
						}
						bVar2 = GisketchFontFallback.Has(preferred, unicode);
						if (!bVar2) {
							GisketchFontFallback.Add(unicode);
						}
					}
					index_00 = index_00 + 1;
				} while (index_00 < characters._stringLength);
			}
		}
		return;
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x522F9C0", Offset = "0x522E9C0", VA = "0x522F9C0")]
	private static void OnMissingCharacter(int unicode, int stringIndex, string text, TMP_FontAsset fontAsset, TMP_Text textComponent)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c (Gisketch.Aottg2UI.Styling.GisketchFontFallback$$OnMissingCharacter): 1 lines keep C-only constructs
		uint uVar1;
		HashSet<TMP_Text> pSVar2;
		HashSet<object> __this;
		bool bVar3;
		Canvas.WillRenderCanvases __this_00;

		if (Il2CppMethodInitialized_0754285b == false) {
			Il2CppMethodInitialized_0754285b = true;
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar3 = Application.isPlaying;
		}
		else {
			bVar3 = Application.isPlaying;
		}
		if (bVar3) {
			if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar3 = ((Object)textComponent == null);
			if (!bVar3) {
				if ((typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor == 0) {
					bVar3 = GisketchFontFallback.Add(unicode);
				}
				else {
					bVar3 = GisketchFontFallback.Add(unicode);
				}
				if (bVar3) {
					if (((typeof(GisketchFontFallback))._2). cctor_finished_or_no_cctor == 0) {
					}
					pSVar2 = GisketchFontFallback.Pending;
					if (pSVar2 != null) {
						if (pSVar2._count == 0) {
							__this_00 = new Canvas.WillRenderCanvases(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_Refresh);
							Canvas.add_willRenderCanvases(__this_00);
							uVar1 = (typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar1 = (typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
							__this = (HashSet<object>)GisketchFontFallback.Pending;
						}
						else {
							__this = *(HashSet<object>*)(typeof(GisketchFontFallback)).static_fields;
						}
						if (__this != null) {
							__this.Add((object)textComponent);
							return;
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x522F8C0", Offset = "0x522E8C0", VA = "0x522F8C0")]
	private static bool Add(int unicode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c (Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Add): clean
		bool bVar1;
		bool bVar2;
		String pSVar3;
		bool local_29;

		local_29 = false;
		pSVar3 = GisketchTypographyLocale.CurrentLanguageName();
		pSVar3 = GisketchTypographyLocale.CharacterFontKey(unicode, pSVar3);
		bVar1 = GisketchFontFallback.TryCover(pSVar3, unicode, ref local_29);
		if (bVar1) {
			local_29 = local_29 != false;
		}
		else {
			bVar2 = false;
			bVar1 = (pSVar3 != "Symbola SDF");
			if (bVar1) {
				bVar2 = GisketchFontFallback.TryCover("Symbola SDF", unicode, ref local_29);
			}
			local_29 = (bool)(local_29 & bVar2);
		}
		return local_29;
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x522FBA0", Offset = "0x522EBA0", VA = "0x522FBA0")]
	private static bool TryCover(string key, int unicode, out bool added)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c (Gisketch.Aottg2UI.Styling.GisketchFontFallback$$TryCover): 4 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		Il2CppClass klass;
		bool bVar3;
		int iVar4;
		TMP_FontAsset font;
		List<TMP_FontAsset> fallbacks;
		Gisketch_Aottg2UI_Styling_GisketchFontFallback_StaticFields pGVar5;

		*added = false;
		font = GisketchTypography.Load(key);
		fallbacks = TMP_Settings.fallbackFontAssets;
		bVar3 = ((Object)font == null);
		if (bVar3) {
			return false;
		}
		if (fallbacks == null) {
			return false;
		}
		if ((typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar3 = GisketchFontFallback.Has(font, unicode);
		if (bVar3) {
			bVar3 = fallbacks.Contains((object)font);
			if (bVar3) {
				return true;
			}
			if ((typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor == 0) {
				pGVar5 = typeof(GisketchFontFallback).static_fields;
				iVar1 = pGVar5._designedCount;
			}
			else {
				pGVar5 = typeof(GisketchFontFallback).static_fields;
				iVar1 = pGVar5._designedCount;
			}
			if (iVar1 < 0) {
				iVar4 = fallbacks._size;
				if (((typeof(GisketchFontFallback))._2). cctor_finished_or_no_cctor == 0) {
					pGVar5 = typeof(GisketchFontFallback).static_fields;
				}
				klass = typeof(GisketchFontFallback);
				pGVar5._designedCount = iVar4;
				uVar2 = (((GisketchFontFallback)klass)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = ((typeof(GisketchFontFallback))._2). cctor_finished_or_no_cctor;
				klass = typeof(GisketchFontFallback);
			}
			if (uVar2 == 0) {
			}
			iVar4 = GisketchFontFallback.InsertIndex(fallbacks, key);
			fallbacks.Insert(iVar4, (object)font);
			*added = true;
			return true;
		}
		return false;
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x522FFB0", Offset = "0x522EFB0", VA = "0x522FFB0")]
	public static void ApplyLanguage()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c (Gisketch.Aottg2UI.Styling.GisketchFontFallback$$ApplyLanguage): 13 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		TMP_FontAsset[] pTVar3;
		MethodInfo pMVar4;
		byte bVar5;
		bool bVar6;
		int iVar7;
		uint uVar8;
		GisketchFontFallback.c__DisplayClass7_0 __this;
		List<TMP_FontAsset> __this_00;
		String pSVar9;
		TMP_FontAsset pTVar10;
		List<object> __this_01;
		Comparison<T> comparison;
		TMP_FontAsset y;
		Object[] pSVar11;
		Gisketch_Aottg2UI_Styling_GisketchFontFallback_StaticFields pGVar12;
		int count;
		GisketchFontFallback.c__DisplayClass7_0 targetAddress;
		int iVar13;
		uint uVar14;
		Il2CppClass klass;
		byte bVar15;

		if (Il2CppMethodInitialized_0754285e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_Sort) ;
			Il2CppMethodInitialized_0754285e = true;
		}
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchFontFallback.c__DisplayClass7_0));
		__this = new Object();
		__this_00 = TMP_Settings.fallbackFontAssets;
		if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
			bVar6 = Application.isPlaying;
		}
		else {
			bVar6 = Application.isPlaying;
		}
		if (!bVar6) {
			return;
		}
		if (__this_00 == null) {
			return;
		}
		if (((typeof(GisketchFontFallback))._2). cctor_finished_or_no_cctor == 0) {
			pGVar12 = typeof(GisketchFontFallback).static_fields;
			if (-1 < pGVar12._designedCount) goto label_0533014d;
	label_05330481: ;
			klass = typeof(GisketchFontFallback);
			iVar7 = __this_00._size;
			if ((typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor == 0) {
				klass = typeof(GisketchFontFallback);
				GisketchFontFallback._designedCount = iVar7;
				uVar2 = (((GisketchFontFallback)klass)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05330154;
			}
			pGVar12._designedCount = iVar7;
			if ((((GisketchFontFallback)klass)._2).cctor_finished_or_no_cctor == 0) goto label_053304e3;
	label_0533015a: ;
			if (Il2CppMethodInitialized_0754285f == false) goto label_053304f5;
	label_05330167: ;
			uVar2 = (typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor;
		}
		else {
			pGVar12 = (typeof(GisketchFontFallback)).static_fields;
			if (pGVar12._designedCount < 0) goto label_05330481;
	label_0533014d: ;
			uVar2 = (typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor;
			klass = typeof(GisketchFontFallback);
	joined_r0x05330154: ;
			if (uVar2 != 0) goto label_0533015a;
	label_053304e3: ;
			if (Il2CppMethodInitialized_0754285f != false) goto label_05330167;
	label_053304f5: ;
			Il2CppMethodInitialized_0754285f = true;
			uVar2 = (typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pSVar9 = GisketchTypographyLocale.CurrentLanguageName();
		pSVar9 = GisketchTypography.KeyForLanguage("text", 400, pSVar9);
		if (__this == null) goto label_0533056b;
		targetAddress = &__this.fields;
		__this.languageKey = pSVar9;
		iVar7 = Array.IndexOf<string>((Object[])GisketchTypographyLocale. FallbackFontKeys, (object)targetAddress.languageKey);
		if (iVar7 < 0) {
			pTVar10 = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pTVar10 = GisketchTypography.Load(targetAddress.languageKey) ;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar6 = ((Object)pTVar10 != null);
		if ((!bVar6) ||(bVar6 = __this_00.Contains((object)pTVar10), pMVar4 = MethodInfo_System_Collections_Generic_List_TMP_FontAsset_Add, bVar6)) {
	label_05330285: ;
			uVar2 = (typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor;
		}
		else {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pTVar3 = __this_00._items;
			if (pTVar3 == null) goto label_0533056b;
			uVar8 = __this_00._size;
			if (uVar8 < (uint)pTVar3.Length) {
				__this_00._size = uVar8 + 1;
				pTVar3[(int)uVar8] = pTVar10;
				goto label_05330285;
			}
			__this_00.AddWithResize((object)pTVar10);
			uVar2 = (typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		iVar13 = GisketchFontFallback._designedCount;
		__this_01 = (List<object>)__this_00.GetRange(iVar13, __this_00._size - iVar13);
		comparison = new Comparison<TMP_FontAsset>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_c__DisplayClass7_0_ApplyLanguage_b__0);
		if (__this_01 == null) {
	label_0533056b: ;
			throw new NullReferenceException();
		}
		__this_01.Sort(comparison);
		if (0 < __this_01._size) {
			iVar13 = 0;
			bVar5 = 0;
			do {
				bVar15 = bVar5;
				pTVar10 = __this_00.get_Item(GisketchFontFallback. _designedCount + iVar13);
				y = __this_01.get_Item(iVar13);
				bVar6 = ((Object)pTVar10 != (Object)y);
				iVar13 = iVar13 + 1;
				count = __this_01._size;
				bVar5 = bVar15 | bVar6;
			} while (iVar13 < count);
			if (bVar15 != 0 || bVar6) {
				if ((typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor == 0) {
					count = __this_01._size;
				}
				__this_00.RemoveRange(GisketchFontFallback._designedCount, count);
				__this_00.AddRange((IEnumerable<T>)__this_01);
				pSVar11 = Resources.FindObjectsOfTypeAll<TMP_FontAsset>();
				if (pSVar11 == null) goto label_0533056b;
				uVar8 = (uint)pSVar11.Length;
				if (0 < (int)uVar8) {
					uVar14 = 0;
					do {
						if (uVar8 <= uVar14) {
							throw new IndexOutOfRangeException();
						}
						if ((TMP_FontAsset)pSVar11[(int)uVar14] == null) goto label_0533056b;
						(pSVar11[(int)uVar14]).ReadFontAssetDefinition();
						uVar14 = uVar14 + 1;
						uVar8 = (uint)pSVar11.Length;
					} while ((int)uVar14 < (int)uVar8);
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x5230590", Offset = "0x522F590", VA = "0x5230590")]
	private static string LanguageKey()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c (Gisketch.Aottg2UI.Styling.GisketchFontFallback$$LanguageKey): clean
		String pSVar1;

		pSVar1 = GisketchTypographyLocale.CurrentLanguageName();
		pSVar1 = GisketchTypography.KeyForLanguage("text", 400, pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x5230600", Offset = "0x522F600", VA = "0x5230600")]
	private static int Priority(TMP_FontAsset font, string languageKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c (Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Priority): 1 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		String a;

		bVar1 = ((Object)font == null);
		if (!bVar1) {
			if (font == null) {
				throw new NullReferenceException();
			}
			a = font.name;
			if (Il2CppMethodInitialized_07542861 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchTypographyLocale)) ;
				Il2CppMethodInitialized_07542861 = true;
			}
			bVar1 = (a == languageKey);
			if (!bVar1) {
				iVar2 = Array.IndexOf<string>((Object[])GisketchTypographyLocale. FallbackFontKeys, (object)a);
				return iVar2;
			}
		}
		return iVar2;
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x5230730", Offset = "0x522F730", VA = "0x5230730")]
	private static int Priority(string key, string languageKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c (Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Priority): clean
		bool bVar1;
		int iVar2;

		bVar1 = (key == languageKey);
		if (bVar1) {
			return -1;
		}
		iVar2 = Array.IndexOf<string>((Object[])GisketchTypographyLocale. FallbackFontKeys, (object)key);
		return iVar2;
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x522FD80", Offset = "0x522ED80", VA = "0x522FD80")]
	private static int InsertIndex(List<TMP_FontAsset> fallbacks, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c (Gisketch.Aottg2UI.Styling.GisketchFontFallback$$InsertIndex): clean
		uint uVar1;
		bool bVar2;
		int iVar3;
		int iVar4;
		int iVar5;
		String pSVar6;
		TMP_FontAsset font;
		int index;

		if (Il2CppMethodInitialized_07542862 == false) {
			Il2CppMethodInitialized_07542862 = true;
			uVar1 = (typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754285f == false) {
			Il2CppMethodInitialized_0754285f = true;
			uVar1 = (typeof(GisketchTypographyLocale)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(GisketchTypographyLocale))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar6 = GisketchTypographyLocale.CurrentLanguageName();
		pSVar6 = GisketchTypography.KeyForLanguage("text", 400, pSVar6);
		bVar2 = (key == pSVar6);
		iVar3 = -1;
		if (!bVar2) {
			iVar3 = Array.IndexOf<string>((Object[])GisketchTypographyLocale. FallbackFontKeys, (object)key);
		}
		if (fallbacks == null) {
			throw new NullReferenceException();
		}
		index = GisketchFontFallback._designedCount;
		iVar5 = fallbacks._size;
		if (index < iVar5) {
			do {
				font = fallbacks.get_Item(index);
				if ((typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor == 0) {
				}
				iVar4 = GisketchFontFallback.Priority(font, pSVar6);
				if (iVar3 < iVar4) {
					return index;
				}
				index = index + 1;
				iVar5 = fallbacks._size;
			} while (index < iVar5);
		}
		return iVar5;
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x522F810", Offset = "0x522E810", VA = "0x522F810")]
	private static bool Has(TMP_FontAsset font, int unicode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c (Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Has): clean
		bool bVar1;
		Dictionary<uint, TMP_Character> __this;
		UInt32[] unicodes;

		if (font != null) {
			__this = font.characterLookupTable;
			if (__this != null) {
				bVar1 = __this.ContainsKey(unicode);
				if (bVar1) {
					return true;
				}
				unicodes = (UInt32[])new uint[1];
				if (unicodes != null) {
					if ((int)unicodes.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					unicodes[0] = unicode;
					bVar1 = font.TryAddCharacters(unicodes, false);
					return bVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x52307C0", Offset = "0x522F7C0", VA = "0x52307C0")]
	private static void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c (Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Refresh): 4 lines keep C-only constructs
		HashSet<object> pSVar1;
		object x;
		bool bVar2;
		Canvas.WillRenderCanvases __this;
		System_Collections_Generic_HashSet_Enumerator_T__o local_58;
		byte local_30;

		local_58._set = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		__this = new Canvas.WillRenderCanvases(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_Refresh);
		Canvas.remove_willRenderCanvases(__this);
		pSVar1 = (HashSet<object>)GisketchFontFallback.Pending;
		if (pSVar1 != null) {
			local_58 = pSVar1.GetEnumerator();
			local_30 = (byte)&local_58;
			while(true) {
				bVar2 = local_58.MoveNext();
				x = local_58._current;
				if (!bVar2) break;
				bVar2 = ((Object)x != null);
				if (bVar2) {
					if ((Object)x == null) {
						throw new NullReferenceException();
					}
					(*(code)((Object)x.klass)[1].vtable._2_GetHashCode.method)(x,((Object)x.klass)[1].vtable._3_ToString.methodPtr);
				}
			}
			local_58.Dispose();
			pSVar1 = (HashSet<object>)GisketchFontFallback.Pending;
			if (pSVar1 != null) {
				pSVar1.Clear();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x5230A10", Offset = "0x522FA10", VA = "0x5230A10")]
	private static void Restore()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c (Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Restore): clean
		int iVar1;
		uint uVar2;
		List<TMP_FontAsset> __this;
		int index;

		__this = TMP_Settings.fallbackFontAssets;
		index = GisketchFontFallback._designedCount;
		if ((-1 < index) && (__this != null)) {
			iVar1 = __this._size;
			if ((typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor == 0) {
				index = GisketchFontFallback._designedCount;
			}
			if (index < iVar1) {
				if (((typeof(GisketchFontFallback))._2). cctor_finished_or_no_cctor == 0) {
					index = GisketchFontFallback._designedCount;
				}
				__this.RemoveRange(index, __this._size - index);
				uVar2 = (typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05330abb;
			}
		}
		uVar2 = (typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor;
	joined_r0x05330abb: ;
		if (uVar2 == 0) {
		}
		GisketchFontFallback._designedCount = -1;
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchFontFallback.c.

	// Gisketch.Aottg2UI.Styling.GisketchFontFallback.<>c__DisplayClass7_0$$.ctor: clean
	private void c__DisplayClass7_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$.cctor: clean
	static GisketchFontFallback()
	{
		HashSet<TMP_Text> __this;

		__this = new HashSet<TMP_Text>();
		GisketchFontFallback.Pending = __this;
		GisketchFontFallback._designedCount = -1;
		return;
	}

	// Gisketch.Aottg2UI.Styling.GisketchFontFallback.<>c__DisplayClass7_0$$<ApplyLanguage>b__0: clean
	private int c__DisplayClass7_0__ApplyLanguage_b__0(TMP_FontAsset a, TMP_FontAsset b)
	{
		String languageKey;
		int iVar1;
		int local_24;

		languageKey = this.languageKey;
		if ((typeof(GisketchFontFallback)._2).cctor_finished_or_no_cctor == 0) {
		}
		GisketchFontFallback.Priority(a, languageKey);
		iVar1 = GisketchFontFallback.Priority(b, this.languageKey);
		iVar1 = local_24.CompareTo(iVar1);
		return iVar1;
	}
}
