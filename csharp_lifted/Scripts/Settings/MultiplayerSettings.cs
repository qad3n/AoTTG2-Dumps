// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MultiplayerSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/MultiplayerSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/MultiplayerSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Net;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F9")]
internal class MultiplayerSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40005EE")]
	[FieldOffset(Offset = "0x0")]
	public static string VoiceRoomSuffix;

	[Token(Token = "0x40005EF")]
	[FieldOffset(Offset = "0x8")]
	public static string PublicAppId;

	[Token(Token = "0x40005F0")]
	[FieldOffset(Offset = "0x38")]
	public IntSetting LobbyMode;

	[Token(Token = "0x40005F1")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting AppIdMode;

	[Token(Token = "0x40005F2")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting CustomLobby;

	[Token(Token = "0x40005F3")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting CustomAppId;

	[Token(Token = "0x40005F4")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting LanIP;

	[Token(Token = "0x40005F5")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting LanPort;

	[Token(Token = "0x40005F6")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting LanPassword;

	[Token(Token = "0x40005F7")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting LanSupportsAccounts;

	[Token(Token = "0x40005F8")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting QuickPlayRegion;

	[Token(Token = "0x40005F9")]
	[FieldOffset(Offset = "0x80")]
	public MultiplayerServerType CurrentMultiplayerServerType;

	[Token(Token = "0x40005FA")]
	[FieldOffset(Offset = "0x84")]
	private int _connectRequest;

	[Token(Token = "0x40005FB")]
	[FieldOffset(Offset = "0x88")]
	private Action _pendingVoiceRoom;

	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x90")]
	public readonly Dictionary<MultiplayerRegion, string> CloudAddresses;

	[Token(Token = "0x40005FD")]
	[FieldOffset(Offset = "0x98")]
	public readonly Dictionary<MultiplayerRegion, string> PublicAddresses;

	[Token(Token = "0x40005FE")]
	[FieldOffset(Offset = "0xA0")]
	public readonly int DefaultPort;

	[Token(Token = "0x170000C1")]
	protected override string FileName
	{
		[Token(Token = "0x600054C")]
		[Address(RVA = "0x5A51940", Offset = "0x5A50940", VA = "0x5A51940", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$get_FileName): clean
			return "Multiplayer.json";
		}
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x5A51970", Offset = "0x5A50970", VA = "0x5A51970")]
	public bool IsConnectedToPublic()
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$IsConnectedToPublic): clean
		IntSetting pSVar1;

		if (this.CurrentMultiplayerServerType != 2) {
			return false;
		}
		pSVar1 = this.LobbyMode;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		return pSVar1._value == 0;
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x5A519C0", Offset = "0x5A509C0", VA = "0x5A519C0")]
	public void Disconnect()
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$Disconnect): 2 lines keep C-only constructs
		int piVar1;
		PunVoiceClient pPVar2;
		LoadBalancingTransport __this_00;
		bool bVar3;

		piVar1 = &this._connectRequest;
		*piVar1 = *piVar1 + 1;
		this._pendingVoiceRoom = null;
		PhotonNetwork.Disconnect();
		pPVar2 = VoiceChatManager.Client;
		if ((pPVar2 != null) &&(__this_00 = pPVar2.client, __this_00 != null)) {
			bVar3 = __this_00.IsConnected;
			if (!bVar3) {
				return;
			}
			pPVar2 = VoiceChatManager.Client;
			if (pPVar2 != null) {
				pPVar2.Disconnect() ;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x5A51AA0", Offset = "0x5A50AA0", VA = "0x5A51AA0")]
	public void ConnectServer(MultiplayerRegion region)
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$ConnectServer): 1 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		MultiplayerSettings.c__DisplayClass21_0 __this_00;
		Action<T1, T2> __this_01;

		__this_00 = new MultiplayerSettings.c__DisplayClass21_0();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.region = region;
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar1 = AccountManager.IsLoggedIn;
		}
		else {
			bVar1 = AccountManager.IsLoggedIn;
		}
		if (bVar1) {
			iVar2 = this._connectRequest + 1;
			this._connectRequest = iVar2;
			__this_00.request = iVar2;
			__this_01 = new Action<bool, string>((object)__this_00, (intptr_t)MethodInfo_Settings_MultiplayerSettings_c__DisplayClass21_0_ConnectServer_b__0);
			AccountManager.Refresh((Action<bool, string>)__this_01, true);
			return;
		}
		this.ConnectServerInternal(__this_00.region);
		return;
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x5A51BF0", Offset = "0x5A50BF0", VA = "0x5A51BF0")]
	private void ConnectServerInternal(MultiplayerRegion region)
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$ConnectServerInternal): 2 lines keep C-only constructs
		uint uVar1;
		int port;
		IntSetting pSVar2;
		Dictionary<MultiplayerRegion, string> pSVar3;
		StringSetting pSVar4;
		LoadBalancingClient pPVar5;
		PunVoiceClient pPVar6;
		bool bVar7;
		String pSVar8;
		NetworkCredential pSVar9;
		AppSettings pPVar10;
		AuthenticationValues __this_00;
		String pSVar11;
		LoadBalancingTransport pPVar12;
		uint in_register_00000034;
		MethodInfo method_04;

		method_04 = (MethodInfo)CONCAT44(in_register_00000034, region);
		this.Disconnect();
		PhotonNetwork.AuthValues = null;
		pSVar2 = this.AppIdMode;
		if (pSVar2 == null) goto label_05b521d3;
		if (pSVar2._value != 0) {
			pSVar3 = this.CloudAddresses;
			if (pSVar3 != null) {
				pSVar8 = pSVar3.get_Item(region);
				this.CurrentMultiplayerServerType = 1;
				pSVar4 = this.CustomAppId;
				if ((pSVar4 == null) ||(pPVar5 = PhotonNetwork.NetworkingClient, pPVar5 == null)) goto label_05b521d3;
				pPVar5._AppId_k__BackingField = pSVar4._value;
				pPVar5 = PhotonNetwork.NetworkingClient;
				pSVar9 = this.GetCurrentLobby(false);
				if (pPVar5 == null) goto label_05b521d3;
				pPVar5.AppVersion = pSVar9;
				PhotonNetwork.ConnectToRegion(pSVar8);
				pPVar10 = new AppSettings();
				pSVar4 = this.CustomAppId;
				if ((pSVar4 == null) || (pPVar10 == null)) goto label_05b521d3;
				pPVar10.AppIdVoice = pSVar4._value;
				pPVar10.FixedRegion = pSVar8;
				pPVar6 = VoiceChatManager.Client;
				if (pPVar6 == null) goto label_05b521d3;
				pPVar6.ConnectUsingSettings(pPVar10);
				pPVar6 = VoiceChatManager.Client;
				if (pPVar6 == null) goto label_05b521d3;
				pPVar12 = pPVar6.client;
				pSVar9 = this.GetCurrentLobby(false);
				if (pPVar12 == null) goto label_05b521d3;
				goto label_05b520f3;
			}
			goto label_05b521d3;
		}
		pSVar3 = this.PublicAddresses;
		if (pSVar3 == null) goto label_05b521d3;
		pSVar8 = pSVar3.get_Item(region);
		this.CurrentMultiplayerServerType = 2;
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar7 = AccountManager.IsLoggedIn;
			if (bVar7) goto label_05b51eac;
		}
		else {
			bVar7 = AccountManager.IsLoggedIn;
			if (bVar7) {
	label_05b51eac: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
					if (g_data_075472f7 == false) goto label_05b52126;
	label_05b51ec9: ;
					uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (g_data_075472f7 != false) goto label_05b51ec9;
	label_05b52126: ;
					g_data_075472f7 = true;
					uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				bVar7 = String.IsNullOrEmpty(AccountManager. _PhotonToken_k__BackingField);
				if (!bVar7) {
					__this_00 = new AuthenticationValues();
					if (__this_00 == null) goto label_05b521d3;
					__this_00.authType = 0;
					pSVar11 = AccountManager.PhotonUserId;
					bVar7 = String.IsNullOrEmpty(pSVar11);
					if (bVar7) {
						if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05b51f5a;
	label_05b52191: ;
						if (g_data_075472f7 == false) goto label_05b521a3;
	label_05b51f67: ;
						uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
					}
					else {
						pSVar11 = AccountManager.PhotonUserId;
						__this_00._UserId_k__BackingField = pSVar11;
						if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05b52191;
	label_05b51f5a: ;
						if (g_data_075472f7 != false) goto label_05b51f67;
	label_05b521a3: ;
						g_data_075472f7 = true;
						uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					__this_00.AddAuthParameter("token", AccountManager._PhotonToken_k__BackingField);
					PhotonNetwork.AuthValues = __this_00;
				}
			}
		}
		port = this.DefaultPort;
		pSVar11 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		PhotonNetwork.ConnectToMaster(pSVar8, port, pSVar11);
		pPVar5 = PhotonNetwork.NetworkingClient;
		pSVar9 = this.GetCurrentLobby(true);
		if (pPVar5 != null) {
			pPVar5.AppVersion = pSVar9;
			pPVar10 = new AppSettings();
			if (pPVar10 != null) {
				pPVar10.Server = pSVar8;
				pPVar10.Port = this.DefaultPort;
				pPVar10.UseNameServer = false;
				pPVar6 = VoiceChatManager.Client;
				if (pPVar6 != null) {
					pPVar6.ConnectUsingSettings(pPVar10);
					pPVar6 = VoiceChatManager.Client;
					if (pPVar6 != null) {
						pPVar12 = pPVar6.client;
						pSVar9 = this.GetCurrentLobby(true);
						if (pPVar12 != null) {
	label_05b520f3: ;
							pPVar12.AppVersion = pSVar9;
							return;
						}
					}
				}
			}
		}
	label_05b521d3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x5A522E0", Offset = "0x5A512E0", VA = "0x5A522E0")]
	public void ConnectLAN()
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$ConnectLAN): clean
		uint uVar1;
		int port;
		BoolSetting pSVar2;
		StringSetting pSVar3;
		IntSetting pSVar4;
		String appID;
		LoadBalancingClient pPVar5;
		bool bVar6;
		AuthenticationValues __this_00;
		String pSVar7;
		NetworkCredential pSVar8;

		this.Disconnect();
		pSVar2 = this.LanSupportsAccounts;
		if (pSVar2 == null) goto label_05b5263b;
		if (pSVar2._value != false) {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				bVar6 = AccountManager.IsLoggedIn;
				if (bVar6) goto label_05b523a5;
			}
			else {
				bVar6 = AccountManager.IsLoggedIn;
				if (bVar6) {
	label_05b523a5: ;
					if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
						if (g_data_075472f7 == false) goto label_05b5258e;
	label_05b523c2: ;
						uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
					}
					else {
						if (g_data_075472f7 != false) goto label_05b523c2;
	label_05b5258e: ;
						g_data_075472f7 = true;
						uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					bVar6 = String.IsNullOrEmpty(AccountManager. _PhotonToken_k__BackingField);
					if (!bVar6) {
						__this_00 = new AuthenticationValues();
						if (__this_00 == null) goto label_05b5263b;
						__this_00.authType = 0;
						pSVar7 = AccountManager.PhotonUserId;
						bVar6 = String.IsNullOrEmpty(pSVar7);
						if (bVar6) {
							if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05b52453;
	label_05b525f9: ;
							if (g_data_075472f7 == false) goto label_05b5260b;
	label_05b52460: ;
							uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
						}
						else {
							pSVar7 = AccountManager.PhotonUserId;
							__this_00._UserId_k__BackingField = pSVar7;
							if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05b525f9;
	label_05b52453: ;
							if (g_data_075472f7 != false) goto label_05b52460;
	label_05b5260b: ;
							g_data_075472f7 = true;
							uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						__this_00.AddAuthParameter("token", AccountManager._PhotonToken_k__BackingField);
						PhotonNetwork.AuthValues = __this_00;
					}
				}
			}
		}
		pSVar3 = this.LanIP;
		if ((pSVar3 == null) ||(pSVar4 = this.LanPort, pSVar4 == null)) {
	label_05b5263b: ;
			throw new NullReferenceException();
		}
		pSVar7 = pSVar3._value;
		port = pSVar4._value;
		appID = (String)**(ulong*)(g_data_07556758 + 0xb8);
		bVar6 = PhotonNetwork.ConnectToMaster(pSVar7, port, appID);
		if (bVar6) {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			}
			pPVar5 = PhotonNetwork.NetworkingClient;
			pSVar8 = this.GetCurrentLobby(false);
			if (pPVar5 == null) goto label_05b5263b;
			pPVar5.AppVersion = pSVar8;
			this.CurrentMultiplayerServerType = 0;
		}
		return;
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x5A52640", Offset = "0x5A51640", VA = "0x5A52640")]
	public void ConnectOffline()
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$ConnectOffline): clean
		this.Disconnect();
		PhotonNetwork.OfflineMode = true;
		this.CurrentMultiplayerServerType = 1;
		return;
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x5A521E0", Offset = "0x5A511E0", VA = "0x5A521E0")]
	public NetworkCredential GetCurrentLobby(bool isPublic)
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$GetCurrentLobby): clean
		IntSetting pSVar1;
		StringSetting pSVar2;
		NetworkCredential pSVar3;
		String userName;

		pSVar1 = this.LobbyMode;
		if (pSVar1 == null) {
	label_05b522ce: ;
			throw new NullReferenceException();
		}
		if (pSVar1._value == 0) {
			if (isPublic) {
				return pSVar3;
			}
			userName = "Public";
		}
		else {
			pSVar2 = this.CustomLobby;
			if (pSVar2 == null) goto label_05b522ce;
			userName = pSVar2._value;
		}
		pSVar3 = new NetworkCredential(userName, userName);
		return pSVar3;
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x5A526A0", Offset = "0x5A516A0", VA = "0x5A526A0")]
	public void StartRoom()
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$StartRoom): 9 lines keep C-only constructs
		String* targetAddress;
		sbyte cVar1;
		int iVar2;
		InGameSet pSVar3;
		InGameGeneralSettings pSVar4;
		StringSetting pSVar5;
		StringSetting pSVar6;
		IntSetting pSVar7;
		StringSetting pSVar8;
		BoolSetting pSVar9;
		InGameMiscSettings pSVar10;
		MultiplayerSettings pSVar11;
		MultiplayerSettings.c__DisplayClass26_0 pSVar12;
		MultiplayerSettings.c__DisplayClass26_0 pSVar13;
		String pSVar14;
		Hashtable __this_00;
		object pIVar15;
		String pSVar16;
		String[] pSVar17;
		RoomOptions pPVar18;
		String sessionID;
		Action __this_01;
		RoomOptions* targetAddress_00;
		byte local_7a;
		byte local_79;
		String local_78;
		int local_70;
		int local_6c;
		String local_68;
		String local_60;
		MultiplayerSettings local_58;
		MultiplayerSettings.c__DisplayClass26_0 local_50;
		MultiplayerSettings.c__DisplayClass26_0 local_48;
		String local_40;
		String local_38;

		pSVar13 = new MultiplayerSettings.c__DisplayClass26_0();
		pSVar3 = SettingsManager.InGameCurrent;
		if (((pSVar3 == null) ||(pSVar4 = pSVar3.General, pSVar4 == null)) ||(pSVar5 = pSVar4.RoomName, pSVar5 == null)) goto label_05b52ff9;
		pSVar16 = pSVar5._value;
		local_78 = ChatFilter.FilterBadWords(pSVar16);
		pSVar4 = pSVar3.General;
		if ((((pSVar4 == null) ||(pSVar5 = pSVar4.MapName, pSVar5 == null)) ||((pSVar6 = pSVar4.GameMode, pSVar6 == null ||((pSVar7 = pSVar4.MaxPlayers, pSVar7 == null ||(pSVar8 = pSVar4.Password, pSVar8 == null)))))) ||(pSVar16 = pSVar8._value, local_58 = this, pSVar16 == null)) goto label_05b52ff9;
		local_40 = pSVar5._value;
		local_38 = pSVar6._value;
		iVar2 = pSVar7._value;
		if (pSVar16._stringLength < 1) {
			local_60 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			local_68 = local_60;
		}
		else {
			local_68 = Util.CreateSalt();
			local_60 = Util.CreatePBKDF2(pSVar16, local_68);
		}
		local_6c = Random.Range(0, 100000);
		pSVar14 = local_6c.ToString();
		if (pSVar13 == null) goto label_05b52ff9;
		local_48 = &pSVar13.fields;
		pSVar13.roomId = pSVar14;
		local_50 = pSVar13;
		__this_00 = new Hashtable();
		local_70 = iVar2;
		if (__this_00 == null) goto label_05b52ff9;
		__this_00.Add((object)RoomProperty.Name, (object)local_78);
		__this_00.Add((object)RoomProperty.Map, (object)local_40);
		__this_00.Add((object)RoomProperty.GameMode, (object)local_38);
		pSVar9 = pSVar3.Sandbox;
		if (pSVar9 == null) goto label_05b52ff9;
		pSVar14 = RoomProperty.Sandbox;
		local_79 = pSVar9._value;
		pIVar15 = (object)local_79;
		__this_00.Add((object)pSVar14, pIVar15) ;
		pSVar5 = pSVar3.ExperienceName;
		if (pSVar5 == null) goto label_05b52ff9;
		__this_00.Add((object)RoomProperty.Experience, (object)pSVar5._value);
		__this_00.Add((object)RoomProperty.Password, (object)pSVar16);
		__this_00.Add((object)RoomProperty.PasswordSalt, (object)local_68);
		__this_00.Add((object)RoomProperty.PasswordHash, (object)local_60);
		pSVar12 = local_48;
		pSVar11 = local_58;
		pSVar10 = pSVar3.Misc;
		if ((pSVar10 == null) ||(pSVar9 = pSVar10.AccountRequired, pSVar9 == null)) goto label_05b52ff9;
		pSVar16 = RoomProperty.AccountRequired;
		local_7a = pSVar9._value;
		pIVar15 = (object)local_7a;
		__this_00.Add((object)pSVar16, pIVar15) ;
		pSVar16 = String.Concat(pSVar12.roomId, local_78);
		if (Il2CppMethodInitialized_075472c2 == false) {
			Il2CppMethodInitialized_075472c2 = true;
			if (Il2CppMethodInitialized_075472b9 != false) goto label_05b52b17;
	label_05b52b3e: ;
			Il2CppMethodInitialized_075472b9 = true;
			if (pSVar11.CurrentMultiplayerServerType != 2) goto label_05b52b71;
	label_05b52b5a: ;
			pSVar7 = pSVar11.LobbyMode;
			if (pSVar7 == null) goto label_05b52ff9;
			if (pSVar7._value != 0) goto label_05b52b71;
			pSVar16 = ApplicationVersion.GetHashKey(pSVar16);
		}
		else {
			if (Il2CppMethodInitialized_075472b9 == false) goto label_05b52b3e;
	label_05b52b17: ;
			if (pSVar11.CurrentMultiplayerServerType == 2) goto label_05b52b5a;
	label_05b52b71: ;
			pSVar16 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		__this_00.Add((Il2CppObject *)"HashKey", (object)pSVar16);
		pSVar16 = String.Concat(pSVar12.roomId, local_78);
		if (Il2CppMethodInitialized_075472c2 == false) {
			Il2CppMethodInitialized_075472c2 = true;
			if (Il2CppMethodInitialized_075472b9 != false) goto label_05b52bc3;
	label_05b52bea: ;
			Il2CppMethodInitialized_075472b9 = true;
			if (pSVar11.CurrentMultiplayerServerType != 2) goto label_05b52c1d;
	label_05b52c06: ;
			pSVar7 = pSVar11.LobbyMode;
			if (pSVar7 == null) goto label_05b52ff9;
			if (pSVar7._value != 0) goto label_05b52c1d;
			pSVar16 = ApplicationVersion.GetHashKey(pSVar16);
		}
		else {
			if (Il2CppMethodInitialized_075472b9 == false) goto label_05b52bea;
	label_05b52bc3: ;
			if (pSVar11.CurrentMultiplayerServerType == 2) goto label_05b52c06;
	label_05b52c1d: ;
			pSVar16 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		targetAddress = &local_50.hash;
		local_50.hash = pSVar16;
		pSVar17 = (String[])new string[8];
		if (pSVar17 == null) {
	label_05b52ff9: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar17.Length != 0) {
			pSVar17[0] = RoomProperty.Name;
			if ((pSVar17.Length & 0xfffffffe) != 0) {
				pSVar17[1] = RoomProperty.Map;
				if (2 < (uint)pSVar17.Length) {
					pSVar17[2] = RoomProperty.GameMode;
					if ((pSVar17.Length & 0xfffffffc) != 0) {
						pSVar17[3] = RoomProperty.Sandbox;
						if (4 < (uint)pSVar17.Length) {
							pSVar17[4] = RoomProperty.Experience;
							if (5 < (uint)pSVar17.Length) {
								pSVar17[5] = RoomProperty.PasswordHash;
								if (6 < (uint)pSVar17.Length) {
									pSVar17[6] = RoomProperty.PasswordSalt;
									if ((pSVar17.Length & 0xfffffff8) != 0) {
										pSVar17[7] = RoomProperty.AccountRequired;
										pPVar18 = new RoomOptions();
										if (pPVar18 != null) {
											pPVar18.CustomRoomProperties = __this_00;
											pPVar18.CustomRoomPropertiesForLobby = pSVar17;
											pPVar18.isVisible = true;
											pPVar18.isOpen = true;
											pPVar18.MaxPlayers = local_70;
											pPVar18.broadcastPropsChangeToAll = false;
											pSVar16 = pSVar12.roomId;
											pSVar14 = *targetAddress;
											sessionID = ApplicationVersion.GetSessionID();
											PhotonNetwork.CreateRoom(pSVar16, pPVar18, null, null, pSVar14, sessionID);
											pSVar13 = local_50;
											if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
												cVar1 = PhotonNetwork.offlineMode;
											}
											else {
												cVar1 = PhotonNetwork.offlineMode;
											}
											if (cVar1 != false) {
												return;
											}
											pPVar18 = new RoomOptions();
											targetAddress_00 = &pSVar13.vcRoomOptions;
											pSVar13.vcRoomOptions = pPVar18;
											pPVar18 = pSVar13.vcRoomOptions;
											if (pPVar18 != null) {
												pPVar18.CustomRoomProperties = __this_00;
												pSVar11 = local_58;
												pPVar18 = *targetAddress_00;
												if (pPVar18 != null) {
													pPVar18.CustomRoomPropertiesForLobby = pSVar17;
													pPVar18 = *targetAddress_00;
													if (pPVar18 != null) {
														pPVar18.isVisible = false;
														pPVar18.isOpen = true;
														pPVar18.MaxPlayers = 0xff;
														pPVar18.broadcastPropsChangeToAll = false;
														pPVar18.EmptyRoomTtl = 10;
														__this_01 = new Action((object)pSVar13, (intptr_t) MethodInfo_Settings_MultiplayerSettings_c__DisplayClass26_0_StartRoom_b__0);
														pSVar11._pendingVoiceRoom = __this_01;
														return;
													}
												}
											}
										}
										goto label_05b52ff9;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x5A530E0", Offset = "0x5A520E0", VA = "0x5A530E0")]
	public void JoinRoom(string roomId, string roomName, string password)
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$JoinRoom): 1 lines keep C-only constructs
		sbyte cVar1;
		int iVar2;
		uint uVar3;
		IntSetting pSVar4;
		String password_00;
		String hash;
		MultiplayerSettings.c__DisplayClass27_0 __this_00;
		String pSVar5;
		String sessionID;
		Action __this_01;

		__this_00 = new MultiplayerSettings.c__DisplayClass27_0();
		if (__this_00 == null) goto label_05b5337a;
		__this_00.roomId = roomId;
		__this_00.password = password;
		pSVar5 = String.Concat(__this_00.roomId, roomName);
		if (Il2CppMethodInitialized_075472c3 == false) {
			Il2CppMethodInitialized_075472c3 = true;
			if (Il2CppMethodInitialized_075472b9 != false) goto label_05b531ae;
	label_05b531d5: ;
			Il2CppMethodInitialized_075472b9 = true;
			iVar2 = this.CurrentMultiplayerServerType;
		}
		else {
			if (Il2CppMethodInitialized_075472b9 == false) goto label_05b531d5;
	label_05b531ae: ;
			iVar2 = this.CurrentMultiplayerServerType;
		}
		if (iVar2 == 2) {
			pSVar4 = this.LobbyMode;
			if (pSVar4 == null) {
	label_05b5337a: ;
				throw new NullReferenceException();
			}
			if (pSVar4._value == 0) {
				if (((typeof(ApplicationVersion))._2).cctor_finished_or_no_cctor == 0) {
				}
				pSVar5 = ApplicationVersion.GetHashCode(pSVar5);
				goto label_05b53220;
			}
		}
		pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
	label_05b53220: ;
		__this_00.hash = pSVar5;
		pSVar5 = __this_00.roomId;
		password_00 = __this_00.password;
		hash = __this_00.hash;
		sessionID = ApplicationVersion.GetSessionID();
		PhotonNetwork.JoinRoom(pSVar5, null, password_00, hash, sessionID, null);
		if (Il2CppMethodInitialized_07544cc2 == false) {
			Il2CppMethodInitialized_07544cc2 = true;
			uVar3 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
			cVar1 = PhotonNetwork.offlineMode;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(PhotonNetwork)).static_fields + 0x30);
		}
		if (cVar1 == false) {
			__this_01 = new Action((object)__this_00, (intptr_t)MethodInfo_Settings_MultiplayerSettings_c__DisplayClass27_0_JoinRoom_b__0);
			this._pendingVoiceRoom = __this_01;
			return;
		}
		return;
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x5A53450", Offset = "0x5A52450", VA = "0x5A53450")]
	public void OnRoomJoined()
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$OnRoomJoined): clean
		Action pSVar1;

		pSVar1 = this._pendingVoiceRoom;
		this._pendingVoiceRoom = null;
		if (pSVar1 == null) {
			return;
		}
		(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
		return;
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x5A53490", Offset = "0x5A52490", VA = "0x5A53490")]
	public void OnRoomEntryFailed()
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$OnRoomEntryFailed): clean
		this._pendingVoiceRoom = null;
		return;
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x5A53020", Offset = "0x5A52020", VA = "0x5A53020")]
	public string GetHashKey(string str)
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$GetHashKey): clean
		int iVar1;
		IntSetting pSVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_075472b9 == false) {
			Il2CppMethodInitialized_075472b9 = true;
			iVar1 = this.CurrentMultiplayerServerType;
		}
		else {
			iVar1 = this.CurrentMultiplayerServerType;
		}
		if (iVar1 == 2) {
			pSVar2 = this.LobbyMode;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			if (pSVar2._value == 0) {
				if (((typeof(ApplicationVersion))._2).cctor_finished_or_no_cctor == 0) {
				}
				return pSVar3;
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x5A53390", Offset = "0x5A52390", VA = "0x5A53390")]
	public string GetHashCode(string str)
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$GetHashCode): clean
		int iVar1;
		IntSetting pSVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_075472b9 == false) {
			Il2CppMethodInitialized_075472b9 = true;
			iVar1 = this.CurrentMultiplayerServerType;
		}
		else {
			iVar1 = this.CurrentMultiplayerServerType;
		}
		if (iVar1 == 2) {
			pSVar2 = this.LobbyMode;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			if (pSVar2._value == 0) {
				if (((typeof(ApplicationVersion))._2).cctor_finished_or_no_cctor == 0) {
				}
				return pSVar3;
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x5A534B0", Offset = "0x5A524B0", VA = "0x5A534B0")]
	public MultiplayerSettings()
	{
		// Lifted from source/cpp/Settings/MultiplayerSettings.c (Settings.MultiplayerSettings$$.ctor): 2 lines keep C-only constructs
		String pSVar1;
		Il2CppType handle;
		int iVar2;
		IntSetting pSVar3;
		StringSetting pSVar4;
		BoolSetting __this_00;
		Type enumType;
		Array __this_01;
		Dictionary<MultiplayerRegion, string> pSVar5;

		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		pSVar3 = new IntSetting();
		pSVar3.MinValue = 0;
		pSVar3.MaxValue = 1;
		iVar2 = pSVar3.SanitizeValue(0);
		pSVar3.DefaultValue = iVar2;
		pSVar3.SetDefault();
		this.LobbyMode = pSVar3;
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		pSVar3 = new IntSetting();
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		iVar2 = pSVar3.SanitizeValue(0);
		pSVar3.DefaultValue = iVar2;
		pSVar3.SetDefault();
		this.AppIdMode = pSVar3;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 0x7fffffff);
		this.CustomLobby = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 0x7fffffff);
		this.CustomAppId = pSVar4;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 0x7fffffff);
		this.LanIP = pSVar4;
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		pSVar3 = new IntSetting();
		pSVar3.MinValue = -0x80000000;
		pSVar3.MaxValue = 0x7fffffff;
		iVar2 = pSVar3.SanitizeValue(0x13bf);
		pSVar3.DefaultValue = iVar2;
		pSVar3.SetDefault();
		this.LanPort = pSVar3;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar4 = new StringSetting(pSVar1, 0x7fffffff);
		this.LanPassword = pSVar4;
		__this_00 = new BoolSetting(false);
		this.LanSupportsAccounts = __this_00;
		handle = TypeRef_Settings_MultiplayerRegion;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		__this_01 = Enum.GetValues(enumType);
		if (__this_01 != null) {
			iVar2 = __this_01.Length;
			pSVar3.MinValue = -0x80000000;
			pSVar3.MaxValue = 0x7fffffff;
			pSVar3 = new IntSetting();
			pSVar3.MinValue = 0;
			pSVar3.MaxValue = iVar2;
			iVar2 = pSVar3.SanitizeValue(0);
			pSVar3.DefaultValue = iVar2;
			pSVar3.SetDefault();
			this.QuickPlayRegion = pSVar3;
			pSVar5 = il2cpp_codegen_object_new(typeof(Dictionary<MultiplayerRegion, string>));
			pSVar5 = new Dictionary<Int32Enum, object>();
			if (pSVar5 != null) {
				pSVar5.Add(0, (Il2CppObject *)"eu");
				pSVar5.Add(1, (Il2CppObject *)"us");
				pSVar5.Add(2, (Il2CppObject *)"sa");
				pSVar5.Add(3, (Il2CppObject *)"asia");
				pSVar5.Add(4, (Il2CppObject *)"asia");
				this.CloudAddresses = pSVar5;
				pSVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<MultiplayerRegion, string>));
				pSVar5 = new Dictionary<Int32Enum, object>();
				if (pSVar5 != null) {
					pSVar5.Add(1, (Il2CppObject *)"us.aottg2.com");
					pSVar5.Add(0, (Il2CppObject *)"eu.aottg2.com");
					pSVar5.Add(2, (Il2CppObject *)"sa.aottg2.com");
					pSVar5.Add(3, (Il2CppObject *)"asia.aottg2.com");
					pSVar5.Add(4, (Il2CppObject *)"cn.aottg2.com");
					this.PublicAddresses = pSVar5;
					this.DefaultPort = 0x13bf;
					base();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/MultiplayerSettings.c.

	// Settings.MultiplayerSettings.<>c__DisplayClass21_0$$.ctor: clean
	private void c__DisplayClass21_0__ctor()
	{
		base();
		return;
	}

	// Settings.MultiplayerSettings.<>c__DisplayClass26_0$$.ctor: clean
	private void c__DisplayClass26_0__ctor()
	{
		base();
		return;
	}

	// Settings.MultiplayerSettings.<>c__DisplayClass27_0$$.ctor: clean
	private void c__DisplayClass27_0__ctor()
	{
		base();
		return;
	}

	// Settings.MultiplayerSettings$$.cctor: clean
	static MultiplayerSettings()
	{

		MultiplayerSettings.VoiceRoomSuffix = "vc";
		MultiplayerSettings.PublicAppId = "28521206-90d0-41b1-93b0-f35460fef0b6";
		return;
	}

	// Settings.MultiplayerSettings.<>c__DisplayClass21_0$$<ConnectServer>b__0: clean
	private void c__DisplayClass21_0__ConnectServer_b__0(bool success, String error)
	{
		uint uVar1;
		int port;
		uint key;
		IntSetting pSVar2;
		Dictionary<MultiplayerRegion, string> pSVar3;
		StringSetting pSVar4;
		LoadBalancingClient pPVar5;
		PunVoiceClient pPVar6;
		MultiplayerSettings __this_00;
		bool bVar7;
		String pSVar8;
		NetworkCredential pSVar9;
		AppSettings pPVar10;
		AuthenticationValues __this_01;
		String pSVar11;
		LoadBalancingTransport pPVar12;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		if (this.request != __this_00._connectRequest) {
			return;
		}
		key = this.region;
		__this_00.Disconnect();
		PhotonNetwork.AuthValues = null;
		pSVar2 = __this_00.AppIdMode;
		if (pSVar2 == null) goto label_05b521d3;
		if (pSVar2._value != 0) {
			pSVar3 = __this_00.CloudAddresses;
			if (pSVar3 != null) {
				pSVar8 = (String)pSVar3.get_Item(key);
				__this_00.CurrentMultiplayerServerType = 1;
				pSVar4 = __this_00.CustomAppId;
				if ((pSVar4 == null) ||(pPVar5 = PhotonNetwork.NetworkingClient, pPVar5 == null)) goto label_05b521d3;
				pPVar5._AppId_k__BackingField = pSVar4._value;
				pPVar5 = PhotonNetwork.NetworkingClient;
				pSVar9 = __this_00.GetCurrentLobby(false);
				if (pPVar5 == null) goto label_05b521d3;
				pPVar5.AppVersion = pSVar9;
				PhotonNetwork.ConnectToRegion(pSVar8);
				pPVar10 = new AppSettings();
				pSVar4 = __this_00.CustomAppId;
				if ((pSVar4 == null) || (pPVar10 == null)) goto label_05b521d3;
				pPVar10.AppIdVoice = pSVar4._value;
				pPVar10.FixedRegion = pSVar8;
				pPVar6 = VoiceChatManager.Client;
				if (pPVar6 == null) goto label_05b521d3;
				pPVar6.ConnectUsingSettings(pPVar10);
				pPVar6 = VoiceChatManager.Client;
				if (pPVar6 == null) goto label_05b521d3;
				pPVar12 = pPVar6.client;
				pSVar9 = __this_00.GetCurrentLobby(false);
				if (pPVar12 == null) goto label_05b521d3;
				goto label_05b520f3;
			}
			goto label_05b521d3;
		}
		pSVar3 = __this_00.PublicAddresses;
		if (pSVar3 == null) goto label_05b521d3;
		pSVar8 = (String)pSVar3.get_Item(key);
		__this_00.CurrentMultiplayerServerType = 2;
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar7 = AccountManager.IsLoggedIn;
			if (bVar7) goto label_05b51eac;
		}
		else {
			bVar7 = AccountManager.IsLoggedIn;
			if (bVar7) {
	label_05b51eac: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
					if (g_data_075472f7 == false) goto label_05b52126;
	label_05b51ec9: ;
					uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (g_data_075472f7 != false) goto label_05b51ec9;
	label_05b52126: ;
					g_data_075472f7 = true;
					uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				bVar7 = String.IsNullOrEmpty(AccountManager. _PhotonToken_k__BackingField);
				if (!bVar7) {
					__this_01 = new AuthenticationValues();
					if (__this_01 == null) goto label_05b521d3;
					__this_01.authType = 0;
					pSVar11 = AccountManager.PhotonUserId;
					bVar7 = String.IsNullOrEmpty(pSVar11);
					if (bVar7) {
						if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05b51f5a;
	label_05b52191: ;
						if (g_data_075472f7 == false) goto label_05b521a3;
	label_05b51f67: ;
						uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
					}
					else {
						pSVar11 = AccountManager.PhotonUserId;
						__this_01._UserId_k__BackingField = pSVar11;
						if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05b52191;
	label_05b51f5a: ;
						if (g_data_075472f7 != false) goto label_05b51f67;
	label_05b521a3: ;
						g_data_075472f7 = true;
						uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					__this_01.AddAuthParameter("token", AccountManager._PhotonToken_k__BackingField);
					PhotonNetwork.AuthValues = __this_01;
				}
			}
		}
		port = __this_00.DefaultPort;
		pSVar11 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		PhotonNetwork.ConnectToMaster(pSVar8, port, pSVar11);
		pPVar5 = PhotonNetwork.NetworkingClient;
		pSVar9 = __this_00.GetCurrentLobby(true);
		if (pPVar5 != null) {
			pPVar5.AppVersion = pSVar9;
			pPVar10 = new AppSettings();
			if (pPVar10 != null) {
				pPVar10.Server = pSVar8;
				pPVar10.Port = __this_00.DefaultPort;
				pPVar10.UseNameServer = false;
				pPVar6 = VoiceChatManager.Client;
				if (pPVar6 != null) {
					pPVar6.ConnectUsingSettings(pPVar10);
					pPVar6 = VoiceChatManager.Client;
					if (pPVar6 != null) {
						pPVar12 = pPVar6.client;
						pSVar9 = __this_00.GetCurrentLobby(true);
						if (pPVar12 != null) {
	label_05b520f3: ;
							pPVar12.AppVersion = pSVar9;
							return;
						}
					}
				}
			}
		}
	label_05b521d3: ;
		throw new NullReferenceException();
	}

	// Settings.MultiplayerSettings.<>c__DisplayClass26_0$$<StartRoom>b__0: clean
	private void c__DisplayClass26_0__StartRoom_b__0()
	{
		PunVoiceClient __this_00;
		String pSVar1;
		RoomOptions roomOptions;
		String roomName;
		String sessionID;

		__this_00 = VoiceChatManager.Client;
		pSVar1 = this.roomId;
		roomName = String.Concat(pSVar1, MultiplayerSettings.VoiceRoomSuffix);
		pSVar1 = this.hash;
		roomOptions = this.vcRoomOptions;
		sessionID = ApplicationVersion.GetSessionID();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.CreateRoom(roomName, roomOptions, null, null, pSVar1, sessionID);
		return;
	}

	// Settings.MultiplayerSettings.<>c__DisplayClass27_0$$<JoinRoom>b__0: clean
	private void c__DisplayClass27_0__JoinRoom_b__0()
	{
		PunVoiceClient __this_00;
		String pSVar1;
		String hash;
		String roomName;
		String sessionID;

		__this_00 = VoiceChatManager.Client;
		pSVar1 = this.roomId;
		roomName = String.Concat(pSVar1, MultiplayerSettings.VoiceRoomSuffix);
		pSVar1 = this.password;
		hash = this.hash;
		sessionID = ApplicationVersion.GetSessionID();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.JoinRoom(roomName, null, pSVar1, hash, sessionID);
		return;
	}
}
