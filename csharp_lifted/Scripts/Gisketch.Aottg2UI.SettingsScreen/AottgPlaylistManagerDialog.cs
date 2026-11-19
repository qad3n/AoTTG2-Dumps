// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200016B")]
[AottgDialog("setting-playlist-manager")]
public sealed class AottgPlaylistManagerDialog : AottgDialog
{
	[Token(Token = "0x4000852")]
	public const string Id = "setting-playlist-manager";

	[Token(Token = "0x170000E0")]
	protected override string Title
	{
		[Token(Token = "0x60007B6")]
		[Address(RVA = "0x5CC4970", Offset = "0x5CC3970", VA = "0x5CC4970", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("SettingsPopup.Sound.PlaylistManager");
			return pSVar1;
		}
	}

	[Token(Token = "0x170000E1")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60007B7")]
		[Address(RVA = "0x5CC49D0", Offset = "0x5CC39D0", VA = "0x5CC49D0", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x170000E2")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60007B8")]
		[Address(RVA = "0x5CC49E0", Offset = "0x5CC39E0", VA = "0x5CC49E0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(860.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x170000E3")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60007B9")]
		[Address(RVA = "0x5CC4AA0", Offset = "0x5CC3AA0", VA = "0x5CC4AA0", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$get_BodyLayout): clean
			GisketchLength height;
			GisketchLayoutDefinition pGVar1;

			height = AottgUi.Points(420.0);
			pGVar1 = AottgUi.Layout("Row", null, "Stretch", null, null, 14.0, null, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x5CC4B60", Offset = "0x5CC3B60", VA = "0x5CC4B60", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildBody): 1 lines keep C-only constructs
		List<string> pSVar1;
		String* ppSVar2;

		if (Il2CppMethodInitialized_075481af == false) {
			ppSVar2 = &"available";
			Il2CppMethodInitialized_075481af = true;
			this = (AottgPlaylistManagerDialog)ppSVar2;
		}
		pSVar1 = AottgPlaylistActions.AvailableSongs();
		ppSVar2 = (String*)body;
		AottgPlaylistManagerDialog.BuildColumn(body, "available", "SettingsPopup.Sound.AvailableSongs", pSVar1, true);
		if (Il2CppMethodInitialized_075481b0 == false) {
			ppSVar2 = &"SettingsPopup.Sound.SelectedSongs";
			Il2CppMethodInitialized_075481b0 = true;
		}
		pSVar1 = AottgPlaylistActions.PlaylistManagerSongs();
		AottgPlaylistManagerDialog.BuildColumn(body, "selected", "SettingsPopup.Sound.SelectedSongs", pSVar1, false);
		return;
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x5CC4CD0", Offset = "0x5CC3CD0", VA = "0x5CC4CD0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildFooter): clean
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Close", "overlay.close");
		return;
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x5CC4C10", Offset = "0x5CC3C10", VA = "0x5CC4C10")]
	private static void BuildAvailableColumn(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildAvailableColumn): 1 lines keep C-only constructs
		List<string> songs;
		String* method_00;

		if (Il2CppMethodInitialized_075481af == false) {
			method_00 = &"available";
			Il2CppMethodInitialized_075481af = true;
		}
		songs = AottgPlaylistActions.AvailableSongs();
		AottgPlaylistManagerDialog.BuildColumn(body, "available", "SettingsPopup.Sound.AvailableSongs", songs, true);
		return;
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x5CC4C70", Offset = "0x5CC3C70", VA = "0x5CC4C70")]
	private static void BuildSelectedColumn(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildSelectedColumn): 1 lines keep C-only constructs
		List<string> songs;
		String* method_00;

		if (Il2CppMethodInitialized_075481b0 == false) {
			method_00 = &"SettingsPopup.Sound.SelectedSongs";
			Il2CppMethodInitialized_075481b0 = true;
		}
		songs = AottgPlaylistActions.PlaylistManagerSongs() ;
		AottgPlaylistManagerDialog.BuildColumn(body, "selected", "SettingsPopup.Sound.SelectedSongs", songs, false);
		return;
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x5CC4D30", Offset = "0x5CC3D30", VA = "0x5CC4D30")]
	private static void BuildColumn(AottgUi body, string kind, string titleKey, List<string> songs, bool available)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildColumn): 2 lines keep C-only constructs
		AottgPlaylistManagerDialog.c__DisplayClass13_0 __this;
		String pSVar1;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLength minWidth;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPlaylistManagerDialog.c__DisplayClass13_0));
		__this = new Object();
		if (__this != null) {
			__this.titleKey = titleKey;
			__this.kind = kind;
			__this.songs = songs;
			__this.available = available;
			pSVar1 = String.Concat("setting-playlist-manager-", __this.kind);
			__this.columnId = pSVar1;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass13_0_BuildColumn_b__0);
			pSVar1 = __this.columnId;
			width = AottgUi.Percent(50.0);
			minWidth = AottgUi.Points(0.0);
			layout = AottgUi.Layout("Column", null, "Stretch", null, null, 8.0, width, null, minWidth, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			if (body != null) {
				body.Panel("clear", __this_00, pSVar1, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x5CC4F60", Offset = "0x5CC3F60", VA = "0x5CC4F60")]
	private static void BuildSongList(AottgUi list, string kind, List<string> songs, bool available)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildSongList): 17 lines keep C-only constructs
		AottgPlaylistManagerDialog.c__DisplayClass14_0* targetAddress;
		int iVar1;
		bool bVar2;
		int iVar3;
		MethodInfo __this;
		List<string> selected;
		String pSVar4;
		GisketchNodeDefinition pGVar5;
		GisketchUIBindingDefinition pGVar6;
		String* ppSVar7;
		AottgPlaylistManagerDialog.c__DisplayClass14_1 pGVar8;
		MethodInfo pMVar9;
		String str3;
		String id;
		Action<GisketchActionContext> __this_00;
		GisketchLength width;
		GisketchLength minHeight;
		GisketchLayoutDefinition pGVar10;
		undefined7 in_register_00000009;

		pMVar9 = (MethodInfo)CONCAT71(in_register_00000009, available);
		__this = (MethodInfo)il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPlaylistManagerDialog.c__DisplayClass14_0));
		__this = new Object();
		if (__this != null) {
			((AottgPlaylistManagerDialog.c__DisplayClass14_0)&__this.invoker_method).available = available;
			selected = AottgPlaylistActions.CurrentSongs();
			iVar3 = AottgPlaylistManagerDialog.VisibleCount(songs, selected, ((AottgPlaylistManagerDialog.c__DisplayClass14_0)&__this.invoker_method).available);
			pSVar4 = String.Concat("setting-playlist-manager-", kind, "-empty") ;
			if ((list != null) &&(pGVar5 = list.TextKey("Common.None", "stateMetaText", pSVar4, null, null), pGVar5 != null)) {
				pGVar5.active = iVar3 == 0;
				pGVar6 = new GisketchUIBindingDefinition();
				if (pGVar6 != null) {
					if (((AottgPlaylistManagerDialog.c__DisplayClass14_0)&__this.invoker_method).available == false) {
						ppSVar7 = &"settings.sound.customPlaylist.selected.empty";
					}
					else {
						ppSVar7 = &"settings.sound.customPlaylist.available.empty";
					}
					pGVar6.visible = *ppSVar7;
					pGVar5.bind = pGVar6;
					if (songs != null) {
						iVar1 = songs._size;
						if (selected == null) {
							if (0 < iVar1) {
								pGVar8 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPlaylistManagerDialog.c__DisplayClass14_1));
								pGVar8 = new Object();
								if (pGVar8 != null) {
									pGVar8.CS___8__locals1 =(AottgPlaylistManagerDialog.c__DisplayClass14_0)__this;
									pMVar9 = (MethodInfo)songs.get_Item(0);
									pGVar8.song = (String)pMVar9;
									pSVar4 = AottgPlaylistActions.SongStateId(pGVar8.song);
									String.Concat("setting-playlist-manager-", kind, "-", pSVar4);
									throw new NullReferenceException();
								}
								goto label_05dc5468;
							}
						}
						else if (0 < iVar1) {
							iVar3 = 0;
							do {
								pGVar8 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPlaylistManagerDialog.c__DisplayClass14_1));
								pGVar8 = new Object();
								if (pGVar8 == null) goto label_05dc5468;
								targetAddress = &pGVar8.CS___8__locals1;
								pGVar8.CS___8__locals1 =(AottgPlaylistManagerDialog.c__DisplayClass14_0)__this;
								pMVar9 = (MethodInfo)songs.get_Item(iVar3);
								pGVar8.song = (String)pMVar9;
								str3 = AottgPlaylistActions.SongStateId(pGVar8.song);
								id = String.Concat("setting-playlist-manager-", kind, "-", str3);
								bVar2 = selected.Contains((object)pGVar8.song);
								pSVar4 = pGVar8.song;
								__this_00 = new Action<GisketchActionContext>((object)pGVar8, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass14_1_BuildSongList_b);
								pGVar5 = list.Button(5, pSVar4, __this_00, id, null, null, null);
								if (pGVar5 == null) goto label_05dc5468;
								pGVar5.clip = true;
								if (*targetAddress ==null) goto label_05dc5468;
								pGVar5.active = (((*targetAddress).fields).available != false) != bVar2;
								pGVar6 = new GisketchUIBindingDefinition();
								if (*targetAddress ==null) goto label_05dc5468;
								if (((*targetAddress).fields).available == false) {
									pSVar4 = AottgSettingsStateKeys.CustomPlaylistSelected(str3);
								}
								else {
									pSVar4 = AottgSettingsStateKeys.CustomPlaylistAvailable(str3);
								}
								if (pGVar6 == null) goto label_05dc5468;
								pGVar6.visible = pSVar4;
								pGVar5.bind = pGVar6;
								width = AottgUi.Percent(100.0);
								minHeight = AottgUi.Points(36.0);
								pGVar10 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, minHeight, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
								pGVar5.layout = pGVar10;
								iVar3 = iVar3 + 1;
							} while (iVar3 < songs._size);
						}
					}
					return;
				}
			}
		}
	label_05dc5468: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x5CC55D0", Offset = "0x5CC45D0", VA = "0x5CC55D0")]
	private static void ToggleSong(GisketchActionContext context, string song, bool available)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$ToggleSong): 2 lines keep C-only constructs
		undefined3 in_register_00000031;

		if (CONCAT31(in_register_00000031, available) == 0) {
			AottgPlaylistActions.RemoveSong(song);
			AottgPlaylistActions.SyncAfterChange(context);
			return;
		}
		AottgPlaylistActions.AddSong(song);
		AottgPlaylistActions.SyncAfterChange(context);
		return;
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x5CC54F0", Offset = "0x5CC44F0", VA = "0x5CC54F0")]
	private static int VisibleCount(List<string> songs, List<string> selected, bool available)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$VisibleCount): clean
		bool bVar1;
		String item;
		int iVar2;
		int iVar3;

		iVar2 = 0;
		if (songs != null) {
			iVar3 = songs._size;
			if (selected == null) {
				iVar2 = 0;
				if (available) {
					iVar2 = iVar3;
				}
				if (iVar3 < 1) {
					iVar2 = 0;
				}
			}
			else if (0 < iVar3) {
				iVar3 = 0;
				iVar2 = 0;
				do {
					item = songs.get_Item(iVar3);
					bVar1 = selected.Contains((object)item);
					iVar2 = iVar2 + (uint)(bVar1 != available);
					iVar3 = iVar3 + 1;
				} while (iVar3 < songs._size);
			}
		}
		return iVar2;
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x5CC55F0", Offset = "0x5CC45F0", VA = "0x5CC55F0")]
	public AottgPlaylistManagerDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistManagerDialog.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass13_0$$.ctor: clean
	private void c__DisplayClass13_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass14_0$$.ctor: clean
	private void c__DisplayClass14_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass14_1$$.ctor: clean
	private void c__DisplayClass14_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass13_0$$<BuildColumn>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass13_0__BuildColumn_b__0(AottgUi column)
	{
		String pSVar1;
		String pSVar2;
		GisketchNodeDefinition pGVar3;
		GisketchLayoutDefinition pGVar4;
		Action<AottgUi> __this_00;
		GisketchLength pGVar5;
		GisketchLength height;
		GisketchLayoutDefinition contentLayout;

		pSVar1 = this.titleKey;
		pSVar2 = String.Concat(this.columnId, "-title");
		if (column != null) {
			pGVar3 = column.TextKey(pSVar1, "settingLabel", pSVar2, null, null);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar3 != null) {
				pGVar3.layout = pGVar4;
				pSVar1 = "clear";
				__this_00 = this.__9__1;
				if (__this_00 == null) {
					__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass13_0_BuildColumn_b__1);
					this.__9__1 = __this_00;
				}
				pSVar2 = String.Concat(this.columnId, "-scroll");
				pGVar5 = AottgUi.Percent(100.0);
				height = AottgUi.Percent(100.0);
				pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar5, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
				pGVar5 = AottgUi.Percent(100.0);
				contentLayout = AottgUi.Layout("Column", null, "Stretch", null, null, 6.0, pGVar5, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 4.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				column.ScrollView(pSVar1, __this_00, pSVar2, pGVar4, contentLayout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass13_0$$<BuildColumn>b__1: clean
	private void c__DisplayClass13_0__BuildColumn_b__1(AottgUi list)
	{


		AottgPlaylistManagerDialog.BuildSongList(list, this.kind, this.songs, this.available);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass14_1$$<BuildSongList>b__0: clean
	private void c__DisplayClass14_1__BuildSongList_b__0(GisketchActionContext context)
	{
		AottgPlaylistManagerDialog.c__DisplayClass14_0 pGVar1;
		MethodInfo method_00;

		pGVar1 = this.CS___8__locals1;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		method_00 = (MethodInfo)this.song;
		if (pGVar1.available == false) {
			AottgPlaylistActions.RemoveSong((String)method_00);
			AottgPlaylistActions.SyncAfterChange(context);
			return;
		}
		AottgPlaylistActions.AddSong((String)method_00);
		AottgPlaylistActions.SyncAfterChange(context);
		return;
	}
}
