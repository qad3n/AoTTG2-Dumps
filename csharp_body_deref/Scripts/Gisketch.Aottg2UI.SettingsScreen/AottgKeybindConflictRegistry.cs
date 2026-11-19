// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000161")]
internal static class AottgKeybindConflictRegistry
{
	[Token(Token = "0x2000162")]
	private sealed class Entry
	{
		[Token(Token = "0x4000827")]
		[FieldOffset(Offset = "0x10")]
		public readonly string RowId;

		[Token(Token = "0x4000828")]
		[FieldOffset(Offset = "0x18")]
		public readonly int Order;

		[Token(Token = "0x4000829")]
		[FieldOffset(Offset = "0x20")]
		public string ScopeId;

		[Token(Token = "0x400082A")]
		[FieldOffset(Offset = "0x28")]
		public string Label;

		[Token(Token = "0x400082B")]
		[FieldOffset(Offset = "0x30")]
		public KeybindSetting Setting;

		[Token(Token = "0x400082C")]
		[FieldOffset(Offset = "0x38")]
		public HashSet<string> DefaultKeys;

		[Token(Token = "0x6000778")]
		[Address(RVA = "0x5CBF9B0", Offset = "0x5CBE9B0", VA = "0x5CBF9B0")]
		public Entry(string rowId, int order)
		{
		}
	}

	[Token(Token = "0x2000164")]
	[CompilerGenerated]
	private sealed class _003CKeys_003Ed__13 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400082F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000830")]
		[FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x4000831")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000832")]
		[FieldOffset(Offset = "0x28")]
		private Entry entry;

		[Token(Token = "0x4000833")]
		[FieldOffset(Offset = "0x30")]
		public Entry _003C_003E3__entry;

		[Token(Token = "0x4000834")]
		[FieldOffset(Offset = "0x38")]
		private HashSet<string> _003Cseen_003E5__2;

		[Token(Token = "0x4000835")]
		[FieldOffset(Offset = "0x40")]
		private List<InputKey>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x170000DE")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x6000780")]
			[Address(RVA = "0x5CC1CD0", Offset = "0x5CC0CD0", VA = "0x5CC1CD0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000DF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000782")]
			[Address(RVA = "0x5CC1D20", Offset = "0x5CC0D20", VA = "0x5CC1D20", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600077C")]
		[Address(RVA = "0x5CC16D0", Offset = "0x5CC06D0", VA = "0x5CC16D0")]
		[DebuggerHidden]
		public _003CKeys_003Ed__13(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600077D")]
		[Address(RVA = "0x5CC18F0", Offset = "0x5CC08F0", VA = "0x5CC18F0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600077E")]
		[Address(RVA = "0x5CC1940", Offset = "0x5CC0940", VA = "0x5CC1940", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600077F")]
		[Address(RVA = "0x5CC1C90", Offset = "0x5CC0C90", VA = "0x5CC1C90")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000781")]
		[Address(RVA = "0x5CC1CE0", Offset = "0x5CC0CE0", VA = "0x5CC1CE0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000783")]
		[Address(RVA = "0x5CC1D30", Offset = "0x5CC0D30", VA = "0x5CC1D30", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000784")]
		[Address(RVA = "0x5CC1DC0", Offset = "0x5CC0DC0", VA = "0x5CC1DC0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000825")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Entry> Entries;

	[Token(Token = "0x4000826")]
	[FieldOffset(Offset = "0x8")]
	private static int _nextOrder;

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x5CBF7A0", Offset = "0x5CBE7A0", VA = "0x5CBF7A0")]
	public static void Register(string rowId, string scopeId, string label, KeybindSetting setting)
	{
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x5CBFF30", Offset = "0x5CBEF30", VA = "0x5CBFF30")]
	public static void SyncAll(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x5CC1310", Offset = "0x5CC0310", VA = "0x5CC1310")]
	private static string ConflictTooltip(List<string> labels)
	{
		return null;
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x5CC12F0", Offset = "0x5CC02F0", VA = "0x5CC12F0")]
	public static string VisibleStateKey(string rowId)
	{
		return null;
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x5CC1300", Offset = "0x5CC0300", VA = "0x5CC1300")]
	public static string TooltipStateKey(string rowId)
	{
		return null;
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x5CC13D0", Offset = "0x5CC03D0", VA = "0x5CC13D0")]
	internal static List<string> ConflictsForTests(string rowId)
	{
		return null;
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x5CC14D0", Offset = "0x5CC04D0", VA = "0x5CC14D0")]
	internal static void ClearForTests()
	{
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x5CC02C0", Offset = "0x5CBF2C0", VA = "0x5CC02C0")]
	private static Dictionary<string, List<Entry>> KeyMap()
	{
		return null;
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x5CC0A70", Offset = "0x5CBFA70", VA = "0x5CC0A70")]
	private static List<string> ConflictLabels(Entry entry, Dictionary<string, List<Entry>> keys)
	{
		return null;
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x5CC1650", Offset = "0x5CC0650", VA = "0x5CC1650")]
	private static bool IsDefaultDuplicate(Entry entry, Entry other, string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x5CC15E0", Offset = "0x5CC05E0", VA = "0x5CC15E0")]
	private static string ScopedKey(string scopeId, string key)
	{
		return null;
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x5CC1570", Offset = "0x5CC0570", VA = "0x5CC1570")]
	[IteratorStateMachine(typeof(_003CKeys_003Ed__13))]
	private static IEnumerable<string> Keys(Entry entry)
	{
		return null;
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x5CBFB00", Offset = "0x5CBEB00", VA = "0x5CBFB00")]
	private static HashSet<string> BuildDefaultKeys(KeybindSetting setting)
	{
		return null;
	}
}
