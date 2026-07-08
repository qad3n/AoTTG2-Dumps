using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x200002A")]
public static class GisketchSearchService
{
	[Token(Token = "0x200002B")]
	private readonly struct ScoredEntry
	{
		[Token(Token = "0x40000D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly GisketchSearchEntry Entry;

		[Token(Token = "0x40000D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly int Score;

		[Token(Token = "0x600016E")]
		[Address(RVA = "0x39E0E60", Offset = "0x39E0E60", VA = "0x39E0E60")]
		public ScoredEntry(GisketchSearchEntry entry, int score)
		{
		}
	}

	[Token(Token = "0x200002D")]
	[CompilerGenerated]
	private sealed class _003CEmpty_003Ed__5 : IEnumerable<GisketchSearchEntry>, IEnumerable, IEnumerator<GisketchSearchEntry>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private GisketchSearchEntry _003C_003E2__current;

		[Token(Token = "0x40000DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000023")]
		private GisketchSearchEntry System_002ECollections_002EGeneric_002EIEnumerator_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002ECurrent
		{
			[Token(Token = "0x6000175")]
			[Address(RVA = "0x39E2B20", Offset = "0x39E2B20", VA = "0x39E2B20", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000024")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000177")]
			[Address(RVA = "0x39E2B70", Offset = "0x39E2B70", VA = "0x39E2B70", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000172")]
		[Address(RVA = "0x39E24E0", Offset = "0x39E24E0", VA = "0x39E24E0")]
		[DebuggerHidden]
		public _003CEmpty_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000173")]
		[Address(RVA = "0x39E2AF0", Offset = "0x39E2AF0", VA = "0x39E2AF0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000174")]
		[Address(RVA = "0x39E2B00", Offset = "0x39E2B00", VA = "0x39E2B00", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000176")]
		[Address(RVA = "0x39E2B30", Offset = "0x39E2B30", VA = "0x39E2B30", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000178")]
		[Address(RVA = "0x39E2B80", Offset = "0x39E2B80", VA = "0x39E2B80", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GisketchSearchEntry> System_002ECollections_002EGeneric_002EIEnumerable_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000179")]
		[Address(RVA = "0x39E2C00", Offset = "0x39E2C00", VA = "0x39E2C00", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x39E05E0", Offset = "0x39E05E0", VA = "0x39E05E0")]
	public static List<GisketchSearchEntry> Query(IEnumerable<GisketchSearchEntry> entries, string query)
	{
		return null;
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x39E0DF0", Offset = "0x39E0DF0", VA = "0x39E0DF0")]
	public static GisketchSearchMatch Match(GisketchSearchEntry entry, string query)
	{
		return default(GisketchSearchMatch);
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x39E0E80", Offset = "0x39E0E80", VA = "0x39E0E80")]
	public static GisketchSearchMatch Match(GisketchSearchEntry entry, string query, string displayTitle)
	{
		return default(GisketchSearchMatch);
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x39E1E80", Offset = "0x39E1E80", VA = "0x39E1E80")]
	public static string Markup(GisketchSearchEntry entry, string query, bool active, string matchHex)
	{
		return null;
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x39E1EF0", Offset = "0x39E1EF0", VA = "0x39E1EF0")]
	public static string Markup(GisketchSearchEntry entry, string query, bool active, string matchHex, string displayTitle, [Optional] string normalHex)
	{
		return null;
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x39E0DA0", Offset = "0x39E0DA0", VA = "0x39E0DA0")]
	[IteratorStateMachine(typeof(_003CEmpty_003Ed__5))]
	private static IEnumerable<GisketchSearchEntry> Empty()
	{
		return null;
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x39E17E0", Offset = "0x39E17E0", VA = "0x39E17E0")]
	private static GisketchSearchMatch Visible(string display, string needle, int score)
	{
		return default(GisketchSearchMatch);
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x39E2200", Offset = "0x39E2200", VA = "0x39E2200")]
	private static string MarkRange(string text, GisketchSearchMatch match, bool active, string matchHex, string normalHex)
	{
		return null;
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x39E2510", Offset = "0x39E2510", VA = "0x39E2510")]
	private static string MarkIndices(string text, int[] indices, string matchHex, string normalHex)
	{
		return null;
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x39E28D0", Offset = "0x39E28D0", VA = "0x39E28D0")]
	private static string Wrap(string text, string matchHex)
	{
		return null;
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x39E20C0", Offset = "0x39E20C0", VA = "0x39E20C0")]
	private static string WrapNormal(string text, string normalHex)
	{
		return null;
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x39E2040", Offset = "0x39E2040", VA = "0x39E2040")]
	private static string Escape(string text)
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x39E1740", Offset = "0x39E1740", VA = "0x39E1740")]
	private static string Lower(string value)
	{
		return null;
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x39E1890", Offset = "0x39E1890", VA = "0x39E1890")]
	private static bool FindToken(string haystack, string needle, out int start, out int length)
	{
		return default(bool);
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x39E1A80", Offset = "0x39E1A80", VA = "0x39E1A80")]
	private static bool FindInitials(string haystack, string needle, out int start, out int length)
	{
		return default(bool);
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x39E1C10", Offset = "0x39E1C10", VA = "0x39E1C10")]
	private static bool FindCompact(string haystack, string needle, out int start, out int length, out int[] indices)
	{
		return default(bool);
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x39E29E0", Offset = "0x39E29E0", VA = "0x39E29E0")]
	private static bool MatchesAt(string haystack, string needle, int start)
	{
		return default(bool);
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x39E1A10", Offset = "0x39E1A10", VA = "0x39E1A10")]
	private static string Slice(string value, int start, int length)
	{
		return null;
	}
}
