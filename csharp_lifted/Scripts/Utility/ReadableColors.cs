// ==================== AoTTG2 cross-reference ====================
// Type: Utility.ReadableColors
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/ReadableColors.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x2000934")]
internal static class ReadableColors
{
	[Token(Token = "0x4002E56")]
	private const float MinContrast = 4.5f;

	[Token(Token = "0x4002E57")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Regex ColorRegex;

	[Token(Token = "0x60056BA")]
	[Address(RVA = "0x5CF08A0", Offset = "0x5CEF8A0", VA = "0x5CF08A0")]
	public static string Darken(string richText, Color background)
	{
		// Lifted from source/cpp/Utility/ReadableColors.c (Utility.ReadableColors$$Darken): 1 lines keep C-only constructs
		Regex __this;
		bool bVar1;
		int iVar2;
		ReadableColors.c__DisplayClass2_0 __this_00;
		MatchEvaluator __this_01;
		String pSVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float local_48;
		float fStack_44;
		float local_38;

		__this_00 = new ReadableColors.c__DisplayClass2_0();
		bVar1 = String.IsNullOrEmpty(richText);
		if (bVar1) {
			return richText;
		}
		if (richText != null) {
			iVar2 = richText.IndexOf(0x23);
			if (iVar2 < 0) {
				return richText;
			}
			local_48 = background.r;
			fVar4 = Mathf.GammaToLinearSpace(local_48);
			fStack_44 = background.g;
			fVar5 = Mathf.GammaToLinearSpace(fStack_44);
			local_38 = background.b;
			fVar6 = Mathf.GammaToLinearSpace(local_38);
			if (__this_00 != null) {
				__this_00.maxLuminance =(fVar6 * 0.0722 + fVar5 * 0.7152 + fVar4 * 0.2126 + 0.05) / 4.5 + -0.05;
				__this = ReadableColors.ColorRegex;
				__this_01 = new MatchEvaluator((object)__this_00, (intptr_t)MethodInfo_Utility_ReadableColors_c__DisplayClass2_0_Darken_b__0) ;
				if (__this != null) {
					pSVar3 = Regex.Replace(__this, richText, __this_01);
					return pSVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60056BB")]
	[Address(RVA = "0x5CF0A60", Offset = "0x5CEFA60", VA = "0x5CF0A60")]
	private static float Luminance(Color color)
	{
		// Lifted from source/cpp/Utility/ReadableColors.c (Utility.ReadableColors$$Luminance): clean
		float fVar1;
		float fVar2;
		float fVar3;
		float fStack_24;
		float local_18;

		fVar1 = Mathf.GammaToLinearSpace(color.r);
		fStack_24 = color.g;
		fVar2 = Mathf.GammaToLinearSpace(fStack_24);
		local_18 = color.b;
		fVar3 = Mathf.GammaToLinearSpace(local_18);
		return fVar3 * 0.0722 + fVar2 * 0.7152 + fVar1 * 0.2126;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/ReadableColors.c.

	// Utility.ReadableColors.<>c__DisplayClass2_0$$.ctor: clean
	private void c__DisplayClass2_0__ctor()
	{
		base();
		return;
	}

	// Utility.ReadableColors$$.cctor: clean
	static ReadableColors()
	{
		Regex __this;

		__this = new Regex("(<color=\"?|<|\\s[a-d]=\")#([0-9a-fA-F]{6})", 8);
		ReadableColors.ColorRegex = __this;
		return;
	}

	// Utility.ReadableColors.<>c__DisplayClass2_0$$<Darken>b__0: 5 lines keep C-only constructs
	private String c__DisplayClass2_0__Darken_b__0(Match match)
	{
		ulong uVar1;
		ulong uVar2;
		uint uVar3;
		GroupCollection pSVar4;
		Group pSVar5;
		String pSVar6;
		String str2;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fStack_74;
		Color local_58;
		Color local_48;
		byte[] local_38 = new byte[16];
		Color local_28;

		local_48.r = 0.0;
		local_48.g = 0.0;
		local_48.b = 0.0;
		local_48.a = 0.0;
		if (((match != null) &&(pSVar4 = match.get_Groups(), pSVar4 != null)) &&(pSVar5 = pSVar4.get_Item(2), pSVar5 != null)) {
			pSVar6 = pSVar5.Value;
			pSVar6 = String.Concat("#", pSVar6);
			ColorUtility.TryParseHtmlString(pSVar6, ref local_48);
			uVar2 = local_48._8_8_;
			uVar1 = local_48._0_8_;
			fVar7 = local_48.r;
			fVar7 = Mathf.GammaToLinearSpace(fVar7);
			fStack_74 = SUB84(uVar1, 4);
			fVar8 = Mathf.GammaToLinearSpace(fStack_74);
			local_58.r = (float)uVar2;
			fVar9 = Mathf.GammaToLinearSpace(local_58.r);
			fVar7 = fVar9 * 0.0722 + fVar8 * 0.7152 + fVar7 * 0.2126;
			if (fVar7 <= this.maxLuminance) {
				pSVar6 = match.Value;
				return pSVar6;
			}
			fVar8 = Mathf.GammaToLinearSpace(local_48.r);
			fVar9 = Mathf.GammaToLinearSpace(local_48.g);
			fVar10 = Mathf.GammaToLinearSpace(local_48.b);
			fVar7 = this.maxLuminance / fVar7;
			local_38 = ZEXT416((uint)(fVar7 * local_48.a));
			fVar8 = Mathf.LinearToGammaSpace(fVar8 * fVar7);
			fVar9 = Mathf.LinearToGammaSpace(fVar9 * fVar7);
			fVar7 = Mathf.LinearToGammaSpace(fVar10 * fVar7);
			pSVar4 = match.get_Groups();
			if ((pSVar4 != null) &&(pSVar5 = pSVar4.get_Item(1), pSVar5 != null)) {
				uVar3 = local_38._0_4_;
				pSVar6 = pSVar5.Value;
				local_28.r = fVar8;
				local_28.g = fVar9;
				local_28.b = fVar7;
				local_28.a = (float)uVar3;
				str2 = ColorUtility.ToHtmlStringRGB(ref local_28);
				pSVar6 = String.Concat(pSVar6, "#", str2);
				return pSVar6;
			}
		}
		throw new NullReferenceException();
	}
}
