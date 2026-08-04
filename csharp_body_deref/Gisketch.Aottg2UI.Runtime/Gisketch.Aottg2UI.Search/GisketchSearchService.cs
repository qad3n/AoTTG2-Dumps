// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Search.GisketchSearchService
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x200002B")]
public static class GisketchSearchService
{
	[Token(Token = "0x200002C")]
	private readonly struct ScoredEntry
	{
		[Token(Token = "0x40000DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly GisketchSearchEntry Entry;

		[Token(Token = "0x40000DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly int Score;

		[Token(Token = "0x6000176")]
		[Address(RVA = "0x3A4B4E0", Offset = "0x3A4B4E0", VA = "0x3A4B4E0")]
		public ScoredEntry(GisketchSearchEntry entry, int score)
		{
		}
	}

	[Token(Token = "0x200002E")]
	[CompilerGenerated]
	private sealed class _003CEmpty_003Ed__5 : IEnumerable<GisketchSearchEntry>, IEnumerable, IEnumerator<GisketchSearchEntry>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private GisketchSearchEntry _003C_003E2__current;

		[Token(Token = "0x40000E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000023")]
		private GisketchSearchEntry System_002ECollections_002EGeneric_002EIEnumerator_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002ECurrent
		{
			[Token(Token = "0x600017D")]
			[Address(RVA = "0x3A4D1A0", Offset = "0x3A4D1A0", VA = "0x3A4D1A0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000024")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600017F")]
			[Address(RVA = "0x3A4D1F0", Offset = "0x3A4D1F0", VA = "0x3A4D1F0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600017A")]
		[Address(RVA = "0x3A4CB60", Offset = "0x3A4CB60", VA = "0x3A4CB60")]
		[DebuggerHidden]
		public _003CEmpty_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600017B")]
		[Address(RVA = "0x3A4D170", Offset = "0x3A4D170", VA = "0x3A4D170", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600017C")]
		[Address(RVA = "0x3A4D180", Offset = "0x3A4D180", VA = "0x3A4D180", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600017E")]
		[Address(RVA = "0x3A4D1B0", Offset = "0x3A4D1B0", VA = "0x3A4D1B0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000180")]
		[Address(RVA = "0x3A4D200", Offset = "0x3A4D200", VA = "0x3A4D200", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GisketchSearchEntry> System_002ECollections_002EGeneric_002EIEnumerable_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000181")]
		[Address(RVA = "0x3A4D280", Offset = "0x3A4D280", VA = "0x3A4D280", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x3A4AC60", Offset = "0x3A4AC60", VA = "0x3A4AC60")]
	public static List<GisketchSearchEntry> Query(IEnumerable<GisketchSearchEntry> entries, string query)
	{
		return null;
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x3A4B470", Offset = "0x3A4B470", VA = "0x3A4B470")]
	public static GisketchSearchMatch Match(GisketchSearchEntry entry, string query)
	{
		return default(GisketchSearchMatch);
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x3A4B500", Offset = "0x3A4B500", VA = "0x3A4B500")]
	public static GisketchSearchMatch Match(GisketchSearchEntry entry, string query, string displayTitle)
	{
		return default(GisketchSearchMatch);
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x3A4C500", Offset = "0x3A4C500", VA = "0x3A4C500")]
	public static string Markup(GisketchSearchEntry entry, string query, bool active, string matchHex)
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x3A4C570", Offset = "0x3A4C570", VA = "0x3A4C570")]
	public static string Markup(GisketchSearchEntry entry, string query, bool active, string matchHex, string displayTitle, [Optional] string normalHex)
	{
		return null;
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x3A4B420", Offset = "0x3A4B420", VA = "0x3A4B420")]
	[IteratorStateMachine(typeof(_003CEmpty_003Ed__5))]
	private static IEnumerable<GisketchSearchEntry> Empty()
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x3A4BE60", Offset = "0x3A4BE60", VA = "0x3A4BE60")]
	private static GisketchSearchMatch Visible(string display, string needle, int score)
	{
		return default(GisketchSearchMatch);
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x3A4C880", Offset = "0x3A4C880", VA = "0x3A4C880")]
	private static string MarkRange(string text, GisketchSearchMatch match, bool active, string matchHex, string normalHex)
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x3A4CB90", Offset = "0x3A4CB90", VA = "0x3A4CB90")]
	private static string MarkIndices(string text, int[] indices, string matchHex, string normalHex)
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x3A4CF50", Offset = "0x3A4CF50", VA = "0x3A4CF50")]
	private static string Wrap(string text, string matchHex)
	{
		return null;
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x3A4C740", Offset = "0x3A4C740", VA = "0x3A4C740")]
	private static string WrapNormal(string text, string normalHex)
	{
		return null;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x3A4C6C0", Offset = "0x3A4C6C0", VA = "0x3A4C6C0")]
	private static string Escape(string text)
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x3A4BDC0", Offset = "0x3A4BDC0", VA = "0x3A4BDC0")]
	private static string Lower(string value)
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x3A4BF10", Offset = "0x3A4BF10", VA = "0x3A4BF10")]
	private static bool FindToken(string haystack, string needle, out int start, out int length)
	{
		return default(bool);
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x3A4C100", Offset = "0x3A4C100", VA = "0x3A4C100")]
	private static bool FindInitials(string haystack, string needle, out int start, out int length)
	{
		return default(bool);
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x3A4C290", Offset = "0x3A4C290", VA = "0x3A4C290")]
	private static bool FindCompact(string haystack, string needle, out int start, out int length, out int[] indices)
	{
		return default(bool);
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x3A4D060", Offset = "0x3A4D060", VA = "0x3A4D060")]
	private static bool MatchesAt(string haystack, string needle, int start)
	{
		return default(bool);
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x3A4C090", Offset = "0x3A4C090", VA = "0x3A4C090")]
	private static string Slice(string value, int start, int length)
	{
		return null;
	}
}
