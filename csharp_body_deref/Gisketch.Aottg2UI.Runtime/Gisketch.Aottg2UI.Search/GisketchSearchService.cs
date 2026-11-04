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

[Token(Token = "0x2000036")]
public static class GisketchSearchService
{
	[Token(Token = "0x2000037")]
	private readonly struct ScoredEntry
	{
		[Token(Token = "0x400010D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly GisketchSearchEntry Entry;

		[Token(Token = "0x400010E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly int Score;

		[Token(Token = "0x60001F3")]
		[Address(RVA = "0xCFB160", Offset = "0xCF9760", VA = "0x180CFB160")]
		public ScoredEntry(GisketchSearchEntry entry, int score)
		{
		}
	}

	[Token(Token = "0x2000039")]
	[CompilerGenerated]
	private sealed class _003CEmpty_003Ed__5 : IEnumerable<GisketchSearchEntry>, IEnumerable, IEnumerator<GisketchSearchEntry>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000111")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000112")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private GisketchSearchEntry _003C_003E2__current;

		[Token(Token = "0x4000113")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000035")]
		private GisketchSearchEntry System_002ECollections_002EGeneric_002EIEnumerator_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002ECurrent
		{
			[Token(Token = "0x60001FA")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000036")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001FC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CEmpty_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x18BE990", Offset = "0x18BCF90", VA = "0x1818BE990", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x18BEB00", Offset = "0x18BD100", VA = "0x1818BEB00", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x18BEA70", Offset = "0x18BD070", VA = "0x1818BEA70", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GisketchSearchEntry> System_002ECollections_002EGeneric_002EIEnumerable_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x18BEA70", Offset = "0x18BD070", VA = "0x1818BEA70", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x18B4C50", Offset = "0x18B3250", VA = "0x1818B4C50")]
	public static List<GisketchSearchEntry> Query(IEnumerable<GisketchSearchEntry> entries, string query)
	{
		return null;
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x18B4B70", Offset = "0x18B3170", VA = "0x1818B4B70")]
	public static GisketchSearchMatch Match(GisketchSearchEntry entry, string query)
	{
		return default(GisketchSearchMatch);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x18B3E50", Offset = "0x18B2450", VA = "0x1818B3E50")]
	public static GisketchSearchMatch Match(GisketchSearchEntry entry, string query, string displayTitle)
	{
		return default(GisketchSearchMatch);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x18B3BC0", Offset = "0x18B21C0", VA = "0x1818B3BC0")]
	public static string Markup(GisketchSearchEntry entry, string query, bool active, string matchHex)
	{
		return null;
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x18B3C30", Offset = "0x18B2230", VA = "0x1818B3C30")]
	public static string Markup(GisketchSearchEntry entry, string query, bool active, string matchHex, string displayTitle, [Optional] string normalHex)
	{
		return null;
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x18B3320", Offset = "0x18B1920", VA = "0x1818B3320")]
	[IteratorStateMachine(typeof(_003CEmpty_003Ed__5))]
	private static IEnumerable<GisketchSearchEntry> Empty()
	{
		return null;
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x18B5270", Offset = "0x18B3870", VA = "0x1818B5270")]
	private static GisketchSearchMatch Visible(string display, string needle, int score)
	{
		return default(GisketchSearchMatch);
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x18B3A00", Offset = "0x18B2000", VA = "0x1818B3A00")]
	private static string MarkRange(string text, GisketchSearchMatch match, bool active, string matchHex, string normalHex)
	{
		return null;
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x18B3840", Offset = "0x18B1E40", VA = "0x1818B3840")]
	private static string MarkIndices(string text, int[] indices, string matchHex, string normalHex)
	{
		return null;
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x18B5470", Offset = "0x18B3A70", VA = "0x1818B5470")]
	private static string Wrap(string text, string matchHex)
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x18B5320", Offset = "0x18B3920", VA = "0x1818B5320")]
	private static string WrapNormal(string text, string normalHex)
	{
		return null;
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x18B3380", Offset = "0x18B1980", VA = "0x1818B3380")]
	private static string Escape(string text)
	{
		return null;
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x18B37F0", Offset = "0x18B1DF0", VA = "0x1818B37F0")]
	private static string Lower(string value)
	{
		return null;
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x18B36E0", Offset = "0x18B1CE0", VA = "0x1818B36E0")]
	private static bool FindToken(string haystack, string needle, out int start, out int length)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x18B35A0", Offset = "0x18B1BA0", VA = "0x1818B35A0")]
	private static bool FindInitials(string haystack, string needle, out int start, out int length)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x18B3400", Offset = "0x18B1A00", VA = "0x1818B3400")]
	private static bool FindCompact(string haystack, string needle, out int start, out int length, out int[] indices)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x18B4BF0", Offset = "0x18B31F0", VA = "0x1818B4BF0")]
	private static bool MatchesAt(string haystack, string needle, int start)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x18B51F0", Offset = "0x18B37F0", VA = "0x1818B51F0")]
	private static string Slice(string value, int start, int length)
	{
		return null;
	}
}
