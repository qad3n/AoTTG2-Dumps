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
		[Token(Token = "0x4000927")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000928")]
		[FieldOffset(Offset = "0x14")]
		private int _003C_003E2__current;

		[Token(Token = "0x4000929")]
		[FieldOffset(Offset = "0x18")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400092A")]
		[FieldOffset(Offset = "0x20")]
		private string needle;

		[Token(Token = "0x400092B")]
		[FieldOffset(Offset = "0x28")]
		public string _003C_003E3__needle;

		[Token(Token = "0x400092C")]
		[FieldOffset(Offset = "0x30")]
		private string haystack;

		[Token(Token = "0x400092D")]
		[FieldOffset(Offset = "0x38")]
		public string _003C_003E3__haystack;

		[Token(Token = "0x400092E")]
		[FieldOffset(Offset = "0x40")]
		private int _003Cindex_003E5__2;

		[Token(Token = "0x170001D7")]
		private int System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EInt32_003E_002ECurrent
		{
			[Token(Token = "0x60010D1")]
			[Address(RVA = "0x4D63610", Offset = "0x4D63610", VA = "0x4D63610", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170001D8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60010D3")]
			[Address(RVA = "0x4D63660", Offset = "0x4D63660", VA = "0x4D63660", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010CE")]
		[Address(RVA = "0x4D61B80", Offset = "0x4D61B80", VA = "0x4D61B80")]
		[DebuggerHidden]
		public _003CAllIndexesOf_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60010CF")]
		[Address(RVA = "0x4D63550", Offset = "0x4D63550", VA = "0x4D63550", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60010D0")]
		[Address(RVA = "0x4D63560", Offset = "0x4D63560", VA = "0x4D63560", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60010D2")]
		[Address(RVA = "0x4D63620", Offset = "0x4D63620", VA = "0x4D63620", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60010D4")]
		[Address(RVA = "0x4D63680", Offset = "0x4D63680", VA = "0x4D63680", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60010D5")]
		[Address(RVA = "0x4D63730", Offset = "0x4D63730", VA = "0x4D63730", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000924")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Regex guidRegex;

	[Token(Token = "0x60010A5")]
	[Address(RVA = "0x4D61780", Offset = "0x4D61780", VA = "0x4D61780")]
	public static bool IsNullOrWhiteSpace(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x60010A6")]
	[Address(RVA = "0x4D617C0", Offset = "0x4D617C0", VA = "0x4D617C0")]
	public static string FallbackEmpty(string s, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x4D617F0", Offset = "0x4D617F0", VA = "0x4D617F0")]
	public static string FallbackWhitespace(string s, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x4D61890", Offset = "0x4D61890", VA = "0x4D61890")]
	public static void AppendLineFormat(this StringBuilder sb, string format, params object[] args)
	{
	}

	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x4D618B0", Offset = "0x4D618B0", VA = "0x4D618B0")]
	public static string ToSeparatedString(this IEnumerable enumerable, string separator)
	{
		return null;
	}

	[Token(Token = "0x60010AA")]
	[Address(RVA = "0x4D61A10", Offset = "0x4D61A10", VA = "0x4D61A10")]
	public static string ToCommaSeparatedString(this IEnumerable enumerable)
	{
		return null;
	}

	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x4D61A70", Offset = "0x4D61A70", VA = "0x4D61A70")]
	public static string ToLineSeparatedString(this IEnumerable enumerable)
	{
		return null;
	}

	[Token(Token = "0x60010AC")]
	[Address(RVA = "0x4D61AD0", Offset = "0x4D61AD0", VA = "0x4D61AD0")]
	public static bool ContainsInsensitive(this string haystack, string needle)
	{
		return default(bool);
	}

	[Token(Token = "0x60010AD")]
	[Address(RVA = "0x4D61AF0", Offset = "0x4D61AF0", VA = "0x4D61AF0")]
	[IteratorStateMachine(typeof(_003CAllIndexesOf_003Ed__8))]
	public static IEnumerable<int> AllIndexesOf(this string haystack, string needle)
	{
		return null;
	}

	[Token(Token = "0x60010AE")]
	[Address(RVA = "0x4D61BB0", Offset = "0x4D61BB0", VA = "0x4D61BB0")]
	public static string Filter(this string s, bool letters = true, bool numbers = true, bool whitespace = true, bool symbols = true, bool punctuation = true)
	{
		return null;
	}

	[Token(Token = "0x60010AF")]
	[Address(RVA = "0x4D61E80", Offset = "0x4D61E80", VA = "0x4D61E80")]
	public static string FilterReplace(this string s, char replacement, bool merge, bool letters = true, bool numbers = true, bool whitespace = true, bool symbols = true, bool punctuation = true)
	{
		return null;
	}

	[Token(Token = "0x60010B0")]
	[Address(RVA = "0x4D62210", Offset = "0x4D62210", VA = "0x4D62210")]
	public static string Prettify(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x4D62450", Offset = "0x4D62450", VA = "0x4D62450")]
	public static bool IsWordDelimiter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x4D624E0", Offset = "0x4D624E0", VA = "0x4D624E0")]
	public static bool IsWordBeginning(char? previous, char current, char? next)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x4D62790", Offset = "0x4D62790", VA = "0x4D62790")]
	public static bool IsWordBeginning(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x4D62330", Offset = "0x4D62330", VA = "0x4D62330")]
	public static string SplitWords(this string s, char separator)
	{
		return null;
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x4D5EEF0", Offset = "0x4D5EEF0", VA = "0x4D5EEF0")]
	public static string RemoveConsecutiveCharacters(this string s, char c)
	{
		return null;
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x4D5ED50", Offset = "0x4D5ED50", VA = "0x4D5ED50")]
	public static string ReplaceMultiple(this string s, HashSet<char> haystacks, char replacement)
	{
		return null;
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x4D62940", Offset = "0x4D62940", VA = "0x4D62940")]
	public static string Truncate(this string value, int maxLength, string suffix = "...")
	{
		return null;
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x4D62980", Offset = "0x4D62980", VA = "0x4D62980")]
	public static string TrimEnd(this string source, string value)
	{
		return null;
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x4D629D0", Offset = "0x4D629D0", VA = "0x4D629D0")]
	public static string TrimStart(this string source, string value)
	{
		return null;
	}

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x4D62A20", Offset = "0x4D62A20", VA = "0x4D62A20")]
	public static string FirstCharacterToLower(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x4D62260", Offset = "0x4D62260", VA = "0x4D62260")]
	public static string FirstCharacterToUpper(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x4D62AF0", Offset = "0x4D62AF0", VA = "0x4D62AF0")]
	public static string PartBefore(this string s, char c)
	{
		return null;
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x4D62BA0", Offset = "0x4D62BA0", VA = "0x4D62BA0")]
	public static string PartAfter(this string s, char c)
	{
		return null;
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x4D62C50", Offset = "0x4D62C50", VA = "0x4D62C50")]
	public static void PartsAround(this string s, char c, out string before, out string after)
	{
	}

	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x4D62D50", Offset = "0x4D62D50", VA = "0x4D62D50")]
	public static bool EndsWith(this string s, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x4D62DF0", Offset = "0x4D62DF0", VA = "0x4D62DF0")]
	public static bool StartsWith(this string s, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x4D62E80", Offset = "0x4D62E80", VA = "0x4D62E80")]
	public static bool Contains(this string s, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x4D62F30", Offset = "0x4D62F30", VA = "0x4D62F30")]
	public static string NullIfEmpty(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x4D62F70", Offset = "0x4D62F70", VA = "0x4D62F70")]
	public static string ToBinaryString(this int value)
	{
		return null;
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x4D62FE0", Offset = "0x4D62FE0", VA = "0x4D62FE0")]
	public static string ToBinaryString(this long value)
	{
		return null;
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x4D63050", Offset = "0x4D63050", VA = "0x4D63050")]
	public static string ToBinaryString(this Enum value)
	{
		return null;
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x4D630C0", Offset = "0x4D630C0", VA = "0x4D630C0")]
	public static int CountIndices(this string s, char c)
	{
		return default(int);
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x4D63120", Offset = "0x4D63120", VA = "0x4D63120")]
	public static bool IsGuid(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x4D631B0", Offset = "0x4D631B0", VA = "0x4D631B0")]
	public static string PathEllipsis(string s, int maxLength)
	{
		return null;
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x4D63380", Offset = "0x4D63380", VA = "0x4D63380")]
	public static string ToHexString(this byte[] bytes)
	{
		return null;
	}
}
