// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Search.GisketchSearchResults
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x2000029")]
public static class GisketchSearchResults
{
	[Token(Token = "0x200002A")]
	[CompilerGenerated]
	private sealed class _003CEmpty_003Ed__6 : IEnumerable<GisketchSearchEntry>, IEnumerable, IEnumerator<GisketchSearchEntry>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000DB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000DC")]
		[FieldOffset(Offset = "0x18")]
		private GisketchSearchEntry _003C_003E2__current;

		[Token(Token = "0x40000DD")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000021")]
		private GisketchSearchEntry System_002ECollections_002EGeneric_002EIEnumerator_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002ECurrent
		{
			[Token(Token = "0x600015F")]
			[Address(RVA = "0x3A4AB00", Offset = "0x3A4AB00", VA = "0x3A4AB00", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000022")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000161")]
			[Address(RVA = "0x3A4AB50", Offset = "0x3A4AB50", VA = "0x3A4AB50", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600015C")]
		[Address(RVA = "0x3A4AAA0", Offset = "0x3A4AAA0", VA = "0x3A4AAA0")]
		[DebuggerHidden]
		public _003CEmpty_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600015D")]
		[Address(RVA = "0x3A4AAD0", Offset = "0x3A4AAD0", VA = "0x3A4AAD0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600015E")]
		[Address(RVA = "0x3A4AAE0", Offset = "0x3A4AAE0", VA = "0x3A4AAE0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000160")]
		[Address(RVA = "0x3A4AB10", Offset = "0x3A4AB10", VA = "0x3A4AB10", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000162")]
		[Address(RVA = "0x3A4AB60", Offset = "0x3A4AB60", VA = "0x3A4AB60", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GisketchSearchEntry> System_002ECollections_002EGeneric_002EIEnumerable_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000163")]
		[Address(RVA = "0x3A4ABE0", Offset = "0x3A4ABE0", VA = "0x3A4ABE0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x3A49230", Offset = "0x3A49230", VA = "0x3A49230")]
	public static List<GisketchSearchEntry> Merge(IEnumerable<GisketchSearchEntry> manifest, IEnumerable<GisketchSearchEntry> live, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x3A4A1F0", Offset = "0x3A4A1F0", VA = "0x3A4A1F0")]
	private static HashSet<string> ScreenTitles(IEnumerable<GisketchSearchEntry> entries)
	{
		return null;
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x3A4A8C0", Offset = "0x3A4A8C0", VA = "0x3A4A8C0")]
	private static bool IsDuplicateMainMenuScreenButton(GisketchSearchEntry entry, string activeScreenId, HashSet<string> screenTitles)
	{
		return default(bool);
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x3A4AA50", Offset = "0x3A4AA50", VA = "0x3A4AA50")]
	private static bool IsActive(GisketchSearchEntry entry, string activeScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x3A4A990", Offset = "0x3A4A990", VA = "0x3A4A990")]
	private static bool IsActiveControl(GisketchSearchEntry entry, string activeScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x3A4A740", Offset = "0x3A4A740", VA = "0x3A4A740")]
	private static bool IsLiveUsable(GisketchSearchEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x3A4A6F0", Offset = "0x3A4A6F0", VA = "0x3A4A6F0")]
	[IteratorStateMachine(typeof(_003CEmpty_003Ed__6))]
	private static IEnumerable<GisketchSearchEntry> Empty()
	{
		return null;
	}
}
