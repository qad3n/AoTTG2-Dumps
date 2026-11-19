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

[Token(Token = "0x200003B")]
public static class GisketchSearchResults
{
	[Token(Token = "0x200003C")]
	[CompilerGenerated]
	private sealed class _003CEmpty_003Ed__7 : IEnumerable<GisketchSearchEntry>, IEnumerable, IEnumerator<GisketchSearchEntry>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400012D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400012E")]
		[FieldOffset(Offset = "0x18")]
		private GisketchSearchEntry _003C_003E2__current;

		[Token(Token = "0x400012F")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000033")]
		private GisketchSearchEntry System_002ECollections_002EGeneric_002EIEnumerator_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002ECurrent
		{
			[Token(Token = "0x6000227")]
			[Address(RVA = "0x524B2E0", Offset = "0x524A2E0", VA = "0x524B2E0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000034")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000229")]
			[Address(RVA = "0x524B330", Offset = "0x524A330", VA = "0x524B330", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000224")]
		[Address(RVA = "0x524B280", Offset = "0x524A280", VA = "0x524B280")]
		[DebuggerHidden]
		public _003CEmpty_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000225")]
		[Address(RVA = "0x524B2B0", Offset = "0x524A2B0", VA = "0x524B2B0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000226")]
		[Address(RVA = "0x524B2C0", Offset = "0x524A2C0", VA = "0x524B2C0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000228")]
		[Address(RVA = "0x524B2F0", Offset = "0x524A2F0", VA = "0x524B2F0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600022A")]
		[Address(RVA = "0x524B340", Offset = "0x524A340", VA = "0x524B340", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GisketchSearchEntry> System_002ECollections_002EGeneric_002EIEnumerable_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600022B")]
		[Address(RVA = "0x524B3C0", Offset = "0x524A3C0", VA = "0x524B3C0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x5249CF0", Offset = "0x5248CF0", VA = "0x5249CF0")]
	public static List<GisketchSearchEntry> Merge(IEnumerable<GisketchSearchEntry> manifest, IEnumerable<GisketchSearchEntry> live, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x524A950", Offset = "0x5249950", VA = "0x524A950")]
	private static HashSet<string> ScreenTitles(IEnumerable<GisketchSearchEntry> entries)
	{
		return null;
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x524AF90", Offset = "0x5249F90", VA = "0x524AF90")]
	private static bool IsDuplicateMainMenuScreenButton(GisketchSearchEntry entry, string activeScreenId, HashSet<string> screenTitles)
	{
		return default(bool);
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x524B0C0", Offset = "0x524A0C0", VA = "0x524B0C0")]
	private static bool IsActive(GisketchSearchEntry entry, string activeScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x524B060", Offset = "0x524A060", VA = "0x524B060")]
	private static bool IsActiveInteractiveControl(GisketchSearchEntry entry, string activeScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x524B110", Offset = "0x524A110", VA = "0x524B110")]
	private static bool IsInteractiveControlKind(string kind)
	{
		return default(bool);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x524AE10", Offset = "0x5249E10", VA = "0x524AE10")]
	private static bool IsLiveUsable(GisketchSearchEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x524ADC0", Offset = "0x5249DC0", VA = "0x524ADC0")]
	[IteratorStateMachine(typeof(_003CEmpty_003Ed__7))]
	private static IEnumerable<GisketchSearchEntry> Empty()
	{
		return null;
	}
}
