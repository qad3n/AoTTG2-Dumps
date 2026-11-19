// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogDialogState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_LatestVersion): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075487ac == false) {
				Il2CppMethodInitialized_075487ac = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgChangelogDialogState. _LatestVersion_k__BackingField;
			}
			return *(LatestChangelogVersionResponse*)((long)(typeof(AottgChangelogDialogState)).static_fields + 8 );
		}
		[Token(Token = "0x6000B37")]
		[Address(RVA = "0x5D74FB0", Offset = "0x5D73FB0", VA = "0x5D74FB0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_LatestVersion): clean

			AottgChangelogDialogState._LatestVersion_k__BackingField = value;
			return;
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
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_LatestPreviewEntry): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075487ae == false) {
				Il2CppMethodInitialized_075487ae = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgChangelogDialogState. _LatestPreviewEntry_k__BackingField;
			}
			return *(ChangelogEntryResponse*)((long)(typeof(AottgChangelogDialogState)).static_fields + 0x10);
		}
		[Token(Token = "0x6000B39")]
		[Address(RVA = "0x5D75080", Offset = "0x5D74080", VA = "0x5D75080")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_LatestPreviewEntry): clean

			AottgChangelogDialogState._LatestPreviewEntry_k__BackingField = value;
			return;
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
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_ReaderEntry): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075487b0 == false) {
				Il2CppMethodInitialized_075487b0 = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgChangelogDialogState. _ReaderEntry_k__BackingField;
			}
			return *(ChangelogEntryResponse*)((long)(typeof(AottgChangelogDialogState)).static_fields + 0x18);
		}
		[Token(Token = "0x6000B3B")]
		[Address(RVA = "0x5D75150", Offset = "0x5D74150", VA = "0x5D75150")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_ReaderEntry): clean

			AottgChangelogDialogState._ReaderEntry_k__BackingField = value;
			return;
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
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_ReaderMode): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075487b2 == false) {
				Il2CppMethodInitialized_075487b2 = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgChangelogDialogState. _ReaderMode_k__BackingField;
			}
			return *(int)((long)(typeof(AottgChangelogDialogState)).static_fields + 0x20);
		}
		[Token(Token = "0x6000B3D")]
		[Address(RVA = "0x5D75220", Offset = "0x5D74220", VA = "0x5D75220")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_ReaderMode): clean
			AottgChangelogDialogState._ReaderMode_k__BackingField = value;
			return;
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
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_SelectedEntryId): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075487b4 == false) {
				Il2CppMethodInitialized_075487b4 = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgChangelogDialogState. _SelectedEntryId_k__BackingField;
			}
			return *(String*)((long)(typeof(AottgChangelogDialogState)).static_fields + 0x28);
		}
		[Token(Token = "0x6000B3F")]
		[Address(RVA = "0x5D752E0", Offset = "0x5D742E0", VA = "0x5D752E0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_SelectedEntryId): clean

			AottgChangelogDialogState._SelectedEntryId_k__BackingField = value;
			return;
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
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_HistoryPage): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075487b6 == false) {
				Il2CppMethodInitialized_075487b6 = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgChangelogDialogState. _HistoryPage_k__BackingField;
			}
			return *(int)((long)(typeof(AottgChangelogDialogState)).static_fields + 0x30);
		}
		[Token(Token = "0x6000B41")]
		[Address(RVA = "0x5D753B0", Offset = "0x5D743B0", VA = "0x5D753B0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_HistoryPage): clean
			AottgChangelogDialogState._HistoryPage_k__BackingField = value;
			return;
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
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_HistoryTotal): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075487b8 == false) {
				Il2CppMethodInitialized_075487b8 = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgChangelogDialogState. _HistoryTotal_k__BackingField;
			}
			return *(int)((long)(typeof(AottgChangelogDialogState)).static_fields + 0x34);
		}
		[Token(Token = "0x6000B43")]
		[Address(RVA = "0x5D75470", Offset = "0x5D74470", VA = "0x5D75470")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_HistoryTotal): clean
			AottgChangelogDialogState._HistoryTotal_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000134")]
	public static int HistoryPageSize
	{
		[Token(Token = "0x6000B44")]
		[Address(RVA = "0x5D754C0", Offset = "0x5D744C0", VA = "0x5D754C0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_HistoryPageSize): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000135")]
	public static IReadOnlyList<ChangelogSummaryResponse> HistoryEntries
	{
		[Token(Token = "0x6000B45")]
		[Address(RVA = "0x5D754D0", Offset = "0x5D744D0", VA = "0x5D754D0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_HistoryEntries): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075487ba == false) {
				Il2CppMethodInitialized_075487ba = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return (IReadOnlyList<ChangelogSummaryResponse>)AottgChangelogDialogState.History;
			}
			return *(IReadOnlyList<ChangelogSummaryResponse>*)(typeof(AottgChangelogDialogState)).static_fields;
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
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_SelectedHistoryIndex): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075487bb == false) {
				Il2CppMethodInitialized_075487bb = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField;
			}
			return *(int)((long)(typeof(AottgChangelogDialogState)).static_fields + 0x38);
		}
		[Token(Token = "0x6000B47")]
		[Address(RVA = "0x5D755B0", Offset = "0x5D745B0", VA = "0x5D755B0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_SelectedHistoryIndex): clean
			AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000137")]
	public static bool HasMoreHistory
	{
		[Token(Token = "0x6000B48")]
		[Address(RVA = "0x5D75600", Offset = "0x5D74600", VA = "0x5D75600")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_HasMoreHistory): clean
			uint uVar1;
			int iVar2;
			List<ChangelogSummaryResponse> pSVar3;

			if (Il2CppMethodInitialized_075487bd == false) {
				Il2CppMethodInitialized_075487bd = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pSVar3 = AottgChangelogDialogState.History;
			}
			else {
				pSVar3 = *(List<ChangelogSummaryResponse>*)(typeof(AottgChangelogDialogState)).static_fields;
			}
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			iVar2 = pSVar3._size;
			if (Il2CppMethodInitialized_07548879 == false) {
				Il2CppMethodInitialized_07548879 = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			return iVar2 < AottgChangelogDialogState. _HistoryTotal_k__BackingField;
		}
	}

	[Token(Token = "0x17000138")]
	public static bool HasHistory
	{
		[Token(Token = "0x6000B49")]
		[Address(RVA = "0x5D756D0", Offset = "0x5D746D0", VA = "0x5D756D0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_HasHistory): clean
			uint uVar1;
			List<ChangelogSummaryResponse> pSVar2;

			if (Il2CppMethodInitialized_075487be == false) {
				Il2CppMethodInitialized_075487be = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pSVar2 = AottgChangelogDialogState.History;
			}
			else {
				pSVar2 = *(List<ChangelogSummaryResponse>*)(typeof(AottgChangelogDialogState)).static_fields;
			}
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			return 0 < pSVar2._size;
		}
	}

	[Token(Token = "0x17000139")]
	public static bool CanGoPrevious
	{
		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x5D75760", Offset = "0x5D74760", VA = "0x5D75760")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_CanGoPrevious): 5 lines keep C-only constructs
			uint uVar1;
			int iVar2;
			Gisketch_Aottg2UI_Game_AottgChangelogDialogState_StaticFields pGVar3;
			List<ChangelogSummaryResponse> pSVar4;
			bool bVar5;
			Il2CppClass klass;

			if (Il2CppMethodInitialized_075487bf == false) {
				Il2CppMethodInitialized_075487bf = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (Il2CppMethodInitialized_0754887a == false) {
				Il2CppMethodInitialized_0754887a = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = *(uint)((long)typeof(AottgChangelogDialogState) + 0xe4);
			}
			if (uVar1 == 0) {
				iVar2 = AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField;
			}
			else {
				iVar2 = AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField;
			}
			if (iVar2 < 0) {
				return false;
			}
			if (((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor == 0) {
			}
			if (Il2CppMethodInitialized_0754887a == false) {
				Il2CppMethodInitialized_0754887a = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pGVar3 = typeof(AottgChangelogDialogState).static_fields;
				pSVar4 = pGVar3.History;
				klass = typeof(AottgChangelogDialogState);
			}
			else {
				pGVar3 = (typeof(AottgChangelogDialogState)).static_fields;
				pSVar4 = pGVar3.History;
				klass = typeof(AottgChangelogDialogState);
			}
			typeof(AottgChangelogDialogState) =(AottgChangelogDialogState)klass;
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			if (pGVar3._SelectedHistoryIndex_k__BackingField + 1 < pSVar4._size) {
				return true;
			}
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				return bVar5;
			}
			return bVar5;
		}
	}

	[Token(Token = "0x1700013A")]
	public static bool CanGoNext
	{
		[Token(Token = "0x6000B4B")]
		[Address(RVA = "0x5D75900", Offset = "0x5D74900", VA = "0x5D75900")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_CanGoNext): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075487c0 == false) {
				Il2CppMethodInitialized_075487c0 = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (Il2CppMethodInitialized_0754887a == false) {
				Il2CppMethodInitialized_0754887a = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			return 0 < AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField;
		}
	}

	[Token(Token = "0x1700013B")]
	public static ChangelogSummaryResponse PreviousSummary
	{
		[Token(Token = "0x6000B4C")]
		[Address(RVA = "0x5D759A0", Offset = "0x5D749A0", VA = "0x5D759A0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_PreviousSummary): clean
			int iVar1;
			uint uVar2;
			Gisketch_Aottg2UI_Game_AottgChangelogDialogState_StaticFields pGVar3;
			ChangelogSummaryResponse pAVar4;
			List<ChangelogSummaryResponse> __this;

			if (Il2CppMethodInitialized_075487c1 == false) {
				Il2CppMethodInitialized_075487c1 = true;
				if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor != 0) goto label_05e759c0;
		label_05e75a2d: ;
				if (Il2CppMethodInitialized_0754887a != false) goto label_05e759c9;
		label_05e75a3b: ;
				Il2CppMethodInitialized_0754887a = true;
				if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor != 0) goto label_05e759d9;
		label_05e75a5e: ;
				iVar1 = AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField;
			}
			else {
				if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) goto label_05e75a2d;
		label_05e759c0: ;
				if (Il2CppMethodInitialized_0754887a == false) goto label_05e75a3b;
		label_05e759c9: ;
				if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) goto label_05e75a5e;
		label_05e759d9: ;
				iVar1 = AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField;
			}
			if (iVar1 < 0) {
				return null;
			}
			if (((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_0754887a != false) goto label_05e75a89;
		label_05e75ab7: ;
				Il2CppMethodInitialized_0754887a = true;
				if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor != 0) goto label_05e75a95;
		label_05e75ad6: ;
				pGVar3 = typeof(AottgChangelogDialogState).static_fields;
				__this = pGVar3.History;
			}
			else {
				if (Il2CppMethodInitialized_0754887a == false) goto label_05e75ab7;
		label_05e75a89: ;
				if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) goto label_05e75ad6;
		label_05e75a95: ;
				pGVar3 = typeof(AottgChangelogDialogState).static_fields;
				__this = pGVar3.History;
			}
			if (__this == null) goto label_05e75b8d;
			if (__this._size <= pGVar3._SelectedHistoryIndex_k__BackingField + 1) {
				return null;
			}
			if (((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor == 0) {
				__this = AottgChangelogDialogState.History;
				if (Il2CppMethodInitialized_0754887a != false) goto label_05e75b0d;
		label_05e75b65: ;
				Il2CppMethodInitialized_0754887a = true;
				uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_0754887a == false) goto label_05e75b65;
		label_05e75b0d: ;
				uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			if (__this != null) {
				pAVar4 = __this.get_Item(*(int)((long)((Il2CppClass)typeof(AottgChangelogDialogState)). static_fields + 0x38) + 1);
				return pAVar4;
			}
		label_05e75b8d: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700013C")]
	public static ChangelogSummaryResponse NextLoadedSummary
	{
		[Token(Token = "0x6000B4D")]
		[Address(RVA = "0x5D75BA0", Offset = "0x5D74BA0", VA = "0x5D75BA0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_NextLoadedSummary): clean
			uint uVar1;
			int iVar2;
			Gisketch_Aottg2UI_Game_AottgChangelogDialogState_StaticFields pGVar3;
			List<ChangelogSummaryResponse> __this;
			ChangelogSummaryResponse pAVar4;

			if (Il2CppMethodInitialized_075487c2 == false) {
				Il2CppMethodInitialized_075487c2 = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (Il2CppMethodInitialized_075487c0 == false) {
				Il2CppMethodInitialized_075487c0 = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (Il2CppMethodInitialized_0754887a == false) {
				Il2CppMethodInitialized_0754887a = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pGVar3 = typeof(AottgChangelogDialogState).static_fields;
				iVar2 = pGVar3._SelectedHistoryIndex_k__BackingField;
			}
			else {
				pGVar3 = (typeof(AottgChangelogDialogState)).static_fields;
				iVar2 = pGVar3._SelectedHistoryIndex_k__BackingField;
			}
			if (iVar2 < 1) {
				return null;
			}
			if (((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor == 0) {
				__this = AottgChangelogDialogState.History;
			}
			else {
				__this = pGVar3.History;
			}
			if (Il2CppMethodInitialized_0754887a == false) {
				Il2CppMethodInitialized_0754887a = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (__this == null) {
				throw new NullReferenceException();
			}
			pAVar4 = (ChangelogSummaryResponse)__this.get_Item(*(int)((long)(typeof(AottgChangelogDialogState) ).static_fields + 0x38) + -1);
			return pAVar4;
		}
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x5D75D90", Offset = "0x5D74D90", VA = "0x5D75D90")]
	public static void SetLatestVersion(LatestChangelogVersionResponse latestVersion)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$SetLatestVersion): clean
		uint uVar1;
		Gisketch_Aottg2UI_Game_AottgChangelogDialogState_StaticFields pGVar2;
		ChangelogEntryResponse pAVar3;
		String a;
		bool bVar4;

		if (Il2CppMethodInitialized_075487c3 == false) {
			Il2CppMethodInitialized_075487c3 = true;
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor != 0) goto label_05e75db7;
	label_05e75e49: ;
			if (g_data_0754887b != false) goto label_05e75dc4;
	label_05e75e5b: ;
			g_data_0754887b = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) goto label_05e75e49;
	label_05e75db7: ;
			if (g_data_0754887b == false) goto label_05e75e5b;
	label_05e75dc4: ;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgChangelogDialogState).static_fields;
		pGVar2._LatestVersion_k__BackingField = latestVersion;
		if (Il2CppMethodInitialized_0754887c == false) {
			Il2CppMethodInitialized_0754887c = true;
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor != 0) goto label_05e75e08;
	label_05e75eae: ;
			pAVar3 = AottgChangelogDialogState. _LatestPreviewEntry_k__BackingField;
		}
		else {
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) goto label_05e75eae;
	label_05e75e08: ;
			pAVar3 = AottgChangelogDialogState. _LatestPreviewEntry_k__BackingField;
		}
		if (pAVar3 == null) {
			return;
		}
		if (latestVersion == null) goto label_05e75f24;
		a = latestVersion._Id_k__BackingField;
		if (((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_0754887c != false) goto label_05e75eeb;
	label_05e75fb4: ;
			Il2CppMethodInitialized_0754887c = true;
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor != 0) goto label_05e75efb;
	label_05e75fd7: ;
			pAVar3 = AottgChangelogDialogState. _LatestPreviewEntry_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_0754887c == false) goto label_05e75fb4;
	label_05e75eeb: ;
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) goto label_05e75fd7;
	label_05e75efb: ;
			pAVar3 = AottgChangelogDialogState. _LatestPreviewEntry_k__BackingField;
		}
		if (pAVar3 == null) {
			throw new NullReferenceException();
		}
		bVar4 = (a != pAVar3._Id_k__BackingField);
		if (!bVar4) {
			return;
		}
	label_05e75f24: ;
		if (Il2CppMethodInitialized_0754887d == false) {
			Il2CppMethodInitialized_0754887d = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgChangelogDialogState).static_fields;
		pGVar2._LatestPreviewEntry_k__BackingField = null;
		return;
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x5D76000", Offset = "0x5D75000", VA = "0x5D76000")]
	public static void SetLatestPreview(ChangelogEntryResponse entry)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$SetLatestPreview): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075487c4 == false) {
			Il2CppMethodInitialized_075487c4 = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754887d == false) {
			Il2CppMethodInitialized_0754887d = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgChangelogDialogState._LatestPreviewEntry_k__BackingField = entry;
		return;
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x5D760C0", Offset = "0x5D750C0", VA = "0x5D760C0")]
	public static void SetReader(AottgChangelogReaderMode mode, ChangelogEntryResponse entry)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$SetReader): 7 lines keep C-only constructs
		uint uVar1;
		IntPtr pvVar2;
		String id;
		int iVar4;
		MethodInfo method_00;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075487c5 == false) {
			Il2CppMethodInitialized_075487c5 = true;
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor != 0) goto label_05e760ed;
	label_05e76248: ;
			if (Il2CppMethodInitialized_0754887e != false) goto label_05e760fa;
	label_05e7625a: ;
			Il2CppMethodInitialized_0754887e = true;
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor != 0) goto label_05e7610a;
	label_05e7627d: ;
			klass = typeof(AottgChangelogDialogState);
			AottgChangelogDialogState._ReaderMode_k__BackingField = mode;
			if (Il2CppMethodInitialized_0754887f != false) goto label_05e76121;
	label_05e7629c: ;
			Il2CppMethodInitialized_0754887f = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgChangelogDialogState);
		}
		else {
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) goto label_05e76248;
	label_05e760ed: ;
			if (Il2CppMethodInitialized_0754887e == false) goto label_05e7625a;
	label_05e760fa: ;
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) goto label_05e7627d;
	label_05e7610a: ;
			klass = typeof(AottgChangelogDialogState);
			AottgChangelogDialogState._ReaderMode_k__BackingField = mode;
			if (Il2CppMethodInitialized_0754887f == false) goto label_05e7629c;
	label_05e76121: ;
			uVar1 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			klass = typeof(AottgChangelogDialogState);
		}
		pvVar2 = klass.static_fields;
		*(ChangelogEntryResponse*)((long)pvVar2 + 0x18) = entry;
		if (entry != null) {
			method_00 = (MethodInfo)entry._Id_k__BackingField;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			goto joined_r0x05e76302;
		}
		if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548788 != false) goto label_05e762dd;
	label_05e763db: ;
			Il2CppMethodInitialized_07548788 = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07548788 == false) goto label_05e763db;
	label_05e762dd: ;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		method_00 = (MethodInfo)AottgChangelogDialogState. _SelectedEntryId_k__BackingField;
		uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
	joined_r0x05e76302: ;
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07548880 == false) {
			Il2CppMethodInitialized_07548880 = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgChangelogDialogState._SelectedEntryId_k__BackingField = (String)method_00;
		if (Il2CppMethodInitialized_07548788 == false) {
			Il2CppMethodInitialized_07548788 = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			id = AottgChangelogDialogState. _SelectedEntryId_k__BackingField;
		}
		else {
			id = *(String*)((long)(typeof(AottgChangelogDialogState)).static_fields + 0x28);
		}
		if (Il2CppMethodInitialized_075487ca == false) {
			Il2CppMethodInitialized_075487ca = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		iVar4 = AottgChangelogDialogState.IndexOfHistoryId(id);
		if (Il2CppMethodInitialized_07548883 == false) {
			Il2CppMethodInitialized_07548883 = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField = iVar4;
		return;
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x5D764B0", Offset = "0x5D754B0", VA = "0x5D764B0")]
	public static void ClearReader(AottgChangelogReaderMode mode, [Optional] string selectedEntryId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$ClearReader): 10 lines keep C-only constructs
		uint uVar1;
		IntPtr pvVar2;
		int iVar4;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075487c6 == false) {
			Il2CppMethodInitialized_075487c6 = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754887e == false) {
			Il2CppMethodInitialized_0754887e = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgChangelogDialogState);
		}
		else {
			uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
			klass = typeof(AottgChangelogDialogState);
		}
		typeof(AottgChangelogDialogState) =(AottgChangelogDialogState)klass;
		if (uVar1 == 0) {
			klass = typeof(AottgChangelogDialogState);
			AottgChangelogDialogState._ReaderMode_k__BackingField = mode;
		}
		else {
			*(int)((long)klass.static_fields + 0x20) = mode;
		}
		if (Il2CppMethodInitialized_0754887f == false) {
			Il2CppMethodInitialized_0754887f = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgChangelogDialogState);
		}
		else {
			uVar1 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			klass = typeof(AottgChangelogDialogState);
		}
		pvVar2 = klass.static_fields;
		*(ulong)((long)pvVar2 + 0x18) = 0;
		if (Il2CppMethodInitialized_07548880 == false) {
			Il2CppMethodInitialized_07548880 = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgChangelogDialogState._SelectedEntryId_k__BackingField = selectedEntryId;
		iVar4 = AottgChangelogDialogState.IndexOfHistoryId(selectedEntryId);
		if (Il2CppMethodInitialized_07548883 == false) {
			Il2CppMethodInitialized_07548883 = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField = iVar4;
		return;
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x5D766E0", Offset = "0x5D756E0", VA = "0x5D766E0")]
	public static void ResetHistory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$ResetHistory): 15 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int length;
		List<ChangelogSummaryResponse> pSVar3;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075487c7 == false) {
			Il2CppMethodInitialized_075487c7 = true;
			uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pSVar3 = AottgChangelogDialogState.History;
		}
		else {
			pSVar3 = *(List<ChangelogSummaryResponse>*)(typeof(AottgChangelogDialogState)).static_fields;
		}
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		piVar1 = &pSVar3._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar3._size;
		pSVar3._size = 0;
		if (0 < length) {
			Array.Clear((Array)pSVar3._items, 0, length);
		}
		if (Il2CppMethodInitialized_07548881 == false) {
			Il2CppMethodInitialized_07548881 = true;
			uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgChangelogDialogState);
		}
		else {
			uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgChangelogDialogState);
		}
		typeof(AottgChangelogDialogState) =(AottgChangelogDialogState)klass;
		if (uVar2 == 0) {
			klass = typeof(AottgChangelogDialogState);
			AottgChangelogDialogState._HistoryPage_k__BackingField = 0 ;
		}
		else {
			*(uint)((long)klass.static_fields + 0x30) = 0;
		}
		if (Il2CppMethodInitialized_07548882 == false) {
			Il2CppMethodInitialized_07548882 = true;
			uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgChangelogDialogState);
		}
		else {
			uVar2 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			klass = typeof(AottgChangelogDialogState);
			AottgChangelogDialogState._HistoryTotal_k__BackingField = 0;
		}
		else {
			*(uint)((long)klass.static_fields + 0x34) = 0;
		}
		if (Il2CppMethodInitialized_07548883 == false) {
			Il2CppMethodInitialized_07548883 = true;
			uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgChangelogDialogState);
		}
		else {
			uVar2 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField = -1;
			return;
		}
		*(uint)((long)klass.static_fields + 0x38) = 0xffffffff;
		return;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x5D768D0", Offset = "0x5D758D0", VA = "0x5D768D0")]
	public static void AppendHistory(PublicChangelogListResponse list)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$AppendHistory): 13 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		List<ChangelogSummaryResponse> pSVar4;
		ChangelogSummaryResponse[] pAVar5;
		Il2CppClass pIVar6;
		Il2CppRuntimeInterfaceOffsetPair pIVar7;
		String id;
		int iVar8;
		ChangelogSummaryResponse item;
		VirtualInvokeData pVVar9;
		ulong uVar10;
		object pIVar11;
		MethodInfo pMVar12;
		long lVar13;
		int iVar14;

		if (list == null) {
			return;
		}
		if (list._Page_k__BackingField < 2) {
			pSVar4 = AottgChangelogDialogState.History;
			if (pSVar4 == null) goto label_05e76dab;
			piVar1 = &pSVar4._version;
			*piVar1 = *piVar1 + 1;
			iVar14 = pSVar4._size;
			pSVar4._size = 0;
			if (0 < iVar14) {
				Array.Clear((Array)pSVar4._items, 0, iVar14);
			}
			if (Il2CppMethodInitialized_07548883 == false) {
				Il2CppMethodInitialized_07548883 = true;
				uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField = -1;
		}
		pIVar11 = (object)list._Entries_k__BackingField;
		if (pIVar11 != null) {
			iVar14 = 0;
	label_05e76b0c: ;
			do {
				pIVar6 = pIVar11.klass;
				uVar10 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar10 != 0) {
					pIVar7 = (pIVar6._1).interfaceOffsets;
					lVar13 = 0;
					do {
						if (*(IReadOnlyCollection<ChangelogSummaryResponse>*)((long)&pIVar7.interfaceType + lVar13) == typeof(IReadOnlyCollection<ChangelogSummaryResponse>)) {
							pVVar9 = pIVar6.vtable + *(int)((long)&pIVar7.offset + lVar13);
							goto label_05e76b63;
						}
						lVar13 = lVar13 + 0x10;
					} while (uVar10 * 0x10 != lVar13);
				}
				pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar11, (Il2CppClass)typeof(IReadOnlyCollection<ChangelogSummaryResponse>), 0);
	label_05e76b63: ;
				pMVar12 = pVVar9.method;
				iVar8 = (*pVVar9.methodPtr)(pIVar11,pMVar12);
				if (iVar8 <= iVar14) {
					iVar8 = list._Page_k__BackingField;
					if (Il2CppMethodInitialized_07548881 == false) {
						Il2CppMethodInitialized_07548881 = true;
						uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar2 = *(uint)((long)typeof(AottgChangelogDialogState) + 0xe4);
					}
					if (uVar2 == 0) {
					}
					pIVar6 = typeof(AottgChangelogDialogState);
					AottgChangelogDialogState._HistoryPage_k__BackingField = iVar8;
					iVar8 = list._Total_k__BackingField;
					if (Il2CppMethodInitialized_07548882 == false) {
						Il2CppMethodInitialized_07548882 = true;
						uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
						pIVar6 = typeof(AottgChangelogDialogState);
					}
					else {
						uVar2 = (((AottgChangelogDialogState)pIVar6)._2). cctor_finished_or_no_cctor;
					}
					if (uVar2 == 0) {
						pIVar6 = typeof(AottgChangelogDialogState);
						AottgChangelogDialogState. _HistoryTotal_k__BackingField = iVar8;
					}
					else {
						*(int)((long)*(IntPtr)((long)pIVar6 + 0xb8) + 0x34) = iVar8;
					}
					if (Il2CppMethodInitialized_07548788 == false) {
						Il2CppMethodInitialized_07548788 = true;
						uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
						pIVar6 = typeof(AottgChangelogDialogState);
					}
					else {
						uVar2 = *(uint)((long)pIVar6 + 0xe4);
					}
					if (uVar2 == 0) {
						id = AottgChangelogDialogState. _SelectedEntryId_k__BackingField;
						pIVar6 = typeof(AottgChangelogDialogState);
					}
					else {
						id = *(String*)((long)pIVar6.static_fields + 0x28);
					}
					if (Il2CppMethodInitialized_075487ca == false) {
						Il2CppMethodInitialized_075487ca = true;
						uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
						pIVar6 = typeof(AottgChangelogDialogState);
					}
					else {
						uVar2 = (pIVar6._2).cctor_finished_or_no_cctor;
					}
					if (uVar2 == 0) {
					}
					iVar8 = AottgChangelogDialogState.IndexOfHistoryId(id);
					if (Il2CppMethodInitialized_07548883 == false) {
						Il2CppMethodInitialized_07548883 = true;
						uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
					}
					if (uVar2 == 0) {
					}
					AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField = iVar8;
					return;
				}
				pIVar11 = (object)list._Entries_k__BackingField;
				if (pIVar11 == null) break;
				pSVar4 = AottgChangelogDialogState.History;
				pIVar6 = pIVar11.klass;
				uVar10 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar10 != 0) {
					pIVar7 = (pIVar6._1).interfaceOffsets;
					lVar13 = 0;
					do {
						if (*(IReadOnlyList<ChangelogSummaryResponse>*)((long)&pIVar7.interfaceType + lVar13) == typeof(IReadOnlyList<ChangelogSummaryResponse>)) {
							pVVar9 = pIVar6.vtable + *(int)((long)&pIVar7.offset + lVar13);
							goto label_05e76aa3;
						}
						lVar13 = lVar13 + 0x10;
					} while (uVar10 * 0x10 != lVar13);
				}
				pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar11, (Il2CppClass)typeof(IReadOnlyList<ChangelogSummaryResponse>), 0);
	label_05e76aa3: ;
				item = (ChangelogSummaryResponse)(*pVVar9.methodPtr)(pIVar11,iVar14,pVVar9.method);
				pMVar12 = MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_Add;
				if (pSVar4 == null) break;
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pAVar5 = pSVar4._items;
				if (pAVar5 == null) break;
				uVar3 = pSVar4._size;
				if ((uint)pAVar5.Length <= uVar3) {
					pSVar4.AddWithResize((object)item);
					iVar14 = iVar14 + 1;
					pIVar11 = (object)list._Entries_k__BackingField;
					if (pIVar11 == null) break;
					goto label_05e76b0c;
				}
				pSVar4._size = uVar3 + 1;
				pAVar5[(int)uVar3] = item;
				iVar14 = iVar14 + 1;
				pIVar11 = (object)list._Entries_k__BackingField;
			} while (pIVar11 != null);
		}
	label_05e76dab: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x5D76DB0", Offset = "0x5D75DB0", VA = "0x5D76DB0")]
	public static ChangelogSummaryResponse HistoryAt(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$HistoryAt): clean
		List<ChangelogSummaryResponse> __this;
		ChangelogSummaryResponse pAVar1;

		if (-1 < index) {
			__this = AottgChangelogDialogState.History;
			if (__this == null) {
	label_05e76e62: ;
				throw new NullReferenceException();
			}
			if (index < __this._size) {
				if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) {
					__this = AottgChangelogDialogState.History;
					if (__this == null) goto label_05e76e62;
				}
				return pAVar1;
			}
		}
		return null;
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x5D76410", Offset = "0x5D75410", VA = "0x5D76410")]
	public static void SelectHistoryId(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$SelectHistoryId): clean
		uint uVar1;
		int iVar2;

		iVar2 = AottgChangelogDialogState.IndexOfHistoryId(id);
		if (Il2CppMethodInitialized_07548883 == false) {
			Il2CppMethodInitialized_07548883 = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField = iVar2;
		return;
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x5D76E70", Offset = "0x5D75E70", VA = "0x5D76E70")]
	public static int IndexOfHistoryId(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c (Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$IndexOfHistoryId): clean
		bool bVar1;
		List<ChangelogSummaryResponse> __this;
		ChangelogSummaryResponse pAVar2;
		int index;

		index = 0;
		bVar1 = String.IsNullOrEmpty(id);
		if (bVar1) {
			return -1;
		}
		while(true) {
			__this = AottgChangelogDialogState.History;
			if (__this == null) break;
			if (__this._size <= index) {
				return -1;
			}
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) {
				__this = AottgChangelogDialogState.History;
				if (__this == null) break;
			}
			pAVar2 = __this.get_Item(index);
			if ((pAVar2 != null) &&(bVar1 = (pAVar2._Id_k__BackingField == id))) {
				return index;
			}
			index = index + 1;
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogDialogState.c.

	// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$.cctor: clean
	static AottgChangelogDialogState()
	{
		List<ChangelogSummaryResponse> __this;

		__this = new List<ChangelogSummaryResponse>();
		AottgChangelogDialogState.History = __this;
		AottgChangelogDialogState. _SelectedHistoryIndex_k__BackingField = -1;
		return;
	}
}
