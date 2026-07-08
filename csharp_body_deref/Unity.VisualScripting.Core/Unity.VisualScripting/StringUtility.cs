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
			[Address(RVA = "0x4A3EA50", Offset = "0x4A3EA50", VA = "0x4A3EA50", Slot = "6")]
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
			[Address(RVA = "0x4A3EAA0", Offset = "0x4A3EAA0", VA = "0x4A3EAA0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010CE")]
		[Address(RVA = "0x4A3CD20", Offset = "0x4A3CD20", VA = "0x4A3CD20")]
		[DebuggerHidden]
		public _003CAllIndexesOf_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60010CF")]
		[Address(RVA = "0x4A3E990", Offset = "0x4A3E990", VA = "0x4A3E990", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60010D0")]
		[Address(RVA = "0x4A3E9A0", Offset = "0x4A3E9A0", VA = "0x4A3E9A0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60010D2")]
		[Address(RVA = "0x4A3EA60", Offset = "0x4A3EA60", VA = "0x4A3EA60", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60010D4")]
		[Address(RVA = "0x4A3EAC0", Offset = "0x4A3EAC0", VA = "0x4A3EAC0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60010D5")]
		[Address(RVA = "0x4A3EB70", Offset = "0x4A3EB70", VA = "0x4A3EB70", Slot = "5")]
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
	[Address(RVA = "0x4A3C920", Offset = "0x4A3C920", VA = "0x4A3C920")]
	public static bool IsNullOrWhiteSpace(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x60010A6")]
	[Address(RVA = "0x4A3C960", Offset = "0x4A3C960", VA = "0x4A3C960")]
	public static string FallbackEmpty(string s, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x4A3C990", Offset = "0x4A3C990", VA = "0x4A3C990")]
	public static string FallbackWhitespace(string s, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x4A3CA30", Offset = "0x4A3CA30", VA = "0x4A3CA30")]
	public static void AppendLineFormat(this StringBuilder sb, string format, params object[] args)
	{
	}

	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x4A3CA50", Offset = "0x4A3CA50", VA = "0x4A3CA50")]
	public static string ToSeparatedString(this IEnumerable enumerable, string separator)
	{
		return null;
	}

	[Token(Token = "0x60010AA")]
	[Address(RVA = "0x4A3CBB0", Offset = "0x4A3CBB0", VA = "0x4A3CBB0")]
	public static string ToCommaSeparatedString(this IEnumerable enumerable)
	{
		return null;
	}

	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x4A3CC10", Offset = "0x4A3CC10", VA = "0x4A3CC10")]
	public static string ToLineSeparatedString(this IEnumerable enumerable)
	{
		return null;
	}

	[Token(Token = "0x60010AC")]
	[Address(RVA = "0x4A3CC70", Offset = "0x4A3CC70", VA = "0x4A3CC70")]
	public static bool ContainsInsensitive(this string haystack, string needle)
	{
		return default(bool);
	}

	[Token(Token = "0x60010AD")]
	[Address(RVA = "0x4A3CC90", Offset = "0x4A3CC90", VA = "0x4A3CC90")]
	[IteratorStateMachine(typeof(_003CAllIndexesOf_003Ed__8))]
	public static IEnumerable<int> AllIndexesOf(this string haystack, string needle)
	{
		return null;
	}

	[Token(Token = "0x60010AE")]
	[Address(RVA = "0x4A3CD50", Offset = "0x4A3CD50", VA = "0x4A3CD50")]
	public static string Filter(this string s, bool letters = true, bool numbers = true, bool whitespace = true, bool symbols = true, bool punctuation = true)
	{
		return null;
	}

	[Token(Token = "0x60010AF")]
	[Address(RVA = "0x4A3D020", Offset = "0x4A3D020", VA = "0x4A3D020")]
	public static string FilterReplace(this string s, char replacement, bool merge, bool letters = true, bool numbers = true, bool whitespace = true, bool symbols = true, bool punctuation = true)
	{
		return null;
	}

	[Token(Token = "0x60010B0")]
	[Address(RVA = "0x4A3D3B0", Offset = "0x4A3D3B0", VA = "0x4A3D3B0")]
	public static string Prettify(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x4A3D5F0", Offset = "0x4A3D5F0", VA = "0x4A3D5F0")]
	public static bool IsWordDelimiter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x4A3D680", Offset = "0x4A3D680", VA = "0x4A3D680")]
	public static bool IsWordBeginning(char? previous, char current, char? next)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x4A3D930", Offset = "0x4A3D930", VA = "0x4A3D930")]
	public static bool IsWordBeginning(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x4A3D4D0", Offset = "0x4A3D4D0", VA = "0x4A3D4D0")]
	public static string SplitWords(this string s, char separator)
	{
		return null;
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x4A3DAE0", Offset = "0x4A3DAE0", VA = "0x4A3DAE0")]
	public static string RemoveConsecutiveCharacters(this string s, char c)
	{
		return null;
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x4A3DBE0", Offset = "0x4A3DBE0", VA = "0x4A3DBE0")]
	public static string ReplaceMultiple(this string s, HashSet<char> haystacks, char replacement)
	{
		return null;
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x4A3DD80", Offset = "0x4A3DD80", VA = "0x4A3DD80")]
	public static string Truncate(this string value, int maxLength, string suffix = "...")
	{
		return null;
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x4A3DDC0", Offset = "0x4A3DDC0", VA = "0x4A3DDC0")]
	public static string TrimEnd(this string source, string value)
	{
		return null;
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x4A3DE10", Offset = "0x4A3DE10", VA = "0x4A3DE10")]
	public static string TrimStart(this string source, string value)
	{
		return null;
	}

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x4A3DE60", Offset = "0x4A3DE60", VA = "0x4A3DE60")]
	public static string FirstCharacterToLower(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x4A3D400", Offset = "0x4A3D400", VA = "0x4A3D400")]
	public static string FirstCharacterToUpper(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x4A3DF30", Offset = "0x4A3DF30", VA = "0x4A3DF30")]
	public static string PartBefore(this string s, char c)
	{
		return null;
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x4A3DFE0", Offset = "0x4A3DFE0", VA = "0x4A3DFE0")]
	public static string PartAfter(this string s, char c)
	{
		return null;
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x4A3E090", Offset = "0x4A3E090", VA = "0x4A3E090")]
	public static void PartsAround(this string s, char c, out string before, out string after)
	{
	}

	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x4A3E190", Offset = "0x4A3E190", VA = "0x4A3E190")]
	public static bool EndsWith(this string s, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x4A3E230", Offset = "0x4A3E230", VA = "0x4A3E230")]
	public static bool StartsWith(this string s, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x4A3E2C0", Offset = "0x4A3E2C0", VA = "0x4A3E2C0")]
	public static bool Contains(this string s, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x4A3E370", Offset = "0x4A3E370", VA = "0x4A3E370")]
	public static string NullIfEmpty(this string s)
	{
		return null;
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x4A3E3B0", Offset = "0x4A3E3B0", VA = "0x4A3E3B0")]
	public static string ToBinaryString(this int value)
	{
		return null;
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x4A3E420", Offset = "0x4A3E420", VA = "0x4A3E420")]
	public static string ToBinaryString(this long value)
	{
		return null;
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x4A3E490", Offset = "0x4A3E490", VA = "0x4A3E490")]
	public static string ToBinaryString(this Enum value)
	{
		return null;
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x4A3E500", Offset = "0x4A3E500", VA = "0x4A3E500")]
	public static int CountIndices(this string s, char c)
	{
		return default(int);
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x4A3E560", Offset = "0x4A3E560", VA = "0x4A3E560")]
	public static bool IsGuid(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x4A3E5F0", Offset = "0x4A3E5F0", VA = "0x4A3E5F0")]
	public static string PathEllipsis(string s, int maxLength)
	{
		return null;
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x4A3E7C0", Offset = "0x4A3E7C0", VA = "0x4A3E7C0")]
	public static string ToHexString(this byte[] bytes)
	{
		return null;
	}
}
