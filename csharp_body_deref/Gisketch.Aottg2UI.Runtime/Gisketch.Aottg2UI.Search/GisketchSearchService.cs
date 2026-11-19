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

[Token(Token = "0x200003D")]
public static class GisketchSearchService
{
	[Token(Token = "0x200003E")]
	private readonly struct ScoredEntry
	{
		[Token(Token = "0x4000130")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly GisketchSearchEntry Entry;

		[Token(Token = "0x4000131")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly int Score;

		[Token(Token = "0x600023E")]
		[Address(RVA = "0x524BC40", Offset = "0x524AC40", VA = "0x524BC40")]
		public ScoredEntry(GisketchSearchEntry entry, int score)
		{
		}
	}

	[Token(Token = "0x2000040")]
	[CompilerGenerated]
	private sealed class _003CEmpty_003Ed__5 : IEnumerable<GisketchSearchEntry>, IEnumerable, IEnumerator<GisketchSearchEntry>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000134")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000135")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private GisketchSearchEntry _003C_003E2__current;

		[Token(Token = "0x4000136")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000035")]
		private GisketchSearchEntry System_002ECollections_002EGeneric_002EIEnumerator_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002ECurrent
		{
			[Token(Token = "0x6000245")]
			[Address(RVA = "0x524D590", Offset = "0x524C590", VA = "0x524D590", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000036")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000247")]
			[Address(RVA = "0x524D5E0", Offset = "0x524C5E0", VA = "0x524D5E0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000242")]
		[Address(RVA = "0x524D050", Offset = "0x524C050", VA = "0x524D050")]
		[DebuggerHidden]
		public _003CEmpty_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000243")]
		[Address(RVA = "0x524D560", Offset = "0x524C560", VA = "0x524D560", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000244")]
		[Address(RVA = "0x524D570", Offset = "0x524C570", VA = "0x524D570", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000246")]
		[Address(RVA = "0x524D5A0", Offset = "0x524C5A0", VA = "0x524D5A0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000248")]
		[Address(RVA = "0x524D5F0", Offset = "0x524C5F0", VA = "0x524D5F0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GisketchSearchEntry> System_002ECollections_002EGeneric_002EIEnumerable_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000249")]
		[Address(RVA = "0x524D670", Offset = "0x524C670", VA = "0x524D670", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x524B440", Offset = "0x524A440", VA = "0x524B440")]
	public static List<GisketchSearchEntry> Query(IEnumerable<GisketchSearchEntry> entries, string query)
	{
		return null;
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x524BBD0", Offset = "0x524ABD0", VA = "0x524BBD0")]
	public static GisketchSearchMatch Match(GisketchSearchEntry entry, string query)
	{
		return default(GisketchSearchMatch);
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x524BC60", Offset = "0x524AC60", VA = "0x524BC60")]
	public static GisketchSearchMatch Match(GisketchSearchEntry entry, string query, string displayTitle)
	{
		return default(GisketchSearchMatch);
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x524CA10", Offset = "0x524BA10", VA = "0x524CA10")]
	public static string Markup(GisketchSearchEntry entry, string query, bool active, string matchHex)
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x524CA70", Offset = "0x524BA70", VA = "0x524CA70")]
	public static string Markup(GisketchSearchEntry entry, string query, bool active, string matchHex, string displayTitle, [Optional] string normalHex)
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x524BB80", Offset = "0x524AB80", VA = "0x524BB80")]
	[IteratorStateMachine(typeof(_003CEmpty_003Ed__5))]
	private static IEnumerable<GisketchSearchEntry> Empty()
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x524C3A0", Offset = "0x524B3A0", VA = "0x524C3A0")]
	private static GisketchSearchMatch Visible(string display, string needle, int score)
	{
		return default(GisketchSearchMatch);
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x524CD70", Offset = "0x524BD70", VA = "0x524CD70")]
	private static string MarkRange(string text, GisketchSearchMatch match, bool active, string matchHex, string normalHex)
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x524D080", Offset = "0x524C080", VA = "0x524D080")]
	private static string MarkIndices(string text, int[] indices, string matchHex, string normalHex)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x524D330", Offset = "0x524C330", VA = "0x524D330")]
	private static string Wrap(string text, string matchHex)
	{
		return null;
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x524CC30", Offset = "0x524BC30", VA = "0x524CC30")]
	private static string WrapNormal(string text, string normalHex)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x524CBB0", Offset = "0x524BBB0", VA = "0x524CBB0")]
	private static string Escape(string text)
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x524C300", Offset = "0x524B300", VA = "0x524C300")]
	private static string Lower(string value)
	{
		return null;
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x524C450", Offset = "0x524B450", VA = "0x524C450")]
	private static bool FindToken(string haystack, string needle, out int start, out int length)
	{
		return default(bool);
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x524C640", Offset = "0x524B640", VA = "0x524C640")]
	private static bool FindInitials(string haystack, string needle, out int start, out int length)
	{
		return default(bool);
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x524C7B0", Offset = "0x524B7B0", VA = "0x524C7B0")]
	private static bool FindCompact(string haystack, string needle, out int start, out int length, out int[] indices)
	{
		return default(bool);
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x524D450", Offset = "0x524C450", VA = "0x524D450")]
	private static bool MatchesAt(string haystack, string needle, int start)
	{
		return default(bool);
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x524C5D0", Offset = "0x524B5D0", VA = "0x524C5D0")]
	private static string Slice(string value, int start, int length)
	{
		return null;
	}
}
