// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogDialogState
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ApplicationManagers.Changelog;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000147")]
internal static class AottgChangelogDialogState
{
	[Token(Token = "0x4000756")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<ChangelogSummaryResponse> History;

	[Token(Token = "0x170000F8")]
	public static LatestChangelogVersionResponse LatestVersion
	{
		[Token(Token = "0x600071D")]
		[Address(RVA = "0x43DDF10", Offset = "0x43DDF10", VA = "0x43DDF10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600071E")]
		[Address(RVA = "0x43DDF80", Offset = "0x43DDF80", VA = "0x43DDF80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	public static ChangelogEntryResponse LatestPreviewEntry
	{
		[Token(Token = "0x600071F")]
		[Address(RVA = "0x43DDFE0", Offset = "0x43DDFE0", VA = "0x43DDFE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000720")]
		[Address(RVA = "0x43DE050", Offset = "0x43DE050", VA = "0x43DE050")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000FA")]
	public static ChangelogEntryResponse ReaderEntry
	{
		[Token(Token = "0x6000721")]
		[Address(RVA = "0x43DE0B0", Offset = "0x43DE0B0", VA = "0x43DE0B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000722")]
		[Address(RVA = "0x43DE120", Offset = "0x43DE120", VA = "0x43DE120")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public static AottgChangelogReaderMode ReaderMode
	{
		[Token(Token = "0x6000723")]
		[Address(RVA = "0x43DE180", Offset = "0x43DE180", VA = "0x43DE180")]
		[CompilerGenerated]
		get
		{
			return default(AottgChangelogReaderMode);
		}
		[Token(Token = "0x6000724")]
		[Address(RVA = "0x43DE1F0", Offset = "0x43DE1F0", VA = "0x43DE1F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	public static bool ReaderShowsNewUpdate
	{
		[Token(Token = "0x6000725")]
		[Address(RVA = "0x43DE240", Offset = "0x43DE240", VA = "0x43DE240")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000726")]
		[Address(RVA = "0x43DE2B0", Offset = "0x43DE2B0", VA = "0x43DE2B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000FD")]
	public static string SelectedEntryId
	{
		[Token(Token = "0x6000727")]
		[Address(RVA = "0x43DE300", Offset = "0x43DE300", VA = "0x43DE300")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000728")]
		[Address(RVA = "0x43DE370", Offset = "0x43DE370", VA = "0x43DE370")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000FE")]
	public static int HistoryPage
	{
		[Token(Token = "0x6000729")]
		[Address(RVA = "0x43DE3D0", Offset = "0x43DE3D0", VA = "0x43DE3D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600072A")]
		[Address(RVA = "0x43DE440", Offset = "0x43DE440", VA = "0x43DE440")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	public static int HistoryTotal
	{
		[Token(Token = "0x600072B")]
		[Address(RVA = "0x43DE490", Offset = "0x43DE490", VA = "0x43DE490")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600072C")]
		[Address(RVA = "0x43DE500", Offset = "0x43DE500", VA = "0x43DE500")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000100")]
	public static int HistoryPageSize
	{
		[Token(Token = "0x600072D")]
		[Address(RVA = "0x43DE550", Offset = "0x43DE550", VA = "0x43DE550")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000101")]
	public static IReadOnlyList<ChangelogSummaryResponse> HistoryEntries
	{
		[Token(Token = "0x600072E")]
		[Address(RVA = "0x43DE560", Offset = "0x43DE560", VA = "0x43DE560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000102")]
	public static int SelectedHistoryIndex
	{
		[Token(Token = "0x600072F")]
		[Address(RVA = "0x43DE5D0", Offset = "0x43DE5D0", VA = "0x43DE5D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000730")]
		[Address(RVA = "0x43DE640", Offset = "0x43DE640", VA = "0x43DE640")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000103")]
	public static bool HasMoreHistory
	{
		[Token(Token = "0x6000731")]
		[Address(RVA = "0x43DE690", Offset = "0x43DE690", VA = "0x43DE690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000104")]
	public static bool HasHistory
	{
		[Token(Token = "0x6000732")]
		[Address(RVA = "0x43DE760", Offset = "0x43DE760", VA = "0x43DE760")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000105")]
	public static bool CanGoPrevious
	{
		[Token(Token = "0x6000733")]
		[Address(RVA = "0x43DE7F0", Offset = "0x43DE7F0", VA = "0x43DE7F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000106")]
	public static bool CanGoNext
	{
		[Token(Token = "0x6000734")]
		[Address(RVA = "0x43DE990", Offset = "0x43DE990", VA = "0x43DE990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000107")]
	public static ChangelogSummaryResponse PreviousSummary
	{
		[Token(Token = "0x6000735")]
		[Address(RVA = "0x43DEA30", Offset = "0x43DEA30", VA = "0x43DEA30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000108")]
	public static ChangelogSummaryResponse NextLoadedSummary
	{
		[Token(Token = "0x6000736")]
		[Address(RVA = "0x43DEC70", Offset = "0x43DEC70", VA = "0x43DEC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x43DEE60", Offset = "0x43DEE60", VA = "0x43DEE60")]
	public static void SetLatestVersion(LatestChangelogVersionResponse latestVersion)
	{
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x43DF0F0", Offset = "0x43DF0F0", VA = "0x43DF0F0")]
	public static void SetLatestPreview(ChangelogEntryResponse entry)
	{
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x43DF1B0", Offset = "0x43DF1B0", VA = "0x43DF1B0")]
	public static void SetReader(AottgChangelogReaderMode mode, ChangelogEntryResponse entry)
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x43DF5A0", Offset = "0x43DF5A0", VA = "0x43DF5A0")]
	public static void ClearReader(AottgChangelogReaderMode mode, [Optional] string selectedEntryId, bool newUpdateTitle = false)
	{
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x43DF840", Offset = "0x43DF840", VA = "0x43DF840")]
	public static void ResetHistory()
	{
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x43DFA30", Offset = "0x43DFA30", VA = "0x43DFA30")]
	public static void AppendHistory(PublicChangelogListResponse list)
	{
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x43DFF10", Offset = "0x43DFF10", VA = "0x43DFF10")]
	public static ChangelogSummaryResponse HistoryAt(int index)
	{
		return null;
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x43DF500", Offset = "0x43DF500", VA = "0x43DF500")]
	public static void SelectHistoryId(string id)
	{
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x43DFFD0", Offset = "0x43DFFD0", VA = "0x43DFFD0")]
	public static int IndexOfHistoryId(string id)
	{
		return default(int);
	}
}
