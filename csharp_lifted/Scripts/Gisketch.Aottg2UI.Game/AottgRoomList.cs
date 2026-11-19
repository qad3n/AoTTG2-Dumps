// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgRoomList
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Text;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002D3")]
internal static class AottgRoomList
{
	[Token(Token = "0x4000E4A")]
	public const string ContentId = "room-list-rooms";

	[Token(Token = "0x4000E4B")]
	private const string HeaderId = "room-list-header";

	[Token(Token = "0x4000E4C")]
	private const string PlayersId = "room-list-header-players";

	[Token(Token = "0x4000E4D")]
	private const string PageId = "room-list-header-page";

	[Token(Token = "0x4000E4E")]
	private const int RoomsPerPage = 12;

	[Token(Token = "0x4000E4F")]
	private const float RowHeight = 60f;

	[Token(Token = "0x4000E50")]
	private const float RowGap = 4f;

	[Token(Token = "0x4000E51")]
	private const float SearchWidth = 360f;

	[Token(Token = "0x4000E52")]
	private const string SandboxIcon = "joystick";

	[Token(Token = "0x4000E53")]
	private const string AccountIcon = "UI/Icons/Navigation/Verification";

	[Token(Token = "0x4000E54")]
	private const string PasswordIcon = "UI/Icons/Navigation/KeyIcon";

	[Token(Token = "0x4000E55")]
	private const float RowIconSize = 24f;

	[Token(Token = "0x4000E56")]
	[FieldOffset(Offset = "0x0")]
	public static readonly StringSetting Query;

	[Token(Token = "0x4000E57")]
	[FieldOffset(Offset = "0x8")]
	public static readonly BoolSetting ShowFull;

	[Token(Token = "0x4000E58")]
	[FieldOffset(Offset = "0x10")]
	public static readonly BoolSetting ShowPassword;

	[Token(Token = "0x4000E5A")]
	[FieldOffset(Offset = "0x20")]
	private static readonly List<RoomInfo> Filtered;

	[Token(Token = "0x4000E5B")]
	[FieldOffset(Offset = "0x28")]
	private static readonly StringBuilder SignatureBuilder;

	[Token(Token = "0x4000E5C")]
	[FieldOffset(Offset = "0x30")]
	private static int _page;

	[Token(Token = "0x4000E5D")]
	[FieldOffset(Offset = "0x38")]
	private static string _layoutSignature;

	[Token(Token = "0x4000E5E")]
	[FieldOffset(Offset = "0x40")]
	private static string _countSignature;

	[Token(Token = "0x170001EF")]
	public static RoomInfo PasswordRoom
	{
		[Token(Token = "0x6001114")]
		[Address(RVA = "0x57CC8C0", Offset = "0x57CB8C0", VA = "0x57CC8C0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$get_PasswordRoom): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07545448 == false) {
				Il2CppMethodInitialized_07545448 = true;
				uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgRoomList._PasswordRoom_k__BackingField;
			}
			return *(RoomInfo*)((long)(typeof(AottgRoomList)).static_fields + 0x18);
		}
		[Token(Token = "0x6001115")]
		[Address(RVA = "0x57CC930", Offset = "0x57CB930", VA = "0x57CC930")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$set_PasswordRoom): clean

			AottgRoomList._PasswordRoom_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x57CC990", Offset = "0x57CB990", VA = "0x57CC990")]
	public static void Reset()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$Reset): clean
		Gisketch_Aottg2UI_Game_AottgRoomList_StaticFields pGVar1;

