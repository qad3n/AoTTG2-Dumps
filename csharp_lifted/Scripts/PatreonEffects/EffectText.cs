// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.EffectText
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/PatreonEffects/EffectText.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace PatreonEffects;

[Token(Token = "0x2000081")]
[DisallowMultipleComponent]
public class EffectText : MonoBehaviour
{
	[Token(Token = "0x2000082")]
	private struct Segment
	{
		[Token(Token = "0x4000288")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string Content;

		[Token(Token = "0x4000289")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public bool HasEffect;

		[Token(Token = "0x400028A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public NameEffectType Effect;

		[Token(Token = "0x400028B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Color? ColorA;

		[Token(Token = "0x400028C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public Color? ColorB;

		[Token(Token = "0x400028D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Color? ColorC;

		[Token(Token = "0x400028E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		public Color? ColorD;
	}

	[Token(Token = "0x400027E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _text;

	[Token(Token = "0x400027F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private float _fontSize;

	[Token(Token = "0x4000280")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private Color _color;

	[Token(Token = "0x4000281")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private TMP_FontAsset _font;

	[Token(Token = "0x4000282")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private TMP_FontAsset _segmentFont;

	[Token(Token = "0x4000283")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private TextAlignmentOptions _alignment;

	[Token(Token = "0x4000284")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool _richText;

	[Token(Token = "0x4000285")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly List<GameObject> _segments;

	[Token(Token = "0x4000286")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex _fxTagRegex;

	[Token(Token = "0x4000287")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Regex _attrRegex;

	[Token(Token = "0x1700008B")]
	public string text
	{
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x58BC3F0", Offset = "0x58BB3F0", VA = "0x58BC3F0")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$get_text): clean
			return this._text;
		}
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x58BC400", Offset = "0x58BB400", VA = "0x58BC400")]
		set
		{
			// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$set_text): clean
			uint uVar1;
			MethodInfo method_00;

			if (value == null) {
				value = (String)**(ulong*)(g_data_07556758 + 0xb8);
				uVar1 = ((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			method_00 = (MethodInfo)GisketchArabicText.ToVisual(value, false);
			if (this == null) {
				throw new NullReferenceException();
			}
			this._text = (String)method_00;
			this.Rebuild();
			return;
		}
	}

	[Token(Token = "0x1700008C")]
	public float fontSize
	{
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x58BCE90", Offset = "0x58BBE90", VA = "0x58BCE90")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$get_fontSize): clean
			return this._fontSize;
		}
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x58BCEA0", Offset = "0x58BBEA0", VA = "0x58BCEA0")]
		set
		{
			// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$set_fontSize): clean
			this._fontSize = value;
			this.Rebuild();
			return;
		}
	}

	[Token(Token = "0x1700008D")]
	public Color color
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x58BCEC0", Offset = "0x58BBEC0", VA = "0x58BCEC0")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$get_color): clean
			return (Color)this._color;
		}
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x58BCED0", Offset = "0x58BBED0", VA = "0x58BCED0")]
		set
		{
			// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$set_color): clean
			this._color = value;
			this.ApplyColor();
			return;
		}
	}

	[Token(Token = "0x1700008E")]
	public TMP_FontAsset font
	{
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x58BD160", Offset = "0x58BC160", VA = "0x58BD160")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$get_font): clean
			return this._font;
		}
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x58BD170", Offset = "0x58BC170", VA = "0x58BD170")]
		set
		{
			// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$set_font): clean
			this._font = value;
			this.Rebuild();
			return;
		}
	}

	[Token(Token = "0x1700008F")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x58BD190", Offset = "0x58BC190", VA = "0x58BD190")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$get_alignment): clean
			return this._alignment;
		}
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x58BD1A0", Offset = "0x58BC1A0", VA = "0x58BD1A0")]
		set
		{
			// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$set_alignment): clean


			this._alignment = value;
			this.ApplyAlignment();
			return;
		}
	}

	[Token(Token = "0x17000090")]
	public bool richText
	{
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x58BD3B0", Offset = "0x58BC3B0", VA = "0x58BD3B0")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$get_richText): clean
			return this._richText;
		}
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x58BD3C0", Offset = "0x58BC3C0", VA = "0x58BD3C0")]
		set
		{
			// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$set_richText): clean


			this._richText = value;
			this.Rebuild();
			return;
		}
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x58BD3D0", Offset = "0x58BC3D0", VA = "0x58BD3D0")]
	public static string Compose(string content, NameEffectType effect, [Optional] Color colorA, [Optional] Color colorB, [Optional] Color colorC, [Optional] Color colorD)
	{
		// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$Compose): 1 lines keep C-only constructs
		bool bVar1;
		StringBuilder __this;
		StringBuilder pSVar2;
		String pSVar3;
		float local_b8;
		float fStack_b4;
		float local_a8;
		float fStack_a4;
		float local_98;
		float fStack_94;
		float local_88;
		float fStack_84;
		float local_78;
		float fStack_74;
		float local_68;
		float fStack_64;
		float local_58;
		float fStack_54;
		float local_48;
		float fStack_44;
		Enum local_38;

		if ((effect == 0) || (bVar1 = String.IsNullOrEmpty(content))) {
			if (content == null) {
				content = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			return content;
		}
		__this = new StringBuilder();
		if (__this != null) {
			pSVar2 = __this.Append("<fx effect=\"");
			local_38.klass = (Enum)typeof(NameEffectType);
			local_38.monitor = (IntPtr)0xffffffffffffffff;
			pSVar3 = local_38.ToString();
			if ((pSVar2 != null) &&(pSVar2 = pSVar2.Append(pSVar3), pSVar2 != null)) {
				pSVar2.Append(0x22);
				local_b8 = colorA.r;
				fStack_b4 = colorA.g;
				local_a8 = colorA.b;
				fStack_a4 = colorA.a;
				if (9.9999994e-11 <= fStack_a4 * fStack_a4 + fStack_b4 * fStack_b4 + local_b8 * local_b8 + local_a8 * local_a8) {
					if ((typeof(EffectText)._2).cctor_finished_or_no_cctor == 0) {
					}
					EffectText.AppendColorAttribute(__this, "a", colorA);
				}
				local_98 = colorB.r;
				fStack_94 = colorB.g;
				local_88 = colorB.b;
				fStack_84 = colorB.a;
				if (9.9999994e-11 <= fStack_84 * fStack_84 + fStack_94 * fStack_94 + local_98 * local_98 + local_88 * local_88) {
					if ((typeof(EffectText)._2).cctor_finished_or_no_cctor == 0) {
					}
					EffectText.AppendColorAttribute(__this, "b", colorB);
				}
				local_78 = colorC.r;
				fStack_74 = colorC.g;
				local_68 = colorC.b;
				fStack_64 = colorC.a;
				if (9.9999994e-11 <= fStack_64 * fStack_64 + fStack_74 * fStack_74 + local_78 * local_78 + local_68 * local_68) {
					if ((typeof(EffectText)._2).cctor_finished_or_no_cctor == 0) {
					}
					EffectText.AppendColorAttribute(__this, "c", colorC);
				}
				local_58 = colorD.r;
				fStack_54 = colorD.g;
				local_48 = colorD.b;
				fStack_44 = colorD.a;
				if (9.9999994e-11 <= fStack_44 * fStack_44 + fStack_54 * fStack_54 + local_58 * local_58 + local_48 * local_48) {
					if ((typeof(EffectText)._2).cctor_finished_or_no_cctor == 0) {
					}
					EffectText.AppendColorAttribute(__this, "d", colorD);
				}
				pSVar2 = __this.Append(0x3e);
				if ((pSVar2 != null) &&(pSVar2 = pSVar2.Append(content), pSVar2 != null)) {
					pSVar2.Append("</fx>");
					pSVar3 = __this.ToString();
					return pSVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x58BD850", Offset = "0x58BC850", VA = "0x58BD850")]
	public static string WithPresetColors(string text)
	{
		// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$WithPresetColors): 1 lines keep C-only constructs
		Regex __this;
		object @object;
		bool bVar1;
		int iVar2;
		String pSVar3;
		PatreonEffects_EffectText___c_StaticFields pPVar4;
		MatchEvaluator __this_00;

		bVar1 = String.IsNullOrEmpty(text);
		if (bVar1) {
			return text;
		}
		if (text != null) {
			iVar2 = text.IndexOf("<fx", 4);
			if (iVar2 < 0) {
				return text;
			}
			__this = EffectText._fxTagRegex;
			if ((typeof(EffectText.c)._2).cctor_finished_or_no_cctor == 0) {
				pPVar4 = typeof(EffectText.c).static_fields;
				__this_00 = pPVar4.__9__27_0;
			}
			else {
				pPVar4 = typeof(EffectText.c).static_fields;
				__this_00 = pPVar4.__9__27_0;
			}
			if (__this_00 == null) {
				if (((typeof(EffectText.c))._2).cctor_finished_or_no_cctor == 0) {
					pPVar4 = typeof(EffectText.c).static_fields;
				}
				@object = (object)pPVar4.__9;
				__this_00 = new MatchEvaluator(@object, (intptr_t)MethodInfo_PatreonEffects_EffectText_c_WithPresetColors_b__27_0);
				pPVar4 = typeof(EffectText.c).static_fields;
				pPVar4.__9__27_0 = __this_00;
			}
			if (__this != null) {
				pSVar3 = Regex.Replace(__this, text, __this_00);
				return pSVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x58BD780", Offset = "0x58BC780", VA = "0x58BD780")]
	private static void AppendColorAttribute(StringBuilder sb, string key, Color color)
	{
		// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$AppendColorAttribute): clean
		StringBuilder pSVar1;
		String value;
		float local_38;
		float fStack_34;
		Color local_20;

		if (sb != null) {
			pSVar1 = sb.Append(0x20);
			if (pSVar1 != null) {
				pSVar1 = pSVar1.Append(key);
				if (pSVar1 != null) {
					pSVar1 = pSVar1.Append("=\"#");
					local_38 = color.r;
					fStack_34 = color.g;
					local_20.b = color.b;
					local_20.a = color.a;
					local_20.r = local_38;
					local_20.g = fStack_34;
					value = ColorUtility.ToHtmlStringRGB(ref local_20);
					if (pSVar1 != null) {
						pSVar1 = pSVar1.Append(value);
						if (pSVar1 != null) {
							pSVar1.Append(0x22);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x58BD9E0", Offset = "0x58BC9E0", VA = "0x58BD9E0")]
	private static List<Segment> ParseLine(string line)
	{
		// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$ParseLine): 186 lines keep C-only constructs
		int piVar1;
		Color pUVar2;
		float pfVar3;
		EffectText.Segment pPVar4;
		byte bVar5;
		uint uVar6;
		Regex pSVar7;
		Il2CppClass pIVar8;
		Il2CppRuntimeInterfaceOffsetPair pIVar9;
		EffectText.Segment[] pPVar10;
		EffectText.Segment item;
		EffectText.Segment item_00;
		EffectText.Segment item_01;
		Color value;
		Color value_00;
		System_Nullable_Color__o pSVar11;
		ulong uVar12;
		ulong uVar13;
		long lVar14;
		bool bVar15;
		List<EffectText.Segment> __this;
		MatchCollection pSVar16;
		VirtualInvokeData pVVar17;
		object pIVar18;
		String pSVar19;
		GroupCollection pSVar20;
		Group pSVar21;
		String value_01;
		int iVar22;
		int iVar23;
		ulong uVar24;
		long lVar26;
		object* local_248;
		ulong uStack_240;
		float local_238;
		ulong local_228;
		object local_220;
		object local_218;
		object local_210;
		int local_204;
		object local_200;
		String local_1f8;
		ulong uStack_1f0;
		object* local_1e8;
		ulong uStack_1e0;
		float local_1d8;
		uint uStack_1d4;
		uint uStack_1d0;
		float fStack_1cc;
		float local_1c8;
		float fStack_1c4;
		object* ppIStack_1c0;
		ulong local_1b8;
		float fStack_1b0;
		uint uStack_1ac;
		uint local_1a8;
		float fStack_1a4;
		float fStack_1a0;
		float fStack_19c;
		ulong uStack_190;
		object* local_188;
		ulong local_178;
		ulong uStack_170;
		ulong local_168;
		ulong uStack_150;
		ulong local_148;
		ulong uStack_140;
		object* local_138;
		ulong uStack_130;
		float local_128;
		object* local_118;
		ulong uStack_110;
		float local_108;
		object* local_f8;
		ulong uStack_f0;
		float local_e8;
		object* local_d8;
		ulong uStack_d0;
		float local_c8;
		ulong uStack_b0;
		object* local_a8;
		ulong local_98;
		ulong uStack_90;
		ulong local_88;
		ulong uStack_70;
		ulong local_68;
		ulong uStack_60;
		Color local_58;
		Color local_48;
		String local_38;

		local_210 = null;
		local_d8 = null;
		uStack_d0._0_4_ = 0.0;
		uStack_d0._4_4_ = 0.0;
		local_c8 = 0.0;
		local_f8 = null;
		uStack_f0._0_4_ = 0.0;
		uStack_f0._4_4_ = 0.0;
		local_e8 = 0.0;
		local_118 = null;
		uStack_110._0_4_ = 0.0;
		uStack_110._4_4_ = 0.0;
		local_108 = 0.0;
		local_138 = null;
		uStack_130._0_4_ = 0.0;
		uStack_130._4_4_ = 0.0;
		local_128 = 0.0;
		local_1a8 = 0;
		fStack_1a4 = 0.0;
		fStack_1a0 = 0.0;
		fStack_19c = 0.0;
		local_1b8._0_4_ = 0.0;
		local_1b8._4_4_ = 0.0;
		fStack_1b0 = 0.0;
		uStack_1ac = 0;
		local_1c8 = 0.0;
		fStack_1c4 = 0.0;
		ppIStack_1c0 = null;
		local_1d8 = 0.0;
		uStack_1d4 = 0;
		uStack_1d0 = 0;
		fStack_1cc = 0.0;
		local_1e8 = null;
		uStack_1e0._0_4_ = 0.0;
		uStack_1e0._4_4_ = 0.0;
		local_1f8 = null;
		uStack_1f0 = 0;
		local_220 = null;
		local_200 = null;
		__this = new List<EffectText.Segment>();
		pSVar7 = EffectText._fxTagRegex;
		if (pSVar7 != null) {
			local_228 = 0;
			pSVar16 = pSVar7.Matches(line);
			if (pSVar16 != null) {
				local_210 = (object)pSVar16.GetEnumerator();
				uStack_b0 = &local_210;
				local_a8 = &local_200;
				if (local_210 == null) {
	label_059beea3: ;
					throw new NullReferenceException();
				}
				local_228 = 0;
	label_059bdcd8: ;
				pIVar18 = local_210;
				pIVar8 = local_210.klass;
				uVar24 = (ulong)(pIVar8._2).interface_offsets_count;
				bVar15 = pIVar18.Dispose();
				pIVar18 = local_210;
				if (bVar15) {
					if (local_210 == null) {
						throw new NullReferenceException();
					}
					pIVar8 = local_210.klass;
					uVar24 = (ulong)(pIVar8._2).interface_offsets_count;
					pIVar18 = pIVar18.Dispose();
					if (pIVar18 == null) {
						throw new NullReferenceException();
					}
					bVar5 = (typeof(Match)._2).typeHierarchyDepth;
					local_218 = pIVar18;
					if (((pIVar18.klass._2).typeHierarchyDepth < bVar5) ||((pIVar18.klass._2).typeHierarchy[(ulong)bVar5 - 1] !=typeof(Match))) {
						throw new InvalidCastException();
					}
					iVar22 = *(int)&pIVar18[1].klass - (int)local_228;
					if (iVar22 != 0 && (int)local_228 <= *(int)&pIVar18[1].klass) {
						if (line == null) {
							throw new NullReferenceException();
						}
						pSVar19 = line.Substring((int)local_228, iVar22);
						if (pSVar19 == null) {
							throw new NullReferenceException();
						}
						if (0 < pSVar19._stringLength) {
							fStack_1b0 = 0.0;
							uStack_1ac = 0;
							local_1a8 = 0;
							fStack_1a4 = 0.0;
							ppIStack_1c0 = null;
							local_1b8._0_4_ = 0.0;
							local_1b8._4_4_ = 0.0;
							uStack_1d0 = 0;
							fStack_1cc = 0.0;
							local_1c8 = 0.0;
							fStack_1c4 = 0.0;
							uStack_1e0._0_4_ = 0.0;
							uStack_1e0._4_4_ = 0.0;
							local_1d8 = 0.0;
							uStack_1d4 = 0;
							uStack_1f0 = 0;
							local_1e8 = null;
							fStack_1a0 = 0.0;
							fStack_19c = 0.0;
							local_1f8 = pSVar19;
							uVar12 = uStack_1f0;
							uVar24 = uStack_1f0 >> 8;
							uStack_1f0 = uVar24 << 8;
							lVar26 = uStack_1f0;
							uStack_1f0 = lVar26;
							if (__this != null) {
								local_148 = CONCAT44(fStack_1a4, local_1a8);
								uStack_140 = CONCAT44(fStack_19c, fStack_1a0);
								uStack_150 = CONCAT44(uStack_1ac, fStack_1b0);
								uStack_1f0._5_2_ = SUB82(uVar12, 5);
								uStack_1f0._7_1_ = SUB81(uVar12, 7);
								local_178 = CONCAT44(uStack_1d4, local_1d8);
								uStack_170 = CONCAT44(fStack_1cc, uStack_1d0);
								local_168 = CONCAT44(fStack_1c4, local_1c8);
								uStack_190 = (object*)((uVar24 & 0xffffffff) << 8);
								lVar26 = (long)uStack_190;
								uStack_190 = (object*)CONCAT17(uStack_1f0._7_1_, CONCAT25(uStack_1f0._5_2_, (undefined5)uStack_190));
								lVar14 = (long)uStack_190;
								piVar1 = &__this._version;
								*piVar1 = *piVar1 + 1;
								pPVar10 = __this._items;
								if (pPVar10 != null) {
									uVar6 = __this._size;
									uStack_190 = (object*)lVar14;
									if (uVar6 < (uint)pPVar10.Length) {
										__this._size = uVar6 + 1;
										pUVar2 = &pPVar10[(int)uVar6].ColorD.value;
										pUVar2.r = (float)local_1a8;
										pUVar2.g = fStack_1a4;
										pUVar2.b = fStack_1a0;
										pUVar2.a = fStack_19c;
										pSVar11 = &pPVar10[(int)uVar6].ColorC;
										pSVar11.value.g = (float)local_1b8;
										pSVar11.value.b = local_1b8._4_4_;
										*(ulong)(&pSVar11.value.g + 2) = uStack_150;
										pSVar11 = &pPVar10[(int)uVar6].ColorB;
										pSVar11.value.b = local_1c8;
										pSVar11.value.a = fStack_1c4;
										*(object**)(&pSVar11.value.b + 2) = ppIStack_1c0;
										pfVar3 = &pPVar10[(int)uVar6].ColorA.value.a;
										*pfVar3 = local_1d8;
										pfVar3[1] = (float)uStack_1d4;
										pfVar3[2] = (float)uStack_1d0;
										pfVar3[3] = fStack_1cc;
										pSVar11 = &pPVar10[(int)uVar6].ColorA;
										*(object**)&pSVar11.fields = local_1e8;
										pSVar11.value.g = (float)uStack_1e0;
										pSVar11.value.b = uStack_1e0._4_4_;
										pPVar4 = &pPVar10[(int)uVar6];
										pPVar4.Content = local_1f8;
										uStack_190._0_1_ = (undefined1)lVar26;
										uStack_190._1_3_ = SUB83(lVar26, 1);
										uStack_190._4_4_ = SUB84(lVar14, 4);
										pPVar4.HasEffect = (bool)(undefined1)uStack_190;
										*(undefined3)&pPVar4.field_0x9 = uStack_190._1_3_;
										pPVar4.Effect = uStack_190._4_4_;
									}
									else {
										uStack_190._0_1_ = (undefined1)lVar26;
										uStack_190._1_3_ = SUB83(lVar26, 1);
										uStack_190._4_4_ = SUB84(lVar14, 4);
										item_00.HasEffect = (bool)(undefined1)uStack_190;
										item_00._9_3_ = uStack_190._1_3_;
										item_00.Effect = uStack_190._4_4_;
										item_00.Content = local_1f8;
										item_00.ColorA._0_8_ = local_1e8;
										item_00.ColorA.value.g = (float)uStack_1e0;
										item_00.ColorA.value.b = uStack_1e0._4_4_;
										item_00.ColorA.value.a = local_1d8;
										item_00.ColorB._0_4_ = uStack_1d4;
										item_00.ColorB.value.r = (float)uStack_1d0;
										item_00.ColorB.value.g = fStack_1cc;
										item_00.ColorB.value.b = local_1c8;
										item_00.ColorB.value.a = fStack_1c4;
										item_00.ColorC._0_8_ = ppIStack_1c0;
										item_00.ColorC.value.g = (float)local_1b8;
										item_00.ColorC.value.b = local_1b8._4_4_;
										item_00.ColorC.value.a = fStack_1b0;
										item_00.ColorD.hasValue = (bool)(char)uStack_1ac;
										item_00.ColorD._1_3_ = (int3)((uint)uStack_1ac >> 8);
										item_00.ColorD.value.r = (float)local_1a8;
										item_00.ColorD.value.g = fStack_1a4;
										item_00.ColorD.value.b = fStack_1a0;
										item_00.ColorD.value.a = fStack_19c;
										__this.AddWithResize(item_00);
									}
									goto label_059be040;
								}
							}
							throw new NullReferenceException();
						}
					}
	label_059be040: ;
					pSVar20 = (GroupCollection)(*local_218.klass.vtable[5].methodPtr)(local_218,local_218.klass.vtable[5].method);
					if (pSVar20 == null) {
						throw new NullReferenceException();
					}
					pSVar21 = pSVar20.get_Item("attrs");
					if (pSVar21 == null) {
						throw new NullReferenceException();
					}
					pSVar19 = pSVar21.Value;
					pSVar20 = (GroupCollection)(*local_218.klass.vtable[5].methodPtr)(local_218,local_218.klass.vtable[5].method);
					if (pSVar20 == null) {
						throw new NullReferenceException();
					}
					pSVar21 = pSVar20.get_Item("content");
					if (pSVar21 == null) {
						throw new NullReferenceException();
					}
					local_38 = pSVar21.Value;
					local_d8 = null;
					uStack_d0._0_4_ = 0.0;
					uStack_d0._4_4_ = 0.0;
					local_c8 = 0.0;
					local_f8 = null;
					uStack_f0._0_4_ = 0.0;
					uStack_f0._4_4_ = 0.0;
					local_e8 = 0.0;
					local_118 = null;
					uStack_110._0_4_ = 0.0;
					uStack_110._4_4_ = 0.0;
					local_108 = 0.0;
					local_138 = null;
					uStack_130._0_4_ = 0.0;
					uStack_130._4_4_ = 0.0;
					local_128 = 0.0;
					pSVar7 = EffectText._attrRegex;
					if (pSVar7 == null) {
						throw new NullReferenceException();
					}
					pSVar16 = pSVar7.Matches(pSVar19);
					if (pSVar16 == null) {
						throw new NullReferenceException();
					}
					local_220 = (object)pSVar16.GetEnumerator();
					uStack_190 = &local_220;
					local_188 = &local_200;
					if (local_220 == null) {
	label_059beb27: ;
						throw new NullReferenceException();
					}
					iVar22 = 0;
					do {
						pIVar18 = local_220;
						pIVar8 = local_220.klass;
						uVar24 = (ulong)(pIVar8._2).interface_offsets_count;
						bVar15 = pIVar18.Dispose();
						pIVar18 = local_220;
						if (!bVar15) goto label_059be850;
						if (local_220 == null) {
							throw new NullReferenceException();
						}
						pIVar8 = local_220.klass;
						uVar24 = (ulong)(pIVar8._2).interface_offsets_count;
						pIVar18 = pIVar18.Dispose();
						if (pIVar18 == null) {
							throw new NullReferenceException();
						}
						pIVar8 = pIVar18.klass;
						bVar5 = (typeof(Match)._2).typeHierarchyDepth;
						if (((pIVar8._2).typeHierarchyDepth < bVar5) ||((pIVar8._2).typeHierarchy[(ulong)bVar5 - 1] !=typeof(Match))) {
							throw new InvalidCastException();
						}
						pSVar20 = (GroupCollection)(*pIVar8.vtable[5].methodPtr)(pIVar18,pIVar8.vtable[5].method);
						if (pSVar20 == null) {
							throw new NullReferenceException();
						}
						pSVar21 = pSVar20.get_Item("key");
						if (pSVar21 == null) {
							throw new NullReferenceException();
						}
						pSVar19 = pSVar21.Value;
						if (pSVar19 == null) {
							throw new NullReferenceException();
						}
						pSVar19 = pSVar19.ToLowerInvariant();
						pSVar20 = (GroupCollection)(*pIVar18.klass.vtable[5].methodPtr)(pIVar18,pIVar18.klass.vtable[5].method);
						if (pSVar20 == null) {
							throw new NullReferenceException();
						}
						pSVar21 = pSVar20.get_Item("val");
						if (pSVar21 == null) {
							throw new NullReferenceException();
						}
						value_01 = pSVar21.Value;
						bVar15 = (pSVar19 == "effect");
						if (bVar15) {
							local_204 = 0;
							bVar15 = String.IsNullOrWhiteSpace(value_01);
							iVar22 = 0;
							if (!bVar15) {
								bVar15 = (value_01 == "None");
								iVar22 = 0;
								if (!bVar15) {
									bVar15 = String.Equals(value_01, "Wave", 5);
									iVar23 = 5;
									if (!bVar15) {
										bVar15 = Enum.TryParse<NameEffectType>(value_01, true, ref local_204);
										if ((!bVar15) || (iVar23 = local_204, 6 < local_204 - 1U)) {
											bVar15 = NameEffectPresets.IsLegacyEffect(value_01);
											iVar23 = 1;
											iVar22 = 0;
											if (!bVar15) goto label_059be204;
										}
									}
									iVar22 = iVar23;
								}
							}
						}
						else {
							bVar15 = (pSVar19 == "a");
							if (bVar15) {
								local_58.r = 0.0;
								local_58.g = 0.0;
								local_58.b = 0.0;
								local_58.a = 0.0;
								bVar15 = String.IsNullOrEmpty(value_01);
								if (bVar15) {
	label_059be1d0: ;
									local_248 = null;
									uStack_240._0_4_ = 0.0;
									uStack_240._4_4_ = 0.0;
									local_238 = 0.0;
								}
								else {
									if (value_01 == null) {
										throw new NullReferenceException();
									}
									bVar15 = value_01.StartsWith("#");
									if (!bVar15) {
										value_01 = String.Concat("#", value_01);
									}
									bVar15 = ColorUtility.TryParseHtmlString(value_01, ref local_58);
									if (!bVar15) goto label_059be1d0;
									value.b = local_58.b;
									value.a = local_58.a;
									value.r = local_58.r;
									value.g = local_58.g;
									local_248 = null;
									uStack_240._0_4_ = 0.0;
									uStack_240._4_4_ = 0.0;
									local_238 = 0.0;
									local_248 = new Nullable<Color>(value);
								}
								local_d8 = local_248;
								uStack_d0._0_4_ = (float)uStack_240;
								uStack_d0._4_4_ = uStack_240._4_4_;
								local_c8 = local_238;
							}
							else {
								bVar15 = (pSVar19 == "b");
								if (!bVar15) {
									bVar15 = (pSVar19 == "c");
									if (bVar15) {
										if ((typeof(EffectText)._2).cctor_finished_or_no_cctor == 0) {
										}
										local_248 = EffectText.ParseColor(value_01);
										local_108 = local_238;
										local_118 = local_248;
										uStack_110._0_4_ = (float)uStack_240;
										uStack_110._4_4_ = uStack_240._4_4_;
									}
									else {
										bVar15 = (pSVar19 == "d");
										if (bVar15) {
											if ((typeof(EffectText)._2).cctor_finished_or_no_cctor == 0) {
											}
											local_248 = EffectText.ParseColor(value_01);
											local_128 = local_238;
											local_138 = local_248;
											uStack_130._0_4_ = (float)uStack_240;
											uStack_130._4_4_ = uStack_240._4_4_;
										}
									}
									goto label_059be204;
								}
								local_48.r = 0.0;
								local_48.g = 0.0;
								local_48.b = 0.0;
								local_48.a = 0.0;
								bVar15 = String.IsNullOrEmpty(value_01);
								if (bVar15) {
	label_059be687: ;
									local_248 = null;
									uStack_240._0_4_ = 0.0;
									uStack_240._4_4_ = 0.0;
									local_238 = 0.0;
								}
								else {
									if (value_01 == null) {
										throw new NullReferenceException();
									}
									bVar15 = value_01.StartsWith("#");
									if (!bVar15) {
										value_01 = String.Concat("#", value_01);
									}
									bVar15 = ColorUtility.TryParseHtmlString(value_01, ref local_48);
									if (!bVar15) goto label_059be687;
									value_00.b = local_48.b;
									value_00.a = local_48.a;
									value_00.r = local_48.r;
									value_00.g = local_48.g;
									local_248 = null;
									uStack_240._0_4_ = 0.0;
									uStack_240._4_4_ = 0.0;
									local_238 = 0.0;
									local_248 = new Nullable<Color>(value_00);
								}
								local_f8 = local_248;
								uStack_f0._0_4_ = (float)uStack_240;
								uStack_f0._4_4_ = uStack_240._4_4_;
								local_e8 = local_238;
							}
						}
	label_059be204: ;
						if (local_220 == null) goto label_059beb27;
					} while(true);
				}
				pIVar18 = (local_210 as IDisposable);
				local_200 = pIVar18;
				if (pIVar18 == null) goto label_059bec36;
				pIVar8 = pIVar18.klass;
				uVar24 = (ulong)(pIVar8._2).interface_offsets_count;
				if (uVar24 == 0) goto label_059bec0f;
				pIVar9 = (pIVar8._1).interfaceOffsets;
				lVar26 = 0;
				goto label_059bec00;
			}
		}
		goto label_059beefb;
	label_059be850: ;
		pIVar18 = (local_220 as IDisposable);
		local_200 = pIVar18;
		if (pIVar18 != null) {
			pIVar8 = pIVar18.klass;
			uVar24 = (ulong)(pIVar8._2).interface_offsets_count;
			pIVar18.Dispose();
		}
		fStack_1b0 = 0.0;
		uStack_1ac = 0;
		local_1a8 = 0;
		fStack_1a4 = 0.0;
		ppIStack_1c0 = null;
		local_1b8 = 0;
		uStack_1d0 = 0;
		fStack_1cc = 0.0;
		local_1c8 = 0.0;
		fStack_1c4 = 0.0;
		uStack_1e0 = 0;
		local_1d8 = 0.0;
		uStack_1d4 = 0;
		uStack_1f0 = 0;
		local_1e8 = null;
		fStack_1a0 = 0.0;
		fStack_19c = 0.0;
		local_1f8 = local_38;
		uVar13 = uStack_1f0;
		bVar15 = iVar22 != 0;
		uStack_1f0 = CONCAT71(uStack_1f0._1_7_, bVar15);
		uStack_1f0 = CONCAT44(iVar22, (undefined4)uStack_1f0);
		lVar26 = uStack_1f0;
		local_1d8 = local_c8;
		local_1e8 = local_d8;
		uStack_1e0._0_4_ = (float)uStack_d0;
		uStack_1e0._4_4_ = uStack_d0._4_4_;
		fStack_1c4 = local_e8;
		uStack_1d4 = SUB84(local_f8, 0);
		uStack_1d0 = (undefined4)((ulong)local_f8 >> 0x20);
		fStack_1cc = (float)uStack_f0;
		local_1c8 = SUB84(uStack_f0, 4);
		fStack_1b0 = local_108;
		ppIStack_1c0 = local_118;
		local_1b8._0_4_ = (float)uStack_110;
		local_1b8._4_4_ = uStack_110._4_4_;
		fStack_19c = local_128;
		uStack_1ac = SUB84(local_138, 0);
		local_1a8 = (undefined4)((ulong)local_138 >> 0x20);
		fStack_1a4 = (float)uStack_130;
		fStack_1a0 = SUB84(uStack_130, 4);
		if (__this == null) {
			local_228 = 0;
			throw new NullReferenceException();
		}
		local_148 = CONCAT44(fStack_1a4, local_1a8);
		uStack_140 = CONCAT44(local_128, fStack_1a0);
		uStack_150 = CONCAT44(uStack_1ac, local_108);
		local_178 = CONCAT44(uStack_1d4, local_c8);
		uStack_170 = CONCAT44(fStack_1cc, uStack_1d0);
		local_168 = CONCAT44(local_e8, local_1c8);
		uStack_190 = (object*)uStack_1f0;
		piVar1 = &__this._version;
		*piVar1 = *piVar1 + 1;
		pPVar10 = __this._items;
		if (pPVar10 == null) {
			throw new NullReferenceException();
		}
		uVar6 = __this._size;
		uStack_1f0 = lVar26;
		if (uVar6 < (uint)pPVar10.Length) {
			__this._size = uVar6 + 1;
			pUVar2 = &pPVar10[(int)uVar6].ColorD.value;
			pUVar2.r = (float)local_1a8;
			pUVar2.g = fStack_1a4;
			pUVar2.b = fStack_1a0;
			pUVar2.a = local_128;
			pSVar11 = &pPVar10[(int)uVar6].ColorC;
			pSVar11.value.g = (float)uStack_110;
			pSVar11.value.b = uStack_110._4_4_;
			*(ulong)(&pSVar11.value.g + 2) = uStack_150;
			pSVar11 = &pPVar10[(int)uVar6].ColorB;
			pSVar11.value.b = local_1c8;
			pSVar11.value.a = local_e8;
			*(object**)(&pSVar11.value.b + 2) = local_118;
			pfVar3 = &pPVar10[(int)uVar6].ColorA.value.a;
			*pfVar3 = local_c8;
			pfVar3[1] = (float)uStack_1d4;
			pfVar3[2] = (float)uStack_1d0;
			pfVar3[3] = fStack_1cc;
			pSVar11 = &pPVar10[(int)uVar6].ColorA;
			*(object**)&pSVar11.fields = local_d8;
			pSVar11.value.g = (float)uStack_d0;
			pSVar11.value.b = uStack_d0._4_4_;
			pPVar4 = &pPVar10[(int)uVar6];
			pPVar4.Content = local_1f8;
			uStack_1f0._1_3_ = SUB83(uVar13, 1);
			pPVar4.HasEffect = bVar15;
			*(undefined3)&pPVar4.field_0x9 = uStack_1f0._1_3_;
			pPVar4.Effect = iVar22;
		}
		else {
			uStack_1f0._1_3_ = SUB83(uVar13, 1);
			item.HasEffect = bVar15;
			item._9_3_ = uStack_1f0._1_3_;
			item.Effect = iVar22;
			item.Content = local_1f8;
			item.ColorA._0_8_ = local_d8;
			item.ColorA.value.g = (float)uStack_d0;
			item.ColorA.value.b = uStack_d0._4_4_;
			item.ColorA.value.a = local_c8;
			item.ColorB._0_4_ = uStack_1d4;
			item.ColorB.value.r = (float)uStack_1d0;
			item.ColorB.value.g = fStack_1cc;
			item.ColorB.value.b = local_1c8;
			item.ColorB.value.a = local_e8;
			item.ColorC._0_8_ = local_118;
			item.ColorC.value.g = (float)uStack_110;
			item.ColorC.value.b = uStack_110._4_4_;
			item.ColorC.value.a = local_108;
			item.ColorD.hasValue = (bool)(char)local_138;
			item.ColorD._1_3_ = (int3)((uint)uStack_1ac >> 8);
			item.ColorD.value.r = (float)local_1a8;
			item.ColorD.value.g = fStack_1a4;
			item.ColorD.value.b = fStack_1a0;
			item.ColorD.value.a = local_128;
			__this.AddWithResize(item);
		}
		local_228 = (ulong)(uint)(*(int)((long)&local_218[1].klass + 4) + *(int)&local_218[1].klass);
		if (local_210 == null) goto label_059beea3;
		goto label_059bdcd8;
		while (true) {
			lVar26 = lVar26 + 0x10;
			if (!(uVar24 * 0x10 != lVar26)) break;
	label_059bec00: ;
			if (*(IDisposable*)((long)&pIVar9.interfaceType + lVar26) == typeof(IDisposable)) {
				pVVar17 = (VirtualInvokeData)&pIVar8.vtable[*(int)((long)&pIVar9.offset + lVar26)].methodPtr;
				goto label_059bec2d;
			}
		}
	label_059bec0f: ;
	label_059bec2d: ;
		pIVar18.Dispose();
	label_059bec36: ;
		if (line != null) {
			if (line._stringLength <= (int)local_228) {
				return __this;
			}
			pSVar19 = line.Substring((int)local_228);
			if (pSVar19 != null) {
				if (pSVar19._stringLength < 1) {
					return __this;
				}
				fStack_1b0 = 0.0;
				uStack_1ac = 0;
				local_1a8 = 0;
				fStack_1a4 = 0.0;
				ppIStack_1c0 = null;
				local_1b8._0_4_ = 0.0;
				local_1b8._4_4_ = 0.0;
				uStack_1d0 = 0;
				fStack_1cc = 0.0;
				local_1c8 = 0.0;
				fStack_1c4 = 0.0;
				uStack_1e0._0_4_ = 0.0;
				uStack_1e0._4_4_ = 0.0;
				local_1d8 = 0.0;
				uStack_1d4 = 0;
				uStack_1f0 = 0;
				local_1e8 = null;
				fStack_1a0 = 0.0;
				fStack_19c = 0.0;
				local_1f8 = pSVar19;
				uVar12 = uStack_1f0;
				uVar24 = uStack_1f0 >> 8;
				uStack_1f0 = uVar24 << 8;
				lVar26 = uStack_1f0;
				uStack_1f0 = lVar26;
				if (__this != null) {
					local_68 = CONCAT44(fStack_1a4, local_1a8);
					uStack_60 = CONCAT44(fStack_19c, fStack_1a0);
					uStack_70 = CONCAT44(uStack_1ac, fStack_1b0);
					uStack_1f0._5_2_ = SUB82(uVar12, 5);
					uStack_1f0._7_1_ = SUB81(uVar12, 7);
					local_98 = CONCAT44(uStack_1d4, local_1d8);
					uStack_90 = CONCAT44(fStack_1cc, uStack_1d0);
					local_88 = CONCAT44(fStack_1c4, local_1c8);
					uStack_b0 = (object*)((uVar24 & 0xffffffff) << 8);
					uStack_b0 = (object*)CONCAT17(uStack_1f0._7_1_, CONCAT25(uStack_1f0._5_2_, (undefined5)uStack_b0));
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pPVar10 = __this._items;
					if (pPVar10 != null) {
						uVar6 = __this._size;
						if (uVar6 < (uint)pPVar10.Length) {
							__this._size = uVar6 + 1;
							pUVar2 = &pPVar10[(int)uVar6].ColorD.value;
							pUVar2.r = (float)local_1a8;
							pUVar2.g = fStack_1a4;
							pUVar2.b = fStack_1a0;
							pUVar2.a = fStack_19c;
							pSVar11 = &pPVar10[(int)uVar6].ColorC;
							pSVar11.value.g = (float)local_1b8;
							pSVar11.value.b = local_1b8._4_4_;
							*(ulong)(&pSVar11.value.g + 2) = uStack_70;
							pSVar11 = &pPVar10[(int)uVar6].ColorB;
							pSVar11.value.b = local_1c8;
							pSVar11.value.a = fStack_1c4;
							*(object**)(&pSVar11.value.b + 2) = ppIStack_1c0;
							pfVar3 = &pPVar10[(int)uVar6].ColorA.value.a;
							*(ulong)pfVar3 = local_98;
							*(ulong)(pfVar3 + 2) = uStack_90;
							pSVar11 = &pPVar10[(int)uVar6].ColorA;
							*(object**)&pSVar11.fields = local_1e8;
							pSVar11.value.g = (float)uStack_1e0;
							pSVar11.value.b = uStack_1e0._4_4_;
							pPVar4 = &pPVar10[(int)uVar6];
							pPVar4.Content = local_1f8;
							*(object**)&pPVar4.HasEffect = uStack_b0;
							return __this;
						}
						item_01._8_8_ = uStack_b0;
						item_01.Content = local_1f8;
						item_01.ColorA._0_8_ = local_1e8;
						item_01.ColorA.value.g = (float)uStack_1e0;
						item_01.ColorA.value.b = uStack_1e0._4_4_;
						item_01.ColorA.value.a = local_1d8;
						item_01.ColorB._0_4_ = uStack_1d4;
						item_01.ColorB.value.r = (float)uStack_1d0;
						item_01.ColorB.value.g = fStack_1cc;
						item_01.ColorB.value.b = local_1c8;
						item_01.ColorB.value.a = fStack_1c4;
						item_01.ColorC._0_8_ = ppIStack_1c0;
						item_01.ColorC.value.g = (float)local_1b8;
						item_01.ColorC.value.b = local_1b8._4_4_;
						item_01.ColorC.value.a = fStack_1b0;
						item_01.ColorD.hasValue = (bool)(char)uStack_1ac;
						item_01.ColorD._1_3_ = (int3)((uint)uStack_1ac >> 8);
						item_01.ColorD.value.r = (float)local_1a8;
						item_01.ColorD.value.g = fStack_1a4;
						item_01.ColorD.value.b = fStack_1a0;
						item_01.ColorD.value.a = fStack_19c;
						__this.AddWithResize(item_01);
						return __this;
					}
				}
			}
		}
	label_059beefb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x58BF0E0", Offset = "0x58BE0E0", VA = "0x58BF0E0")]
	private static Color? ParseColor(string hex)
	{
		// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$ParseColor): 2 lines keep C-only constructs
		Color value;
		bool bVar1;
		Color local_28;

		local_28.r = 0.0;
		local_28.g = 0.0;
		local_28.b = 0.0;
		local_28.a = 0.0;
		bVar1 = String.IsNullOrEmpty(hex);
		if (!bVar1) {
			if (hex == null) {
				throw new NullReferenceException();
			}
			bVar1 = hex.StartsWith("#");
			if (!bVar1) {
				hex = String.Concat("#", hex);
			}
			bVar1 = ColorUtility.TryParseHtmlString(hex, ref local_28);
			if (bVar1) {
				value.b = local_28.b;
				value.a = local_28.a;
				value.r = local_28.r;
				value.g = local_28.g;
				__return_storage_ptr__.hasValue = false;
				*(undefined3)&__return_storage_ptr__.field_0x1 = 0;
				__return_storage_ptr__.value.r = 0.0;
				__return_storage_ptr__.value.g = 0.0;
				__return_storage_ptr__.value.b = 0.0;
				__return_storage_ptr__.value.a = 0.0;
				__return_storage_ptr__ = new Nullable<Color>(value);
				return __return_storage_ptr__;
			}
		}
		__return_storage_ptr__.hasValue = false;
		*(undefined3)&__return_storage_ptr__.field_0x1 = 0;
		__return_storage_ptr__.value.r = 0.0;
		__return_storage_ptr__.value.g = 0.0;
		__return_storage_ptr__.value.b = 0.0;
		__return_storage_ptr__.value.a = 0.0;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x58BC4B0", Offset = "0x58BB4B0", VA = "0x58BC4B0")]
	private void Rebuild()
	{
		// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$Rebuild): 48 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		List<GameObject> pSVar3;
		String pSVar4;
		GameObject[] pUVar5;
		EffectText.Segment seg;
		Il2CppType handle;
		Object x;
		bool bVar7;
		TMP_FontAsset pTVar8;
		String[] pSVar9;
		ulong uVar10;
		List<EffectText.Segment> __this_00;
		Type[] components;
		Type pSVar11;
		object pIVar12;
		GameObject __this_01;
		Transform pUVar13;
		Transform parent;
		HorizontalLayoutGroup __this_02;
		ContentSizeFitter __this_03;
		GameObject item;
		ulong uVar14;
		MethodInfo pMVar15;
		byte[] auStack_198 = new byte[8];
		Object pUStack_188;
		String[] pSStack_180;
		Object pUStack_178;
		ulong uStack_170;
		ulong uStack_168;
		ulong uStack_160;
		ulong uStack_158;
		ulong uStack_150;
		ulong uStack_148;
		ulong uStack_140;
		ulong uStack_138;
		ulong uStack_130;
		ulong uStack_128;
		ulong uStack_120;
		byte[] auStack_118 = new byte[16];
		Object pUStack_108;
		ulong uStack_100;
		ulong uStack_f8;
		ulong uStack_f0;
		ulong uStack_e8;
		ulong uStack_e0;
		ulong uStack_d8;
		ulong uStack_d0;
		ulong uStack_c8;
		ulong uStack_c0;
		ulong uStack_b8;
		ulong uStack_b0;
		byte[] auStack_a8 = new byte[8];
		Object pUStack_98;
		ulong uStack_90;
		ulong uStack_88;
		ulong uStack_80;
		ulong uStack_78;
		ulong uStack_70;
		ulong uStack_68;
		ulong uStack_60;
		ulong uStack_58;
		ulong uStack_50;
		ulong uStack_48;
		ulong uStack_40;

		auStack_198 = (byte[])0x0;
		pUStack_188 = null;
		uStack_48 = 0;
		uStack_40 = 0;
		uStack_58 = 0;
		uStack_50 = 0;
		uStack_68 = 0;
		uStack_60 = 0;
		uStack_78 = 0;
		uStack_70 = 0;
		uStack_88 = 0;
		uStack_80 = 0;
		pUStack_98 = null;
		uStack_90 = 0;
		auStack_a8 = (byte[])0x0;
		uStack_128 = 0;
		uStack_120 = 0;
		uStack_138 = 0;
		uStack_130 = 0;
		uStack_148 = 0;
		uStack_140 = 0;
		uStack_158 = 0;
		uStack_150 = 0;
		uStack_168 = 0;
		uStack_160 = 0;
		pUStack_178 = null;
		uStack_170 = 0;
		pSVar3 = this._segments;
		if (pSVar3 != null) {
			auStack_118.GetEnumerator((List<object>)pSVar3);
			pUStack_188 = pUStack_108;
			auStack_198 = (byte[])auStack_118._0_8_;
			auStack_118._0_8_ = null;
			auStack_118._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_198;
			while (true) {
				bVar7 = auStack_198.MoveNext();
				x = pUStack_188;
				if (!(bVar7)) break;
				bVar7 = (x != null);
				if (bVar7) {
					Object.Destroy(x);
				}
			}
			auStack_198.Dispose() ;
			pSVar3 = this._segments;
			if (pSVar3 != null) {
				piVar1 = &pSVar3._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar3._size;
				pSVar3._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar3._items, 0, length);
				}
				bVar7 = String.IsNullOrEmpty(this._text);
				if (bVar7) {
					return;
				}
				pSVar4 = this._text;
				pTVar8 = this._font;
				if (pTVar8 == null) {
					pTVar8 = GisketchTypography.Resolve("text", 400, null);
				}
				pTVar8 = GisketchTypography.ForText(pSVar4, pTVar8);
				this._segmentFont = pTVar8;
				pSVar4 = this._text;
				if (pSVar4 != null) {
					pMVar15 = (MethodInfo)&g_data_0000000a;
					pSVar9 = pSVar4.Split(10, 0);
					if (pSVar9 != null) {
						if ((int)pSVar9.Length < 1) {
							return;
						}
						uVar10 = pSVar9.Length & 0xffffffff;
						uVar14 = 0;
						pSStack_180 = pSVar9;
						do {
							if (uVar10 <= uVar14) goto label_059bcdf6;
							pSVar4 = pSVar9[uVar14];
							__this_00 = EffectText.ParseLine(pSVar4);
							if (__this_00 == null) break;
							if (__this_00._size == 0) {
								pSVar3 = this._segments;
								pMVar15 = (MethodInfo)this.CreateSpacerRow();
								if (pSVar3 == null) break;
								piVar1 = &pSVar3._version;
								*piVar1 = *piVar1 + 1;
								pUVar5 = pSVar3._items;
								if (pUVar5 == null) break;
								uVar2 = pSVar3._size;
								if (uVar2 < (uint)pUVar5.Length) {
									pSVar3._size = uVar2 + 1;
									pUVar5[(int)uVar2] = (GameObject)pMVar15;
								}
								else {
									pSVar3.AddWithResize((object)pMVar15);
								}
							}
							else {
								components = (Type[])new Type[3];
								handle = TypeRef_UnityEngine_RectTransform;
								pSVar11 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
								if (components == null) break;
								if ((pSVar11 != null) &&(pIVar12 = il2cpp_vm_Object_IsInst((object)pSVar11, (((components.obj).klass)._1).element_class), pIVar12 == null)) {
	label_059bcdfb: ;
									pIVar12 = new ArrayTypeMismatchException();
									throw pIVar12;
								}
								if ((int)components.Length == 0) {
	label_059bcdf6: ;
									throw new IndexOutOfRangeException();
								}
								components[0] = pSVar11;
								pSVar11 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_HorizontalLayoutGroup);
								if ((pSVar11 != null) &&(pIVar12 = il2cpp_vm_Object_IsInst((object)pSVar11, (((components.obj).klass)._1).element_class), pIVar12 == null)) goto label_059bcdfb;
								if ((components.Length & 0xfffffffe) == 0) goto label_059bcdf6;
								components[1] = pSVar11;
								pSVar11 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_ContentSizeFitter);
								if ((pSVar11 != null) &&(pIVar12 = il2cpp_vm_Object_IsInst((object)pSVar11, (((components.obj).klass)._1).element_class), pIVar12 == null)) goto label_059bcdfb;
								if ((uint)components.Length < 3) goto label_059bcdf6;
								components[2] = pSVar11;
								__this_01 = new GameObject("EffectTextRow", components);
								if (__this_01 == null) break;
								pUVar13 = __this_01.transform;
								parent = this.transform;
								pSVar9 = pSStack_180;
								if (pUVar13 == null) break;
								pUVar13.SetParent(parent, false);
								__this_02 = __this_01.GetComponent<HorizontalLayoutGroup>();
								if (__this_02 == null) break;
								__this_02.childAlignment = 3;
								__this_02.childForceExpandWidth = false;
								__this_02.childForceExpandHeight = false;
								__this_02.spacing = 0.0;
								__this_03 = __this_01.GetComponent<ContentSizeFitter>();
								if (__this_03 == null) break;
								__this_03.horizontalFit = 2;
								__this_03.verticalFit = 2;
								pMVar15 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
								pSVar3 = this._segments;
								if (pSVar3 == null) break;
								piVar1 = &pSVar3._version;
								*piVar1 = *piVar1 + 1;
								pUVar5 = pSVar3._items;
								if (pUVar5 == null) break;
								uVar2 = pSVar3._size;
								if (uVar2 < (uint)pUVar5.Length) {
									pSVar3._size = uVar2 + 1;
									pUVar5[(int)uVar2] = __this_01;
								}
								else {
									pSVar3.AddWithResize((object)__this_01);
								}
								auStack_118.GetEnumerator(__this_00);
								uStack_48 = uStack_b8;
								uStack_40 = uStack_b0;
								uStack_58 = uStack_c8;
								uStack_50 = uStack_c0;
								uStack_68 = uStack_d8;
								uStack_60 = uStack_d0;
								uStack_78 = uStack_e8;
								uStack_70 = uStack_e0;
								uStack_88 = uStack_f8;
								uStack_80 = uStack_f0;
								pUStack_98 = pUStack_108;
								uStack_90 = uStack_100;
								auStack_a8 = (byte[])auStack_118._0_8_;
								auStack_118._0_8_ = null;
								auStack_118._8_8_ = (System_Collections_Generic_List_Enumerator_T__o)auStack_a8;
								while (bVar7 = auStack_a8.MoveNext()) {
									uStack_128 = uStack_48;
									uStack_120 = uStack_40;
									uStack_138 = uStack_58;
									uStack_130 = uStack_50;
									uStack_148 = uStack_68;
									uStack_140 = uStack_60;
									uStack_158 = uStack_78;
									uStack_150 = uStack_70;
									uStack_168 = uStack_88;
									uStack_160 = uStack_80;
									pUStack_178 = pUStack_98;
									uStack_170 = uStack_90;
									pUVar13 = __this_01.transform;
									seg.HasEffect = (bool)(undefined1)uStack_170;
									seg._9_3_ = uStack_170._1_3_;
									seg.Effect = uStack_170._4_4_;
									seg.Content = (String)pUStack_178;
									seg.ColorA.hasValue = (bool)(undefined1)uStack_168;
									seg.ColorA._1_3_ = uStack_168._1_3_;
									seg.ColorA.value.r = (float)uStack_168._4_4_;
									seg.ColorA.value.g = (float)(undefined4)uStack_160;
									seg.ColorA.value.b = (float)uStack_160._4_4_;
									seg.ColorA.value.a = (float)(undefined4)uStack_158;
									seg.ColorB.hasValue = (bool)uStack_158._4_1_;
									seg.ColorB._1_3_ = uStack_158._5_3_;
									seg.ColorB.value.r = (float)(undefined4)uStack_150;
									seg.ColorB.value.g = (float)uStack_150._4_4_;
									seg.ColorB.value.b = (float)(undefined4)uStack_148;
									seg.ColorB.value.a = (float)uStack_148._4_4_;
									seg.ColorC.hasValue = (bool)(undefined1)uStack_140;
									seg.ColorC._1_3_ = uStack_140._1_3_;
									seg.ColorC.value.r = (float)uStack_140._4_4_;
									seg.ColorC.value.g = (float)(undefined4)uStack_138;
									seg.ColorC.value.b = (float)uStack_138._4_4_;
									seg.ColorC.value.a = (float)(undefined4)uStack_130;
									seg.ColorD.hasValue = (bool)uStack_130._4_1_;
									seg.ColorD._1_3_ = uStack_130._5_3_;
									seg.ColorD.value.r = (float)(undefined4)uStack_128;
									seg.ColorD.value.g = (float)uStack_128._4_4_;
									seg.ColorD.value.b = (float)(undefined4)uStack_120;
									seg.ColorD.value.a = (float)uStack_120._4_4_;
									item = this.CreateSegmentGO(pUVar13, seg);
									pMVar15 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
									pSVar3 = this._segments;
									if (pSVar3 == null) {
	label_059bcd88: ;
										throw new NullReferenceException();
									}
									piVar1 = &pSVar3._version;
									*piVar1 = *piVar1 + 1;
									pUVar5 = pSVar3._items;
									if (pUVar5 == null) goto label_059bcd88;
									uVar2 = pSVar3._size;
									if (uVar2 < (uint)pUVar5.Length) {
										pSVar3._size = uVar2 + 1;
										pUVar5[(int)uVar2] = item;
									}
									else {
										pSVar3.AddWithResize((object)item);
									}
								}
								pMVar15 = MethodInfo_System_Collections_Generic_List_Enumerator_EffectText_Segment_Dispose;
								auStack_a8.Dispose();
							}
							uVar14 = uVar14 + 1;
							uVar2 = (uint)pSVar9.Length;
							uVar10 = (ulong)uVar2;
							if ((long)(int)uVar2 <= (long)uVar14) {
								return;
							}
						} while(true);
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x58BF3E0", Offset = "0x58BE3E0", VA = "0x58BF3E0")]
	private GameObject CreateSegmentGO(Transform parent, Segment seg)
	{
		// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$CreateSegmentGO): 10 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Vector2 UVar3;
		Vector2 UVar4;
		Il2CppType handle;
		uint uVar5;
		Type[] components;
		Type pSVar6;
		object pIVar7;
		GameObject __this_00;
		Transform __this_01;
		TextMeshProUGUI __this_02;
		String pSVar8;
		LayoutElement pUVar9;
		NameEffectController __this_03;
		NameEffectSettings settings;
		float fVar11;
		ulong uVar12;
		Color UVar13;
		Color UVar14;
		float local_58;
		float local_48;

		components = (Type[])new Type[4];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) goto label_059bf8f1;
		if (pSVar6 != null) {
			pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar6, (((components.obj).klass)._1).element_class);
			if (pIVar7 == null) goto label_059bf8fb;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar6;
			pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
			if (pSVar6 != null) {
				pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar6, (((components.obj).klass)._1).element_class);
				if (pIVar7 == null) goto label_059bf8fb;
			}
			if ((components.Length & 0xfffffffe) == 0) goto label_059bf8f6;
			components[1] = pSVar6;
			pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
			if (pSVar6 != null) {
				pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar6, (((components.obj).klass)._1).element_class);
				if (pIVar7 == null) goto label_059bf8fb;
			}
			if (2 < (uint)components.Length) {
				components[2] = pSVar6;
				pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
				if (pSVar6 != null) {
					pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar6, (((components.obj).klass)._1).element_class) ;
					if (pIVar7 == null) {
	label_059bf8fb: ;
						pIVar7 = new ArrayTypeMismatchException();
						throw pIVar7;
					}
				}
				if ((components.Length & 0xfffffffc) != 0) {
					components[3] = pSVar6;
					__this_00 = new GameObject("Segment", components);
					if (__this_00 != null) {
						__this_01 = __this_00.transform;
						if (__this_01 != null) {
							__this_01.SetParent(parent, false);
							__this_02 = __this_00.GetComponent<TextMeshProUGUI>();
							pSVar8 = seg.Content;
							if (__this_02 != null) {
								__this_02.set_text(seg.Content);
								__this_02.font = this._segmentFont;
								__this_02.fontSize = this._fontSize;
								uVar5 = seg._8_4_;
								if ((seg.HasEffect & 1) == 0) {
									uVar1 = this._color.r;
									uVar2 = this._color.g;
									uVar12._0_4_ = this._color.b;
									uVar12._4_4_ = this._color.a;
								}
								else {
									uVar1 = (undefined4)g_data_01005870;
									uVar2 = g_data_01005870._4_4_;
									uVar12 = g_data_01005870;
								}
								UVar13.g = (float)uVar2;
								UVar13.r = (float)uVar1;
								UVar13.b = (float)(int)uVar12;
								UVar13.a = (float)(int)((ulong)uVar12 >> 0x20);
								__this_02.set_color(UVar13);
								__this_02.alignment = this._alignment;
								__this_02.richText = this._richText;
								__this_02.enableWordWrapping = false;
								__this_02.overflowMode = 0;
								pSVar8 = String.Concat(pSVar8, "|");
								UVar3 = __this_02.GetPreferredValues(pSVar8, 3.4028235e+38, 3.4028235e+38);
								UVar4 = __this_02.GetPreferredValues("|", 3.4028235e+38, 3.4028235e+38);
								fVar11 = __this_02.get_preferredHeight();
								pUVar9 = __this_00.GetComponent<LayoutElement>();
								if (pUVar9 != null) {
									local_48 = UVar3.x;
									local_58 = UVar4.x;
									local_48 = local_48 - local_58;
									if (local_48 <= 0.0) {
										local_48 = 0.0;
									}
									pUVar9.set_preferredWidth(local_48);
									pUVar9.set_preferredHeight(fVar11);
									if ((SUB41(uVar5, 0) & 1) != 0) {
										__this_03 = __this_00.AddComponent<NameEffectController>();
										if (__this_03 == null) goto label_059bf8f1;
										__this_03.AutoConfigure();
										settings = NameEffectPresets.GetPreset(seg.Effect);
										if (seg.ColorA.hasValue != false) {
											UVar14 = (Color)seg.ColorA.Value;
											if (settings == null) goto label_059bf8f1;
											settings.gradientA = UVar14;
										}
										if (seg.ColorB.hasValue != false) {
											UVar14 = (Color)seg.ColorB.Value;
											if (settings == null) goto label_059bf8f1;
											settings.gradientB = UVar14;
										}
										if (seg.ColorC.hasValue != false) {
											UVar14 = (Color)seg.ColorC.Value;
											if (settings == null) goto label_059bf8f1;
											settings.gradientC = UVar14;
										}
										if (seg.ColorD.hasValue != false) {
											UVar14 = (Color)seg.ColorD.Value;
											if (settings == null) goto label_059bf8f1;
											settings.gradientD = UVar14;
										}
										__this_03.Apply(settings);
									}
									return __this_00;
								}
							}
						}
					}
	label_059bf8f1: ;
					throw new NullReferenceException();
				}
			}
		}
	label_059bf8f6: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x58BF1C0", Offset = "0x58BE1C0", VA = "0x58BF1C0")]
	private GameObject CreateSpacerRow()
	{
		// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$CreateSpacerRow): 2 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type pSVar1;
		object pIVar2;
		GameObject __this_00;
		Transform __this_01;
		Transform parent;
		LayoutElement pUVar3;

		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_059bf3c1: ;
			throw new NullReferenceException();
		}
		if (pSVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_059bf3cb;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar1;
			pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) {
	label_059bf3cb: ;
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar1;
				__this_00 = new GameObject("EffectTextSpacer", components);
				if (__this_00 != null) {
					__this_01 = __this_00.transform;
					parent = this.transform;
					if (__this_01 != null) {
						__this_01.SetParent(parent, false);
						pUVar3 = __this_00.GetComponent<LayoutElement>();
						if (pUVar3 != null) {
							pUVar3.set_preferredHeight(this._fontSize);
							pUVar3.set_preferredWidth(1.0);
							return __this_00;
						}
					}
				}
				goto label_059bf3c1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x58BCEB0", Offset = "0x58BBEB0", VA = "0x58BCEB0")]
	private void ApplyFontSize()
	{
		// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$ApplyFontSize): clean
		this.Rebuild();
		return;
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x58BCEE0", Offset = "0x58BBEE0", VA = "0x58BCEE0")]
	private void ApplyColor()
	{
		// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$ApplyColor): 9 lines keep C-only constructs
		uint uVar1;
		ulong uVar2;
		List<GameObject> __this_00;
		Component __this_01;
		object x;
		bool bVar3;
		uint uVar4;
		Object[] pSVar5;
		NameEffectController x_00;
		uint uVar6;
		System_Collections_Generic_List_Enumerator_object__o SStack_68;
		byte[] auStack_48 = new byte[16];
		Object pUStack_38;

		__this_00 = this._segments;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		auStack_48.GetEnumerator((List<object>)__this_00);
		SStack_68._current = (object)pUStack_38;
		SStack_68._list = (List<T>)auStack_48._0_8_;
		SStack_68._index = auStack_48._8_4_;
		SStack_68._version = auStack_48._12_4_;
		auStack_48._0_8_ = null;
		auStack_48._8_8_ = &SStack_68;
		do {
			do {
				do {
					bVar3 = SStack_68.MoveNext();
					x = SStack_68._current;
					if (!bVar3) {
						SStack_68.Dispose();
						return;
					}
					bVar3 = ((Object)x == null);
				} while (bVar3);
				if ((Object)x == null) {
					throw new NullReferenceException();
				}
				pSVar5 = x.GetComponentsInChildren<TextMeshProUGUI>();
				if (pSVar5 == null) {
					throw new NullReferenceException();
				}
				uVar4 = (uint)pSVar5.Length;
			} while ((int)uVar4 < 1);
			uVar6 = 0;
			do {
				if (uVar4 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				__this_01 = (Component)pSVar5[(int)uVar6];
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				x_00 = __this_01.GetComponent<NameEffectController>();
				bVar3 = ((Object)x_00 == null);
				if (bVar3) {
					uVar1 = this._color.r;
					uVar2._0_4_ = this._color.b;
					uVar2._4_4_ = this._color.a;
					(**(code*)&((Il2CppClass)__this_01.klass).vtable[23].methodPtr)(uVar1,uVar2,__this_01,((Il2CppClass)__this_01.klass).vtable[23].method);
				}
				uVar6 = uVar6 + 1;
				uVar4 = (uint)pSVar5.Length;
			} while ((int)uVar6 < (int)uVar4);
		} while(true);
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x58BD1B0", Offset = "0x58BC1B0", VA = "0x58BD1B0")]
	private void ApplyAlignment()
	{
		// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$ApplyAlignment): 6 lines keep C-only constructs
		List<GameObject> __this_00;
		object x;
		bool bVar1;
		uint uVar2;
		Object[] pSVar3;
		uint uVar4;
		byte[] auStack_60 = new byte[16];
		Object pUStack_50;
		System_Collections_Generic_List_Enumerator_object__o SStack_48;

		__this_00 = this._segments;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		auStack_60.GetEnumerator((List<object>)__this_00);
		SStack_48._current = (object)pUStack_50;
		SStack_48._list = (List<T>)auStack_60._0_8_;
		SStack_48._index = auStack_60._8_4_;
		SStack_48._version = auStack_60._12_4_;
		auStack_60._0_8_ = null;
		auStack_60._8_8_ = &SStack_48;
		do {
			do {
				do {
					bVar1 = SStack_48.MoveNext();
					x = SStack_48._current;
					if (!bVar1) {
						SStack_48.Dispose();
						return;
					}
					bVar1 = ((Object)x == null);
				} while (bVar1);
				if ((Object)x == null) {
					throw new NullReferenceException();
				}
				pSVar3 = x.GetComponentsInChildren<TextMeshProUGUI>();
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				uVar2 = (uint)pSVar3.Length;
			} while ((int)uVar2 < 1);
			uVar4 = 0;
			do {
				if (uVar2 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				if ((TMP_Text)pSVar3[(int)uVar4] == null) {
					throw new NullReferenceException();
				}
				(pSVar3[(int)uVar4]).alignment = this._alignment;
				uVar4 = uVar4 + 1;
				uVar2 = (uint)pSVar3.Length;
			} while ((int)uVar4 < (int)uVar2);
		} while(true);
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x58C0030", Offset = "0x58BF030", VA = "0x58C0030")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$OnDestroy): 4 lines keep C-only constructs
		int piVar1;
		int length;
		List<GameObject> pSVar2;
		object x;
		bool bVar3;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pSVar2 = this._segments;
		if (pSVar2 != null) {
			local_58 = pSVar2.GetEnumerator();
			local_30 = (byte)&local_58;
			while(true) {
				bVar3 = local_58.MoveNext();
				x = local_58._current;
				if (!bVar3) break;
				bVar3 = ((Object)x != null);
				if (bVar3) {
					Object.Destroy((Object)x);
				}
			}
			local_58.Dispose() ;
			pSVar2 = this._segments;
			if (pSVar2 != null) {
				piVar1 = &pSVar2._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar2._size;
				pSVar2._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar2._items, 0, length);
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x58C0200", Offset = "0x58BF200", VA = "0x58C0200")]
	public EffectText()
	{
		// Lifted from source/cpp/PatreonEffects/EffectText.c (PatreonEffects.EffectText$$.ctor): clean
		List<GameObject> __this_00;

		this._text = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this._fontSize = 18.0;
		this._color.r = 1.0;
		this._color.g = 1.0;
		this._color.b = 1.0;
		this._color.a = 1.0;
		this._alignment = 0x1001;
		this._richText = true;
		__this_00 = new List<GameObject>();
		this._segments = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/PatreonEffects/EffectText.c.

	// PatreonEffects.EffectText$$.cctor: clean
	static EffectText()
	{
		Regex pSVar2;

		pSVar2 = new Regex("<fx(?_attrs_[^>]*)>(?_content_.*?)</fx>", 0x18);
		EffectText._fxTagRegex = pSVar2;
		pSVar2 = new Regex("(?_key_\\w+)=\"(?_val_[^\"]*)\"", 8);
		EffectText._attrRegex = pSVar2;
		return;
	}

	// PatreonEffects.EffectText.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new EffectText.c();
		EffectText.c.__9 = (EffectText.c)__this;
		return;
	}

	// PatreonEffects.EffectText.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// PatreonEffects.EffectText.<>c$$<WithPresetColors>b__27_0: 64 lines keep C-only constructs
	private String c__WithPresetColors_b__27_0(Match match)
	{
		ulong uVar1;
		ulong uVar2;
		ulong uVar3;
		ulong uVar4;
		byte bVar5;
		Regex __this_00;
		Il2CppClass pIVar6;
		Il2CppRuntimeInterfaceOffsetPair pIVar7;
		sbyte cVar8;
		bool bVar9;
		GroupCollection pSVar10;
		Group pSVar11;
		String pSVar12;
		HashSet<string> __this_01;
		MatchCollection __this_02;
		object pIVar13;
		VirtualInvokeData pVVar14;
		object pIVar15;
		NameEffectSettings pPVar16;
		StringBuilder pSVar17;
		ulong uVar18;
		long lVar20;
		Color color;
		Color color_00;
		Color color_01;
		Color color_02;
		object pIStack_88;
		int iStack_7c;
		ulong uStack_78;
		ulong uStack_68;
		Match pSStack_58;
		object pIStack_50;
		byte puStack_40;
		object* ppIStack_38;

		if (Il2CppMethodInitialized_07545bd8 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07545bd8 = true;
		}
		pIStack_88 = null;
		pIStack_50 = null;
		if (((match != null) &&(pSVar10 = match.get_Groups(), pSVar10 != null)) &&(pSVar11 = pSVar10.get_Item("attrs"), pSVar11 != null)) {
			pSVar12 = pSVar11.Value;
			__this_01 = new HashSet<string>();
			iStack_7c = 0;
			__this_00 = EffectText._attrRegex;
			if ((__this_00 != null) &&(uStack_78 = pSVar12, pSStack_58 = match, __this_02 = __this_00.Matches(pSVar12), __this_02 != null)) {
				pIVar13 = (object)__this_02.GetEnumerator();
				puStack_40 = (byte)&pIStack_88;
				ppIStack_38 = &pIStack_50;
				do {
					pIStack_88 = pIVar13;
					if (pIVar13 == null) {
						throw new NullReferenceException();
					}
					pIVar6 = pIVar13.klass;
					uVar18 = (ulong)(pIVar6._2).interface_offsets_count;
					cVar8 = pIVar13.Dispose();
					pIVar13 = pIStack_88;
					if (cVar8 == false) {
						pIVar13 = (pIStack_88 as IDisposable);
						pIStack_50 = pIVar13;
						if (pIVar13 == null) goto label_059c0906;
						pIVar6 = pIVar13.klass;
						uVar18 = (ulong)(pIVar6._2).interface_offsets_count;
						if (uVar18 == 0) goto label_059c08df;
						pIVar7 = (pIVar6._1).interfaceOffsets;
						lVar20 = 0;
						goto label_059c08d0;
					}
					if (pIStack_88 == null) {
						throw new NullReferenceException();
					}
					pIVar6 = pIStack_88.klass;
					uVar18 = (ulong)(pIVar6._2).interface_offsets_count;
					pIVar15 = pIVar13.Dispose();
					if (pIVar15 == null) {
						throw new NullReferenceException();
					}
					pIVar6 = pIVar15.klass;
					bVar5 = (typeof(Match)._2).typeHierarchyDepth;
					if (((pIVar6._2).typeHierarchyDepth < bVar5) ||((pIVar6._2).typeHierarchy[(ulong)bVar5 - 1] !=typeof(Match))) {
						throw new InvalidCastException();
					}
					pSVar10 = (GroupCollection)(*pIVar6.vtable[5].methodPtr)(pIVar15,pIVar6.vtable[5].method);
					if (pSVar10 == null) {
						throw new NullReferenceException();
					}
					pSVar11 = pSVar10.get_Item("key");
					if (pSVar11 == null) {
						throw new NullReferenceException();
					}
					pSVar12 = pSVar11.Value;
					if (pSVar12 == null) {
						throw new NullReferenceException();
					}
					pSVar12 = pSVar12.ToLowerInvariant();
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					__this_01.Add((object)pSVar12);
					bVar9 = (pSVar12 == "effect");
					pIVar13 = pIStack_88;
					if (bVar9) {
						pSVar10 = (GroupCollection)(*pIVar15.klass.vtable[5].methodPtr)(pIVar15,pIVar15.klass.vtable[5].method);
						if (pSVar10 == null) {
							throw new NullReferenceException();
						}
						pSVar11 = pSVar10.get_Item("val");
						if (pSVar11 == null) {
							throw new NullReferenceException();
						}
						pSVar12 = pSVar11.Value;
						NameEffectPresets.TryResolve(pSVar12, ref iStack_7c);
						pIVar13 = pIStack_88;
					}
				} while(true);
			}
		}
		goto label_059c0bf9;
		while (true) {
			lVar20 = lVar20 + 0x10;
			if (!(uVar18 * 0x10 != lVar20)) break;
	label_059c08d0: ;
			if (*(IDisposable*)((long)&pIVar7.interfaceType + lVar20) == typeof(IDisposable)) {
				pVVar14 = pIVar6.vtable + *(int)((long)&pIVar7.offset + lVar20);
				goto label_059c08fd;
			}
		}
	label_059c08df: ;
	label_059c08fd: ;
		pIVar13.Dispose();
	label_059c0906: ;
		if (iStack_7c == 0) {
			pSVar12 = pSStack_58.Value;
			return pSVar12;
		}
		pPVar16 = NameEffectPresets.GetPreset(iStack_7c);
		pSVar17 = new StringBuilder("<fx");
		if ((pSVar17 != null) &&(pSVar17 = pSVar17.Append(uStack_78), __this_01 != null)) {
			bVar9 = __this_01.Contains((Il2CppObject *)"a");
			if (!bVar9) {
				if (pPVar16 == null) goto label_059c0bf9;
				pSVar12 = *(String*)&pPVar16.gradientA;
				uVar1._0_4_ = pPVar16.gradientA.b;
				uVar1._4_4_ = pPVar16.gradientA.a;
				uVar2._0_4_ = (int)pSVar12;
				uVar2._4_4_ = (int)((ulong)pSVar12 >> 0x20);
				if ((typeof(EffectText)._2).cctor_finished_or_no_cctor == 0) {
					uStack_78 = pSVar12;
					uStack_68 = uVar1;
					uVar2._0_4_ = (undefined4)uStack_78;
					uVar2._4_4_ = uStack_78._4_4_;
					uVar1._0_4_ = (undefined4)uStack_68;
					uVar1._4_4_ = uStack_68._4_4_;
				}
				color.g = (float)uVar2._4_4_;
				color.r = (float)(undefined4)uVar2;
				color.a = (float)uVar1._4_4_;
				color.b = (float)(undefined4)uVar1;
				EffectText.AppendColorAttribute(pSVar17, "a", color);
			}
			bVar9 = __this_01.Contains((Il2CppObject *)"b");
			if (!bVar9) {
				if (pPVar16 == null) goto label_059c0bf9;
				pSVar12 = *(String*)&pPVar16.gradientB;
				uVar2._0_4_ = pPVar16.gradientB.b;
				uVar2._4_4_ = pPVar16.gradientB.a;
				uVar1._0_4_ = (int)pSVar12;
				uVar1._4_4_ = (int)((ulong)pSVar12 >> 0x20);
				if ((typeof(EffectText)._2).cctor_finished_or_no_cctor == 0) {
					uStack_78 = pSVar12;
					uStack_68 = uVar2;
					uVar1._0_4_ = (undefined4)uStack_78;
					uVar1._4_4_ = uStack_78._4_4_;
					uVar2._0_4_ = (undefined4)uStack_68;
					uVar2._4_4_ = uStack_68._4_4_;
				}
				color_00.g = (float)uVar1._4_4_;
				color_00.r = (float)(undefined4)uVar1;
				color_00.a = (float)uVar2._4_4_;
				color_00.b = (float)(undefined4)uVar2;
				EffectText.AppendColorAttribute(pSVar17, "b", color_00);
			}
			bVar9 = __this_01.Contains((Il2CppObject *)"c");
			if (!bVar9) {
				if (pPVar16 == null) goto label_059c0bf9;
				pSVar12 = *(String*)&pPVar16.gradientC;
				uVar3._0_4_ = pPVar16.gradientC.b;
				uVar3._4_4_ = pPVar16.gradientC.a;
				uVar1._0_4_ = (int)pSVar12;
				uVar1._4_4_ = (int)((ulong)pSVar12 >> 0x20);
				if ((typeof(EffectText)._2).cctor_finished_or_no_cctor == 0) {
					uStack_78 = pSVar12;
					uStack_68 = uVar3;
					uVar1._0_4_ = (undefined4)uStack_78;
					uVar1._4_4_ = uStack_78._4_4_;
					uVar3._0_4_ = (undefined4)uStack_68;
					uVar3._4_4_ = uStack_68._4_4_;
				}
				color_01.g = (float)uVar1._4_4_;
				color_01.r = (float)(undefined4)uVar1;
				color_01.a = (float)uVar3._4_4_;
				color_01.b = (float)(undefined4)uVar3;
				EffectText.AppendColorAttribute(pSVar17, "c", color_01);
			}
			bVar9 = __this_01.Contains((Il2CppObject *)"d");
			if (!bVar9) {
				if (pPVar16 == null) goto label_059c0bf9;
				pSVar12 = *(String*)&pPVar16.gradientD;
				uVar4._0_4_ = pPVar16.gradientD.b;
				uVar4._4_4_ = pPVar16.gradientD.a;
				uVar1._0_4_ = (int)pSVar12;
				uVar1._4_4_ = (int)((ulong)pSVar12 >> 0x20);
				if ((typeof(EffectText)._2).cctor_finished_or_no_cctor == 0) {
					uStack_78 = pSVar12;
					uStack_68 = uVar4;
					uVar1._0_4_ = (undefined4)uStack_78;
					uVar1._4_4_ = uStack_78._4_4_;
					uVar4._0_4_ = (undefined4)uStack_68;
					uVar4._4_4_ = uStack_68._4_4_;
				}
				color_02.g = (float)uVar1._4_4_;
				color_02.r = (float)(undefined4)uVar1;
				color_02.a = (float)uVar4._4_4_;
				color_02.b = (float)(undefined4)uVar4;
				EffectText.AppendColorAttribute(pSVar17, "d", color_02);
			}
			if (pSVar17 != null) {
				pSVar17 = pSVar17.Append(0x3e);
				pSVar10 = pSStack_58.get_Groups();
				if ((((pSVar10 != null) &&(pSVar11 = pSVar10.get_Item("content"), pSVar11 != null)) &&(pSVar12 = pSVar11.Value, pSVar17 != null)) &&((pSVar17 = pSVar17.Append(pSVar12), pSVar17 != null &&(pSVar17 = pSVar17.Append("</fx>"), pSVar17 != null)))) {
					pSVar12 = pSVar17.ToString();
					return pSVar12;
				}
			}
		}
	label_059c0bf9: ;
		throw new NullReferenceException();
	}
}
