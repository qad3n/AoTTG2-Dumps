// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogDialogState
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20001E6")]
internal static class AottgChangelogDialogState
{
	[Token(Token = "0x4000A43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<ChangelogSummaryResponse> History;

	[Token(Token = "0x1700012D")]
	public static LatestChangelogVersionResponse LatestVersion
	{
		[Token(Token = "0x6000B36")]
		[Address(RVA = "0x5D74F40", Offset = "0x5D73F40", VA = "0x5D74F40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B37")]
		[Address(RVA = "0x5D74FB0", Offset = "0x5D73FB0", VA = "0x5D74FB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	public static ChangelogEntryResponse LatestPreviewEntry
	{
		[Token(Token = "0x6000B38")]
		[Address(RVA = "0x5D75010", Offset = "0x5D74010", VA = "0x5D75010")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B39")]
		[Address(RVA = "0x5D75080", Offset = "0x5D74080", VA = "0x5D75080")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public static ChangelogEntryResponse ReaderEntry
	{
		[Token(Token = "0x6000B3A")]
		[Address(RVA = "0x5D750E0", Offset = "0x5D740E0", VA = "0x5D750E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B3B")]
		[Address(RVA = "0x5D75150", Offset = "0x5D74150", VA = "0x5D75150")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000130")]
	public static AottgChangelogReaderMode ReaderMode
	{
		[Token(Token = "0x6000B3C")]
		[Address(RVA = "0x5D751B0", Offset = "0x5D741B0", VA = "0x5D751B0")]
		[CompilerGenerated]
		get
		{
			return default(AottgChangelogReaderMode);
		}
		[Token(Token = "0x6000B3D")]
		[Address(RVA = "0x5D75220", Offset = "0x5D74220", VA = "0x5D75220")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000131")]
	public static string SelectedEntryId
	{
		[Token(Token = "0x6000B3E")]
		[Address(RVA = "0x5D75270", Offset = "0x5D74270", VA = "0x5D75270")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B3F")]
		[Address(RVA = "0x5D752E0", Offset = "0x5D742E0", VA = "0x5D752E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000132")]
	public static int HistoryPage
	{
		[Token(Token = "0x6000B40")]
		[Address(RVA = "0x5D75340", Offset = "0x5D74340", VA = "0x5D75340")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B41")]
		[Address(RVA = "0x5D753B0", Offset = "0x5D743B0", VA = "0x5D753B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000133")]
	public static int HistoryTotal
	{
		[Token(Token = "0x6000B42")]
		[Address(RVA = "0x5D75400", Offset = "0x5D74400", VA = "0x5D75400")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B43")]
		[Address(RVA = "0x5D75470", Offset = "0x5D74470", VA = "0x5D75470")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public static int HistoryPageSize
	{
		[Token(Token = "0x6000B44")]
		[Address(RVA = "0x5D754C0", Offset = "0x5D744C0", VA = "0x5D754C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000135")]
	public static IReadOnlyList<ChangelogSummaryResponse> HistoryEntries
	{
		[Token(Token = "0x6000B45")]
		[Address(RVA = "0x5D754D0", Offset = "0x5D744D0", VA = "0x5D754D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000136")]
	public static int SelectedHistoryIndex
	{
		[Token(Token = "0x6000B46")]
		[Address(RVA = "0x5D75540", Offset = "0x5D74540", VA = "0x5D75540")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B47")]
		[Address(RVA = "0x5D755B0", Offset = "0x5D745B0", VA = "0x5D755B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000137")]
	public static bool HasMoreHistory
	{
		[Token(Token = "0x6000B48")]
		[Address(RVA = "0x5D75600", Offset = "0x5D74600", VA = "0x5D75600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000138")]
	public static bool HasHistory
	{
		[Token(Token = "0x6000B49")]
		[Address(RVA = "0x5D756D0", Offset = "0x5D746D0", VA = "0x5D756D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000139")]
	public static bool CanGoPrevious
	{
		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x5D75760", Offset = "0x5D74760", VA = "0x5D75760")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013A")]
	public static bool CanGoNext
	{
		[Token(Token = "0x6000B4B")]
		[Address(RVA = "0x5D75900", Offset = "0x5D74900", VA = "0x5D75900")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013B")]
	public static ChangelogSummaryResponse PreviousSummary
	{
		[Token(Token = "0x6000B4C")]
		[Address(RVA = "0x5D759A0", Offset = "0x5D749A0", VA = "0x5D759A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013C")]
	public static ChangelogSummaryResponse NextLoadedSummary
	{
		[Token(Token = "0x6000B4D")]
		[Address(RVA = "0x5D75BA0", Offset = "0x5D74BA0", VA = "0x5D75BA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x5D75D90", Offset = "0x5D74D90", VA = "0x5D75D90")]
	public static void SetLatestVersion(LatestChangelogVersionResponse latestVersion)
	{
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x5D76000", Offset = "0x5D75000", VA = "0x5D76000")]
	public static void SetLatestPreview(ChangelogEntryResponse entry)
	{
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x5D760C0", Offset = "0x5D750C0", VA = "0x5D760C0")]
	public static void SetReader(AottgChangelogReaderMode mode, ChangelogEntryResponse entry)
	{
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x5D764B0", Offset = "0x5D754B0", VA = "0x5D764B0")]
	public static void ClearReader(AottgChangelogReaderMode mode, [Optional] string selectedEntryId)
	{
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x5D766E0", Offset = "0x5D756E0", VA = "0x5D766E0")]
	public static void ResetHistory()
	{
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x5D768D0", Offset = "0x5D758D0", VA = "0x5D768D0")]
	public static void AppendHistory(PublicChangelogListResponse list)
	{
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x5D76DB0", Offset = "0x5D75DB0", VA = "0x5D76DB0")]
	public static ChangelogSummaryResponse HistoryAt(int index)
	{
		return null;
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x5D76410", Offset = "0x5D75410", VA = "0x5D76410")]
	public static void SelectHistoryId(string id)
	{
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x5D76E70", Offset = "0x5D75E70", VA = "0x5D76E70")]
	public static int IndexOfHistoryId(string id)
	{
		return default(int);
	}
}
