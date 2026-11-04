// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Search.GisketchSearchResults
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000034")]
public static class GisketchSearchResults
{
	[Token(Token = "0x2000035")]
	[CompilerGenerated]
	private sealed class _003CEmpty_003Ed__7 : IEnumerable<GisketchSearchEntry>, IEnumerable, IEnumerator<GisketchSearchEntry>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400010A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400010B")]
		[FieldOffset(Offset = "0x18")]
		private GisketchSearchEntry _003C_003E2__current;

		[Token(Token = "0x400010C")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000033")]
		private GisketchSearchEntry System_002ECollections_002EGeneric_002EIEnumerator_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002ECurrent
		{
			[Token(Token = "0x60001DC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000034")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001DE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CEmpty_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x18BE990", Offset = "0x18BCF90", VA = "0x1818BE990", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x18BEBD0", Offset = "0x18BD1D0", VA = "0x1818BEBD0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x18BEB40", Offset = "0x18BD140", VA = "0x1818BEB40", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GisketchSearchEntry> System_002ECollections_002EGeneric_002EIEnumerable_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x18BEB40", Offset = "0x18BD140", VA = "0x1818BEB40", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x18B2580", Offset = "0x18B0B80", VA = "0x1818B2580")]
	public static List<GisketchSearchEntry> Merge(IEnumerable<GisketchSearchEntry> manifest, IEnumerable<GisketchSearchEntry> live, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x18B3000", Offset = "0x18B1600", VA = "0x1818B3000")]
	private static HashSet<string> ScreenTitles(IEnumerable<GisketchSearchEntry> entries)
	{
		return null;
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x18B21B0", Offset = "0x18B07B0", VA = "0x1818B21B0")]
	private static bool IsDuplicateMainMenuScreenButton(GisketchSearchEntry entry, string activeScreenId, HashSet<string> screenTitles)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x18B2150", Offset = "0x18B0750", VA = "0x1818B2150")]
	private static bool IsActive(GisketchSearchEntry entry, string activeScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x18B1F70", Offset = "0x18B0570", VA = "0x1818B1F70")]
	private static bool IsActiveInteractiveControl(GisketchSearchEntry entry, string activeScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x18B2290", Offset = "0x18B0890", VA = "0x1818B2290")]
	private static bool IsInteractiveControlKind(string kind)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x18B2400", Offset = "0x18B0A00", VA = "0x1818B2400")]
	private static bool IsLiveUsable(GisketchSearchEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x18B1F10", Offset = "0x18B0510", VA = "0x1818B1F10")]
	[IteratorStateMachine(typeof(_003CEmpty_003Ed__7))]
	private static IEnumerable<GisketchSearchEntry> Empty()
	{
		return null;
	}
}
