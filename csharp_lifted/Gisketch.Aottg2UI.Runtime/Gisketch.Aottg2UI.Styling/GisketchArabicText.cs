// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchArabicText
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000023")]
public static class GisketchArabicText
{
	[Token(Token = "0x2000024")]
	private struct Unit
	{
		[Token(Token = "0x40000A7")]
		[FieldOffset(Offset = "0x0")]
		public int Start;

		[Token(Token = "0x40000A8")]
		[FieldOffset(Offset = "0x4")]
		public int Length;

		[Token(Token = "0x40000A9")]
		[FieldOffset(Offset = "0x8")]
		public char Character;

		[Token(Token = "0x40000AA")]
		[FieldOffset(Offset = "0xA")]
		public byte Type;

		[Token(Token = "0x40000AB")]
		[FieldOffset(Offset = "0xB")]
		public byte Level;

		[Token(Token = "0x40000AC")]
		[FieldOffset(Offset = "0xC")]
		public bool Skip;

		[Token(Token = "0x40000AD")]
		[FieldOffset(Offset = "0x10")]
		public string[] Tags;
	}

	[Token(Token = "0x4000098")]
	private const byte TypeL = 0;

	[Token(Token = "0x4000099")]
	private const byte TypeR = 1;

	[Token(Token = "0x400009A")]
	private const byte TypeEN = 2;

	[Token(Token = "0x400009B")]
	private const byte TypeN = 3;

	[Token(Token = "0x400009C")]
	private const byte TypeNSM = 4;

	[Token(Token = "0x400009D")]
	private const byte JoinNone = 0;

	[Token(Token = "0x400009E")]
	private const byte JoinRight = 1;

	[Token(Token = "0x400009F")]
	private const byte JoinDual = 2;

	[Token(Token = "0x40000A0")]
	private const byte JoinCausing = 3;

	[Token(Token = "0x40000A1")]
	private const byte JoinTransparent = 4;

	[Token(Token = "0x40000A2")]
	private const string FormLetters = "ءآأؤإئابةتثجحخدذرزسشصضطظعغفقكلمنهوىي";

	[Token(Token = "0x40000A3")]
	private const string RightJoiningLetters = "آأؤإاةدذرزوىٱژ";

