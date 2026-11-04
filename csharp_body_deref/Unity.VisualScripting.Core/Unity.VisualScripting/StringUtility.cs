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
			[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "6")]
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
			[Address(RVA = "0x2424CF0", Offset = "0x24232F0", VA = "0x182424CF0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010DB")]
		[Address(RVA = "0x8E81F0", Offset = "0x8E67F0", VA = "0x1808E81F0")]
		[DebuggerHidden]
		public _003CAllIndexesOf_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60010DC")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60010DD")]
		[Address(RVA = "0x2E591A0", Offset = "0x2E577A0", VA = "0x182E591A0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60010DF")]
		[Address(RVA = "0x2E592F0", Offset = "0x2E578F0", VA = "0x182E592F0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60010E1")]
		[Address(RVA = "0x2E59240", Offset = "0x2E57840", VA = "0x182E59240", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60010E2")]
		[Address(RVA = "0x2E59240", Offset = "0x2E57840", VA = "0x182E59240", Slot = "5")]
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
	[Address(RVA = "0x2E57C90", Offset = "0x2E56290", VA = "0x182E57C90")]
	public static bool IsNullOrWhiteSpace(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x2E57600", Offset = "0x2E55C00", VA = "0x182E57600")]
	public static string FallbackEmpty(string s, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x2E57630", Offset = "0x2E55C30", VA = "0x182E57630")]
	public static string FallbackWhitespace(string s, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x2E573D0", Offset = "0x2E559D0", VA = "0x182E573D0")]
	public static void AppendLineFormat(this StringBuilder sb, string format, params object[] args)
	{
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x2E58EB0", Offset = "0x2E574B0", VA = "0x182E58EB0")]
	public static string ToSeparatedString(this IEnumerable enumerable, string separator)
	{
		return null;
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x2E58D80", Offset = "0x2E57380", VA = "0x182E58D80")]
	public static string ToCommaSeparatedString(this IEnumerable enumerable)
	{
		return null;
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x2E58E50", Offset = "0x2E57450", VA = "0x182E58E50")]
	public static string ToLineSeparatedString(this IEnumerable enumerable)
	{
		return null;
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x2E57400", Offset = "0x2E55A00", VA = "0x182E57400")]
	public static bool ContainsInsensitive(this string haystack, string needle)
	{
		return default(bool);
	}

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x2E57340", Offset = "0x2E55940", VA = "0x182E57340")]
	[IteratorStateMachine(typeof(_003CAllIndexesOf_003Ed__8))]
	public static IEnumerable<int> AllIndexesOf(this string haystack, string needle)
	{
		return null;
	}

	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x2E578C0", Offset = "0x2E55EC0", VA = "0x182E578C0")]
	public static string Filter(this string s, bool letters = true, bool numbers = true, bool whitespace = true, bool symbols = true, bool punctuation = true)
	{
		return null;
	}

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x2E576C0", Offset = "0x2E55CC0", VA = "0x182E576C0")]
	public static string FilterReplace(this string s, char replacement, bool merge, bool letters = true, bool numbers = true, bool whitespace = true, bool symbols = true, bool punctuation = true)
	{
		return null;
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x2E58650", Offset = "0x2E56C50", VA = "0x182E58650")]
	public static string Prettify(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x2E58170", Offset = "0x2E56770", VA = "0x182E58170")]
	public static bool IsWordDelimiter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x2E57E80", Offset = "0x2E56480", VA = "0x182E57E80")]
	public static bool IsWordBeginning(char? previous, char current, char? next)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x2E57CD0", Offset = "0x2E562D0", VA = "0x182E57CD0")]
	public static bool IsWordBeginning(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x2E58A80", Offset = "0x2E57080", VA = "0x182E58A80")]
	public static string SplitWords(this string s, char separator)
	{
		return null;
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x2E58840", Offset = "0x2E56E40", VA = "0x182E58840")]
	public static string RemoveConsecutiveCharacters(this string s, char c)
	{
		return null;
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x2E58920", Offset = "0x2E56F20", VA = "0x182E58920")]
	public static string ReplaceMultiple(this string s, HashSet<char> haystacks, char replacement)
	{
		return null;
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x2E590C0", Offset = "0x2E576C0", VA = "0x182E590C0")]
	public static string Truncate(this string value, int maxLength, string suffix = "...")
	{
		return null;
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x2E59000", Offset = "0x2E57600", VA = "0x182E59000")]
	public static string TrimEnd(this string source, string value)
	{
		return null;
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x2E59060", Offset = "0x2E57660", VA = "0x182E59060")]
	public static string TrimStart(this string source, string value)
	{
		return null;
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x2E57A80", Offset = "0x2E56080", VA = "0x182E57A80")]
	public static string FirstCharacterToLower(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x2E57B50", Offset = "0x2E56150", VA = "0x182E57B50")]
	public static string FirstCharacterToUpper(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x2E582F0", Offset = "0x2E568F0", VA = "0x182E582F0")]
	public static string PartBefore(this string s, char c)
	{
		return null;
	}

	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x2E58230", Offset = "0x2E56830", VA = "0x182E58230")]
	public static string PartAfter(this string s, char c)
	{
		return null;
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x2E583B0", Offset = "0x2E569B0", VA = "0x182E583B0")]
	public static void PartsAround(this string s, char c, out string before, out string after)
	{
	}

	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x2E57560", Offset = "0x2E55B60", VA = "0x182E57560")]
	public static bool EndsWith(this string s, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010CD")]
	[Address(RVA = "0x2E58B80", Offset = "0x2E57180", VA = "0x182E58B80")]
	public static bool StartsWith(this string s, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x2E57430", Offset = "0x2E55A30", VA = "0x182E57430")]
	public static bool Contains(this string s, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x2E581F0", Offset = "0x2E567F0", VA = "0x182E581F0")]
	public static string NullIfEmpty(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x2E58C90", Offset = "0x2E57290", VA = "0x182E58C90")]
	public static string ToBinaryString(this int value)
	{
		return null;
	}

	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x2E58C20", Offset = "0x2E57220", VA = "0x182E58C20")]
	public static string ToBinaryString(this long value)
	{
		return null;
	}

	[Token(Token = "0x60010D2")]
	[Address(RVA = "0x2E58D00", Offset = "0x2E57300", VA = "0x182E58D00")]
	public static string ToBinaryString(this Enum value)
	{
		return null;
	}

	[Token(Token = "0x60010D3")]
	[Address(RVA = "0x2E57500", Offset = "0x2E55B00", VA = "0x182E57500")]
	public static int CountIndices(this string s, char c)
	{
		return default(int);
	}

	[Token(Token = "0x60010D4")]
	[Address(RVA = "0x2E57C20", Offset = "0x2E56220", VA = "0x182E57C20")]
	public static bool IsGuid(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D5")]
	[Address(RVA = "0x2E584B0", Offset = "0x2E56AB0", VA = "0x182E584B0")]
	public static string PathEllipsis(string s, int maxLength)
	{
		return null;
	}

	[Token(Token = "0x60010D6")]
	[Address(RVA = "0x2E58DE0", Offset = "0x2E573E0", VA = "0x182E58DE0")]
	public static string ToHexString(this byte[] bytes)
	{
		return null;
	}
}
