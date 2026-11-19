// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Search.GisketchSearchIndex
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000038")]
public static class GisketchSearchIndex
{
	[Token(Token = "0x200003A")]
	[CompilerGenerated]
	private sealed class _003CEmptyScreenIds_003Ed__4 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400012A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400012B")]
		[FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x400012C")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000031")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x6000217")]
			[Address(RVA = "0x5249B90", Offset = "0x5248B90", VA = "0x5249B90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000032")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000219")]
			[Address(RVA = "0x5249BE0", Offset = "0x5248BE0", VA = "0x5249BE0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000214")]
		[Address(RVA = "0x5249020", Offset = "0x5248020", VA = "0x5249020")]
		[DebuggerHidden]
		public _003CEmptyScreenIds_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000215")]
		[Address(RVA = "0x5249B60", Offset = "0x5248B60", VA = "0x5249B60", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000216")]
		[Address(RVA = "0x5249B70", Offset = "0x5248B70", VA = "0x5249B70", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000218")]
		[Address(RVA = "0x5249BA0", Offset = "0x5248BA0", VA = "0x5249BA0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600021A")]
		[Address(RVA = "0x5249BF0", Offset = "0x5248BF0", VA = "0x5249BF0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600021B")]
		[Address(RVA = "0x5249C70", Offset = "0x5248C70", VA = "0x5249C70", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x5247740", Offset = "0x5246740", VA = "0x5247740")]
	public static List<GisketchSearchEntry> EntriesFor(GisketchManifestDefinition manifest, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x5247EF0", Offset = "0x5246EF0", VA = "0x5247EF0")]
	public static List<GisketchSearchEntry> EntriesForScreen(GisketchManifestDefinition manifest, string screenId, bool includeScreenEntry = true)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x5247F80", Offset = "0x5246F80", VA = "0x5247F80")]
	public static List<GisketchSearchEntry> EntriesForScreens(GisketchManifestDefinition manifest, IEnumerable<string> screenIds, bool includeScreenEntry = true)
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x5247BA0", Offset = "0x5246BA0", VA = "0x5247BA0")]
	private static void AddScreenEntries(List<GisketchSearchEntry> entries, GisketchScreenDefinition screen, bool includeScreenEntry)
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x52487A0", Offset = "0x52477A0", VA = "0x52487A0")]
	[IteratorStateMachine(typeof(_003CEmptyScreenIds_003Ed__4))]
	private static IEnumerable<string> EmptyScreenIds()
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x5247DE0", Offset = "0x5246DE0", VA = "0x5247DE0")]
	private static List<GisketchSearchEntry> WithoutDuplicateMainMenuScreenButtons(List<GisketchSearchEntry> entries, HashSet<string> screenTitles)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x52487F0", Offset = "0x52477F0", VA = "0x52487F0")]
	private static void AddNodeEntries(List<GisketchSearchEntry> entries, GisketchScreenDefinition screen, GisketchNodeDefinition node, string sectionId, string sectionTitle)
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x52495C0", Offset = "0x52485C0", VA = "0x52495C0")]
	private static void AddChildEntries(List<GisketchSearchEntry> entries, GisketchScreenDefinition screen, GisketchNodeDefinition[] children, string sectionId, string sectionTitle)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x5249100", Offset = "0x5248100", VA = "0x5249100")]
	private static string HarvestKeywords(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x5249760", Offset = "0x5248760", VA = "0x5249760")]
	private static void HarvestChildKeywords(StringBuilder builder, GisketchNodeDefinition[] children)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x5249630", Offset = "0x5248630", VA = "0x5249630")]
	private static void AppendText(StringBuilder builder, GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x5249060", Offset = "0x5248060", VA = "0x5249060")]
	private static bool IsSection(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x5249920", Offset = "0x5248920", VA = "0x5249920")]
	private static bool IsControl(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x5249230", Offset = "0x5248230", VA = "0x5249230")]
	private static bool IsSearchTarget(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x52492C0", Offset = "0x52482C0", VA = "0x52492C0")]
	private static bool IsExplicitSearch(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x5249360", Offset = "0x5248360", VA = "0x5249360")]
	private static string Kind(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x52493B0", Offset = "0x52483B0", VA = "0x52493B0")]
	private static string Title(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x5249470", Offset = "0x5248470", VA = "0x5249470")]
	private static string Keywords(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x5247AF0", Offset = "0x5246AF0", VA = "0x5247AF0")]
	private static string ScreenTitle(GisketchScreenDefinition screen)
	{
		return null;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x5247A90", Offset = "0x5246A90", VA = "0x5247A90")]
	private static string SearchGroup(GisketchScreenDefinition screen)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x52491A0", Offset = "0x52481A0", VA = "0x52491A0")]
	private static string Join(string a, string b)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x52490C0", Offset = "0x52480C0", VA = "0x52490C0")]
	private static string First(string a, string b)
	{
		return null;
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x52498C0", Offset = "0x52488C0", VA = "0x52498C0")]
	private static void Append(StringBuilder builder, string value)
	{
	}
}