	[Token(Token = "0x40000A4")]
	private const string Mirrors = "()[]{}<>«»";

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<char, int> FormBases;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] NoTags;

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x522B170", Offset = "0x522A170", VA = "0x522B170")]
	public static string ToVisual(string text, bool rightToLeftBase = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$ToVisual): 2 lines keep C-only constructs
		uint uVar1;
		int count;
		String[] target;
		bool bVar2;
		int iVar3;
		int iVar4;
		List<GisketchArabicText.Unit> __this;
		List<int> __this_00;
		StringBuilder __this_01;
		List<string> emitted;
		String pSVar5;
		MethodInfo pMVar6;
		undefined7 in_register_00000031;
		uint start;
		int index;
		GisketchArabicText.Unit local_48;

		pMVar6 = (MethodInfo)CONCAT71(in_register_00000031, rightToLeftBase);
		if (Il2CppMethodInitialized_0754283b == false) {
			Il2CppMethodInitialized_0754283b = true;
			if ((typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor != 0) goto label_0532b1a5;
	label_0532b269: ;
			bVar2 = GisketchArabicText.NeedsVisualOrder(text);
		}
		else {
			if ((typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor == 0) goto label_0532b269;
	label_0532b1a5: ;
			bVar2 = GisketchArabicText.NeedsVisualOrder(text);
		}
		if (!bVar2) {
			return text;
		}
		if (((typeof(GisketchArabicText))._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar2 = GisketchArabicText.HasPresentationForms(text);
		if (text != null) {
			iVar4 = text._stringLength;
			__this = new List<GisketchArabicText.Unit>(iVar4);
			__this_00 = new List<int>();
			GisketchArabicText.Tokenize(text, __this, __this_00, bVar2);
			iVar3 = text._stringLength;
			__this_01 = new StringBuilder(iVar3 + 0x10);
			emitted = new List<string>();
			if (__this_00 != null) {
				iVar3 = __this_00._size;
				if (__this == null) {
					if (-1 < iVar3) {
						if (iVar3 == 0) goto label_0532b56a;
						iVar4 = __this_00.get_Item(0);
						GisketchArabicText.AppendParagraph(__this_01, text, null, 0, iVar4, rightToLeftBase, emitted);
						if (0 < __this_00._size) goto label_0532b56a;
					}
				}
				else if (-1 < iVar3) {
					index = 0;
					start = 0;
					do {
						if (index < iVar3) {
							iVar3 = __this_00.get_Item(index);
							uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
						}
						else {
							iVar3 = __this._size;
							uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						GisketchArabicText.AppendParagraph(__this_01, text, __this, start, iVar3, rightToLeftBase, emitted);
						if (index < __this_00._size) {
							local_48 = __this.get_Item(iVar3);
							target = local_48.Tags;
							count = local_48.Length;
							iVar4 = local_48.Start;
							GisketchArabicText.TransitionTags(__this_01, emitted, target);
							if (__this_01 == null) goto label_0532b56a;
							__this_01.Append(text, iVar4, count);
						}
						start = iVar3 + 1;
						index = index + 1;
						iVar3 = __this_00._size;
					} while (index <= iVar3);
				}
				GisketchArabicText.TransitionTags(__this_01, emitted, GisketchArabicText.NoTags);
				if (__this_01 != null) {
					return pSVar5;
				}
			}
		}
	label_0532b56a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x522C7C0", Offset = "0x522B7C0", VA = "0x522C7C0")]
	public static string Join(string first, string separator, string second)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$Join): clean
		bool bVar1;
		ushort value;
		uint uVar2;
		Char[] array;
		ulong uVar3;
		String pSVar4;
		ulong uVar6;

		if (Il2CppMethodInitialized_0754283c == false) {
			Il2CppMethodInitialized_0754283c = true;
			if ((typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor == 0) goto label_0532c832;
	label_0532c7f1: ;
			bVar1 = GisketchArabicText.HasPresentationForms(first);
		}
		else {
			if ((typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor != 0) goto label_0532c7f1;
	label_0532c832: ;
			bVar1 = GisketchArabicText.HasPresentationForms(first);
		}
		if (!bVar1) {
			if (((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor == 0) {
				bVar1 = GisketchArabicText.HasPresentationForms(second);
			}
			else {
				bVar1 = GisketchArabicText.HasPresentationForms(second);
			}
			if (!bVar1) {
				pSVar4 = second;
				second = first;
				goto label_0532c9a2;
			}
		}
		if (separator != null) {
			array = separator.ToCharArray();
			Array.Reverse<char>(array);
			if (array != null) {
				if (0 < (int)array.Length) {
					uVar3 = array.Length & 0xffffffff;
					uVar6 = 0;
					do {
						if (uVar3 <= uVar6) {
	label_0532c9b7: ;
							throw new IndexOutOfRangeException();
						}
						value = array[uVar6];
						if ("()[]{}__\xc2\xab\xc2\xbb" == null) goto label_0532c9bc;
						uVar2 = ("()[]{}__\xc2\xab\xc2\xbb").IndexOf(value);
						if (-1 < (int)uVar2) {
							if ("()[]{}__\xc2\xab\xc2\xbb" == null) goto label_0532c9bc;
							value = ("()[]{}__\xc2\xab\xc2\xbb").get_Chars(uVar2 ^ 1);
						}
						uVar2 = (uint)array.Length;
						uVar3 = (ulong)uVar2;
						if (uVar3 <= uVar6) goto label_0532c9b7;
						array[uVar6] = value;
						uVar6 = uVar6 + 1;
					} while ((long)uVar6 < (long)(int)uVar2);
				}
				separator = 0x0.CreateString(array);
				pSVar4 = first;
	label_0532c9a2: ;
				pSVar4 = String.Concat(second, separator, pSVar4);
				return pSVar4;
			}
		}
	label_0532c9bc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x522B570", Offset = "0x522A570", VA = "0x522B570")]
	public static bool NeedsVisualOrder(string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$NeedsVisualOrder): 1 lines keep C-only constructs
		bool bVar1;
		ushort c;
		int index;

		index = 0;
		bVar1 = String.IsNullOrEmpty(text);
		if (!bVar1) {
			if (text == null) {
				throw new NullReferenceException();
			}
			index = 0;
			if (0 < text._stringLength) {
				do {
					c = text.get_Chars(index);
					if ((c != 0x640) && (0xfcff < (ushort)(c - 0x900))) {
						bVar1 = Char.IsLetter(c);
						if (bVar1) {
							index = 1;
							goto label_0532b5f8;
						}
					}
					index = index + 1;
				} while (index < text._stringLength);
				index = 0;
			}
		}
	label_0532b5f8: ;
		return SUB41(index, 0);
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x522B610", Offset = "0x522A610", VA = "0x522B610")]
	public static bool HasPresentationForms(string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$HasPresentationForms): 1 lines keep C-only constructs
		bool bVar1;
		ushort uVar2;
		uint index;

		index = 0;
		bVar1 = String.IsNullOrEmpty(text);
		if (!bVar1) {
			if (text == null) {
				throw new NullReferenceException();
			}
			index = 0;
			if (0 < text._stringLength) {
				do {
					uVar2 = text.get_Chars(index);
				} while ((((ushort)(uVar2 + 0x200) < 0xfd50) && ((ushort)(uVar2 + 0x100) < 0xff70)) &&(index = index + 1, (int)index < text._stringLength));
				index = (uint)(0xfd4f < (ushort)(uVar2 + 0x200) || 0xff6f < (ushort)(uVar2 + 0x100));
			}
		}
		return SUB41(index, 0);
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x522CA70", Offset = "0x522BA70", VA = "0x522CA70")]
	public static bool IsRightToLeft(char character)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsRightToLeft): clean
		if ((ushort)(character - 0x900) < 0xfc90) {
			if ((ushort)(character + 0x4e3) < 0x2e3) {
				return true;
			}
		}
		else {
			if ((9 < (ushort)(character - 0x660)) && (9 < (ushort)(character - 0x6f0))) {
				if (((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor == 0) {
				}
				if ((((0x17 < (ushort)(character - 0x6d6)) && (character != 0x670)) &&(0x14 < (ushort)(character - 0x64b))) &&((character != 0x60c && (0x36 < (ushort)(character - 0x591))))) {
					return true;
				}
			}
		}
		return (ushort)(character + 400) < 0x90;
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x522CBF0", Offset = "0x522BBF0", VA = "0x522CBF0")]
	public static bool IsStrong(char character)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsStrong): clean
		bool bVar1;

		bVar1 = GisketchArabicText.IsRightToLeft(character);
		if (bVar1) {
			return true;
		}
		if ((g_data_07556750._2).cctor_finished_or_no_cctor == 0) {
			bVar1 = Char.IsLetter(character);
			return bVar1;
		}
		bVar1 = Char.IsLetter(character);
		return bVar1;
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x522CC70", Offset = "0x522BC70", VA = "0x522CC70")]
	public static bool EndsRightToLeft(string text, int start, int end)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$EndsRightToLeft): 1 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		ushort character;
		uint uVar3;
		uint index;
		MethodInfo method_00;

		index = end - 1;
		if (start <= (int)index) {
			if (text == null) {
				throw new NullReferenceException();
			}
			do {
				character = text.get_Chars(index);
				if (character == 0x3e) {
					method_00 = (MethodInfo)&g_data_0000003c;
					uVar3 = text.LastIndexOf(0x3c, index, index + (1 - start));
					if ((int)uVar3 < start) goto label_0532cd2d;
				}
				else {
	label_0532cd2d: ;
					if ((typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor == 0) {
						if (Il2CppMethodInitialized_0754283f != false) goto label_0532cd42;
	label_0532cd9e: ;
						Il2CppMethodInitialized_0754283f = true;
						uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
					}
					else {
						if (Il2CppMethodInitialized_0754283f == false) goto label_0532cd9e;
	label_0532cd42: ;
						uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					bVar2 = GisketchArabicText.IsRightToLeft(character);
					if (bVar2) {
	label_0532cdc0: ;
						bVar2 = GisketchArabicText.IsRightToLeft(character);
						return bVar2;
					}
					bVar2 = Char.IsLetter(character);
					uVar3 = index;
					if (bVar2) goto label_0532cdc0;
				}
				index = uVar3 - 1;
			} while (start <= (int)index);
		}
		return false;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x522B6F0", Offset = "0x522A6F0", VA = "0x522B6F0")]
	private static void Tokenize(string text, List<Unit> units, List<int> breaks, bool alreadyVisual)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$Tokenize): 54 lines keep C-only constructs
		int piVar1;
		GisketchArabicText.Unit pGVar2;
		Int32[] pSVar3;
		GisketchArabicText.Unit[] pGVar4;
		String[] pSVar5;
		GisketchArabicText.Unit item;
		GisketchArabicText.Unit item_00;
		GisketchArabicText.Unit item_01;
		GisketchArabicText.Unit item_02;
		List<GisketchArabicText.Unit> pSVar7;
		byte uVar8;
		bool bVar9;
		ushort uVar10;
		ushort c;
		uint uVar11;
		int iVar12;
		int iVar13;
		List<string> pSVar14;
		GisketchArabicText.c__DisplayClass23_0 __this;
		String pSVar15;
		Predicate<T> match;
		undefined7 in_register_00000009;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo pMVar16;
		MethodInfo extraout_RDX_04;
		MethodInfo extraout_RDX_05;
		uint uVar17;
		GisketchArabicText.c__DisplayClass23_0 targetAddress;
		uint index;
		ulong uStack_80;
		String[][] local_78 = new String[][2];
		String local_68;
		String[] local_60;
		String local_58;
		List<GisketchArabicText.Unit> local_50;
		uint local_44;
		List<int> local_40;
		List<string> local_38;

		local_44 = (undefined4)CONCAT71(in_register_00000009, alreadyVisual);
		local_40 = breaks;
		local_78[0] = null;
		pSVar14 = new List<string>();
		local_50 = units;
		local_38 = pSVar14;
		if (text == null) {
	label_0532c05f: ;
			throw new NullReferenceException();
		}
		if (text._stringLength < 1) {
			return;
		}
		local_60 = GisketchArabicText.NoTags;
		index = 0;
		uVar17 = 0;
		local_68 = text;
	label_0532b8bd: ;
		do {
			uVar10 = text.get_Chars(index);
			if (uVar10 == 0x7b) {
				pMVar16 = extraout_RDX;
				if ((typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor == 0) {
					pMVar16 = extraout_RDX_01;
				}
				iVar13 = GisketchArabicText.PlaceholderEnd(local_68, index);
				if (iVar13 < 1) goto label_0532b9f0;
				iVar12 = uVar17 + iVar13 + 1;
				local_78[0] = local_60;
				text = local_68;
				pMVar16 = MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_Add;
				if (local_50 == null) goto label_0532c05f;
				piVar1 = &local_50._version;
				*piVar1 = *piVar1 + 1;
				pGVar4 = local_50._items;
				if (pGVar4 == null) goto label_0532c05f;
				uVar17 = local_50._size;
				if (uVar17 < (uint)pGVar4.Length) {
					local_50._size = uVar17 + 1;
					pGVar4[(int)uVar17].Tags = local_78[0];
					pGVar2 = pGVar4.m_Items + (int)uVar17;
					pGVar2.Start = index;
					pGVar2.Length = iVar12;
					pGVar2.Character = 0;
					pGVar2.Type = 0;
					pGVar2.Level = 0;
					pGVar2.Skip = false;
					*(undefined3)&pGVar2.field_0xd = 0;
				}
				else {
					item_00.Character = 0;
					item_00.Type = 0;
					item_00.Level = 0;
					item_00.Skip = false;
					item_00._13_3_ = 0;
					item_00.Start = index;
					item_00.Length = iVar12;
					item_00.Tags = local_78[0];
					local_50.AddWithResize(item_00);
				}
				index = iVar13 + 1;
			}
			else {
				if (uVar10 == 0x3c) {
					pMVar16 = extraout_RDX;
					if ((typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor == 0) {
						pMVar16 = extraout_RDX_00;
					}
					uVar11 = GisketchArabicText.TagEnd(local_68, index);
					if (0 < (int)uVar11) {
						__this = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchArabicText.c__DisplayClass23_0));
						__this = new Object();
						pMVar16 = (MethodInfo)(ulong)index;
						pSVar15 = local_68.Substring(index, uVar17 + uVar11 + 1);
						local_58 = pSVar15;
						pSVar15 = GisketchArabicText.TagName(pSVar15);
						pSVar7 = local_50;
						if (__this == null) goto label_0532c05f;
						targetAddress = &__this.fields;
						__this.name = pSVar15;
						bVar9 = (__this.name == "br");
						pSVar15 = local_58;
						text = local_68;
						pMVar16 = MethodInfo_System_Collections_Generic_List_int_Add;
						if (bVar9) {
							if ((pSVar7 == null) ||(local_40 == null)) goto label_0532c05f;
							iVar13 = pSVar7._size;
							piVar1 = &local_40._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = local_40._items;
							if (pSVar3 == null) goto label_0532c05f;
							uVar17 = local_40._size;
							if (uVar17 < (uint)pSVar3.Length) {
								local_40._size = uVar17 + 1;
								pSVar3[(int)uVar17] = iVar13;
							}
							else {
								local_40.AddWithResize(iVar13);
							}
							local_78[0] = null;
							if (pSVar15 == null) goto label_0532c05f;
							iVar13 = pSVar15._stringLength;
							local_78[0] = local_60;
	label_0532be6a: ;
							pMVar16 = MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_Add;
							piVar1 = &pSVar7._version;
							*piVar1 = *piVar1 + 1;
							pGVar4 = pSVar7._items;
							if (pGVar4 == null) goto label_0532c05f;
							uVar17 = pSVar7._size;
							if (uVar17 < (uint)pGVar4.Length) {
								pSVar7._size = uVar17 + 1;
								pGVar4[(int)uVar17].Tags = local_78[0];
								pGVar2 = pGVar4.m_Items + (int)uVar17;
								pGVar2.Start = index;
								pGVar2.Length = iVar13;
								pGVar2.Character = 0;
								pGVar2.Type = 3;
								pGVar2.Level = 0;
								pGVar2.Skip = false;
								*(undefined3)&pGVar2.field_0xd = 0;
							}
							else {
								item_02.Character = 0;
								item_02.Type = 3;
								item_02.Level = 0;
								item_02.Skip = false;
								item_02._13_3_ = 0;
								item_02.Start = index;
								item_02.Length = iVar13;
								item_02.Tags = local_78[0];
								pSVar7.AddWithResize(item_02);
							}
						}
						else {
							bVar9 = (targetAddress.name == "sprite");
							if ((bVar9) ||(bVar9 = (targetAddress.name == "space"))) {
								local_78[0] = null;
								if (local_58 != null) {
									iVar13 = local_58._stringLength;
									local_78[0] = local_60;
									text = local_68;
									if (pSVar7 != null) goto label_0532be6a;
								}
								goto label_0532c05f;
							}
							if (local_58 == null) goto label_0532c05f;
							uVar10 = local_58.get_Chars(1);
							pSVar14 = local_38;
							text = local_68;
							pMVar16 = MethodInfo_System_Collections_Generic_List_string_Add;
							if (uVar10 == 0x2f) {
								match = new Predicate<string>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText_c__DisplayClass23_0_Tokenize_b__0);
								if (pSVar14 == null) goto label_0532c05f;
								iVar13 = pSVar14.FindLastIndex(match);
								text = local_68;
								if (-1 < iVar13) {
									pSVar14.RemoveAt(iVar13);
								}
							}
							else {
								if (local_38 == null) goto label_0532c05f;
								piVar1 = &local_38._version;
								*piVar1 = *piVar1 + 1;
								pSVar5 = local_38._items;
								if (pSVar5 == null) goto label_0532c05f;
								uVar17 = local_38._size;
								if (uVar17 < (uint)pSVar5.Length) {
									local_38._size = uVar17 + 1;
									pSVar5[(int)uVar17] = local_58;
								}
								else {
									local_38.AddWithResize((object)local_58);
								}
							}
							if (pSVar14._size == 0) {
								local_60 = GisketchArabicText.NoTags;
							}
							else {
								local_60 = (String[])pSVar14.ToArray();
							}
						}
						index = uVar11 + 1;
						uVar17 = ~uVar11;
						if (text._stringLength <= (int)index) {
							return;
						}
						goto label_0532b8bd;
					}
				}
	label_0532b9f0: ;
				bVar9 = Char.IsHighSurrogate(uVar10);
				pSVar7 = local_50;
				pMVar16 = extraout_RDX_02;
				if ((bVar9) && ((int)(index + 1) < local_68._stringLength)) {
					c = local_68.get_Chars(index + 1);
					bVar9 = Char.IsLowSurrogate(c);
					pMVar16 = extraout_RDX_03;
					if (bVar9) {
						local_78[0] = local_60;
						text = local_68;
						pMVar16 = MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_Add;
						if (pSVar7 != null) {
							piVar1 = &pSVar7._version;
							*piVar1 = *piVar1 + 1;
							pGVar4 = pSVar7._items;
							if (pGVar4 != null) {
								uVar17 = pSVar7._size;
								if (uVar17 < (uint)pGVar4.Length) {
									pSVar7._size = uVar17 + 1;
									pGVar4[(int)uVar17].Tags = local_78[0];
									pGVar2 = pGVar4.m_Items + (int)uVar17;
									pGVar2.Start = index;
									pGVar2.Length = 2;
									pGVar2.Character = 0;
									pGVar2.Type = 3;
									pGVar2.Level = 0;
									pGVar2.Skip = false;
									*(undefined3)&pGVar2.field_0xd = 0;
									index = index + 2;
								}
								else {
									item_01.Character = 0;
									item_01.Type = 3;
									item_01.Level = 0;
									item_01.Skip = false;
									item_01._13_3_ = 0;
									item_01.Start = index;
									item_01.Length = 2;
									item_01.Tags = local_78[0];
									pSVar7.AddWithResize(item_01);
									index = index + 2;
								}
								goto label_0532b8ad;
							}
						}
						goto label_0532c05f;
					}
				}
				if (uVar10 == 10) {
					if ((pSVar7 == null) ||(local_40 == null)) goto label_0532c05f;
					iVar13 = pSVar7._size;
					piVar1 = &local_40._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = local_40._items;
					if (pSVar3 == null) goto label_0532c05f;
					uVar17 = local_40._size;
					pMVar16 = (MethodInfo)(long)(int)uVar17;
					if (uVar17 < (uint)pSVar3.Length) {
						local_40._size = uVar17 + 1;
						pSVar3[(long)pMVar16] = iVar13;
					}
					else {
						local_40.AddWithResize(iVar13);
						pMVar16 = extraout_RDX_04;
					}
				}
				local_78[0] = null;
				if ((typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor == 0) {
					pMVar16 = extraout_RDX_05;
				}
				uVar8 = GisketchArabicText.CharacterType(uVar10, local_44._0_1_);
				uStack_80 = (ulong)CONCAT12(uVar8, uVar10);
				local_78[0] = local_60;
				text = local_68;
				pMVar16 = MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_Add;
				if (pSVar7 == null) goto label_0532c05f;
				piVar1 = &pSVar7._version;
				*piVar1 = *piVar1 + 1;
				pGVar4 = pSVar7._items;
				if (pGVar4 == null) goto label_0532c05f;
				uVar17 = pSVar7._size;
				if (uVar17 < (uint)pGVar4.Length) {
					pSVar7._size = uVar17 + 1;
					pGVar4[(int)uVar17].Tags = local_78[0];
					pGVar2 = pGVar4.m_Items + (int)uVar17;
					pGVar2.Start = index;
					pGVar2.Length = 1;
					pGVar2.Character = (undefined2)uStack_80;
					pGVar2.Type = uStack_80._2_1_;
					pGVar2.Level = uStack_80._3_1_;
					pGVar2.Skip = (bool)uStack_80._4_1_;
					*(undefined3)&pGVar2.field_0xd = uStack_80._5_3_;
				}
				else {
					item.Character = uVar10;
					item.Type = uVar8;
					item.Start = index;
					item.Length = 1;
					item.Level = 0;
					item.Skip = false;
					item._13_3_ = 0;
					item.Tags = local_78[0];
					pSVar7.AddWithResize(item);
				}
				index = index + 1;
			}
	label_0532b8ad: ;
			uVar17 = -index;
			if (text._stringLength <= (int)index) {
				return;
			}
		} while(true);
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x522C070", Offset = "0x522B070", VA = "0x522C070")]
	private static void AppendParagraph(StringBuilder builder, string text, List<Unit> units, int start, int end, bool rightToLeftBase, List<string> emitted)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$AppendParagraph): 6 lines keep C-only constructs
		int piVar1;
		int count;
		byte uVar2;
		String[] target;
		StringBuilder __this;
		ushort value;
		uint uVar3;
		Int32[] order;
		ulong uVar4;
		uint in_register_0000000c;
		MethodInfo pMVar5;
		int iVar6;
		long lVar7;
		uint in_register_00000084;
		MethodInfo method_00;
		ulong uVar8;
		int iVar9;
		bool rightToLeft;
		bool bVar10;
		int iVar11;
		int iVar12;
		int iVar13;
		int iVar14;
		GisketchArabicText.Unit local_58;
		StringBuilder local_40;
		String local_38;

		method_00 = (MethodInfo)CONCAT44(in_register_00000084, end);
		pMVar5 = (MethodInfo)CONCAT44(in_register_0000000c, start);
		local_40 = builder;
		local_38 = text;
		if (end - start == 0 || end < start) {
			return;
		}
		GisketchArabicText.Shape(units, start, end);
		if (units != null) {
			if (rightToLeftBase) {
				iVar9 = start;
				do {
					local_58 = units.get_Item(iVar9);
					rightToLeft = local_58.Type == 1;
					if (rightToLeft) break;
					bVar10 = end + -1 != iVar9;
					iVar9 = iVar9 + 1;
				} while (bVar10);
			}
			else {
				iVar9 = start;
				do {
					local_58 = units.get_Item(iVar9);
					rightToLeft = local_58.Type == 1;
					if ((rightToLeft) || (local_58.Type == 0)) break;
					iVar9 = iVar9 + 1;
				} while (iVar9 < end);
			}
			pMVar5 = (MethodInfo)(ulong)rightToLeft;
			GisketchArabicText.ResolveWeakTypes(units, start, end, rightToLeft);
			GisketchArabicText.ResolveNeutrals(units, start, end, rightToLeft);
			GisketchArabicText.AssignLevels(units, start, end, rightToLeft);
			order = (Int32[])new int[end - start];
			if (order != null) {
				uVar4 = order.Length;
				uVar3 = (uint)uVar4;
				if (0 < (int)uVar3) {
					if (uVar3 < 8) {
						pMVar5 = null;
					}
					else {
						pMVar5 = (MethodInfo)(ulong)(uVar3 & 0xfffffff8);
						iVar6 = start + 4;
						iVar11 = 0;
						iVar12 = 1;
						iVar13 = 2;
						iVar14 = 3;
						lVar7 = 0;
						do {
							piVar1 = order.m_Items + lVar7;
							*piVar1 = iVar11 + start;
							piVar1[1] = iVar12 + start;
							piVar1[2] = iVar13 + start;
							piVar1[3] = iVar14 + start;
							piVar1 = order.m_Items + lVar7 + 4;
							*piVar1 = iVar6 + iVar11;
							piVar1[1] = iVar6 + iVar12;
							piVar1[2] = iVar6 + iVar13;
							piVar1[3] = iVar6 + iVar14;
							lVar7 = lVar7 + 8;
							iVar11 = iVar11 + 8;
							iVar12 = iVar12 + 8;
							iVar13 = iVar13 + 8;
							iVar14 = iVar14 + 8;
						} while (pMVar5 != (MethodInfo)lVar7);
						if ((uVar4 & 7) == 0) goto label_0532c2bf;
					}
					do {
						order[(long)pMVar5] = start + (int)pMVar5;
						pMVar5 = (MethodInfo)((long)&pMVar5.methodPointer + 1);
					} while ((MethodInfo)(uVar4 & 0xffffffff) != pMVar5);
				}
	label_0532c2bf: ;
				GisketchArabicText.ReverseRuns(units, order, 2);
				GisketchArabicText.ReverseRuns(units, order, 1);
				if (0 < (int)order.Length) {
					uVar4 = order.Length & 0xffffffff;
					uVar8 = 0;
					do {
						if (uVar4 <= uVar8) {
							throw new IndexOutOfRangeException();
						}
						pMVar5 = MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item;
						local_58 = units.get_Item(order[uVar8]);
						target = local_58.Tags;
						uVar2 = local_58.Level;
						value = local_58.Character;
						count = local_58.Length;
						iVar9 = local_58.Start;
						if ((local_58.Skip & 1U) == 0) {
							__this = local_40;
							GisketchArabicText.TransitionTags(local_40, emitted, target);
							if (count == 1) {
								if ((uVar2 & 1) != 0) {
									if ("()[]{}__\xc2\xab\xc2\xbb" == null) goto label_0532c4f2;
									uVar3 = ("()[]{}__\xc2\xab\xc2\xbb").IndexOf(value);
									if (-1 < (int)uVar3) {
										if ("()[]{}__\xc2\xab\xc2\xbb" == null) goto label_0532c4f2;
										value = ("()[]{}__\xc2\xab\xc2\xbb").get_Chars(uVar3 ^ 1);
									}
								}
								if (local_40 == null) goto label_0532c4f2;
								local_40.Append(value);
							}
							else {
								if (__this == null) goto label_0532c4f2;
								__this.Append(local_38, iVar9, count);
							}
						}
						uVar8 = uVar8 + 1;
						uVar3 = (uint)order.Length;
						uVar4 = (ulong)uVar3;
					} while ((long)uVar8 < (long)(int)uVar3);
				}
				return;
			}
		}
	label_0532c4f2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x522D260", Offset = "0x522C260", VA = "0x522D260")]
	private static void Shape(List<Unit> units, int start, int end)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$Shape): 67 lines keep C-only constructs
		short sVar1;
		byte bVar2;
		sbyte cVar3;
		Dictionary<char, int> pSVar4;
		GisketchArabicText.Unit unit;
		GisketchArabicText.Unit value;
		GisketchArabicText.Unit value_00;
		GisketchArabicText.Unit value_01;
		GisketchArabicText.Unit unit_00;
		ushort uVar5;
		byte uVar6;
		ushort uVar7;
		uint uVar8;
		int iVar9;
		object pIVar10;
		uint uVar11;
		short sVar12;
		ulong uVar13;
		int index;
		long lVar15;
		ushort uVar16;
		long lVar17;
		ulong uVar18;
		uint uVar19;
		uint uVar20;
		long lVar21;
		bool bVar22;
		GisketchArabicText.Unit[] aGStackY_ce8 = new GisketchArabicText.Unit[128];
		ulong uVar23;
		ulong uVar24;
		String[] pSVar25;
		GisketchArabicText.Unit local_c8;
		ulong local_b0;
		GisketchArabicText.Unit local_a8;
		undefined7 local_88;
		ulong local_78;
		int local_70;
		uint local_6c;
		GisketchArabicText.Unit local_68;
		long local_50;
		GisketchArabicText.Unit local_48;

		local_a8.Start = 0;
		local_a8.Length = 0;
		local_a8.Character = 0;
		local_a8.Type = 0;
		local_a8.Level = 0;
		local_a8.Skip = false;
		local_a8._13_3_ = 0;
		local_a8.Tags = null;
		local_68.Start = 0;
		local_68.Length = 0;
		local_68.Character = 0;
		local_68.Type = 0;
		local_68.Level = 0;
		pIVar10 = new byte[end - start];
		if (end <= start) {
			return;
		}
		if (units != null) {
			local_b0 = (ulong)(uint)start;
			if (pIVar10 != null) {
				lVar15 = (long)start;
				local_78 = CONCAT44(local_78._4_4_, end);
				local_50 = (long)end;
				lVar17 = local_50 - lVar15;
				lVar21 = 0;
				do {
					uVar19 = (uint)lVar21;
					local_c8 = units.get_Item(uVar19 + start);
					uVar6 = 4;
					if ((local_c8.Skip & 1) == 0) {
						local_48 = units.get_Item(uVar19 + start);
						local_c8.Tags._0_4_ = SUB84(local_48.Tags, 0);
						local_c8.Tags._4_4_ = (undefined4)((ulong)local_48.Tags >> 0x20);
						local_c8.Start = local_48.Start;
						local_c8.Length = local_48.Length;
						local_c8.Character = local_48.Character;
						local_c8._10_2_ = local_48._10_2_;
						local_c8._12_4_ = local_48._12_4_;
						unit.Tags._4_4_ = local_c8.Tags._4_4_;
						unit.Tags._0_4_ = local_c8.Tags._0_4_;
						unit.Type = local_c8.Type;
						unit.Level = local_c8.Level;
						unit.Character = local_c8.Character;
						unit.Skip = local_c8.Skip;
						unit._13_3_ = local_c8._13_3_;
						unit.Start = local_c8.Start;
						unit.Length = local_c8.Length;
						uVar6 = GisketchArabicText.Joining(unit);
					}
					if (*(uint)&pIVar10[1].monitor <= uVar19) goto label_0532d87a;
					*(byte)((long)&pIVar10[2].klass + (long)(int)uVar19) = uVar6;
					lVar21 = lVar21 + 1;
				} while (lVar17 != lVar21);
				uVar13 = local_b0;
				if ((int)local_78 <= (int)local_b0) {
					return;
				}
				while(true) {
					index = (int)lVar15;
					uVar19 = index - (int)uVar13;
					if (*(uint)&pIVar10[1].monitor <= uVar19) break;
					local_68.Tags = (String[])(long)(int)uVar19;
					bVar2 = *(byte)((long)&pIVar10[2].klass + (long)local_68.Tags);
					uVar18 = (ulong)bVar2;
					local_a8 = units.get_Item(index);
					local_78 = uVar18;
					if ((byte)(bVar2 - 1) < 2) {
						uVar11 = uVar19;
						do {
							uVar11 = uVar11 - 1;
							uVar8 = 0xffffffff;
							if (((int)uVar11 < 0) || ((int)*(uint)&pIVar10[1].monitor <= (int)uVar11)) break;
							if (*(uint)&pIVar10[1].monitor <= uVar11) goto label_0532d87a;
							uVar8 = uVar11;
						} while (*(sbyte)((long)&pIVar10[2].klass + (ulong)uVar11) == '\x04');
						uVar11 = uVar19;
						do {
							uVar11 = uVar11 + 1;
							uVar20 = 0xffffffff;
							if (((int)uVar11 < 0) || ((int)*(uint)&pIVar10[1].monitor <= (int)uVar11)) break;
							if (*(uint)&pIVar10[1].monitor <= uVar11) goto label_0532d87a;
							uVar20 = uVar11;
						} while (*(sbyte)((long)&pIVar10[2].klass + (ulong)uVar11) == '\x04');
						if ((int)uVar8 < 0) {
							uVar16 = 0;
							local_6c = (uint)local_a8.Character;
							uVar7 = 0;
							if (local_6c == 0x644) goto label_0532d622;
	label_0532d6a0: ;
							uVar7 = 0;
							if (((char)local_78 == '\x02') && (-1 < (int)uVar20)) {
								if (*(uint)&pIVar10[1].monitor <= uVar20) break;
								cVar3 = *(sbyte)((long)&pIVar10[2].klass + (ulong)uVar20);
								uVar7 = (ushort)((byte)(cVar3 - 1U) < 3);
							}
							sVar1 = (uVar7 & uVar16) * 2 + 1;
							sVar12 = (ushort)(uVar7 != 0) * 2;
							if (uVar16 != 0) {
								sVar12 = sVar1;
							}
							if ((uVar7 & uVar16) != 0) {
								sVar12 = sVar1;
							}
							pSVar4 = GisketchArabicText.FormBases;
							if (pSVar4 == null) goto label_0532d905;
							iVar9 = pSVar4.get_Item((uint16_t)local_6c);
							local_a8.Character = (short)iVar9 + sVar12;
							uVar23 = local_a8._0_8_;
							uVar24 = local_a8._8_8_;
							pSVar25 = local_a8.Tags;
						}
						else {
							if (*(uint)&pIVar10[1].monitor <= uVar8) break;
							bVar2 = *(byte)((long)&pIVar10[2].klass + (ulong)uVar8);
							bVar22 = (bVar2 & 0xfe) == 2;
							uVar16 = (ushort)bVar22;
							local_6c = (uint)local_a8.Character;
							uVar7 = (ushort)bVar22;
							if (local_6c != 0x644) goto label_0532d6a0;
	label_0532d622: ;
							uVar16 = uVar7;
							if ((int)uVar20 < 0) goto label_0532d6a0;
							local_70 = uVar20 + (int)local_b0;
							local_c8 = units.get_Item(local_70);
							uVar5 = local_c8.Character;
							uVar11 = (uint)local_c8.Character;
							if ((typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor == 0) {
								if ((ushort)(uVar5 - 0x622) < 6) goto label_0532d684;
								goto label_0532d6a0;
							}
							if (5 < (ushort)(local_c8.Character - 0x622)) goto label_0532d6a0;
	label_0532d684: ;
							uVar24 = local_a8._8_8_;
							if ((0x2bU >> (uVar11 - 0x622 & 0x1f) & 1) == 0) goto label_0532d6a0;
							local_a8.Character = uVar16 + *(short)(&g_data_01010924 + (long)(short)(uVar11 - 0x622) * 2);
							uVar23 = local_a8._8_8_;
							local_a8.Type = SUB81(uVar24, 2);
							local_a8.Level = SUB81(uVar24, 3);
							local_a8.Skip = SUB81(uVar24, 4);
							local_a8._13_3_ = SUB83(uVar24, 5);
							value_01.Character = uVar16 + *(short)(&g_data_01010924 + (long)(short)(uVar11 - 0x622) * 2) ;
							value_01.Type = local_a8.Type;
							value_01.Level = local_a8.Level;
							value_01.Skip = local_a8.Skip;
							value_01._13_3_ = local_a8._13_3_;
							value_01.Start = local_a8.Start;
							value_01.Length = local_a8.Length;
							value_01.Tags = local_a8.Tags;
							local_a8._8_8_ = uVar23;
							units.set_Item(index, value_01);
							index = local_70;
							if ((*(uint)&pIVar10[1].monitor <= uVar19) ||(*(byte)((long)&pIVar10[2].klass + (long)local_68.Tags) = 1, *(uint)&pIVar10[1].monitor <= uVar20)) break;
							*(byte)((long)&pIVar10[2].klass + (ulong)uVar20) = 4;
							local_c8 = units.get_Item(local_70);
							local_68._8_4_ = CONCAT22(local_c8._10_2_, local_c8.Character);
							local_68.Start = local_c8.Start;
							local_68.Length = local_c8.Length;
							local_88 = CONCAT43(local_c8.Tags._0_4_, local_c8._13_3_);
							local_c8.Skip = true;
							pSVar25 = (String[])CONCAT44(local_c8.Tags._4_4_, local_c8.Tags._0_4_);
							uVar24._2_1_ = local_c8.Type;
							uVar24._3_1_ = local_c8.Level;
							uVar24._0_2_ = local_c8.Character;
							uVar24._4_1_ = true;
							uVar24._5_3_ = local_c8._13_3_;
							uVar23 = local_c8._0_8_;
						}
						value.Character = (uint16_t)uVar24;
						value.Type = SUB81(uVar24, 2);
						value.Level = SUB81(uVar24, 3);
						value.Skip = SUB81(uVar24, 4);
						value._13_3_ = SUB83(uVar24, 5);
						value.Start = (int32_t)uVar23;
						value.Length = SUB84(uVar23, 4);
						value.Tags = pSVar25;
						units.set_Item(index, value);
						uVar13 = local_b0;
					}
					else if ((local_a8.Length == 1) && (local_a8.Character == 0x621)) {
						pSVar4 = GisketchArabicText.FormBases;
						if (pSVar4 == null) goto label_0532d905;
						iVar9 = pSVar4.get_Item(0x621);
						uVar24 = local_a8._8_8_;
						local_a8.Character = (uint16_t)iVar9;
						uVar23 = local_a8._8_8_;
						local_a8.Type = SUB81(uVar24, 2);
						local_a8.Level = SUB81(uVar24, 3);
						local_a8.Skip = SUB81(uVar24, 4);
						local_a8._13_3_ = SUB83(uVar24, 5);
						value_00.Character = (uint16_t)iVar9;
						value_00.Type = local_a8.Type;
						value_00.Level = local_a8.Level;
						value_00.Skip = local_a8.Skip;
						value_00._13_3_ = local_a8._13_3_;
						value_00.Start = local_a8.Start;
						value_00.Length = local_a8.Length;
						value_00.Tags = local_a8.Tags;
						local_a8._8_8_ = uVar23;
						units.set_Item(index, value_00);
					}
					lVar15 = lVar15 + 1;
					if (lVar15 == local_50) {
						return;
					}
				}
	label_0532d87a: ;
				throw new IndexOutOfRangeException();
			}
			local_c8 = units.get_Item(start);
			if ((local_c8.Skip & 1) == 0) {
				local_48 = units.get_Item((int32_t)local_b0);
				local_c8.Tags._0_4_ = SUB84(local_48.Tags, 0);
				local_c8.Tags._4_4_ = (undefined4)((ulong)local_48.Tags >> 0x20);
				local_c8.Start = local_48.Start;
				local_c8.Length = local_48.Length;
				local_c8.Character = local_48.Character;
				local_c8._10_2_ = local_48._10_2_;
				local_c8._12_4_ = local_48._12_4_;
				unit_00.Tags._4_4_ = local_c8.Tags._4_4_;
				unit_00.Tags._0_4_ = local_c8.Tags._0_4_;
				unit_00.Type = local_c8.Type;
				unit_00.Level = local_c8.Level;
				unit_00.Character = local_c8.Character;
				unit_00.Skip = local_c8.Skip;
				unit_00._13_3_ = local_c8._13_3_;
				unit_00.Start = local_c8.Start;
				unit_00.Length = local_c8.Length;
				GisketchArabicText.Joining(unit_00);
			}
		}
	label_0532d905: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x522E880", Offset = "0x522D880", VA = "0x522E880")]
	private static int Neighbor(byte[] joining, int index, int step)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$Neighbor): clean
		uint uVar1;
		int iVar2;

		if (joining == null) {
			iVar2 = index + step;
			index = 0xffffffff;
			if (-1 < iVar2) {
				throw new NullReferenceException();
			}
		}
		else {
			do {
				index = index + step;
				if (index < 0) {
					return -1;
				}
				uVar1 = (uint)joining.Length;
				if ((int)uVar1 <= index) {
					return -1;
				}
				if (uVar1 <= (uint)index) {
					throw new IndexOutOfRangeException();
				}
			} while (joining[(uint)index] == 4);
		}
		return index;
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x522E760", Offset = "0x522D760", VA = "0x522E760")]
	private static byte Joining(Unit unit)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$Joining): clean
		Dictionary<char, int> __this;
		bool bVar1;
		byte uVar2;
		int iVar3;

		if (unit.Length != 1) {
			return 0;
		}
		if (unit.Character != 0x640) {
			if ((((0x36 < (ushort)(unit.Character - 0x591)) && (0x17 < (ushort)(unit.Character - 0x6d6)) ) && (unit.Character != 0x670)) && (0x14 < (ushort)(unit.Character - 0x64b))) {
				__this = GisketchArabicText.FormBases;
				if (__this == null) {
	label_0532e877: ;
					throw new NullReferenceException();
				}
				bVar1 = __this.ContainsKey(unit.Character);
				if ((bVar1) && (unit.Character != 0x621)) {
					if ("\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa7\xd8\xa9\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd9\x88\xd9\x89\xd9\xb1\xda\x98" == null) goto label_0532e877;
					iVar3 = ("\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa7\xd8\xa9\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd9\x88\xd9\x89\xd9\xb1\xda\x98").IndexOf(unit.Character);
					uVar2 = 2 - (-1 < iVar3);
				}
			}
		}
		return uVar2;
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x522E8D0", Offset = "0x522D8D0", VA = "0x522E8D0")]
	private static bool CanJoinNext(byte joining)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$CanJoinNext): clean
		return (joining & 0xfe) == 2;
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x522E930", Offset = "0x522D930", VA = "0x522E930")]
	private static bool CanJoinPrevious(byte joining)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$CanJoinPrevious): clean
		return (byte)(joining - 1) < 3;
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x522E8E0", Offset = "0x522D8E0", VA = "0x522E8E0")]
	private static bool LamAlef(char alef, out char isolated)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$LamAlef): 2 lines keep C-only constructs
		bool bVar1;
		ushort uVar2;
		undefined6 in_register_0000003a;

		uVar2 = 0xfef5;
		switch((int)CONCAT62(in_register_0000003a, alef)) {
		case 0x622:
			goto switchD_0532e8ff_caseD_622;
		case 0x623:
			*isolated = 0xfef7;
			return true;
		default: ;
			uVar2 = 0;
	switchD_0532e8ff_caseD_622: ;
			*isolated = uVar2;
			return bVar1;
		case 0x625:
			*isolated = 0xfef9;
			return true;
		case 0x627:
			*isolated = 0xfefb;
			return true;
		}
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x522D910", Offset = "0x522C910", VA = "0x522D910")]
	private static bool ParagraphIsRightToLeft(List<Unit> units, int start, int end, bool rightToLeftBase)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$ParagraphIsRightToLeft): clean
		bool bVar1;
		GisketchArabicText.Unit GStack_40;

		if (start < end) {
			if (units == null) {
				throw new NullReferenceException();
			}
			if (rightToLeftBase) {
				do {
					GStack_40 = units.get_Item(start);
					if (GStack_40.Type == 1) {
						return true;
					}
					bVar1 = end + -1 != start;
					start = start + 1;
				} while (bVar1);
			}
			else {
				do {
					GStack_40 = units.get_Item(start);
					if (GStack_40.Type == 1) {
						return true;
					}
					if (GStack_40.Type == 0) {
						return false;
					}
					start = start + 1;
				} while (start < end);
			}
		}
		return false;
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x522D9F0", Offset = "0x522C9F0", VA = "0x522D9F0")]
	private static void ResolveWeakTypes(List<Unit> units, int start, int end, bool rightToLeft)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$ResolveWeakTypes): 44 lines keep C-only constructs
		GisketchArabicText.Unit value;
		GisketchArabicText.Unit value_00;
		GisketchArabicText.Unit value_01;
		int iVar1;
		ushort uVar2;
		ushort uVar3;
		undefined5 uVar4;
		uint in_register_00000014;
		int iVar5;
		int index;
		ulong uVar6;
		byte bVar7;
		uint uVar8;
		int index_00;
		uint in_register_00000034;
		byte bVar9;
		ulong uVar10;
		GisketchArabicText.Unit local_a8;
		ulong local_90;
		uint local_84;
		ulong local_80;
		int local_74;
		undefined5 local_70;
		GisketchArabicText.Unit local_60;
		undefined5 uStack_48;
		byte local_40;
		bool bStack_3f;
		undefined3 uStack_3e;
		undefined3 uStack_3b;
		undefined5 uStack_38;

		local_90 = CONCAT44(in_register_00000034, start);
		local_80 = CONCAT44(in_register_00000014, end);
		local_60.Start = 0;
		local_60.Length = 0;
		local_60.Character = 0;
		local_70._0_1_ = 0;
		local_70._1_1_ = false;
		local_70._2_3_ = 0;
		uVar8 = (uint)local_80;
		if ((int)local_90 < (int)uVar8) {
			if (units == null) goto label_0532e17b;
			uVar6 = local_90 & 0xffffffff;
			bVar7 = rightToLeft;
			do {
				iVar5 = (int32_t)uVar6;
				local_a8 = units.get_Item(iVar5);
				local_60.Character = local_a8.Character;
				local_60.Start = local_a8.Start;
				local_60.Length = local_a8.Length;
				bVar9 = rightToLeft;
				if (local_a8.Type != 4) {
					bVar9 = local_a8.Type;
				}
				local_70._0_1_ = local_a8.Level;
				local_70._1_1_ = local_a8.Skip;
				local_70._2_3_ = local_a8._13_3_;
				rightToLeft = (bool)((bVar7 != 0) * '\x02');
				if (bVar9 != 2) {
					rightToLeft = (bool)bVar9;
				}
				if (rightToLeft < 2) {
					bVar7 = rightToLeft;
				}
				value.Tags._3_5_ = local_a8.Tags._3_5_;
				value.Tags._0_3_ = local_a8.Tags._0_3_;
				value.Type = rightToLeft;
				value.Character = local_a8.Character;
				value.Level = local_a8.Level;
				value.Skip = local_a8.Skip;
				value._13_3_ = local_a8._13_3_;
				value.Start = local_a8.Start;
				value.Length = local_a8.Length;
				local_a8.Type = rightToLeft;
				units.set_Item(iVar5, value);
				uVar6 = (ulong)(iVar5 + 1U);
			} while (uVar8 != iVar5 + 1U);
		}
		if ((int)local_90 + 1 < (int)(uVar8 - 1)) {
			if (units == null) goto label_0532e17b;
			local_84 = (int)local_80 - 2;
			uVar6 = local_90 & 0xffffffff;
			do {
				iVar5 = (int32_t)uVar6;
				uVar8 = iVar5 + 1;
				uVar6 = (ulong)uVar8;
				local_a8 = units.get_Item(uVar8);
				uVar2 = local_a8.Character;
				local_74 = local_a8.Start;
				local_40 = local_a8.Level;
				bStack_3f = local_a8.Skip;
				uStack_3e = local_a8._13_3_;
				uStack_3b = local_a8.Tags._0_3_;
				uStack_38 = local_a8.Tags._3_5_;
				if ((local_a8.Type == 3) && (local_a8.Length == 1)) {
					if ((typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor == 0) {
						if (uVar2 < 0x3b) goto label_0532dcb3;
	label_0532dcd0: ;
						if (1 < uVar2 - 0x66b) goto label_0532dc20;
					}
					else {
						if (0x3a < local_a8.Character) goto label_0532dcd0;
	label_0532dcb3: ;
						if ((0x400d00000000000U >> ((ulong)uVar2 & 0x3f) & 1) == 0) goto label_0532dcd0;
					}
					local_a8 = units.get_Item(iVar5);
					uVar3 = local_a8.Character;
					iVar1 = local_a8.Length;
					if (iVar1 == 1) {
						if (((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor == 0) {
						}
						if ((((ushort)(uVar3 - 0x30) < 10) || ((ushort)(uVar3 - 0x660) < 10)) ||((ushort)(uVar3 - 0x6f0) < 10)) {
							local_a8 = units.get_Item(iVar5 + 2);
							uVar3 = local_a8.Character;
							iVar1 = local_a8.Length;
							if (iVar1 == 1) {
								if (((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor == 0) {
								}
								if ((((ushort)(uVar3 - 0x30) < 10) || ((ushort)(uVar3 - 0x660) < 10)) ||((ushort)(uVar3 - 0x6f0) < 10)) {
									local_a8 = units.get_Item(iVar5);
									local_a8.Length = 1;
									local_a8.Start = local_74;
									local_a8.Tags._3_5_ = uStack_38;
									local_a8.Level = local_40;
									local_a8.Skip = bStack_3f;
									local_a8._13_3_ = uStack_3e;
									local_a8.Tags._0_3_ = uStack_3b;
									value_00.Tags._3_5_ = uStack_38;
									value_00.Tags._0_3_ = uStack_3b;
									value_00.Type = local_a8.Type;
									value_00.Character = uVar2;
									value_00.Level = local_40;
									value_00.Skip = bStack_3f;
									value_00._13_3_ = uStack_3e;
									value_00.Start = local_74;
									value_00.Length = 1;
									local_a8.Character = uVar2;
									units.set_Item(uVar8, value_00);
								}
							}
						}
					}
				}
	label_0532dc20: ;
			} while (local_84 != uVar8);
		}
		if ((int)local_90 < (int)local_80) {
			if (units == null) {
	label_0532e17b: ;
				throw new NullReferenceException();
			}
			uVar6 = local_90;
			uVar10 = local_80;
			do {
				index_00 = (int)uVar6;
				local_a8 = units.get_Item(index_00);
				uVar2 = local_a8.Character;
				local_84 = local_a8.Start;
				local_60.Tags._0_1_ = local_a8.Level;
				local_60.Tags._1_1_ = local_a8.Skip;
				local_60.Tags._2_3_ = local_a8._13_3_;
				local_60.Tags._5_3_ = local_a8.Tags._0_3_;
				uStack_48 = local_a8.Tags._3_5_;
				if ((local_a8.Type == 3) && (local_a8.Length == 1)) {
					uVar4 = local_a8._11_5_;
					if ((typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor == 0) {
						uVar4 = local_60.Tags._0_5_;
					}
					local_60.Tags._0_5_ = uVar4;
					if (((uVar2 - 0x23 < 3) || (uVar2 == 0x66a)) || (uVar2 == 0xb0)) {
						if ((int)local_90 < index_00) {
							local_a8 = units.get_Item(index_00 + -1);
							uVar3 = local_a8.Character;
							iVar5 = local_a8.Length;
							uVar10 = local_80;
							if (Il2CppMethodInitialized_0754284e == false) {
								Il2CppMethodInitialized_0754284e = true;
								uVar10 = local_80;
							}
							local_80 = uVar10;
							if (iVar5 != 1) goto label_0532dff0;
							if (((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor == 0) {
							}
							if (((9 < (ushort)(uVar3 - 0x30)) && (9 < (ushort)(uVar3 - 0x660))) &&(9 < (ushort)(uVar3 - 0x6f0))) goto label_0532dff0;
							local_a8 = units.get_Item(index_00 + -1);
							if (local_a8.Type == 3) goto label_0532de80;
	label_0532e10d: ;
							local_a8.Length = 1;
							local_a8.Start = local_84;
							local_a8.Tags._3_5_ = uStack_48;
							local_a8.Level = (uint8_t)local_60.Tags;
							local_a8.Skip = local_60.Tags._1_1_;
							local_a8._13_3_ = local_60.Tags._2_3_;
							local_a8.Tags._0_3_ = local_60.Tags._5_3_;
							value_01.Tags._3_5_ = uStack_48;
							value_01.Tags._0_3_ = local_60.Tags._5_3_;
							value_01.Type = local_a8.Type;
							value_01.Character = uVar2;
							value_01.Level = (uint8_t)local_60.Tags;
							value_01.Skip = local_60.Tags._1_1_;
							value_01._13_3_ = local_60.Tags._2_3_;
							value_01.Start = local_84;
							value_01.Length = 1;
							local_a8.Character = uVar2;
							units.set_Item(index_00, value_01);
						}
						else {
	label_0532dff0: ;
							index = index_00 + 1;
							if (index < (int)uVar10) {
								local_a8 = units.get_Item(index);
								uVar3 = local_a8.Character;
								iVar5 = local_a8.Length;
								uVar10 = local_80;
								if (Il2CppMethodInitialized_0754284e == false) {
									Il2CppMethodInitialized_0754284e = true;
									uVar10 = local_80;
								}
								local_80 = uVar10;
								if (iVar5 == 1) {
									if (((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor == 0) {
									}
									if (((((ushort)(uVar3 - 0x30) < 10) || ((ushort)(uVar3 - 0x660) < 10)) ||((ushort)(uVar3 - 0x6f0) < 10)) &&(local_a8 = units.get_Item(index), local_a8.Type != 3)) goto label_0532e10d;
								}
							}
						}
					}
				}
	label_0532de80: ;
				uVar6 = (ulong)(index_00 + 1U);
			} while ((uint)uVar10 != index_00 + 1U);
		}
		return;
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x522E180", Offset = "0x522D180", VA = "0x522E180")]
	private static void ResolveNeutrals(List<Unit> units, int start, int end, bool rightToLeft)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$ResolveNeutrals): 5 lines keep C-only constructs
		bool bVar1;
		int index;
		GisketchArabicText.Unit value;
		byte uVar2;
		byte uVar3;
		int index_00;
		int iVar4;
		byte uVar5;
		GisketchArabicText.Unit local_70;
		int local_54;
		byte[] local_40 = new byte[8];

		if (start < end) {
			if (units == null) {
				throw new NullReferenceException();
			}
			index_00 = start;
			local_54 = end;
			do {
				local_70 = units.get_Item(index_00);
				if (local_70.Type == 3) {
					uVar2 = rightToLeft;
					iVar4 = index_00;
					if (index_00 < end) {
						local_70 = units.get_Item(index_00);
						bVar1 = true;
						if (local_70.Type == 3) {
							index = index_00;
							do {
								index = index + 1;
								if (end == index) {
									iVar4 = end;
									goto label_0532e2d5;
								}
								local_70 = units.get_Item(index);
							} while (local_70.Type == 3);
							iVar4 = index;
	label_0532e2d5: ;
							bVar1 = index < end;
							goto joined_r0x0532e28e;
						}
						if (start < index_00) goto label_0532e2ea;
	label_0532e263: ;
						uVar3 = rightToLeft;
						if (bVar1) {
	label_0532e338: ;
							local_70 = units.get_Item(iVar4);
							uVar2 = local_70.Type;
							if (uVar2 == 2) {
								uVar2 = 1;
							}
						}
					}
					else {
						bVar1 = false;
	joined_r0x0532e28e: ;
						if (index_00 <= start) goto label_0532e263;
	label_0532e2ea: ;
						local_70 = units.get_Item(index_00 + -1);
						uVar3 = local_70.Type;
						if (uVar3 == 2) {
							uVar3 = 1;
						}
						if (bVar1) goto label_0532e338;
					}
					uVar5 = rightToLeft;
					if (uVar3 == uVar2) {
						uVar5 = uVar3;
					}
					if (index_00 < iVar4) {
						do {
							local_70 = units.get_Item(index_00);
							local_40._0_4_ = local_70.Start;
							local_40._4_4_ = local_70.Length;
							value.Tags._3_5_ = local_70.Tags._3_5_;
							value.Tags._0_3_ = local_70.Tags._0_3_;
							value.Type = uVar5;
							value.Character = local_70.Character;
							value.Level = local_70.Level;
							value.Skip = local_70.Skip;
							value._13_3_ = local_70._13_3_;
							value.Start = local_70.Start;
							value.Length = local_70.Length;
							local_70.Type = uVar5;
							units.set_Item(index_00, value);
							index_00 = index_00 + 1;
						} while (iVar4 != index_00);
						index_00 = iVar4;
						end = local_54;
					}
					else {
						index_00 = iVar4;
						end = local_54;
					}
				}
				else {
					index_00 = index_00 + 1;
				}
			} while (index_00 < end);
		}
		return;
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x522EA10", Offset = "0x522DA10", VA = "0x522EA10")]
	private static byte Direction(byte type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$Direction): clean
		byte uVar1;

		if (type != 2) {
		}
		return uVar1;
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x522E480", Offset = "0x522D480", VA = "0x522E480")]
	private static void AssignLevels(List<Unit> units, int start, int end, bool rightToLeft)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$AssignLevels): 26 lines keep C-only constructs
		byte uVar1;
		GisketchArabicText.Unit value;
		GisketchArabicText.Unit value_00;
		ulong uVar2;
		ulong uVar3;
		ulong uVar4;
		ulong uVar5;
		ulong uVar6;
		GisketchArabicText.Unit pGVar7;
		GisketchArabicText.Unit pGVar8;
		GisketchArabicText.Unit local_78;
		GisketchArabicText.Unit local_60;
		GisketchArabicText.Unit local_48;

		local_78.Start = 0;
		local_78.Length = 0;
		local_78.Character = 0;
		local_78.Type = 0;
		local_78.Level = 0;
		local_78.Skip = false;
		local_78._13_3_ = 0;
		local_78.Tags = null;
		if (start < end) {
			if (units == null) {
				throw new NullReferenceException();
			}
			if (rightToLeft) {
				do {
					local_60 = units.get_Item(start);
					local_48.Start = local_60.Start;
					local_48.Length = local_60.Length;
					local_48.Character = local_60.Character;
					local_48.Type = local_60.Type;
					local_48.Level = local_60.Level;
					local_48.Skip = local_60.Skip;
					local_48._13_3_ = local_60._13_3_;
					local_78.Start = local_60.Start;
					local_78.Length = local_60.Length;
					local_78.Tags = local_60.Tags;
					local_78.Type = local_60.Type;
					local_78.Level = 2 - (local_78.Type == 1);
					local_78._12_4_ = local_60._12_4_;
					local_78._8_3_ = local_60._8_3_;
					uVar2 = local_78._8_8_;
					local_78.Character = local_60.Character;
					local_78.Type = local_60.Type;
					local_78.Skip = local_60.Skip;
					local_78._13_3_ = local_60._13_3_;
					value.Character = local_78.Character;
					value.Type = local_78.Type;
					value.Level = local_78.Level;
					value.Skip = local_78.Skip;
					value._13_3_ = local_78._13_3_;
					value.Start = local_60.Start;
					value.Length = local_60.Length;
					value.Tags = local_60.Tags;
					local_78._8_8_ = uVar2;
					units.set_Item(start, value);
					start = start + 1;
				} while (end != start);
			}
			else {
				pGVar8 = null;
				do {
					local_60 = units.get_Item(start);
					uVar5 = local_60._8_8_;
					uVar3 = local_60._0_8_;
					local_48.Start = local_60.Start;
					local_48.Length = local_60.Length;
					local_48.Character = local_60.Character;
					local_48.Type = local_60.Type;
					local_48.Level = local_60.Level;
					local_48.Skip = local_60.Skip;
					local_48._13_3_ = local_60._13_3_;
					local_78.Start = local_60.Start;
					local_78.Length = local_60.Length;
					local_78.Character = local_60.Character;
					local_78.Type = local_60.Type;
					local_78.Level = local_60.Level;
					local_78.Skip = local_60.Skip;
					local_78._13_3_ = local_60._13_3_;
					uVar2 = local_78._8_8_;
					local_78.Tags = local_60.Tags;
					local_78.Type = local_60.Type;
					if (local_78.Type != 0) {
						pGVar8 = &local_78;
					}
					pGVar7 = pGVar8;
					uVar1 = 2 - (local_78.Type == 1);
					if (local_78.Type == 0) {
						pGVar7 = &local_78;
						uVar1 = 0;
					}
					pGVar7.Level = uVar1;
					uVar6 = local_60._8_8_;
					uVar4 = local_60._0_8_;
					local_60.Character = (uint16_t)uVar5;
					local_60.Type = SUB81(uVar5, 2);
					local_60.Level = SUB81(uVar5, 3);
					local_60.Skip = SUB81(uVar5, 4);
					local_60._13_3_ = SUB83(uVar5, 5);
					value_00.Character = local_60.Character;
					value_00.Type = local_60.Type;
					value_00.Level = local_60.Level;
					value_00.Skip = local_60.Skip;
					value_00._13_3_ = local_60._13_3_;
					local_60.Start = (int32_t)uVar3;
					local_60.Length = SUB84(uVar3, 4);
					value_00.Start = local_60.Start;
					value_00.Length = local_60.Length;
					value_00.Tags = local_78.Tags;
					local_78._8_8_ = uVar2;
					local_60._0_8_ = uVar4;
					local_60._8_8_ = uVar6;
					units.set_Item(start, value_00);
					start = start + 1;
				} while (end != start);
			}
		}
		return;
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x522E620", Offset = "0x522D620", VA = "0x522E620")]
	private static void ReverseRuns(List<Unit> units, int[] order, int level)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$ReverseRuns): clean
		uint uVar1;
		ulong uVar2;
		uint index;
		long lVar3;
		uint uVar4;
		GisketchArabicText.Unit GStack_48;

		if (order == null) {
	label_0532e74c: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)order.Length;
		if (units == null) {
			if (0 < (int)uVar1) goto label_0532e74c;
		}
		else if (0 < (int)uVar1) {
			index = 0;
	label_0532e68d: ;
			do {
				if (uVar1 <= index) {
	label_0532e747: ;
					throw new IndexOutOfRangeException();
				}
				lVar3 = (long)(int)index;
				GStack_48 = units.get_Item(order[lVar3]);
				if ((int)(uint)GStack_48.Level < level) {
					index = index + 1;
					uVar1 = (uint)order.Length;
					if ((int)uVar1 <= (int)index) {
						return;
					}
					goto label_0532e68d;
				}
				uVar1 = (uint)order.Length;
				uVar2 = (ulong)uVar1;
				uVar4 = index;
				if ((int)index < (int)uVar1) {
					do {
						if ((uint)uVar2 <= (uint)lVar3) goto label_0532e747;
						GStack_48 = units.get_Item(order[lVar3]);
						if ((int)(uint)GStack_48.Level < level) break;
						lVar3 = lVar3 + 1;
						uVar2 = order.Length;
					} while (lVar3 < (int)uVar2);
					uVar4 = (uint)lVar3;
				}
				Array.Reverse<int>(order, index, uVar4 - index);
				uVar1 = (uint)order.Length;
				index = uVar4;
				if ((int)uVar1 <= (int)uVar4) {
					return;
				}
			} while(true);
		}
		return;
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x522C500", Offset = "0x522B500", VA = "0x522C500")]
	private static void TransitionTags(StringBuilder builder, List<string> emitted, string[] target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$TransitionTags): 4 lines keep C-only constructs
		int piVar1;
		String[] pSVar2;
		bool bVar3;
		uint uVar4;
		String pSVar5;
		StringBuilder pSVar6;
		ulong uVar7;
		int iVar8;
		ulong uVar9;
		uint uVar10;
		MethodInfo pMVar11;
		int index;

		if (Il2CppMethodInitialized_0754284a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveRange) ;
			Il2CppMethodInitialized_0754284a = true;
		}
		if (emitted == null) goto label_0532c7af;
		iVar8 = emitted._size;
		uVar9 = 0;
		if (target == null) {
			if (0 < iVar8) goto label_0532c7af;
	label_0532c604: ;
			uVar10 = iVar8 - 1;
			if (-1 < (int)uVar10) {
	label_0532c610: ;
				if (builder == null) goto label_0532c7af;
				do {
					pSVar6 = builder.Append("</");
					pMVar11 = (MethodInfo)(ulong)uVar10;
					pSVar5 = emitted.get_Item(uVar10);
					pSVar5 = GisketchArabicText.TagName(pSVar5);
					if ((pSVar6 == null) ||(pSVar6 = pSVar6.Append(pSVar5), pSVar6 == null)) goto label_0532c7af;
					pSVar6.Append(0x3e);
					uVar10 = uVar10 - 1;
				} while ((int)uVar9 <= (int)uVar10);
				iVar8 = emitted._size;
			}
		}
		else {
			if ((iVar8 < 1) || ((int)target.Length < 1)) goto label_0532c604;
			uVar9 = 0;
			do {
				index = (int)uVar9;
				pSVar5 = emitted.get_Item(index);
				if ((uint)target.Length <= uVar9) goto label_0532c7b4;
				bVar3 = (pSVar5 == target[uVar9]);
				if (!bVar3) {
					iVar8 = emitted._size;
					uVar10 = iVar8 - 1;
					if ((int)uVar10 < index) goto label_0532c6ac;
					goto label_0532c610;
				}
				uVar9 = uVar9 + 1;
				iVar8 = emitted._size;
			} while (((long)uVar9 < (long)iVar8) && ((long)uVar9 < (long)(int)target.Length));
			uVar9 = (ulong)(index + 1U);
			uVar10 = iVar8 - 1;
			if ((int)(index + 1U) <= (int)uVar10) goto label_0532c610;
		}
	label_0532c6ac: ;
		uVar10 = (uint)uVar9;
		emitted.RemoveRange(uVar10, iVar8 - uVar10);
		if (target == null) {
	label_0532c7af: ;
			throw new NullReferenceException();
		}
		uVar4 = (uint)target.Length;
		if (builder == null) {
			if ((int)uVar10 < (int)uVar4) {
				if (uVar4 <= uVar10) {
	label_0532c7b4: ;
					throw new IndexOutOfRangeException();
				}
				goto label_0532c7af;
			}
		}
		else if ((int)uVar10 < (int)uVar4) {
			uVar7 = target.Length & 0xffffffff;
			uVar9 = uVar9 & 0xffffffff;
			do {
				if ((uVar7 <= uVar9) ||(builder.Append(target[uVar9]), pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add, (uint)target.Length <= uVar9)) goto label_0532c7b4;
				pSVar5 = target[uVar9];
				piVar1 = &emitted._version;
				*piVar1 = *piVar1 + 1;
				pSVar2 = emitted._items;
				if (pSVar2 == null) goto label_0532c7af;
				uVar10 = emitted._size;
				if (uVar10 < (uint)pSVar2.Length) {
					emitted._size = uVar10 + 1;
					pSVar2[(int)uVar10] = pSVar5;
				}
				else {
					emitted.AddWithResize((object)pSVar5);
				}
				uVar9 = uVar9 + 1;
				uVar10 = (uint)target.Length;
				uVar7 = (ulong)uVar10;
			} while ((long)uVar9 < (long)(int)uVar10);
		}
		return;
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x522D0D0", Offset = "0x522C0D0", VA = "0x522D0D0")]
	private static byte CharacterType(char character, bool alreadyVisual)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$CharacterType): 2 lines keep C-only constructs
		uint uVar1;
		byte uVar2;
		bool bVar3;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, alreadyVisual);
		if (Il2CppMethodInitialized_0754284b == false) {
			Il2CppMethodInitialized_0754284b = true;
			uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		uVar2 = 2;
		if (((9 < (ushort)(character - 0x6f0)) && (uVar2 = 2, 9 < (ushort)(character - 0x30))) &&(9 < (ushort)(character - 0x660))) {
			if (((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor == 0) {
			}
			if (((ushort)(character + 0x4b0) < 0x2b0) || ((ushort)(character + 400) < 0x90)) {
				return !alreadyVisual;
			}
			if (((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor == 0) {
			}
			uVar2 = 4;
			if (((0x36 < (ushort)(character - 0x591)) && (0x17 < (ushort)(character - 0x6d6))) &&((character != 0x670 && (0x14 < (ushort)(character - 0x64b))))) {
				bVar3 = GisketchArabicText.IsRightToLeft(character);
				uVar2 = 1;
				if (!bVar3) {
					bVar3 = Char.IsLetter(character);
					return !bVar3 * '\x03';
				}
			}
		}
		return uVar2;
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x522CDF0", Offset = "0x522BDF0", VA = "0x522CDF0")]
	private static int TagEnd(string text, int start)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$TagEnd): clean
		bool bVar1;
		ushort uVar2;
		int iVar3;
		int index;
		int iVar4;
		int iVar5;

		if (text == null) {
			throw new NullReferenceException();
		}
		iVar4 = -1;
		iVar5 = iVar4;
		if (start + 2 < text._stringLength) {
			index = start + 1;
			uVar2 = text.get_Chars(index);
			bVar1 = Char.IsLetter(uVar2);
			if (((bVar1) || (uVar2 == 0x2f)) || (uVar2 == 0x23)) {
				iVar3 = text._stringLength;
				iVar3 = Math.Min(iVar3, start + 0x80);
				while (((iVar5 = iVar4, index < iVar3 &&(uVar2 = text.get_Chars(index), iVar5 = index, uVar2 != 0x3e)) && (uVar2 = text.get_Chars(index), iVar5 = iVar4, uVar2 != 0x3c) )) {
					index = index + 1;
				}
			}
		}
		return iVar5;
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x522CF20", Offset = "0x522BF20", VA = "0x522CF20")]
	private static string TagName(string tag)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$TagName): clean
		ushort uVar1;
		String pSVar2;
		int index;
		int index_00;

		if (tag != null) {
			uVar1 = tag.get_Chars(1);
			index_00 = (uVar1 == 0x2f) + 1;
			uVar1 = tag.get_Chars(index_00);
			if (uVar1 == 0x23) {
				return "color";
			}
			index = index_00;
			if (index_00 < tag._stringLength) {
				do {
					uVar1 = tag.get_Chars(index);
					if (((uVar1 == 0x3d) || (uVar1 = tag.get_Chars(index), uVar1 == 0x3e) ) || (uVar1 = tag.get_Chars(index), uVar1 == 0x20)) break;
					index = index + 1;
				} while (index < tag._stringLength);
			}
			pSVar2 = tag.Substring(index_00, index - index_00);
			if (pSVar2 != null) {
				pSVar2 = pSVar2.ToLowerInvariant();
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x522D010", Offset = "0x522C010", VA = "0x522D010")]
	private static int PlaceholderEnd(string text, int start)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$PlaceholderEnd): clean
		bool bVar1;
		ushort uVar2;
		int index;
		int iVar3;
		int iVar4;

		if (text == null) {
			throw new NullReferenceException();
		}
		iVar4 = start + 1;
		if (iVar4 < text._stringLength) {
			index = iVar4;
			do {
				uVar2 = text.get_Chars(index);
				bVar1 = Char.IsDigit(uVar2);
			} while ((bVar1) && (index = index + 1, index < text._stringLength));
			if ((iVar4 < index) && (index < text._stringLength)) {
				uVar2 = text.get_Chars(index);
				if (uVar2 == 0x7d) {
				}
			}
		}
		return iVar3;
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x522E970", Offset = "0x522D970", VA = "0x522E970")]
	private static bool IsDigitUnit(Unit unit)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsDigitUnit): clean
		bool bVar1;

		if (unit.Length != 1) {
			return false;
		}
		if (((typeof(GisketchArabicText))._2).cctor_finished_or_no_cctor == 0) {
		}
		if ((9 < (ushort)(unit.Character - 0x30)) && (9 < (ushort)(unit.Character - 0x660))) {
			bVar1 = (ushort)(unit.Character - 0x6f0) < 10;
		}
		return bVar1;
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x522CB80", Offset = "0x522BB80", VA = "0x522CB80")]
	private static bool IsDigit(char character)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsDigit): clean
		bool bVar1;

		if ((9 < (ushort)(character - 0x30)) && (9 < (ushort)(character - 0x660))) {
			bVar1 = (ushort)(character - 0x6f0) < 10;
		}
		return bVar1;
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x522CBB0", Offset = "0x522BBB0", VA = "0x522CBB0")]
	private static bool IsMark(char character)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsMark): clean
		bool bVar1;

		if (((0x17 < (ushort)(character - 0x6d6)) && (character != 0x670)) && (0x14 < (ushort)(character - 0x64b))) {
			bVar1 = (ushort)(character - 0x591) < 0x37;
		}
		return bVar1;
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x522CA40", Offset = "0x522BA40", VA = "0x522CA40")]
	private static bool IsPresentationForm(char character)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsPresentationForm): clean
		return (ushort)(character + 400) < 0x90 || (ushort)(character + 0x4b0) < 0x2b0;
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x522E940", Offset = "0x522D940", VA = "0x522E940")]
	private static bool IsNumberSeparator(char character)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsNumberSeparator): 2 lines keep C-only constructs
		undefined6 in_register_0000003a;

		if (((character < 0x3b) && ((0x400d00000000000U >> ((ulong)character & 0x3f) & 1) != 0)) ||((int)CONCAT62(in_register_0000003a, character) - 0x66bU < 2)) {
			return true;
		}
		return false;
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x522E9F0", Offset = "0x522D9F0", VA = "0x522E9F0")]
	private static bool IsNumberSuffix(char character)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsNumberSuffix): 2 lines keep C-only constructs
		bool bVar1;
		ushort in_register_0000003a;

		if (((2 < CONCAT22(in_register_0000003a, character) - 0x23U) &&(CONCAT22(in_register_0000003a, character) != 0xb0)) &&(CONCAT22(in_register_0000003a, character) != 0x66a)) {
		}
		return bVar1;
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x522C9D0", Offset = "0x522B9D0", VA = "0x522C9D0")]
	private static char Mirror(char character)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$Mirror): clean
		ushort uVar1;
		uint uVar2;

		if ("()[]{}__\xc2\xab\xc2\xbb" != null) {
			uVar2 = ("()[]{}__\xc2\xab\xc2\xbb").IndexOf(character);
			if ((int)uVar2 < 0) {
				return character;
			}
			if ("()[]{}__\xc2\xab\xc2\xbb" != null) {
				uVar1 = ("()[]{}__\xc2\xab\xc2\xbb").get_Chars(uVar2 ^ 1);
				return uVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x522EA20", Offset = "0x522DA20", VA = "0x522EA20")]
	private static Dictionary<char, int> BuildFormBases()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c (Gisketch.Aottg2UI.Styling.GisketchArabicText$$BuildFormBases): clean
		String __this;
		ushort key;
		int iVar1;
		int iVar2;
		Dictionary<char, int> __this_00;
		int iVar3;
		int value;

		__this_00 = new Dictionary<char, int>();
		__this = "\xd8\xa1\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa6\xd8\xa7\xd8\xa8\xd8\xa9\xd8\xaa\xd8\xab\xd8\xac\xd8\xad\xd8\xae\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd8\xb3\xd8\xb4\xd8\xb5\xd8\xb6\xd8\xb7\xd8\xb8\xd8\xb9\xd8\xba\xd9\x81\xd9\x82\xd9\x83\xd9\x84\xd9\x85\xd9\x86\xd9\x87\xd9\x88\xd9\x89\xd9\x8a";
		if ("\xd8\xa1\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa6\xd8\xa7\xd8\xa8\xd8\xa9\xd8\xaa\xd8\xab\xd8\xac\xd8\xad\xd8\xae\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd8\xb3\xd8\xb4\xd8\xb5\xd8\xb6\xd8\xb7\xd8\xb8\xd8\xb9\xd8\xba\xd9\x81\xd9\x82\xd9\x83\xd9\x84\xd9\x85\xd9\x86\xd9\x87\xd9\x88\xd9\x89\xd9\x8a" != null) {
			iVar3 = ("\xd8\xa1\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa6\xd8\xa7\xd8\xa8\xd8\xa9\xd8\xaa\xd8\xab\xd8\xac\xd8\xad\xd8\xae\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd8\xb3\xd8\xb4\xd8\xb5\xd8\xb6\xd8\xb7\xd8\xb8\xd8\xb9\xd8\xba\xd9\x81\xd9\x82\xd9\x83\xd9\x84\xd9\x85\xd9\x86\xd9\x87\xd9\x88\xd9\x89\xd9\x8a".fields)._stringLength;
			if (__this_00 != null) {
				if (0 < iVar3) {
					value = 0xfe80;
					iVar3 = 0;
					do {
						key = __this.get_Chars(iVar3);
						__this_00.set_Item(key, value) ;
						iVar2 = 1;
						if (key != 0x621) {
							if ("\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa7\xd8\xa9\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd9\x88\xd9\x89\xd9\xb1\xda\x98" == null) goto label_0532ebf5;
							iVar1 = ("\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa7\xd8\xa9\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd9\x88\xd9\x89\xd9\xb1\xda\x98").IndexOf(key);
							iVar2 = (iVar1 >> 0x1f) * -2 + 2;
						}
						value = value + iVar2;
						iVar3 = iVar3 + 1;
					} while (iVar3 < __this._stringLength);
					if (__this_00 == null) goto label_0532ebf5;
				}
				__this_00.set_Item(0x671, 0xfb50);
				__this_00.set_Item(0x67e, 0xfb56);
				__this_00.set_Item(0x686, 0xfb7a);
				__this_00.set_Item(0x698, 0xfb8a);
				__this_00.set_Item(0x6a9, 0xfb8e);
				__this_00.set_Item(0x6af, 0xfb92);
				__this_00.set_Item(0x6cc, 0xfbfc);
				return __this_00;
			}
			if (0 < iVar3) {
				("\xd8\xa1\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa6\xd8\xa7\xd8\xa8\xd8\xa9\xd8\xaa\xd8\xab\xd8\xac\xd8\xad\xd8\xae\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd8\xb3\xd8\xb4\xd8\xb5\xd8\xb6\xd8\xb7\xd8\xb8\xd8\xb9\xd8\xba\xd9\x81\xd9\x82\xd9\x83\xd9\x84\xd9\x85\xd9\x86\xd9\x87\xd9\x88\xd9\x89\xd9\x8a").get_Chars(0);
			}
		}
	label_0532ebf5: ;
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c.

	// Gisketch.Aottg2UI.Styling.GisketchArabicText.<>c__DisplayClass23_0$$.ctor: clean
	private void c__DisplayClass23_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Styling.GisketchArabicText$$.cctor: 2 lines keep C-only constructs
	static GisketchArabicText()
	{
		Dictionary<char, int> pSVar2;
		String[] pSVar3;
		Il2CppClass* ppIVar4;

		if (Il2CppMethodInitialized_07542851 == false) {
			ppIVar4 = &typeof(string[]);
			Il2CppMethodInitialized_07542851 = true;
		}
		pSVar2 = GisketchArabicText.BuildFormBases();
		GisketchArabicText.FormBases = pSVar2;
		pSVar3 = (String[])new string[0];
		GisketchArabicText.NoTags = pSVar3;
		return;
	}

	// Gisketch.Aottg2UI.Styling.GisketchArabicText.<>c__DisplayClass23_0$$<Tokenize>b__0: clean
	private bool c__DisplayClass23_0__Tokenize_b__0(String o)
	{
		bool bVar1;
		String a;

		a = GisketchArabicText.TagName(o);
		bVar1 = (a == this.name);
		return bVar1;
	}
}
