// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.StringUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001C3")]
public static class StringUtility
{
	[Token(Token = "0x20001C5")]
	[CompilerGenerated]
	private sealed class _003CAllIndexesOf_003Ed__8 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000925")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000926")]
		[FieldOffset(Offset = "0x14")]
		private int _003C_003E2__current;

		[Token(Token = "0x4000927")]
		[FieldOffset(Offset = "0x18")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000928")]
		[FieldOffset(Offset = "0x20")]
		private string needle;

		[Token(Token = "0x4000929")]
		[FieldOffset(Offset = "0x28")]
		public string _003C_003E3__needle;

		[Token(Token = "0x400092A")]
		[FieldOffset(Offset = "0x30")]
		private string haystack;

		[Token(Token = "0x400092B")]
		[FieldOffset(Offset = "0x38")]
		public string _003C_003E3__haystack;

		[Token(Token = "0x400092C")]
		[FieldOffset(Offset = "0x40")]
		private int _003Cindex_003E5__2;

		[Token(Token = "0x170001DA")]
		private int System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EInt32_003E_002ECurrent
		{
			[Token(Token = "0x60010DE")]
			[Address(RVA = "0x684D9F0", Offset = "0x684C9F0", VA = "0x684D9F0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170001DB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60010E0")]
			[Address(RVA = "0x684DA40", Offset = "0x684CA40", VA = "0x684DA40", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010DB")]
		[Address(RVA = "0x684BF30", Offset = "0x684AF30", VA = "0x684BF30")]
		[DebuggerHidden]
		public _003CAllIndexesOf_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60010DC")]
		[Address(RVA = "0x684D940", Offset = "0x684C940", VA = "0x684D940", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60010DD")]
		[Address(RVA = "0x684D950", Offset = "0x684C950", VA = "0x684D950", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60010DF")]
		[Address(RVA = "0x684DA00", Offset = "0x684CA00", VA = "0x684DA00", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60010E1")]
		[Address(RVA = "0x684DA60", Offset = "0x684CA60", VA = "0x684DA60", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60010E2")]
		[Address(RVA = "0x684DB00", Offset = "0x684CB00", VA = "0x684DB00", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000922")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Regex guidRegex;

	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x684BB40", Offset = "0x684AB40", VA = "0x684BB40")]
	public static bool IsNullOrWhiteSpace(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x684BB80", Offset = "0x684AB80", VA = "0x684BB80")]
	public static string FallbackEmpty(string s, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x684BBB0", Offset = "0x684ABB0", VA = "0x684BBB0")]
	public static string FallbackWhitespace(string s, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x684BC50", Offset = "0x684AC50", VA = "0x684BC50")]
	public static void AppendLineFormat(this StringBuilder sb, string format, params object[] args)
	{
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x684BC70", Offset = "0x684AC70", VA = "0x684BC70")]
	public static string ToSeparatedString(this IEnumerable enumerable, string separator)
	{
		return null;
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x684BDD0", Offset = "0x684ADD0", VA = "0x684BDD0")]
	public static string ToCommaSeparatedString(this IEnumerable enumerable)
	{
		return null;
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x684BE30", Offset = "0x684AE30", VA = "0x684BE30")]
	public static string ToLineSeparatedString(this IEnumerable enumerable)
	{
		return null;
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x684BE90", Offset = "0x684AE90", VA = "0x684BE90")]
	public static bool ContainsInsensitive(this string haystack, string needle)
	{
		return default(bool);
	}

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x684BEB0", Offset = "0x684AEB0", VA = "0x684BEB0")]
	[IteratorStateMachine(typeof(_003CAllIndexesOf_003Ed__8))]
	public static IEnumerable<int> AllIndexesOf(this string haystack, string needle)
	{
		return null;
	}

	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x684BF60", Offset = "0x684AF60", VA = "0x684BF60")]
	public static string Filter(this string s, bool letters = true, bool numbers = true, bool whitespace = true, bool symbols = true, bool punctuation = true)
	{
		return null;
	}

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x684C130", Offset = "0x684B130", VA = "0x684C130")]
	public static string FilterReplace(this string s, char replacement, bool merge, bool letters = true, bool numbers = true, bool whitespace = true, bool symbols = true, bool punctuation = true)
	{
		return null;
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x684C360", Offset = "0x684B360", VA = "0x684C360")]
	public static string Prettify(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x684C5C0", Offset = "0x684B5C0", VA = "0x684C5C0")]
	public static bool IsWordDelimiter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x684C650", Offset = "0x684B650", VA = "0x684C650")]
	public static bool IsWordBeginning(char? previous, char current, char? next)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x684C900", Offset = "0x684B900", VA = "0x684C900")]
	public static bool IsWordBeginning(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x684C470", Offset = "0x684B470", VA = "0x684C470")]
	public static string SplitWords(this string s, char separator)
	{
		return null;
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x684CAB0", Offset = "0x684BAB0", VA = "0x684CAB0")]
	public static string RemoveConsecutiveCharacters(this string s, char c)
	{
		return null;
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x684CBB0", Offset = "0x684BBB0", VA = "0x684CBB0")]
	public static string ReplaceMultiple(this string s, HashSet<char> haystacks, char replacement)
	{
		return null;
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x684CD50", Offset = "0x684BD50", VA = "0x684CD50")]
	public static string Truncate(this string value, int maxLength, string suffix = "...")
	{
		return null;
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x684CD90", Offset = "0x684BD90", VA = "0x684CD90")]
	public static string TrimEnd(this string source, string value)
	{
		return null;
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x684CDE0", Offset = "0x684BDE0", VA = "0x684CDE0")]
	public static string TrimStart(this string source, string value)
	{
		return null;
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x684CE30", Offset = "0x684BE30", VA = "0x684CE30")]
	public static string FirstCharacterToLower(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x684C3B0", Offset = "0x684B3B0", VA = "0x684C3B0")]
	public static string FirstCharacterToUpper(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x684CEF0", Offset = "0x684BEF0", VA = "0x684CEF0")]
	public static string PartBefore(this string s, char c)
	{
		return null;
	}

	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x684CFA0", Offset = "0x684BFA0", VA = "0x684CFA0")]
	public static string PartAfter(this string s, char c)
	{
		return null;
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x684D050", Offset = "0x684C050", VA = "0x684D050")]
	public static void PartsAround(this string s, char c, out string before, out string after)
	{
	}

	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x684D140", Offset = "0x684C140", VA = "0x684D140")]
	public static bool EndsWith(this string s, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010CD")]
	[Address(RVA = "0x684D1E0", Offset = "0x684C1E0", VA = "0x684D1E0")]
	public static bool StartsWith(this string s, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x684D270", Offset = "0x684C270", VA = "0x684D270")]
	public static bool Contains(this string s, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x684D320", Offset = "0x684C320", VA = "0x684D320")]
	public static string NullIfEmpty(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x684D360", Offset = "0x684C360", VA = "0x684D360")]
	public static string ToBinaryString(this int value)
	{
		return null;
	}

	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x684D3D0", Offset = "0x684C3D0", VA = "0x684D3D0")]
	public static string ToBinaryString(this long value)
	{
		return null;
	}

	[Token(Token = "0x60010D2")]
	[Address(RVA = "0x684D440", Offset = "0x684C440", VA = "0x684D440")]
	public static string ToBinaryString(this Enum value)
	{
		return null;
	}

	[Token(Token = "0x60010D3")]
	[Address(RVA = "0x684D4B0", Offset = "0x684C4B0", VA = "0x684D4B0")]
	public static int CountIndices(this string s, char c)
	{
		return default(int);
	}

	[Token(Token = "0x60010D4")]
	[Address(RVA = "0x684D510", Offset = "0x684C510", VA = "0x684D510")]
	public static bool IsGuid(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D5")]
	[Address(RVA = "0x684D5A0", Offset = "0x684C5A0", VA = "0x684D5A0")]
	public static string PathEllipsis(string s, int maxLength)
	{
		return null;
	}

	[Token(Token = "0x60010D6")]
	[Address(RVA = "0x684D770", Offset = "0x684C770", VA = "0x684D770")]
	public static string ToHexString(this byte[] bytes)
	{
		return null;
	}
}
