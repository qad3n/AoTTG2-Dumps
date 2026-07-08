using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x2000028")]
public static class GisketchSearchResults
{
	[Token(Token = "0x2000029")]
	[CompilerGenerated]
	private sealed class _003CEmpty_003Ed__6 : IEnumerable<GisketchSearchEntry>, IEnumerable, IEnumerator<GisketchSearchEntry>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000D5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000D6")]
		[FieldOffset(Offset = "0x18")]
		private GisketchSearchEntry _003C_003E2__current;

		[Token(Token = "0x40000D7")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000021")]
		private GisketchSearchEntry System_002ECollections_002EGeneric_002EIEnumerator_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002ECurrent
		{
			[Token(Token = "0x6000157")]
			[Address(RVA = "0x39E0480", Offset = "0x39E0480", VA = "0x39E0480", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000022")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000159")]
			[Address(RVA = "0x39E04D0", Offset = "0x39E04D0", VA = "0x39E04D0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000154")]
		[Address(RVA = "0x39E0420", Offset = "0x39E0420", VA = "0x39E0420")]
		[DebuggerHidden]
		public _003CEmpty_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000155")]
		[Address(RVA = "0x39E0450", Offset = "0x39E0450", VA = "0x39E0450", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000156")]
		[Address(RVA = "0x39E0460", Offset = "0x39E0460", VA = "0x39E0460", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000158")]
		[Address(RVA = "0x39E0490", Offset = "0x39E0490", VA = "0x39E0490", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600015A")]
		[Address(RVA = "0x39E04E0", Offset = "0x39E04E0", VA = "0x39E04E0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GisketchSearchEntry> System_002ECollections_002EGeneric_002EIEnumerable_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600015B")]
		[Address(RVA = "0x39E0560", Offset = "0x39E0560", VA = "0x39E0560", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x39DEBB0", Offset = "0x39DEBB0", VA = "0x39DEBB0")]
	public static List<GisketchSearchEntry> Merge(IEnumerable<GisketchSearchEntry> manifest, IEnumerable<GisketchSearchEntry> live, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x39DFB70", Offset = "0x39DFB70", VA = "0x39DFB70")]
	private static HashSet<string> ScreenTitles(IEnumerable<GisketchSearchEntry> entries)
	{
		return null;
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x39E0240", Offset = "0x39E0240", VA = "0x39E0240")]
	private static bool IsDuplicateMainMenuScreenButton(GisketchSearchEntry entry, string activeScreenId, HashSet<string> screenTitles)
	{
		return default(bool);
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x39E03D0", Offset = "0x39E03D0", VA = "0x39E03D0")]
	private static bool IsActive(GisketchSearchEntry entry, string activeScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x39E0310", Offset = "0x39E0310", VA = "0x39E0310")]
	private static bool IsActiveControl(GisketchSearchEntry entry, string activeScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x39E00C0", Offset = "0x39E00C0", VA = "0x39E00C0")]
	private static bool IsLiveUsable(GisketchSearchEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x39E0070", Offset = "0x39E0070", VA = "0x39E0070")]
	[IteratorStateMachine(typeof(_003CEmpty_003Ed__6))]
	private static IEnumerable<GisketchSearchEntry> Empty()
	{
		return null;
	}
}