		pGVar1 = typeof(AottgRoomList).static_fields;
		pGVar1._page = 0;
		pGVar1._layoutSignature = null;
		pGVar1 = typeof(AottgRoomList).static_fields;
		pGVar1._countSignature = null;
		return;
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x57CCA10", Offset = "0x57CBA10", VA = "0x57CCA10")]
	public static void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$Refresh): 4 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		String a;
		String a_00;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar3;

		pMVar3 = null;
		bVar2 = AottgGisketchUiHost.IsScreenActive("room-list");
		if (bVar2) {
			AottgRoomList.Filter();
			a = AottgRoomList.Signature(false);
			a_00 = AottgRoomList.Signature(true);
			bVar2 = (a != AottgRoomList._layoutSignature);
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
			if (bVar2) {
				pMVar3 = extraout_RDX;
				if (uVar1 == 0) {
					pMVar3 = extraout_RDX_00;
				}
				AottgRoomList.Rebuild(a, a_00);
				return;
			}
			if (uVar1 == 0) {
			}
			pMVar3 = (MethodInfo)AottgRoomList._countSignature;
			bVar2 = (a_00 != (String)pMVar3);
			if (bVar2) {
				AottgRoomList.PatchCounts(a_00);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x57CD840", Offset = "0x57CC840", VA = "0x57CD840")]
	private static void Rebuild(string layout, string counts)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$Rebuild): 1 lines keep C-only constructs
		GisketchNodeDefinition replacement;
		GisketchScreenRouter pGVar1;
		MethodInfo view;
		Gisketch_Aottg2UI_Game_AottgRoomList_StaticFields pGVar2;
		bool bVar3;
		GisketchUIRoot __this;
		Action<AottgUi> __this_00;
		GisketchNodeDefinition[] pGVar4;
		GisketchNodeRefreshOptions __this_01;
		String pSVar5;

		__this = AottgGisketchUiHost.Root;
		__this_00 = new Action<AottgUi>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_Build);
		if ((__this != null) &&(pGVar4 = __this.BuildDetachedNodes("room-list-rooms", __this_00, "room-list-rooms"), pGVar4 != null)) {
			if ((int)pGVar4.Length != 1) {
				return;
			}
			replacement = pGVar4[0];
			__this_01 = new GisketchNodeRefreshOptions();
			if (__this_01 != null) {
				__this_01.PreserveScroll = true;
				__this_01.PreserveFocus = true;
				__this_01.SettleLayout = true;
				bVar3 = __this.RefreshNode("room-list-rooms", replacement, __this_01);
				if (!bVar3) {
					return;
				}
				pGVar1 = __this._Screens_k__BackingField;
				if (pGVar1 != null) {
					view = (MethodInfo)pGVar1._active;
					pSVar5 = AottgRoomList.PageLabel();
					AottgRoomList.SetText((GisketchView)view, "room-list-header-page", pSVar5);
					pSVar5 = AottgRoomList.PlayersOnline();
					AottgRoomList.SetText((GisketchView)view, "room-list-header-players", pSVar5);
					pGVar2 = typeof(AottgRoomList).static_fields;
					pGVar2._layoutSignature = layout;
					pGVar2 = typeof(AottgRoomList).static_fields;
					pGVar2._countSignature = counts;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x57CDA30", Offset = "0x57CCA30", VA = "0x57CDA30")]
	private static void PatchCounts(string counts)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$PatchCounts): clean
		GisketchScreenRouter pGVar1;
		GisketchView view;
		List<RoomInfo> __this;
		GisketchUIRoot pGVar3;
		String pSVar4;
		RoomInfo pPVar5;
		String pSVar6;
		String str2;
		int index;
		int iStack_48;
		int iStack_44;
		int iStack_40;
		int iStack_3c;
		String pSStack_38;

		iStack_40 = 0;
		iStack_44 = 0;
		pGVar3 = AottgGisketchUiHost.Root;
		if ((pGVar3 == null) ||(pGVar1 = pGVar3._Screens_k__BackingField, pGVar1 == null)) {
	label_058cdc76: ;
			throw new NullReferenceException();
		}
		view = pGVar1._active;
		pSStack_38 = counts;
		pSVar4 = AottgRoomList.PlayersOnline();
		AottgRoomList.SetText(view, "room-list-header-players", pSVar4);
		AottgRoomList.VisibleRange(ref iStack_40, ref iStack_44);
		iStack_3c = iStack_44;
		index = iStack_40;
		if (iStack_40 < iStack_44) {
			do {
				iStack_48 = index;
				pSVar4 = iStack_48.ToString();
				pSVar4 = String.Concat("room-list-rooms-", pSVar4);
				pSVar4 = String.Concat(pSVar4, "-players");
				__this = AottgRoomList.Filtered;
				if (__this == null) goto label_058cdc76;
				pPVar5 = __this.get_Item(index);
				if (pPVar5 == null) goto label_058cdc76;
				iStack_48 = pPVar5._PlayerCount_k__BackingField;
				pSVar6 = iStack_48.ToString();
				iStack_48 = pPVar5.maxPlayers;
				str2 = iStack_48.ToString();
				pSVar6 = String.Concat(pSVar6, "/", str2);
				AottgRoomList.SetText(view, pSVar4, pSVar6);
				index = index + 1;
			} while (iStack_3c != index);
		}
		AottgRoomList._countSignature = pSStack_38;
		return;
	}

	[Token(Token = "0x600111A")]
	[Address(RVA = "0x57CDD80", Offset = "0x57CCD80", VA = "0x57CDD80")]
	private static void SetText(GisketchView view, string id, string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$SetText): clean
		bool bVar1;
		Object x;
		TMP_Text x_00;

		if (view != null) {
			x = (Object)view.Find(id);
			x_00 = null;
			bVar1 = (x != null);
			if (bVar1) {
				if (x == null) goto label_058cde6e;
				x_00 = x.GetComponentInChildren<TMP_Text>();
			}
			bVar1 = ((Object)x_00 != null);
			if (!bVar1) {
				return;
			}
			if (x_00 != null) {
				x_00.set_text(text);
				return;
			}
		}
	label_058cde6e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600111B")]
	[Address(RVA = "0x57CE0D0", Offset = "0x57CD0D0", VA = "0x57CE0D0")]
	public static void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$Build): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgRoomList___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "clear";
		pGVar1 = typeof(AottgRoomList.c).static_fields;
		__this = pGVar1.__9__29_0;
		if (__this == null) {
			if ((typeof(AottgRoomList.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgRoomList.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c_Build_b__29_0);
			pGVar1 = typeof(AottgRoomList.c).static_fields;
			pGVar1.__9__29_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 4.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this, "room-list-rooms", layout, null);
		return;
	}

	[Token(Token = "0x600111C")]
	[Address(RVA = "0x57CE2B0", Offset = "0x57CD2B0", VA = "0x57CE2B0")]
	public static void BuildHeader(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$BuildHeader): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgRoomList___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		AottgRoomList.Filter();
		style = "clear";
		pGVar1 = typeof(AottgRoomList.c).static_fields;
		__this = pGVar1.__9__30_0;
		if (__this == null) {
			if ((typeof(AottgRoomList.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgRoomList.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c_BuildHeader_b__30_0);
			pGVar1 = typeof(AottgRoomList.c).static_fields;
			pGVar1.__9__30_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", null, "Center", null, null, 8.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this, "room-list-header", layout, null);
		return;
	}

	[Token(Token = "0x600111D")]
	[Address(RVA = "0x57CE4C0", Offset = "0x57CD4C0", VA = "0x57CE4C0")]
	private static void SearchChanged(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$SearchChanged): clean
		String value;
		MethodInfo method_00;

		method_00 = (MethodInfo)AottgRoomList.Query;
		value = context.InputText;
		if (method_00 == null) {
			throw new NullReferenceException();
		}
		method_00.Value = (object)value;
		AottgRoomList.Refresh();
		return;
	}

	[Token(Token = "0x600111E")]
	[Address(RVA = "0x57CE550", Offset = "0x57CD550", VA = "0x57CE550")]
	public static void ChangePage(int delta)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$ChangePage): 4 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545452 == false) {
			Il2CppMethodInitialized_07545452 = true;
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgRoomList);
		}
		else {
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgRoomList);
		}
		typeof(AottgRoomList) = (AottgRoomList)klass;
		if (uVar1 == 0) {
			iVar2 = AottgRoomList.PageCount();
		}
		else {
			iVar2 = AottgRoomList.PageCount();
		}
		if (iVar2 == 0) {
			return;
		}
		if (((typeof(AottgRoomList))._2).cctor_finished_or_no_cctor == 0) {
		}
		AottgRoomList._page =(iVar2 + delta + AottgRoomList._page) % iVar2;
		AottgRoomList.Refresh();
		return;
	}

	[Token(Token = "0x600111F")]
	[Address(RVA = "0x57CE6C0", Offset = "0x57CD6C0", VA = "0x57CE6C0")]
	public static void Join(RoomInfo room)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$Join): clean
		uint uVar1;
		GisketchOverlayManager __this;
		MultiplayerSettings __this_00;
		bool bVar3;
		String pSVar4;
		GisketchUIRoot pGVar5;
		String pSVar6;

		bVar3 = PhotonExtensions.GetBoolProperty(room, RoomProperty.AccountRequired, false);
		if (bVar3) {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				bVar3 = AccountManager.IsLoggedIn;
			}
			else {
				bVar3 = AccountManager.IsLoggedIn;
			}
			if (!bVar3) {
				if (((typeof(Aottg2GisketchLocale))._2). cctor_finished_or_no_cctor == 0) {
				}
				pSVar4 = Aottg2GisketchLocale.Text("Common.Join");
				if (Il2CppMethodInitialized_07545458 == false) {
					Il2CppMethodInitialized_07545458 = true;
					uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = ((typeof(Aottg2GisketchLocale))._2). cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				pSVar6 = Aottg2GisketchLocale.Text("MainMenu.MultiplayerRoomListPopup.AccountRequired");
				AottgRoomList.Warn(pSVar4, pSVar6);
				return;
			}
		}
		if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07545465 != false) goto label_058ce7c0;
	label_058ce93d: ;
			Il2CppMethodInitialized_07545465 = true;
			uVar1 = (typeof(RoomProperty)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07545465 == false) goto label_058ce93d;
	label_058ce7c0: ;
			uVar1 = (typeof(RoomProperty)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar4 = PhotonExtensions.GetStringProperty(room, RoomProperty.PasswordHash, "");
		bVar3 = (pSVar4 != (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (!bVar3) {
			if (room != null) {
				__this_00 = SettingsManager.MultiplayerSettings;
				pSVar4 = room.name;
				pSVar6 = PhotonExtensions.GetStringProperty(room, RoomProperty.Name, "");
				if (__this_00 != null) {
					__this_00.JoinRoom(pSVar4, pSVar6, (String)**(ulong*)(g_data_07556758 + 0xb8));
					return;
				}
			}
			goto label_058ceab8;
		}
		if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075454e7 != false) goto label_058ce838;
	label_058cea2d: ;
			g_data_075454e7 = true;
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075454e7 == false) goto label_058cea2d;
	label_058ce838: ;
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgRoomList._PasswordRoom_k__BackingField = room;
		pGVar5 = AottgGisketchUiHost.Root;
		if (pGVar5 != null) {
			__this = pGVar5._Overlays_k__BackingField;
			if (__this == null) {
				return;
			}
			__this.ShowDialog("multiplayer-room-password", true);
			return;
		}
	label_058ceab8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001120")]
	[Address(RVA = "0x57CEBC0", Offset = "0x57CDBC0", VA = "0x57CEBC0")]
	public static bool TryJoinPasswordRoom(string password)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$TryJoinPasswordRoom): clean
		uint uVar1;
		RoomInfo room;
		MultiplayerSettings __this;
		bool bVar2;
		String pSVar3;
		String pSVar4;

		if (Il2CppMethodInitialized_07545454 == false) {
			Il2CppMethodInitialized_07545454 = true;
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075454e8 == false) {
			Il2CppMethodInitialized_075454e8 = true;
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			room = AottgRoomList._PasswordRoom_k__BackingField;
		}
		else {
			room = *(RoomInfo*)((long)(typeof(AottgRoomList)).static_fields + 0x18);
		}
		if (room != null) {
			if (((typeof(RoomProperty))._2).cctor_finished_or_no_cctor == 0) {
			}
			pSVar3 = PhotonExtensions.GetStringProperty(room, RoomProperty.PasswordSalt, "");
			pSVar3 = Util.CreatePBKDF2(password, pSVar3);
			pSVar4 = PhotonExtensions.GetStringProperty(room, RoomProperty.PasswordHash, "");
			bVar2 = (pSVar3 != pSVar4);
			if (!bVar2) {
				__this = SettingsManager.MultiplayerSettings;
				pSVar3 = room.name;
				pSVar4 = PhotonExtensions.GetStringProperty(room, RoomProperty.Name, "");
				if (__this == null) {
					throw new NullReferenceException();
				}
				__this.JoinRoom(pSVar3, pSVar4, password);
				return true;
			}
		}
		return false;
	}

	[Token(Token = "0x6001121")]
	[Address(RVA = "0x57CEB20", Offset = "0x57CDB20", VA = "0x57CEB20")]
	public static void Warn(string title, string message)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$Warn): clean
		GisketchUIRoot __this;
		AottgToastDefinition __this_00;

		__this = AottgGisketchUiHost.Root;
		__this_00 = new AottgToastDefinition(1, "warning", title, message, null);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.ShowToast(__this_00);
		return;
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x57CBFC0", Offset = "0x57CAFC0", VA = "0x57CBFC0")]
	public static string RoomTitle(RoomInfo room)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$RoomTitle): clean
		String pSVar1;

		pSVar1 = PhotonExtensions.GetStringProperty(room, RoomProperty.Name, "");
		pSVar1 = MiscExtensions.HexColor(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x6001123")]
	[Address(RVA = "0x57CEEC0", Offset = "0x57CDEC0", VA = "0x57CEEC0")]
	private static void BuildRoom(AottgUi content, RoomInfo room, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$BuildRoom): 14 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		RoomInfo pPVar4;
		bool bVar5;
		AottgRoomList.c__DisplayClass37_0 __this;
		String pSVar6;
		String pSVar7;
		Action<GisketchActionContext> __this_00;
		GisketchNodeDefinition pGVar8;
		GisketchLength pGVar9;
		GisketchLength pGVar10;
		GisketchLayoutDefinition pGVar11;
		GisketchSearchDefinition pGVar12;
		List<GisketchNodeDefinition> __this_01;
		String pSVar13;
		String str2;
		GisketchNodeDefinition[] pGVar14;
		GisketchNodeDefinition[] pGVar15;
		MethodInfo pMVar16;
		AottgRoomList.c__DisplayClass37_0 targetAddress;
		int local_48;
		int local_44;
		String local_40;
		GisketchNodeDefinition local_38;

		__this = new AottgRoomList.c__DisplayClass37_0();
		if (__this == null) goto label_058cfd12;
		targetAddress = &__this.fields;
		__this.room = room;
		local_44 = index;
		pSVar6 = local_44.ToString();
		pSVar7 = String.Concat("room-list-rooms-", pSVar6);
		pSVar6 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new Action<GisketchActionContext>((object)__this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c__DisplayClass37_0_BuildRoom_b__0);
		if (content == null) goto label_058cfd12;
		pGVar8 = content.Button(5, pSVar6, __this_00, pSVar7, null, null, null);
		pGVar9 = AottgUi.Percent(100.0);
		pGVar10 = AottgUi.Points(60.0);
		pGVar11 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar9, pGVar10, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (pGVar8 == null) goto label_058cfd12;
		pGVar8.layout = pGVar11;
		pGVar12 = AottgUi.Search(null, null, true, null, null, null, null, false);
		pGVar8.search = pGVar12;
		local_38 = pGVar8;
		__this_01 = new List<GisketchNodeDefinition>();
		pMVar16 = (MethodInfo *)"-name";
		pSVar6 = String.Concat(pSVar7, "-name");
		pSVar13 = AottgRoomList.RoomTitle(targetAddress.room);
		pGVar9 = AottgUi.Points(0.0);
		pGVar11 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, pGVar9, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		pGVar8 = AottgRoomList.Text(pSVar6, pSVar13, pGVar11);
		if (__this_01 == null) goto label_058cfd12;
		piVar1 = &__this_01._version;
		*piVar1 = *piVar1 + 1;
		pGVar14 = __this_01._items;
		if (pGVar14 == null) goto label_058cfd12;
		uVar2 = __this_01._size;
		if (uVar2 < (uint)pGVar14.Length) {
			__this_01._size = uVar2 + 1;
			pGVar14[(int)uVar2] = pGVar8;
		}
		else {
			__this_01.AddWithResize((object)pGVar8);
		}
		pSVar6 = String.Concat(pSVar7, "-details");
		pPVar4 = targetAddress.room;
		local_40 = pSVar7;
		pSVar7 = PhotonExtensions.GetStringProperty(pPVar4, RoomProperty.Map, "");
		pSVar13 = PhotonExtensions.GetStringProperty(targetAddress.room, RoomProperty.GameMode, "");
		pSVar13 = ContentLocale.ModeName(pSVar13);
		pSVar7 = String.Concat(pSVar7, " / ", pSVar13);
		pGVar11 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		pGVar8 = AottgRoomList.Text(pSVar6, pSVar7, pGVar11);
		piVar1 = &__this_01._version;
		*piVar1 = *piVar1 + 1;
		pGVar14 = __this_01._items;
		if (pGVar14 == null) goto label_058cfd12;
		uVar2 = __this_01._size;
		if (uVar2 < (uint)pGVar14.Length) {
			__this_01._size = uVar2 + 1;
			pGVar14[(int)uVar2] = pGVar8;
		}
		else {
			__this_01.AddWithResize((object)pGVar8);
		}
		pSVar6 = local_40;
		bVar5 = PhotonExtensions.GetBoolProperty(targetAddress.room, RoomProperty.Sandbox, false);
		if (bVar5) {
			pSVar7 = String.Concat(pSVar6, "-sandbox");
			pSVar13 = Aottg2GisketchLocale.Text("MainMenu.MultiplayerRoomListPopup.CustomGameMode");
			pGVar8 = AottgRoomList.Icon(pSVar7, "joystick", "roomSandboxIcon", pSVar13);
			piVar1 = &__this_01._version;
			*piVar1 = *piVar1 + 1;
			pGVar14 = __this_01._items;
			if (pGVar14 == null) goto label_058cfd12;
			uVar2 = __this_01._size;
			if (uVar2 < (uint)pGVar14.Length) {
				__this_01._size = uVar2 + 1;
				pGVar14[(int)uVar2] = pGVar8;
				goto label_058cf644;
			}
			__this_01.AddWithResize((object)pGVar8);
			pPVar4 = targetAddress.room;
			uVar3 = (typeof(RoomProperty)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_058cf644: ;
			pPVar4 = targetAddress.room;
			uVar3 = (typeof(RoomProperty)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar5 = PhotonExtensions.GetBoolProperty(pPVar4, RoomProperty.AccountRequired, false);
		if (bVar5) {
			pSVar7 = String.Concat(pSVar6, "-account");
			if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07545458 == false) goto label_058cfcd2;
	label_058cf6b6: ;
				uVar3 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07545458 != false) goto label_058cf6b6;
	label_058cfcd2: ;
				Il2CppMethodInitialized_07545458 = true;
				uVar3 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
			}
			pSVar13 = Aottg2GisketchLocale.Text("MainMenu.MultiplayerRoomListPopup.AccountRequired");
			pGVar8 = AottgRoomList.Icon(pSVar7, "UI/Icons/Navigation/Verification", "roomAccountIcon", pSVar13);
			piVar1 = &__this_01._version;
			*piVar1 = *piVar1 + 1;
			pGVar14 = __this_01._items;
			if (pGVar14 == null) goto label_058cfd12;
			uVar2 = __this_01._size;
			if (uVar2 < (uint)pGVar14.Length) {
				__this_01._size = uVar2 + 1;
				pGVar14[(int)uVar2] = pGVar8;
			}
			else {
				__this_01.AddWithResize((object)pGVar8);
			}
		}
		pPVar4 = targetAddress.room;
		if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07545465 == false) goto label_058cf8f7;
	label_058cf7d0: ;
			uVar3 = (typeof(RoomProperty)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07545465 != false) goto label_058cf7d0;
	label_058cf8f7: ;
			Il2CppMethodInitialized_07545465 = true;
			uVar3 = (typeof(RoomProperty)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		pSVar7 = PhotonExtensions.GetStringProperty(pPVar4, RoomProperty.PasswordHash, "");
		bVar5 = (pSVar7 != (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar5) {
			pSVar7 = String.Concat(pSVar6, "-password");
			pSVar13 = Aottg2GisketchLocale.Text("Common.Password");
			pGVar8 = AottgRoomList.Icon(pSVar7, "UI/Icons/Navigation/KeyIcon", "roomPasswordIcon", pSVar13);
			piVar1 = &__this_01._version;
			*piVar1 = *piVar1 + 1;
			pGVar14 = __this_01._items;
			if (pGVar14 == null) goto label_058cfd12;
			uVar2 = __this_01._size;
			if (uVar2 < (uint)pGVar14.Length) {
				__this_01._size = uVar2 + 1;
				pGVar14[(int)uVar2] = pGVar8;
			}
			else {
				__this_01.AddWithResize((object)pGVar8);
			}
		}
		pSVar7 = String.Concat(pSVar6, "-players");
		pPVar4 = targetAddress.room;
		if (pPVar4 != null) {
			local_48 = pPVar4._PlayerCount_k__BackingField;
			pSVar13 = local_48.ToString();
			local_48 = pPVar4.maxPlayers;
			str2 = local_48.ToString();
			pSVar13 = String.Concat(pSVar13, "/", str2);
			pGVar9 = AottgUi.Points(64.0);
			pGVar11 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, pGVar9, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			pGVar8 = AottgRoomList.Text(pSVar7, pSVar13, pGVar11);
			piVar1 = &__this_01._version;
			*piVar1 = *piVar1 + 1;
			pGVar14 = __this_01._items;
			if (pGVar14 != null) {
				uVar2 = __this_01._size;
				if (uVar2 < (uint)pGVar14.Length) {
					__this_01._size = uVar2 + 1;
					pGVar14[(int)uVar2] = pGVar8;
				}
				else {
					__this_01.AddWithResize((object)pGVar8);
				}
				pGVar14 = (GisketchNodeDefinition[])new GisketchNodeDefinition[1];
				pGVar8 = new GisketchNodeDefinition();
				if (pGVar8 != null) {
					pGVar8.type = "Panel";
					pSVar6 = String.Concat(pSVar6, "-content");
					pGVar8.id = pSVar6;
					pGVar8.style = "roomRow";
					pGVar9 = AottgUi.Percent(100.0);
					pGVar10 = AottgUi.Percent(100.0);
					pGVar11 = AottgUi.Layout("Row", null, "Center", null, null, 12.0, pGVar9, pGVar10, null, null, null, null, 0.0, 18.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
					pGVar8.layout = pGVar11;
					pGVar15 = (GisketchNodeDefinition[])__this_01.ToArray();
					pGVar8.children = pGVar15;
					if (pGVar14 != null) {
						if ((int)pGVar14.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						pGVar14[0] = pGVar8;
						local_38.children = pGVar14;
						return;
					}
				}
			}
		}
	label_058cfd12: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001124")]
	[Address(RVA = "0x57CEAC0", Offset = "0x57CDAC0", VA = "0x57CEAC0")]
	private static string AccountRequiredText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$AccountRequiredText): clean
		String pSVar1;

		pSVar1 = Aottg2GisketchLocale.Text("MainMenu.MultiplayerRoomListPopup.AccountRequired");
		return pSVar1;
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x57CFD30", Offset = "0x57CED30", VA = "0x57CFD30")]
	private static GisketchNodeDefinition Text(string id, string text, GisketchLayoutDefinition layout)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$Text): 3 lines keep C-only constructs
		ulong in_RAX;
		GisketchNodeDefinition __this;
		ulong local_28;

		local_28 = in_RAX;
		__this = new GisketchNodeDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.type = "Text";
		__this.id = id;
		__this.text = text;
		__this.style = "roomRowText";
		local_28 = local_28 & 0xffffffffffff0000;
		local_28 = new Nullable<bool>(true);
		__this.richText = local_28._0_2_;
		__this.layout = layout;
		return __this;
	}

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x57CFE50", Offset = "0x57CEE50", VA = "0x57CFE50")]
	private static GisketchNodeDefinition Icon(string id, string icon, string style, string tooltip)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$Icon): clean
		GisketchNodeDefinition __this;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;

		__this = new GisketchNodeDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.type = "Icon";
		__this.id = id;
		__this.icon = icon;
		__this.style = style;
		__this.tooltip = tooltip;
		width = AottgUi.Points(24.0);
		height = AottgUi.Points(24.0);
		pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		__this.layout = pGVar1;
		return __this;
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x57CCB20", Offset = "0x57CBB20", VA = "0x57CCB20")]
	private static void Filter()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$Filter): 12 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		List<RoomInfo> pSVar4;
		String a;
		Dictionary<object, object> __this;
		RoomInfo[] pPVar5;
		object room;
		bool bVar6;
		int iVar7;
		int iVar8;
		Gisketch_Aottg2UI_Game_AottgRoomList_StaticFields pGVar9;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		String pSVar10;
		MethodInfo pMVar11;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
		byte[] local_48 = new byte[16];
		RoomInfo local_38;

		local_68._dictionary = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._currentValue = null;
		pGVar9 = typeof(AottgRoomList).static_fields;
		pSVar4 = pGVar9.Filtered;
		if (pSVar4 != null) {
			piVar1 = &pSVar4._version;
			*piVar1 = *piVar1 + 1;
			iVar7 = pSVar4._size;
			pSVar4._size = 0;
			if (0 < iVar7) {
				Array.Clear((Array)pSVar4._items, 0, iVar7);
				pGVar9 = typeof(AottgRoomList).static_fields;
			}
			if (pGVar9.Query != null) {
				a = pGVar9.Query._value;
				__this = (Dictionary<object, object>)MainMenuGameManager.RoomList;
				if ((__this != null) &&(__this_00 = __this.Values, __this_00 != null)) {
					local_48.GetEnumerator(__this_00);
					local_68._currentValue = (object)local_38;
					local_68._dictionary = (Dictionary<TKey, TValue>)local_48._0_8_;
					local_68._index = local_48._8_4_;
					local_68._version = local_48._12_4_;
					local_48._0_8_ = null;
					local_48._8_8_ = &local_68;
	label_058ccd00: ;
					do {
						do {
							pMVar11 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_RoomInfo_MoveNext ;
							bVar6 = local_68.MoveNext();
							room = local_68._currentValue;
							if (!bVar6) {
								local_68.Dispose();
								if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
									iVar8 = AottgRoomList.PageCount();
								}
								else {
									iVar8 = AottgRoomList.PageCount();
								}
								if (iVar8 == 0) {
									iVar7 = 0;
									uVar2 = ((typeof(AottgRoomList))._2). cctor_finished_or_no_cctor;
								}
								else {
									if (((typeof(AottgRoomList))._2). cctor_finished_or_no_cctor == 0) {
									}
									iVar7 = AottgRoomList._page;
									iVar7 = Math.Min(iVar7, iVar8 + -1);
									uVar2 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
								}
								if (uVar2 == 0) {
								}
								AottgRoomList._page = iVar7;
								return;
							}
							bVar6 = AottgRoomList.IsValid((RoomInfo)room);
						} while (!bVar6);
						bVar6 = (a != (String)**(ulong*)(g_data_07556758 + 0xb8));
						if (!bVar6) break;
						pSVar10 = RoomProperty.Name;
						pSVar10 = PhotonExtensions.GetStringProperty((RoomInfo)room, pSVar10, "");
						if (pSVar10 == null) {
							throw new NullReferenceException();
						}
						iVar7 = pSVar10.IndexOf(a, 5);
						if (-1 < iVar7) break;
						pSVar10 = RoomProperty.Map;
						pSVar10 = PhotonExtensions.GetStringProperty((RoomInfo)room, pSVar10, "");
						if (pSVar10 == null) {
							throw new NullReferenceException();
						}
						iVar7 = pSVar10.IndexOf(a, 5);
						if (-1 < iVar7) break;
						pSVar10 = RoomProperty.GameMode;
						pSVar10 = PhotonExtensions.GetStringProperty((RoomInfo)room, pSVar10, "");
						if (pSVar10 == null) {
							throw new NullReferenceException();
						}
						iVar7 = pSVar10.IndexOf(a, 5);
					} while (iVar7 < 0);
					pGVar9 = typeof(AottgRoomList).static_fields;
					if (pGVar9.ShowFull == null) {
						throw new NullReferenceException();
					}
					if (pGVar9.ShowFull._value == false) {
						if ((RoomInfo)room == null) {
							throw new NullReferenceException();
						}
						if (((RoomInfo)((long)room + 0x10)).maxPlayers <=((RoomInfo)((long)room + 0x10))._PlayerCount_k__BackingField) goto label_058ccd00;
					}
					if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
						pGVar9 = typeof(AottgRoomList).static_fields;
					}
					if (pGVar9.ShowPassword == null) {
						throw new NullReferenceException();
					}
					if (pGVar9.ShowPassword._value == false) {
						pSVar10 = PhotonExtensions.GetStringProperty((RoomInfo)room, RoomProperty.PasswordHash, "");
						bVar6 = (pSVar10 != (String)**(ulong*)(g_data_07556758 + 0xb8));
						if (bVar6) goto label_058ccd00;
						uVar2 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar2 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
					}
					if (uVar2 == 0) {
					}
					pSVar4 = AottgRoomList.Filtered;
					if (pSVar4 != null) {
						piVar1 = &pSVar4._version;
						*piVar1 = *piVar1 + 1;
						pPVar5 = pSVar4._items;
						if (pPVar5 != null) {
							uVar3 = pSVar4._size;
							if (uVar3 < (uint)pPVar5.Length) {
								pSVar4._size = uVar3 + 1;
								pPVar5[(int)uVar3] = (RoomInfo)room;
							}
							else {
								pSVar4.AddWithResize(room);
							}
							goto label_058ccd00;
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001128")]
	[Address(RVA = "0x57CFFF0", Offset = "0x57CEFF0", VA = "0x57CFFF0")]
	private static bool Matches(RoomInfo room, string property, string search)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$Matches): clean
		int iVar1;
		String __this;

		__this = PhotonExtensions.GetStringProperty(room, property, "");
		if (__this == null) {
			throw new NullReferenceException();
		}
		iVar1 = __this.IndexOf(search, 5);
		return -1 < iVar1;
	}

	[Token(Token = "0x6001129")]
	[Address(RVA = "0x57CD240", Offset = "0x57CC240", VA = "0x57CD240")]
	private static string Signature(bool counts)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$Signature): 1 lines keep C-only constructs
		uint uVar1;
		List<RoomInfo> pSVar2;
		bool bVar3;
		int iVar4;
		RoomInfo pPVar5;
		StringBuilder pSVar6;
		String pSVar7;
		int iVar8;
		int local_38;
		int local_34;

		if (Il2CppMethodInitialized_0754545d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count) ;
			Il2CppMethodInitialized_0754545d = true;
		}
		local_34 = 0;
		local_38 = 0;
		pSVar6 = AottgRoomList.SignatureBuilder;
		if (pSVar6 == null) goto label_058cd83b;
		pSVar6.Clear();
		uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		if (counts) {
			if (uVar1 == 0) {
			}
			pSVar6 = AottgRoomList.SignatureBuilder;
			iVar4 = PhotonNetwork.CountOfPlayers;
			if (pSVar6 == null) goto label_058cd83b;
		}
		else {
			if (uVar1 == 0) {
			}
			pSVar6 = AottgRoomList.SignatureBuilder;
			if ((pSVar6 == null) ||(pSVar6 = pSVar6.Append(AottgRoomList._page), pSVar6 == null)) goto label_058cd83b;
			pSVar6 = pSVar6.Append(0x7c);
			pSVar2 = AottgRoomList.Filtered;
			if ((pSVar2 == null) ||(pSVar6 == null)) goto label_058cd83b;
			iVar4 = pSVar2._size;
		}
		pSVar6.Append(iVar4);
		if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
		}
		AottgRoomList.VisibleRange(ref local_34, ref local_38);
		iVar4 = local_38;
		if (local_34 < local_38) {
			iVar8 = local_34;
			if (counts) {
				do {
					pSVar2 = AottgRoomList.Filtered;
					if (pSVar2 == null) goto label_058cd83b;
					pPVar5 = pSVar2.get_Item(iVar8);
					pSVar6 = AottgRoomList.SignatureBuilder;
					if (((pSVar6 == null) ||(pSVar6 = pSVar6.Append(0x7c), pPVar5 == null)) || (pSVar6 == null)) goto label_058cd83b;
					pSVar6.Append(pPVar5.name);
					pSVar6 = AottgRoomList.SignatureBuilder;
					if (((pSVar6 == null) ||(pSVar6 = pSVar6.Append(0x3a), pSVar6 == null)) ||((pSVar6 = pSVar6.Append(pPVar5._PlayerCount_k__BackingField), pSVar6 == null ||(pSVar6 = pSVar6.Append(0x2f), pSVar6 == null)))) goto label_058cd83b;
					pSVar6.Append(pPVar5.maxPlayers);
					iVar8 = iVar8 + 1;
				} while (iVar4 != iVar8);
			}
			else {
				do {
					pSVar2 = AottgRoomList.Filtered;
					if (pSVar2 == null) goto label_058cd83b;
					pPVar5 = pSVar2.get_Item(iVar8);
					pSVar6 = AottgRoomList.SignatureBuilder;
					if (((pSVar6 == null) ||(pSVar6 = pSVar6.Append(0x7c), pPVar5 == null)) || (pSVar6 == null)) goto label_058cd83b;
					pSVar6.Append(pPVar5.name);
					pSVar6 = AottgRoomList.SignatureBuilder;
					if (pSVar6 == null) goto label_058cd83b;
					pSVar6 = pSVar6.Append(0x3a);
					pSVar7 = PhotonExtensions.GetStringProperty(pPVar5, RoomProperty.Name, "");
					if ((pSVar6 == null) ||(pSVar6 = pSVar6.Append(pSVar7), pSVar6 == null)) goto label_058cd83b;
					pSVar6 = pSVar6.Append(0x3a);
					pSVar7 = PhotonExtensions.GetStringProperty(pPVar5, RoomProperty.Map, "");
					if ((pSVar6 == null) ||(pSVar6 = pSVar6.Append(pSVar7), pSVar6 == null)) goto label_058cd83b;
					pSVar6 = pSVar6.Append(0x3a);
					pSVar7 = PhotonExtensions.GetStringProperty(pPVar5, RoomProperty.GameMode, "");
					if ((pSVar6 == null) ||(pSVar6 = pSVar6.Append(pSVar7), pSVar6 == null)) goto label_058cd83b;
					pSVar6 = pSVar6.Append(0x3a);
					bVar3 = PhotonExtensions.GetBoolProperty(pPVar5, RoomProperty.Sandbox, false);
					if ((pSVar6 == null) ||(pSVar6 = pSVar6.Append(bVar3), pSVar6 == null)) goto label_058cd83b;
					pSVar6 = pSVar6.Append(0x3a);
					bVar3 = PhotonExtensions.GetBoolProperty(pPVar5, RoomProperty.AccountRequired, false);
					if ((pSVar6 == null) ||(pSVar6 = pSVar6.Append(bVar3), pSVar6 == null)) goto label_058cd83b;
					pSVar6 = pSVar6.Append(0x3a);
					pSVar7 = PhotonExtensions.GetStringProperty(pPVar5, RoomProperty.PasswordHash, "");
					bVar3 = (pSVar7 != (String)**(ulong*)(g_data_07556758 + 0xb8)) ;
					if (pSVar6 == null) goto label_058cd83b;
					pSVar6.Append(bVar3);
					iVar8 = iVar8 + 1;
				} while (iVar4 != iVar8);
			}
		}
		pSVar6 = AottgRoomList.SignatureBuilder;
		if (pSVar6 != null) {
			pSVar7 = pSVar6.ToString();
			return pSVar7;
		}
	label_058cd83b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600112A")]
	[Address(RVA = "0x57CDF50", Offset = "0x57CCF50", VA = "0x57CDF50")]
	private static void VisibleRange(out int start, out int end)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$VisibleRange): 1 lines keep C-only constructs
		List<RoomInfo> pSVar2;
		int iVar3;
		int iVar4;

		if (Il2CppMethodInitialized_0754545e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count) ;
			Il2CppMethodInitialized_0754545e = true;
		}
		iVar3 = AottgRoomList._page * 0xc;
		*start = iVar3;
		pSVar2 = AottgRoomList.Filtered;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		iVar4 = pSVar2._size;
		iVar4 = Math.Min(iVar3 + 0xc, iVar4);
		*end = iVar4;
		return;
	}

	[Token(Token = "0x600112B")]
	[Address(RVA = "0x57CE000", Offset = "0x57CD000", VA = "0x57CE000")]
	private static string RowId(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$RowId): clean
		String pSVar1;
		int iStack_4;

		pSVar1 = iStack_4.ToString();
		pSVar1 = String.Concat("room-list-rooms-", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x57CE050", Offset = "0x57CD050", VA = "0x57CE050")]
	private static string PlayerCount(RoomInfo room)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$PlayerCount): clean
		String pSVar1;
		String str2;
		int local_1c;

		if (room == null) {
			throw new NullReferenceException();
		}
		local_1c = room._PlayerCount_k__BackingField;
		pSVar1 = local_1c.ToString();
		local_1c = room.maxPlayers;
		str2 = local_1c.ToString();
		pSVar1 = String.Concat(pSVar1, "/", str2);
		return pSVar1;
	}

	[Token(Token = "0x600112D")]
	[Address(RVA = "0x57CE5F0", Offset = "0x57CD5F0", VA = "0x57CE5F0")]
	private static int PageCount()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$PageCount): 1 lines keep C-only constructs
		List<RoomInfo> pSVar1;

		if (Il2CppMethodInitialized_07545461 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count) ;
			Il2CppMethodInitialized_07545461 = true;
			if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) goto label_058ce654;
	label_058ce60d: ;
			pSVar1 = AottgRoomList.Filtered;
		}
		else {
			if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor != 0) goto label_058ce60d;
	label_058ce654: ;
			pSVar1 = AottgRoomList.Filtered;
		}
		if (pSVar1 == null) {
	label_058ce6b6: ;
			throw new NullReferenceException();
		}
		if (pSVar1._size == 0) {
			return 0;
		}
		if (((typeof(AottgRoomList))._2).cctor_finished_or_no_cctor == 0) {
			pSVar1 = AottgRoomList.Filtered;
			if (pSVar1 == null) goto label_058ce6b6;
		}
		return (pSVar1._size + -1) / 0xc + 1;
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x57CDC80", Offset = "0x57CCC80", VA = "0x57CDC80")]
	private static string PageLabel()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$PageLabel): 4 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		String str2;
		Il2CppClass klass;
		int local_10;
		int local_c;

		if (Il2CppMethodInitialized_07545462 == false) {
			Il2CppMethodInitialized_07545462 = true;
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgRoomList);
		}
		else {
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgRoomList);
		}
		typeof(AottgRoomList) = (AottgRoomList)klass;
		if (uVar1 == 0) {
			local_c = AottgRoomList.PageCount();
		}
		else {
			local_c = AottgRoomList.PageCount();
		}
		if (local_c == 0) {
			return "0/0";
		}
		if (((typeof(AottgRoomList))._2).cctor_finished_or_no_cctor == 0) {
		}
		local_10 = AottgRoomList._page + 1;
		pSVar2 = local_10.ToString();
		str2 = local_c.ToString();
		pSVar2 = String.Concat(pSVar2, "/", str2);
		return pSVar2;
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x57CDE80", Offset = "0x57CCE80", VA = "0x57CDE80")]
	private static string PlayersOnline()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$PlayersOnline): clean
		int iVar1;
		String pSVar2;
		String str2;
		int local_c;

		iVar1 = PhotonNetwork.CountOfPlayers;
		local_c = iVar1 / 2;
		pSVar2 = local_c.ToString();
		str2 = Aottg2GisketchLocale.Text("MainMenu.MultiplayerRoomListPopup.PlayersOnline");
		pSVar2 = String.Concat(pSVar2, " ", str2);
		return pSVar2;
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x57CA230", Offset = "0x57C9230", VA = "0x57CA230")]
	public static bool IsValid(RoomInfo room)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$IsValid): clean
		Hashtable pEVar1;
		String __this;
		bool bVar2;

		if (room != null) {
			pEVar1 = room.customProperties;
			if (pEVar1 != null) {
				bVar2 = pEVar1.ContainsKey((object)RoomProperty.Name);
				if (!bVar2) {
					return false;
				}
				pEVar1 = room.customProperties;
				if (pEVar1 != null) {
					bVar2 = pEVar1.ContainsKey((object)RoomProperty.Map);
					if (!bVar2) {
						return false;
					}
					pEVar1 = room.customProperties;
					if (pEVar1 != null) {
						bVar2 = pEVar1.ContainsKey((object)RoomProperty.GameMode);
						if (!bVar2) {
							return false;
						}
						__this = room.name;
						if (__this != null) {
							bVar2 = __this.EndsWith("vc");
							return !bVar2;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x57CA370", Offset = "0x57C9370", VA = "0x57CA370")]
	public static string PasswordHash(RoomInfo room)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c (Gisketch.Aottg2UI.Game.AottgRoomList$$PasswordHash): clean
		String pSVar1;

		pSVar1 = PhotonExtensions.GetStringProperty(room, RoomProperty.PasswordHash, "");
		return pSVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c.

	// Gisketch.Aottg2UI.Game.AottgRoomList.<>c__DisplayClass37_0$$.ctor: clean
	private void c__DisplayClass37_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomList$$.cctor: clean
	static AottgRoomList()
	{
		String defaultValue;
		Gisketch_Aottg2UI_Game_AottgRoomList_StaticFields pGVar1;
		StringSetting __this;
		BoolSetting pSVar2;
		List<RoomInfo> __this_00;
		StringBuilder __this_01;

		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this = new StringSetting(defaultValue, 0x7fffffff);
		AottgRoomList.Query = __this;
		pSVar2 = new BoolSetting(true);
		pGVar1 = typeof(AottgRoomList).static_fields;
		pGVar1.ShowFull = pSVar2;
		pSVar2 = new BoolSetting(true);
		pGVar1 = typeof(AottgRoomList).static_fields;
		pGVar1.ShowPassword = pSVar2;
		__this_00 = new List<RoomInfo>();
		pGVar1 = typeof(AottgRoomList).static_fields;
		pGVar1.Filtered = __this_00;
		__this_01 = new StringBuilder();
		pGVar1 = typeof(AottgRoomList).static_fields;
		pGVar1.SignatureBuilder = __this_01;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomList.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgRoomList.c();
		AottgRoomList.c.__9 =(AottgRoomList.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomList.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomList.<>c$$<Build>b__29_0: 1 lines keep C-only constructs
	private void c__Build_b__29_0(AottgUi content)
	{
		List<RoomInfo> pSVar1;
		int iVar2;
		RoomInfo room;
		int index;
		int iStack_30;
		int iStack_2c;

		if (Il2CppMethodInitialized_07545468 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count) ;
			Il2CppMethodInitialized_07545468 = true;
		}
		iStack_2c = 0;
		iStack_30 = 0;
		if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar1 = AottgRoomList.Filtered;
		if (pSVar1 == null) {
	label_058d03fa: ;
			throw new NullReferenceException();
		}
		if (pSVar1._size == 0) {
			if (content == null) goto label_058d03fa;
			content.TextKey("MainMenu.MultiplayerRoomListPopup.NoRooms", "subtext", "room-list-rooms-empty", null, null);
		}
		else {
			if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
			}
			AottgRoomList.VisibleRange(ref iStack_2c, ref iStack_30);
			iVar2 = iStack_30;
			index = iStack_2c;
			if (iStack_2c < iStack_30) {
				do {
					pSVar1 = AottgRoomList.Filtered;
					if (pSVar1 == null) goto label_058d03fa;
					room = pSVar1.get_Item(index);
					AottgRoomList.BuildRoom(content, room, index);
					index = index + 1;
				} while (iVar2 != index);
			}
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomList.<>c$$<BuildHeader>b__30_0: 8 lines keep C-only constructs
	private void c__BuildHeader_b__30_0(AottgUi row)
	{
		uint uVar1;
		StringSetting pSVar2;
		object pIVar3;
		String pSVar4;
		GisketchNodeDefinition pGVar5;
		GisketchLength pGVar6;
		GisketchLayoutDefinition pGVar7;
		Action<GisketchActionContext> pSVar8;
		String pSVar9;
		Gisketch_Aottg2UI_Game_AottgRoomList___c_StaticFields pGVar10;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545469 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_SearchChanged) ;
			Il2CppMethodInitialized_07545469 = true;
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgRoomList);
		}
		else {
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgRoomList);
		}
		typeof(AottgRoomList) = (AottgRoomList)klass;
		if (uVar1 == 0) {
			pSVar4 = AottgRoomList.PlayersOnline();
		}
		else {
			pSVar4 = AottgRoomList.PlayersOnline();
		}
		if (row != null) {
			pGVar5 = row.Text(pSVar4, "subtext", "room-list-header-players", null, null);
			pGVar6 = AottgUi.Points(0.0);
			pGVar7 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, pGVar6, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			if (pGVar5 != null) {
				pGVar5.layout = pGVar7;
				pGVar6 = AottgUi.Points(360.0);
				pGVar7 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar6, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				pSVar8 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_SearchChanged);
				pGVar5 = row.InputFieldKey("room-list-header-search", "Common.Search", 0, "inputField", pGVar7, null, pSVar8, 0.2, 0, null);
				pSVar2 = AottgRoomList.Query;
				if ((pSVar2 != null) &&(pGVar5 != null)) {
					pGVar5.value = pSVar2._value;
					pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar9 = Aottg2GisketchLocale.Text("Common.Options");
					row.Button(3, pSVar4, "popover.room-list-options", "room-list-header-options", pSVar9, null, "gear");
					pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					if ((typeof(AottgRoomList.c)._2).cctor_finished_or_no_cctor == 0) {
						pGVar10 = typeof(AottgRoomList.c).static_fields;
						pSVar8 = pGVar10.__9__30_1;
					}
					else {
						pGVar10 = typeof(AottgRoomList.c).static_fields;
						pSVar8 = pGVar10.__9__30_1;
					}
					if (pSVar8 == null) {
						if (((typeof(AottgRoomList.c))._2). cctor_finished_or_no_cctor == 0) {
							pGVar10 = typeof(AottgRoomList.c).static_fields;
						}
						pIVar3 = (object)pGVar10.__9;
						pSVar8 = new Action<GisketchActionContext>(pIVar3, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c_BuildHeader_b__30_1);
						pGVar10 = typeof(AottgRoomList.c).static_fields;
						pGVar10.__9__30_1 = pSVar8;
						uVar1 = (typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = ((typeof(Aottg2GisketchLocale))._2). cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					pSVar9 = Aottg2GisketchLocale.Text("Common.Previous");
					row.Button(3, pSVar4, pSVar8, "room-list-header-previous", pSVar9, null, "arrowLeft");
					pSVar4 = AottgRoomList.PageLabel();
					row.Text(pSVar4, "text", "room-list-header-page", null, null);
					pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					if ((typeof(AottgRoomList.c)._2).cctor_finished_or_no_cctor == 0) {
						pGVar10 = typeof(AottgRoomList.c).static_fields;
						pSVar8 = pGVar10.__9__30_2;
					}
					else {
						pGVar10 = typeof(AottgRoomList.c).static_fields;
						pSVar8 = pGVar10.__9__30_2;
					}
					if (pSVar8 == null) {
						if (((typeof(AottgRoomList.c))._2). cctor_finished_or_no_cctor == 0) {
							pGVar10 = typeof(AottgRoomList.c).static_fields;
						}
						pIVar3 = (object)pGVar10.__9;
						pSVar8 = new Action<GisketchActionContext>(pIVar3, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c_BuildHeader_b__30_2);
						pGVar10 = typeof(AottgRoomList.c).static_fields;
						pGVar10.__9__30_2 = pSVar8;
						uVar1 = (typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = ((typeof(Aottg2GisketchLocale))._2). cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					pSVar9 = Aottg2GisketchLocale.Text("Common.Next");
					row.Button(3, pSVar4, pSVar8, "room-list-header-next", pSVar9, null, "arrowRight");
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgRoomList.<>c$$<BuildHeader>b__30_1: 4 lines keep C-only constructs
	private void c__BuildHeader_b__30_1(GisketchActionContext __)
	{
		uint uVar1;
		int iVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754546a == false) {
			Il2CppMethodInitialized_0754546a = true;
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07545452 == false) {
			Il2CppMethodInitialized_07545452 = true;
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgRoomList);
		}
		else {
			uVar1 = ((typeof(AottgRoomList))._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgRoomList);
		}
		typeof(AottgRoomList) = (AottgRoomList)klass;
		if (uVar1 == 0) {
			iVar2 = AottgRoomList.PageCount();
		}
		else {
			iVar2 = AottgRoomList.PageCount();
		}
		if (iVar2 == 0) {
			return;
		}
		if (((typeof(AottgRoomList))._2).cctor_finished_or_no_cctor == 0) {
		}
		AottgRoomList._page =(AottgRoomList._page + iVar2 + -1) % iVar2;
		AottgRoomList.Refresh();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomList.<>c$$<BuildHeader>b__30_2: 4 lines keep C-only constructs
	private void c__BuildHeader_b__30_2(GisketchActionContext __)
	{
		uint uVar1;
		int iVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754546b == false) {
			Il2CppMethodInitialized_0754546b = true;
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07545452 == false) {
			Il2CppMethodInitialized_07545452 = true;
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgRoomList);
		}
		else {
			uVar1 = ((typeof(AottgRoomList))._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgRoomList);
		}
		typeof(AottgRoomList) = (AottgRoomList)klass;
		if (uVar1 == 0) {
			iVar2 = AottgRoomList.PageCount();
		}
		else {
			iVar2 = AottgRoomList.PageCount();
		}
		if (iVar2 == 0) {
			return;
		}
		if (((typeof(AottgRoomList))._2).cctor_finished_or_no_cctor == 0) {
		}
		AottgRoomList._page =(AottgRoomList._page + iVar2 + 1) % iVar2;
		AottgRoomList.Refresh();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomList.<>c__DisplayClass37_0$$<BuildRoom>b__0: clean
	private void c__DisplayClass37_0__BuildRoom_b__0(GisketchActionContext __)
	{
		RoomInfo room;

		room = this.room;
		if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
			AottgRoomList.Join(room);
			return;
		}
		AottgRoomList.Join(room);
		return;
	}
}
