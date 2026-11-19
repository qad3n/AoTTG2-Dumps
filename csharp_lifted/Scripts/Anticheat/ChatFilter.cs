// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.ChatFilter
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Anticheat/ChatFilter.c
// Prior real C# source (older reference): Assets/Scripts/Anticheat/ChatFilter.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x20009D1")]
internal static class ChatFilter
{
	[Token(Token = "0x4003133")]
	[FieldOffset(Offset = "0x0")]
	private static List<Regex> _bannedRegex;

	[Token(Token = "0x4003134")]
	[FieldOffset(Offset = "0x8")]
	private static List<char> _bannedChar;

	[Token(Token = "0x4003135")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Regex SizeTagRegex;

	[Token(Token = "0x4003136")]
	private const string MaxSizeTag = "<size=20>";

	[Token(Token = "0x6005AC7")]
	[Address(RVA = "0x5D2E300", Offset = "0x5D2D300", VA = "0x5D2E300")]
	public static void Init()
	{
		// Lifted from source/cpp/Anticheat/ChatFilter.c (Anticheat.ChatFilter$$Init): 8 lines keep C-only constructs
		int piVar1;
		ushort item;
		uint uVar2;
		List<Regex> __this;
		Regex[] pSVar3;
		List<char> __this_00;
		bool bVar5;
		String pSVar6;
		JSONNode pSVar7;
		JSONNode pSVar8;
		JSONArray pSVar9;
		Regex __this_01;
		Char[] pSVar10;
		KeyValuePair<string, JSONNode> SVar11;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		pSVar6 = ResourcePaths.Info;
		pSVar6 = ResourceManager.TryLoadText(pSVar6, "ChatFilterInfo");
		pSVar7 = JSON.Parse(pSVar6);
		if (pSVar7 != null) {
			pSVar8 = pSVar7.get_Item("banned_regex");
			if (pSVar8 != null) {
				pSVar9 = pSVar8.get_AsArray();
				if (pSVar9 != null) {
					local_78.GetEnumerator(pSVar9);
					local_c8.m_Array._current = local_78.m_Array._current;
					local_c8.m_Array._list = local_78.m_Array._list;
					local_c8.m_Array._index = local_78.m_Array._index;
					local_c8.m_Array._version = local_78.m_Array._version;
					local_c8.m_Object._current.value = local_78.m_Object._current.value;
					local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
					local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
					local_c8.m_Object._version = local_78.m_Object._version;
					local_c8.m_Object._index = local_78.m_Object._index;
					local_c8.m_Object._current.key = local_78.m_Object._current.key;
					local_c8.type = local_78.type;
					local_c8._4_4_ = local_78._4_4_;
					local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
					bVar5 = local_c8.MoveNext();
					if (bVar5) {
						do {
							SVar11 = local_c8.Current;
							pSVar8 = ((JSONNode)SVar11);
							if (pSVar8 == null) goto label_05e2e79d;
							pSVar6 = pSVar8.get_Value();
							__this_01 = new Regex(pSVar6, 8);
							__this = ChatFilter._bannedRegex;
							if (__this == null) goto label_05e2e79d;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = __this._items;
							if (pSVar3 == null) goto label_05e2e79d;
							uVar2 = __this._size;
							if (uVar2 < (uint)pSVar3.Length) {
								__this._size = uVar2 + 1;
								pSVar3[(int)uVar2] = __this_01;
							}
							else {
								__this.AddWithResize((object)__this_01);
							}
							bVar5 = local_c8.MoveNext();
						} while (bVar5);
					}
					pSVar7 = pSVar7.get_Item("banned_char");
					if (pSVar7 != null) {
						pSVar9 = pSVar7.get_AsArray();
						if (pSVar9 != null) {
							local_78.GetEnumerator(pSVar9);
							local_c8.m_Array._current = local_78.m_Array._current;
							local_c8.m_Array._list = local_78.m_Array._list;
							local_c8.m_Array._index = local_78.m_Array._index;
							local_c8.m_Array._version = local_78.m_Array._version;
							local_c8.m_Object._current.value = local_78.m_Object._current.value;
							local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
							local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
							local_c8.m_Object._version = local_78.m_Object._version;
							local_c8.m_Object._index = local_78.m_Object._index;
							local_c8.m_Object._current.key = local_78.m_Object._current.key;
							local_c8.type = local_78.type;
							local_c8._4_4_ = local_78._4_4_;
							local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
							bVar5 = local_c8.MoveNext();
							if (bVar5) {
								do {
									SVar11 = local_c8.Current;
									pSVar7 = ((JSONNode)SVar11);
									if (pSVar7 == null) goto label_05e2e79d;
									__this_00 = ChatFilter._bannedChar;
									pSVar6 = pSVar7.get_Value();
									if (pSVar6 == null) goto label_05e2e79d;
									pSVar10 = pSVar6.ToCharArray();
									if (pSVar10 == null) goto label_05e2e79d;
									if ((int)pSVar10.Length == 0) {
										throw new IndexOutOfRangeException();
									}
									if (__this_00 == null) goto label_05e2e79d;
									item = pSVar10[0];
									piVar1 = &__this_00._version;
									*piVar1 = *piVar1 + 1;
									pSVar10 = __this_00._items;
									if (pSVar10 == null) goto label_05e2e79d;
									uVar2 = __this_00._size;
									if (uVar2 < (uint)pSVar10.Length) {
										__this_00._size = uVar2 + 1;
										pSVar10[(int)uVar2] = item;
									}
									else {
										__this_00.AddWithResize(item);
									}
									bVar5 = local_c8.MoveNext();
								} while (bVar5);
							}
							return;
						}
					}
				}
			}
		}
	label_05e2e79d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005AC8")]
	[Address(RVA = "0x5D2E7B0", Offset = "0x5D2D7B0", VA = "0x5D2E7B0")]
	public static string FilterBadWords(this string text)
	{
		// Lifted from source/cpp/Anticheat/ChatFilter.c (Anticheat.ChatFilter$$FilterBadWords): 8 lines keep C-only constructs
		List<Regex> __this;
		object @object;
		List<char> __this_00;
		Regex __this_01;
		bool bVar1;
		Anticheat_ChatFilter___c_StaticFields pAVar2;
		MatchEvaluator __this_02;
		byte[] local_80 = new byte[16];
		Regex local_70;
		byte[] local_68 = new byte[8];
		Regex local_58;
		System_Collections_Generic_List_Enumerator_T__o local_48;

		if (Il2CppMethodInitialized_07548534 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_char_GetEnumerator) ;
			Il2CppMethodInitialized_07548534 = true;
		}
		local_68 = (byte[])0x0;
		local_58 = null;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this = ChatFilter._bannedRegex;
		if (__this != null) {
			local_80.GetEnumerator((List<@object>)__this);
			local_58 = local_70;
			local_68 = (byte[])local_80._0_8_;
			local_80._0_8_ = null;
			local_80._8_8_ = local_68;
			while (true) {
				bVar1 = local_68.MoveNext();
				__this_01 = local_58;
				if (!(bVar1)) break;
				if ((typeof(ChatFilter.c)._2).cctor_finished_or_no_cctor == 0) {
					pAVar2 = typeof(ChatFilter.c).static_fields;
					__this_02 = pAVar2.__9__5_0;
				}
				else {
					pAVar2 = typeof(ChatFilter.c).static_fields;
					__this_02 = pAVar2.__9__5_0;
				}
				if (__this_02 == null) {
					if (((typeof(ChatFilter.c))._2).cctor_finished_or_no_cctor == 0) {
						pAVar2 = typeof(ChatFilter.c).static_fields;
					}
					@object = (object)pAVar2.__9;
					__this_02 = new MatchEvaluator(@object, (intptr_t)MethodInfo_Anticheat_ChatFilter_c_FilterBadWords_b__5_0);
					pAVar2 = typeof(ChatFilter.c).static_fields;
					pAVar2.__9__5_0 = __this_02;
				}
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				text = Regex.Replace(__this_01, text, __this_02) ;
			}
			local_68.Dispose();
			__this_00 = ChatFilter._bannedChar;
			if (__this_00 != null) {
				local_48 = __this_00.GetEnumerator();
				local_80._0_8_ = null;
				local_80._8_8_ = &local_48;
				while(true) {
					bVar1 = local_48.MoveNext();
					if (!bVar1) {
						local_48.Dispose() ;
						return text;
					}
					if (text == null) break;
					text = text.Replace((uint16_t)local_48._current, 0x2a);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005AC9")]
	[Address(RVA = "0x5D2EB90", Offset = "0x5D2DB90", VA = "0x5D2EB90")]
	public static string FilterSizeTag(this string text)
	{
		// Lifted from source/cpp/Anticheat/ChatFilter.c (Anticheat.ChatFilter$$FilterSizeTag): 1 lines keep C-only constructs
		Regex __this;
		object @object;
		String pSVar1;
		Anticheat_ChatFilter___c_StaticFields pAVar2;
		MatchEvaluator __this_00;

		__this = ChatFilter.SizeTagRegex;
		if ((typeof(ChatFilter.c)._2).cctor_finished_or_no_cctor == 0) {
			pAVar2 = typeof(ChatFilter.c).static_fields;
			__this_00 = pAVar2.__9__6_0;
		}
		else {
			pAVar2 = typeof(ChatFilter.c).static_fields;
			__this_00 = pAVar2.__9__6_0;
		}
		if (__this_00 == null) {
			if (((typeof(ChatFilter.c))._2).cctor_finished_or_no_cctor == 0) {
				pAVar2 = typeof(ChatFilter.c).static_fields;
			}
			@object = (object)pAVar2.__9;
			__this_00 = new MatchEvaluator(@object, (intptr_t)MethodInfo_Anticheat_ChatFilter_c_FilterSizeTag_b__6_0);
			pAVar2 = typeof(ChatFilter.c).static_fields;
			pAVar2.__9__6_0 = __this_00;
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		pSVar1 = Regex.Replace(__this, text, __this_00);
		return pSVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Anticheat/ChatFilter.c.

	// Anticheat.ChatFilter$$.cctor: clean
	static ChatFilter()
	{
		Anticheat_ChatFilter_StaticFields pAVar1;
		List<Regex> __this;
		List<char> __this_00;
		Regex __this_01;

		__this = new List<Regex>();
		ChatFilter._bannedRegex = __this;
		__this_00 = new List<char>();
		pAVar1 = typeof(ChatFilter).static_fields;
		pAVar1._bannedChar = __this_00;
		__this_01 = new Regex("<size=.*?>", 9);
		pAVar1 = typeof(ChatFilter).static_fields;
		pAVar1.SizeTagRegex = __this_01;
		return;
	}

	// Anticheat.ChatFilter.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new ChatFilter.c();
		ChatFilter.c.__9 = (ChatFilter.c)__this;
		return;
	}

	// Anticheat.ChatFilter.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Anticheat.ChatFilter.<>c$$<FilterBadWords>b__5_0: clean
	private String c__FilterBadWords_b__5_0(Match match)
	{
		String pSVar1;

		if (match == null) {
			throw new NullReferenceException();
		}
		pSVar1 = 0x0.CreateString(0x2a, match._Length_k__BackingField);
		return pSVar1;
	}

	// Anticheat.ChatFilter.<>c$$<FilterSizeTag>b__6_0: clean
	private String c__FilterSizeTag_b__6_0(Match match)
	{
		String pSVar1;

		if (match != null) {
			if ("<size=20>" != null) {
				if (("<size=20>".fields)._stringLength < match._Length_k__BackingField) {
					return "<size=20>";
				}
				return pSVar1;
			}
		}
		throw new NullReferenceException();
	}
}
