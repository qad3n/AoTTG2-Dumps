// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000169")]
internal static class AottgPlaylistActions
{
	[Token(Token = "0x4000850")]
	private const string PlaylistRowId = "settings-sound-custom-playlist";

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x5CC3710", Offset = "0x5CC2710", VA = "0x5CC3710")]
	public static void OpenManagerDialog(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$OpenManagerDialog): clean
		uint uVar1;
		GisketchOverlayManager __this;
		bool bVar2;
		GisketchUIRoot root;

		if (Il2CppMethodInitialized_075481aa == false) {
			Il2CppMethodInitialized_075481aa = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		root = null;
		bVar2 = ((Object)context.GameObject != null);
		if (bVar2) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		AottgPlaylistActions.SyncCustomPlaylist(root);
		AottgPlaylistActions.SyncPlaylistManager(root);
		if ((root == null) ||(__this = root._Overlays_k__BackingField, __this == null)) {
			return;
		}
		__this.ShowDialog("setting-playlist-manager", true);
		return;
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x5CC3CC0", Offset = "0x5CC2CC0", VA = "0x5CC3CC0")]
	internal static void AddSong(GisketchActionContext context, string song)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AddSong): clean
		AottgPlaylistActions.AddSong(song);
		AottgPlaylistActions.SyncAfterChange(context);
		return;
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x5CC3E70", Offset = "0x5CC2E70", VA = "0x5CC3E70")]
	internal static void RemoveSong(GisketchActionContext context, string song)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$RemoveSong): clean
		AottgPlaylistActions.RemoveSong(song);
		AottgPlaylistActions.SyncAfterChange(context);
		return;
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x5CC3CD0", Offset = "0x5CC2CD0", VA = "0x5CC3CD0")]
	private static void AddSong(string song)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AddSong): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String[] pSVar3;
		bool bVar4;
		List<string> songs;
		MethodInfo pMVar5;

		if ((SettingsManager.SoundSettings == null) ||(pMVar5 = (MethodInfo)song, bVar4 = String.IsNullOrEmpty(song), bVar4)) {
			return;
		}
		songs = AottgPlaylistActions.CurrentSongs();
		if (songs != null) {
			bVar4 = songs.Contains((object)song);
			pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
			if (bVar4) {
				return;
			}
			piVar1 = &songs._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = songs._items;
			if (pSVar3 != null) {
				uVar2 = songs._size;
				if (uVar2 < (uint)pSVar3.Length) {
					songs._size = uVar2 + 1;
					pSVar3[(int)uVar2] = song;
				}
				else {
					songs.AddWithResize((object)song);
				}
				AottgPlaylistActions.SetSongs(songs);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x5CC3E80", Offset = "0x5CC2E80", VA = "0x5CC3E80")]
	private static void RemoveSong(string song)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$RemoveSong): 2 lines keep C-only constructs
		bool bVar1;
		AottgPlaylistActions.c__DisplayClass5_0 __this;
		List<string> songs;
		Predicate<T> match;
		MethodInfo method_00;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPlaylistActions.c__DisplayClass5_0));
		__this = new Object();
		if (__this == null) {
	label_05dc3fa6: ;
			throw new NullReferenceException();
		}
		__this.song = song;
		if (SettingsManager.SoundSettings != null) {
			method_00 = (MethodInfo)__this.song;
			bVar1 = String.IsNullOrEmpty((String)method_00);
			if (!bVar1) {
				songs = AottgPlaylistActions.CurrentSongs();
				match = new Predicate<string>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0_RemoveSong_b__0);
				if (songs != null) {
					songs.RemoveAll(match);
					AottgPlaylistActions.SetSongs(songs);
					return;
				}
				goto label_05dc3fa6;
			}
		}
		return;
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x5CC3FB0", Offset = "0x5CC2FB0", VA = "0x5CC3FB0")]
	internal static List<string> CurrentSongs()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$CurrentSongs): 3 lines keep C-only constructs
		int piVar1;
		SoundSettings pSVar2;
		StringSetting pSVar3;
		String[] pSVar4;
		MethodInfo pMVar5;
		bool bVar6;
		uint uVar7;
		List<string> __this;
		String[] pSVar8;
		String pSVar9;
		uint uVar10;
		long lVar11;

		__this = new List<string>();
		pSVar2 = SettingsManager.SoundSettings;
		if (pSVar2 == null) {
			pSVar9 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar3 = pSVar2.CustomPlaylist;
			if (pSVar3 == null) goto label_05dc41d0;
			pSVar9 = pSVar3._value;
		}
		if ((pSVar9 != null) &&(pSVar8 = pSVar9.Split(0x2c, 0), pSVar8 != null)) {
			uVar7 = (uint)pSVar8.Length;
			if (__this == null) {
				if (0 < (int)uVar7) {
					lVar11 = 0;
					do {
						if (uVar7 <= (uint)lVar11) goto label_05dc41d5;
						if (pSVar8[lVar11] == null) goto label_05dc41d0;
						pSVar9 = (pSVar8[lVar11]).Trim();
						bVar6 = String.IsNullOrEmpty(pSVar9);
						if (!bVar6) goto label_05dc41d0;
						uVar7 = (uint)pSVar8.Length;
						lVar11 = lVar11 + 1;
					} while ((int)lVar11 < (int)uVar7);
				}
			}
			else if (0 < (int)uVar7) {
				uVar10 = 0;
				do {
					if (uVar7 <= uVar10) {
	label_05dc41d5: ;
						throw new IndexOutOfRangeException();
					}
					if (pSVar8[(int)uVar10] == null) goto label_05dc41d0;
					pSVar9 = (pSVar8[(int)uVar10]).Trim();
					bVar6 = String.IsNullOrEmpty(pSVar9);
					if ((!bVar6) &&(bVar6 = __this.Contains((object)pSVar9), pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add, !bVar6)) {
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar4 = __this._items;
						if (pSVar4 == null) goto label_05dc41d0;
						uVar7 = __this._size;
						if (uVar7 < (uint)pSVar4.Length) {
							__this._size = uVar7 + 1;
							pSVar4[(int)uVar7] = pSVar9;
						}
						else {
							__this.AddWithResize((object)pSVar9);
						}
					}
					uVar10 = uVar10 + 1;
					uVar7 = (uint)pSVar8.Length;
				} while ((int)uVar10 < (int)uVar7);
			}
			return __this;
		}
	label_05dc41d0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x5CC4530", Offset = "0x5CC3530", VA = "0x5CC4530")]
	internal static List<string> AllSongs()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AllSongs): clean
		List<string> __this;

		__this = MusicManager.GetAllSongs();
		if (__this == null) {
			__this = new List<string>();
		}
		return __this;
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x5CC4640", Offset = "0x5CC3640", VA = "0x5CC4640")]
	internal static List<string> AvailableSongs()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$AvailableSongs): 2 lines keep C-only constructs
		uint uVar1;
		List<string> __this;
		StringComparer* ppSVar2;

		if (Il2CppMethodInitialized_075481a3 == false) {
			ppSVar2 = &typeof(StringComparer);
			Il2CppMethodInitialized_075481a3 = true;
		}
		__this = AottgPlaylistActions.AllSongs();
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Sort(*(IComparer<T>*)((long)(typeof(StringComparer)).static_fields + 0x18));
		return __this;
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x5CC4710", Offset = "0x5CC3710", VA = "0x5CC4710")]
	internal static List<string> PlaylistManagerSongs()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$PlaylistManagerSongs): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String[] pSVar3;
		bool bVar5;
		List<string> __this;
		List<string> __this_00;
		String pSVar6;
		int iVar7;
		MethodInfo* ppMVar8;

		if (Il2CppMethodInitialized_075481a4 == false) {
			ppMVar8 = &MethodInfo_System_Collections_Generic_List_string_get_Item;
			Il2CppMethodInitialized_075481a4 = true;
		}
		__this = AottgPlaylistActions.AvailableSongs();
		__this_00 = AottgPlaylistActions.CurrentSongs();
		if (__this_00 == null) {
	label_05dc484b: ;
			throw new NullReferenceException();
		}
		iVar7 = __this_00._size;
		if (__this == null) {
			if (0 < iVar7) {
				__this_00.get_Item(0);
				throw new NullReferenceException();
			}
		}
		else if (0 < iVar7) {
			iVar7 = 0;
			do {
				pSVar6 = __this_00.get_Item(iVar7);
				bVar5 = __this.Contains((object)pSVar6);
				if (!bVar5) {
					pSVar6 = __this_00.get_Item(iVar7);
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = __this._items;
					if (pSVar3 == null) goto label_05dc484b;
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar3.Length) {
						__this._size = uVar2 + 1;
						pSVar3[(int)uVar2] = pSVar6;
					}
					else {
						__this.AddWithResize((object)pSVar6);
					}
				}
				iVar7 = iVar7 + 1;
			} while (iVar7 < __this_00._size);
		}
		return __this;
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x5CBD3C0", Offset = "0x5CBC3C0", VA = "0x5CBD3C0")]
	internal static string CustomPlaylistText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$CustomPlaylistText): 1 lines keep C-only constructs
		List<string> __this;
		String[] value;
		String pSVar1;
		String* ppSVar2;

		if (Il2CppMethodInitialized_075481a5 == false) {
			ppSVar2 = &"Common.None";
			Il2CppMethodInitialized_075481a5 = true;
		}
		__this = AottgPlaylistActions.CurrentSongs();
		if (__this == null) {
			throw new NullReferenceException();
		}
		if (__this._size != 0) {
			value = (String[])__this.ToArray();
			pSVar1 = String.Join(", ", value);
			return pSVar1;
		}
		pSVar1 = Aottg2GisketchLocale.Text("Common.None");
		return pSVar1;
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x5CC38B0", Offset = "0x5CC28B0", VA = "0x5CC38B0")]
	internal static void SyncCustomPlaylist(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SyncCustomPlaylist): 1 lines keep C-only constructs
		GisketchUIState __this;
		String value;
		String* method_00;

		if (Il2CppMethodInitialized_075481a6 == false) {
			method_00 = &"settings-sound-custom-playlist";
			Il2CppMethodInitialized_075481a6 = true;
		}
		if ((root != null) &&(__this = root._State_k__BackingField, __this != null)) {
			value = AottgPlaylistActions.CustomPlaylistText() ;
			__this.Set("settings.sound.customPlaylist", value);
		}
		AottgSettingsDirtyRegistry.SyncRow(root, "settings-sound-custom-playlist");
		return;
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x5CC3950", Offset = "0x5CC2950", VA = "0x5CC3950")]
	internal static void SyncPlaylistManager(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SyncPlaylistManager): 1 lines keep C-only constructs
		GisketchUIState pGVar1;
		bool bVar2;
		List<string> __this;
		List<string> __this_00;
		HashSet<string> __this_01;
		String pSVar3;
		String pSVar4;
		MethodInfo pMVar5;
		int iVar6;
		uint uVar7;
		int local_54;

		if (Il2CppMethodInitialized_075481a7 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075481a7 = true;
		}
		bVar2 = ((Object)root == null);
		if (bVar2) {
			return;
		}
		if (root != null) {
			if (root._State_k__BackingField == null) {
				return;
			}
			__this = AottgPlaylistActions.CurrentSongs();
			__this_00 = AottgPlaylistActions.AvailableSongs() ;
			__this_01 = new HashSet<string>((IEnumerable<T>)__this);
			if (__this_00 != null) {
				iVar6 = __this_00._size;
				if (__this_01 == null) {
					local_54 = 0;
					if (0 < iVar6) {
						pMVar5 = null;
						pSVar3 = __this_00.get_Item(0);
						AottgPlaylistActions.SongStateId(pSVar3);
						throw new NullReferenceException();
					}
				}
				else if (iVar6 < 1) {
					local_54 = 0;
				}
				else {
					pMVar5 = null;
					local_54 = 0;
					do {
						iVar6 = (int)pMVar5;
						pSVar3 = __this_00.get_Item(iVar6);
						pSVar4 = AottgPlaylistActions.SongStateId(pSVar3);
						bVar2 = __this_01.Contains((object)pSVar3);
						pGVar1 = root._State_k__BackingField;
						pSVar3 = AottgSettingsStateKeys.CustomPlaylistAvailable(pSVar4);
						if (pGVar1 == null) goto label_05dc3c8b;
						pGVar1.SetBool(pSVar3, !bVar2);
						pGVar1 = root._State_k__BackingField;
						pSVar3 = AottgSettingsStateKeys.CustomPlaylistSelected(pSVar4);
						if (pGVar1 == null) goto label_05dc3c8b;
						pGVar1.SetBool(pSVar3, bVar2);
						local_54 = local_54 + (uint)!bVar2;
						uVar7 = iVar6 + 1;
						pMVar5 = (MethodInfo)(ulong)uVar7;
					} while ((int)uVar7 < __this_00._size);
				}
				if (__this != null) {
					if (0 < __this._size) {
						pMVar5 = null;
						do {
							iVar6 = (int)pMVar5;
							pSVar3 = __this.get_Item(iVar6);
							pSVar3 = AottgPlaylistActions.SongStateId(pSVar3);
							pGVar1 = root._State_k__BackingField;
							pSVar4 = AottgSettingsStateKeys.CustomPlaylistAvailable(pSVar3);
							if (pGVar1 == null) goto label_05dc3c8b;
							pGVar1.SetBool(pSVar4, false);
							pGVar1 = root._State_k__BackingField;
							pSVar3 = AottgSettingsStateKeys.CustomPlaylistSelected(pSVar3);
							if (pGVar1 == null) goto label_05dc3c8b;
							pGVar1.SetBool(pSVar3, true);
							uVar7 = iVar6 + 1;
							pMVar5 = (MethodInfo)(ulong)uVar7;
						} while ((int)uVar7 < __this._size);
					}
					pGVar1 = root._State_k__BackingField;
					if (pGVar1 != null) {
						pGVar1.SetBool("settings.sound.customPlaylist.available.empty", local_54 == 0);
						pGVar1 = root._State_k__BackingField;
						if (pGVar1 != null) {
							pGVar1.SetBool("settings.sound.customPlaylist.selected.empty", __this._size == 0);
							return;
						}
					}
				}
			}
		}
	label_05dc3c8b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x5CC4870", Offset = "0x5CC3870", VA = "0x5CC4870")]
	internal static string SongStateId(string song)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SongStateId): clean
		ushort uVar1;
		CultureInfo provider;
		String pSVar2;
		int index;
		uint uVar3;
		uint local_1c;

		if ((song == null) &&(song = (String)**(long*)(g_data_07556758 + 0xb8), song == null)) {
			throw new NullReferenceException();
		}
		if (song._stringLength < 1) {
			uVar3 = 0x811c9dc5;
		}
		else {
			index = 0;
			uVar3 = 0x811c9dc5;
			do {
				uVar1 = song.get_Chars(index);
				uVar3 = (uVar1 ^ uVar3) * 0x1000193;
				index = index + 1;
			} while (index < song._stringLength);
		}
		local_1c = uVar3;
		provider = CultureInfo.InvariantCulture;
		pSVar2 = local_1c.ToString("x8", (IFormatProvider)provider);
		return pSVar2;
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x5CC41E0", Offset = "0x5CC31E0", VA = "0x5CC41E0")]
	private static void SetSongs(List<string> songs)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SetSongs): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		SoundSettings pSVar3;
		StringSetting __this;
		MethodInfo pMVar4;
		bool bVar5;
		List<string> __this_00;
		String pSVar6;
		String[] pSVar7;
		int index;

		if (SettingsManager.SoundSettings == null) {
			return;
		}
		__this_00 = new List<string>();
		if ((songs != null) && (0 < songs._size)) {
			index = 0;
			if (__this_00 == null) {
				do {
					pSVar6 = songs.get_Item(index);
					if (pSVar6 == null) {
						bVar5 = String.IsNullOrEmpty((String)**(ulong*)(g_data_07556758 + 0xb8));
					}
					else {
						pSVar6 = songs.get_Item(index);
						if (pSVar6 == null) goto label_05dc4514;
						pSVar6 = pSVar6.Trim();
						bVar5 = String.IsNullOrEmpty(pSVar6);
					}
					if (!bVar5) goto label_05dc4514;
					index = index + 1;
				} while (index < songs._size);
			}
			else {
				do {
					pSVar6 = songs.get_Item(index);
					if (pSVar6 == null) {
						pSVar6 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					else {
						pSVar6 = songs.get_Item(index);
						if (pSVar6 == null) goto label_05dc4514;
						pSVar6 = pSVar6.Trim();
					}
					bVar5 = String.IsNullOrEmpty(pSVar6);
					if ((!bVar5) &&(bVar5 = __this_00.Contains((object)pSVar6), pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add, !bVar5)) {
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar7 = __this_00._items;
						if (pSVar7 == null) goto label_05dc4514;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar7.Length) {
							__this_00._size = uVar2 + 1;
							pSVar7[(int)uVar2] = pSVar6;
						}
						else {
							__this_00.AddWithResize((object)pSVar6);
						}
					}
					index = index + 1;
				} while (index < songs._size);
			}
		}
		pSVar3 = SettingsManager.SoundSettings;
		if ((pSVar3 != null) &&(__this_00 != null)) {
			__this = pSVar3.CustomPlaylist;
			if (__this_00._size == 0) {
				pSVar6 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				pSVar7 = (String[])__this_00.ToArray();
				pSVar6 = String.Join(",", pSVar7);
			}
			if (__this != null) {
				__this.Value = (object)pSVar6;
				return;
			}
		}
	label_05dc4514: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x5CC3DD0", Offset = "0x5CC2DD0", VA = "0x5CC3DD0")]
	private static void SyncAfterChange(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$SyncAfterChange): clean
		bool bVar1;
		GisketchUIRoot root;

		root = null;
		bVar1 = ((Object)context.GameObject != null);
		if (bVar1) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		AottgPlaylistActions.SyncCustomPlaylist(root);
		AottgPlaylistActions.SyncPlaylistManager(root);
		return;
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x5CC3830", Offset = "0x5CC2830", VA = "0x5CC3830")]
	private static GisketchUIRoot Root(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions$$Root): clean
		bool bVar1;
		GisketchUIRoot pGVar2;

		bVar1 = ((Object)context.GameObject != null);
		if (bVar1) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			pGVar2 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			return pGVar2;
		}
		return null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgPlaylistActions.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions.<>c__DisplayClass5_0$$.ctor: clean
	private void c__DisplayClass5_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistActions.<>c__DisplayClass5_0$$<RemoveSong>b__0: clean
	private bool c__DisplayClass5_0__RemoveSong_b__0(String item)
	{
		bool bVar1;

		bVar1 = (item == this.song);
		return bVar1;
	}
}
