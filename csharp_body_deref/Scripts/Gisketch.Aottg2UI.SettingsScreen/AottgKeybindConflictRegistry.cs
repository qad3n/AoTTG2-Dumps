// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000159")]
internal static class AottgKeybindConflictRegistry
{
	[Token(Token = "0x200015A")]
	private sealed class Entry
	{
		[Token(Token = "0x40007DC")]
		[FieldOffset(Offset = "0x10")]
		public readonly string RowId;

		[Token(Token = "0x40007DD")]
		[FieldOffset(Offset = "0x18")]
		public readonly int Order;

		[Token(Token = "0x40007DE")]
		[FieldOffset(Offset = "0x20")]
		public string ScopeId;

		[Token(Token = "0x40007DF")]
		[FieldOffset(Offset = "0x28")]
		public string Label;

		[Token(Token = "0x40007E0")]
		[FieldOffset(Offset = "0x30")]
		public KeybindSetting Setting;

		[Token(Token = "0x40007E1")]
		[FieldOffset(Offset = "0x38")]
		public HashSet<string> DefaultKeys;

		[Token(Token = "0x6000701")]
		[Address(RVA = "0x231F4A0", Offset = "0x231DAA0", VA = "0x18231F4A0")]
		public Entry(string rowId, int order)
		{
		}
	}

	[Token(Token = "0x200015C")]
	[CompilerGenerated]
	private sealed class _003CKeys_003Ed__13 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40007E4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40007E5")]
		[FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x40007E6")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40007E7")]
		[FieldOffset(Offset = "0x28")]
		private Entry entry;

		[Token(Token = "0x40007E8")]
		[FieldOffset(Offset = "0x30")]
		public Entry _003C_003E3__entry;

		[Token(Token = "0x40007E9")]
		[FieldOffset(Offset = "0x38")]
		private HashSet<string> _003Cseen_003E5__2;

		[Token(Token = "0x40007EA")]
		[FieldOffset(Offset = "0x40")]
		private List<InputKey>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x170000DB")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x6000709")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000DC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600070B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000705")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CKeys_003Ed__13(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000706")]
		[Address(RVA = "0x231F970", Offset = "0x231DF70", VA = "0x18231F970", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000707")]
		[Address(RVA = "0x231F5A0", Offset = "0x231DBA0", VA = "0x18231F5A0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000708")]
		[Address(RVA = "0x231FA00", Offset = "0x231E000", VA = "0x18231FA00")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600070A")]
		[Address(RVA = "0x231F930", Offset = "0x231DF30", VA = "0x18231F930", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600070C")]
		[Address(RVA = "0x231F890", Offset = "0x231DE90", VA = "0x18231F890", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600070D")]
		[Address(RVA = "0x231F890", Offset = "0x231DE90", VA = "0x18231F890", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40007D9")]
	private const string TooltipPrefix = "This keybind is in conflict with: ";

	[Token(Token = "0x40007DA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Entry> Entries;

	[Token(Token = "0x40007DB")]
	[FieldOffset(Offset = "0x8")]
	private static int _nextOrder;

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x2306E70", Offset = "0x2305470", VA = "0x182306E70")]
	public static void Register(string rowId, string scopeId, string label, KeybindSetting setting)
	{
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x23071E0", Offset = "0x23057E0", VA = "0x1823071E0")]
	public static void SyncAll(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x2307510", Offset = "0x2305B10", VA = "0x182307510")]
	public static string VisibleStateKey(string rowId)
	{
		return null;
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x2307500", Offset = "0x2305B00", VA = "0x182307500")]
	public static string TooltipStateKey(string rowId)
	{
		return null;
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x2306760", Offset = "0x2304D60", VA = "0x182306760")]
	internal static List<string> ConflictsForTests(string rowId)
	{
		return null;
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x2306140", Offset = "0x2304740", VA = "0x182306140")]
	internal static void ClearForTests()
	{
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x2306910", Offset = "0x2304F10", VA = "0x182306910")]
	private static Dictionary<string, List<Entry>> KeyMap()
	{
		return null;
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x23061D0", Offset = "0x23047D0", VA = "0x1823061D0")]
	private static List<string> ConflictLabels(Entry entry, Dictionary<string, List<Entry>> keys)
	{
		return null;
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x2306870", Offset = "0x2304E70", VA = "0x182306870")]
	private static bool IsDefaultDuplicate(Entry entry, Entry other, string key)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x2307170", Offset = "0x2305770", VA = "0x182307170")]
	private static string ScopedKey(string scopeId, string key)
	{
		return null;
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x2306DF0", Offset = "0x23053F0", VA = "0x182306DF0")]
	[IteratorStateMachine(typeof(_003CKeys_003Ed__13))]
	private static IEnumerable<string> Keys(Entry entry)
	{
		return null;
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x2305E90", Offset = "0x2304490", VA = "0x182305E90")]
	private static HashSet<string> BuildDefaultKeys(KeybindSetting setting)
	{
		return null;
	}
}
