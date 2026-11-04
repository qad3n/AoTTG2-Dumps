// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Search.GisketchSearchIndex
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x2000031")]
public static class GisketchSearchIndex
{
	[Token(Token = "0x2000033")]
	[CompilerGenerated]
	private sealed class _003CEmptyScreenIds_003Ed__4 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000107")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000108")]
		[FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x4000109")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000031")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x60001CC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000032")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001CE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CEmptyScreenIds_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x18BE990", Offset = "0x18BCF90", VA = "0x1818BE990", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x18BEA30", Offset = "0x18BD030", VA = "0x1818BEA30", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x18BE9A0", Offset = "0x18BCFA0", VA = "0x1818BE9A0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x18BE9A0", Offset = "0x18BCFA0", VA = "0x1818BE9A0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x18B0DF0", Offset = "0x18AF3F0", VA = "0x1818B0DF0")]
	public static List<GisketchSearchEntry> EntriesFor(GisketchManifestDefinition manifest, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x18B0780", Offset = "0x18AED80", VA = "0x1818B0780")]
	public static List<GisketchSearchEntry> EntriesForScreen(GisketchManifestDefinition manifest, string screenId, bool includeScreenEntry = true)
	{
		return null;
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x18B0810", Offset = "0x18AEE10", VA = "0x1818B0810")]
	public static List<GisketchSearchEntry> EntriesForScreens(GisketchManifestDefinition manifest, IEnumerable<string> screenIds, bool includeScreenEntry = true)
	{
		return null;
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x18B01A0", Offset = "0x18AE7A0", VA = "0x1818B01A0")]
	private static void AddScreenEntries(List<GisketchSearchEntry> entries, GisketchScreenDefinition screen, bool includeScreenEntry)
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x18B0720", Offset = "0x18AED20", VA = "0x1818B0720")]
	[IteratorStateMachine(typeof(_003CEmptyScreenIds_003Ed__4))]
	private static IEnumerable<string> EmptyScreenIds()
	{
		return null;
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x18B1DA0", Offset = "0x18B03A0", VA = "0x1818B1DA0")]
	private static List<GisketchSearchEntry> WithoutDuplicateMainMenuScreenButtons(List<GisketchSearchEntry> entries, HashSet<string> screenTitles)
	{
		return null;
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x18AF5E0", Offset = "0x18ADBE0", VA = "0x1818AF5E0")]
	private static void AddNodeEntries(List<GisketchSearchEntry> entries, GisketchScreenDefinition screen, GisketchNodeDefinition node, string sectionId, string sectionTitle)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x18AF540", Offset = "0x18ADB40", VA = "0x1818AF540")]
	private static void AddChildEntries(List<GisketchSearchEntry> entries, GisketchScreenDefinition screen, GisketchNodeDefinition[] children, string sectionId, string sectionTitle)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x18B12A0", Offset = "0x18AF8A0", VA = "0x1818B12A0")]
	private static string HarvestKeywords(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x18B1190", Offset = "0x18AF790", VA = "0x1818B1190")]
	private static void HarvestChildKeywords(StringBuilder builder, GisketchNodeDefinition[] children)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x18B0580", Offset = "0x18AEB80", VA = "0x1818B0580")]
	private static void AppendText(StringBuilder builder, GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x18B1920", Offset = "0x18AFF20", VA = "0x1818B1920")]
	private static bool IsSection(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x18B15F0", Offset = "0x18AFBF0", VA = "0x1818B15F0")]
	private static bool IsControl(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x18B17A0", Offset = "0x18AFDA0", VA = "0x1818B17A0")]
	private static bool IsSearchTarget(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x18B1700", Offset = "0x18AFD00", VA = "0x1818B1700")]
	private static bool IsExplicitSearch(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x18B1B60", Offset = "0x18B0160", VA = "0x1818B1B60")]
	private static string Kind(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x18B1CC0", Offset = "0x18B02C0", VA = "0x1818B1CC0")]
	private static string Title(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x18B1A30", Offset = "0x18B0030", VA = "0x1818B1A30")]
	private static string Keywords(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x18B1BC0", Offset = "0x18B01C0", VA = "0x1818B1BC0")]
	private static string ScreenTitle(GisketchScreenDefinition screen)
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x18B1C60", Offset = "0x18B0260", VA = "0x1818B1C60")]
	private static string SearchGroup(GisketchScreenDefinition screen)
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x18B1990", Offset = "0x18AFF90", VA = "0x1818B1990")]
	private static string Join(string a, string b)
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x18B1140", Offset = "0x18AF740", VA = "0x1818B1140")]
	private static string First(string a, string b)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x18B06C0", Offset = "0x18AECC0", VA = "0x1818B06C0")]
	private static void Append(StringBuilder builder, string value)
	{
	}
}
