// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.HeadlessManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/HeadlessManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x200097C")]
internal class HeadlessManager : MonoBehaviour
{
	[Token(Token = "0x200097D")]
	[CompilerGenerated]
	private sealed class _003CHostRoom_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002FE2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002FE3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000F4A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60058CF")]
			[Address(RVA = "0x5D17F50", Offset = "0x5D16F50", VA = "0x5D17F50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F4B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60058D1")]
			[Address(RVA = "0x5D17FA0", Offset = "0x5D16FA0", VA = "0x5D17FA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60058CC")]
		[Address(RVA = "0x5D170C0", Offset = "0x5D160C0", VA = "0x5D170C0")]
		[DebuggerHidden]
		public _003CHostRoom_003Ed__30(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager.<HostRoom>d__30$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60058CD")]
		[Address(RVA = "0x5D17AC0", Offset = "0x5D16AC0", VA = "0x5D17AC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60058CE")]
		[Address(RVA = "0x5D17AD0", Offset = "0x5D16AD0", VA = "0x5D17AD0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager.<HostRoom>d__30$$MoveNext): 4 lines keep C-only constructs
			int iVar1;
			int iVar2;
			MultiplayerSettings __this_00;
			InGameSet pSVar3;
			InGameGeneralSettings pSVar4;
			StringSetting pSVar5;
			IntSetting pSVar6;
			bool bVar7;
			ulong in_RAX;
			ApplicationManagers_HeadlessManager_StaticFields pAVar8;
			object arg1;
			String pSVar9;
			WaitForSeconds __this_01;
			ulong uStack_38;

			uStack_38 = in_RAX;
			iVar1 = this.__1__state;
			if (iVar1 != 0) {
				if (iVar1 == 1) {
					this.__1__state = -1;
					pAVar8 = typeof(HeadlessManager).static_fields;
					pSVar9 = pAVar8._RoomName_k__BackingField;
					if (Il2CppMethodInitialized_075484df == false) {
						Il2CppMethodInitialized_075484df = true;
						pAVar8 = typeof(HeadlessManager).static_fields;
					}
					uStack_38 = CONCAT44(pAVar8._MaxPlayers_k__BackingField, (undefined4)uStack_38);
					arg1 = (object)(((long)&uStack_38 + 4));
					pSVar9 = String.Format("[Headless] Creating room \"{0}\" (max={1}) with preset \"{2}\"\xe2\x80\xa6", (object)pSVar9, arg1, (object)HeadlessManager. _PresetName_k__BackingField);
					Debug.Log((object)pSVar9);
					__this_00 = SettingsManager.MultiplayerSettings;
					if (__this_00 == null) goto label_05e17f3e;
					__this_00.StartRoom();
				}
		label_05e17f2a: ;
				return iVar1 == 0;
			}
			this.__1__state = -1;
			bVar7 = HeadlessManager.TryApplyPreset(HeadlessManager._PresetName_k__BackingField);
			if (!bVar7) {
				pSVar9 = String.Concat("[Headless] Preset \"", HeadlessManager. _PresetName_k__BackingField, "\" not found \xe2\x80\x93 using defaults.");
				Debug.LogWarning((object)pSVar9);
			}
			pSVar3 = SettingsManager.InGameCurrent;
			if ((pSVar3 != null) &&(pSVar4 = pSVar3.General, pSVar4 != null)) {
				pSVar5 = pSVar4.RoomName;
				if (pSVar5 != null) {
					pSVar5.Value = (object)HeadlessManager._RoomName_k__BackingField;
					pSVar3 = SettingsManager.InGameUI;
					if ((pSVar3 != null) &&(pSVar4 = pSVar3.General, pSVar4 != null)) {
						pSVar5 = pSVar4.RoomName;
						if (pSVar5 != null) {
							pSVar5.Value = (object)HeadlessManager._RoomName_k__BackingField;
							if (Il2CppMethodInitialized_075484df == false) {
								Il2CppMethodInitialized_075484df = true;
								iVar2 = HeadlessManager._MaxPlayers_k__BackingField;
							}
							else {
								iVar2 = HeadlessManager._MaxPlayers_k__BackingField;
							}
							if (0 < iVar2) {
								pSVar3 = SettingsManager.InGameCurrent;
								if (((pSVar3 == null) ||(pSVar4 = pSVar3.General, pSVar4 == null)) ||(pSVar6 = pSVar4.MaxPlayers, pSVar6 == null)) goto label_05e17f3e;
								pSVar6.Value = HeadlessManager. _MaxPlayers_k__BackingField;
								pSVar3 = SettingsManager.InGameUI;
								if ((pSVar3 == null) ||(pSVar4 = pSVar3.General, pSVar4 == null)) goto label_05e17f3e;
								pSVar6 = pSVar4.MaxPlayers;
								if (pSVar6 == null) goto label_05e17f3e;
								pSVar6.Value = HeadlessManager. _MaxPlayers_k__BackingField;
							}
							__this_01 = new WaitForSeconds(0.5);
							this.__2__current = (object)__this_01;
							this.__1__state = 1;
							goto label_05e17f2a;
						}
					}
				}
			}
		label_05e17f3e: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60058D0")]
		[Address(RVA = "0x5D17F60", Offset = "0x5D16F60", VA = "0x5D17F60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_HeadlessManager_HostRoom_d__30_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200097E")]
	[CompilerGenerated]
	private sealed class _003CTryJoinRoom_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002FE4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002FE5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002FE6")]
		[FieldOffset(Offset = "0x20")]
		public HeadlessManager _003C_003E4__this;

		[Token(Token = "0x17000F4C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60058D5")]
			[Address(RVA = "0x5D183B0", Offset = "0x5D173B0", VA = "0x5D183B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F4D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60058D7")]
			[Address(RVA = "0x5D18400", Offset = "0x5D17400", VA = "0x5D18400", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60058D2")]
		[Address(RVA = "0x5D170E0", Offset = "0x5D160E0", VA = "0x5D170E0")]
		[DebuggerHidden]
		public _003CTryJoinRoom_003Ed__31(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60058D3")]
		[Address(RVA = "0x5D17FB0", Offset = "0x5D16FB0", VA = "0x5D17FB0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60058D4")]
		[Address(RVA = "0x5D17FC0", Offset = "0x5D16FC0", VA = "0x5D17FC0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$MoveNext): clean
			int iVar1;
			HeadlessManager pAVar2;
			MultiplayerSettings __this_00;
			WaitForSeconds pUVar3;
			RoomInfo room;
			String[] values;
			MethodInfo method_00;
			String roomName;
			String pSVar4;
			bool bVar5;

			iVar1 = this.__1__state;
			pAVar2 = this.__4__this;
			if (iVar1 == 2) {
				this.__1__state = -1;
				if (pAVar2 == null) goto label_05e1839f;
				pAVar2._joining = false;
			}
			else {
				if (iVar1 == 1) {
					this.__1__state = -1;
					room = HeadlessManager.FindRoom(HeadlessManager._RoomName_k__BackingField);
					if (room != null) {
						values = (String[])new string[5];
						if (values != null) {
							if ((int)values.Length != 0) {
								values[0] = "[Headless] Joining room \"";
								if ((values.Length & 0xfffffffe) != 0) {
									values[1] = HeadlessManager._RoomName_k__BackingField;
									if (2 < (uint)values.Length) {
										values[2] = "\" (id=";
										if ((values.Length & 0xfffffffc) != 0) {
											values[3] = room.name;
											if (4 < (uint)values.Length) {
												values[4] = ")\xe2\x80\xa6";
												method_00 = (MethodInfo)String.Concat(values);
												Debug.Log((object)method_00);
												HeadlessManager.PrepareJoinCharacterSettings();
												__this_00 = SettingsManager.MultiplayerSettings;
												pSVar4 = room.name;
												roomName = PhotonExtensions.GetStringProperty(room, RoomProperty.Name, "");
												if (__this_00 != null) {
													__this_00.JoinRoom(pSVar4, roomName, (String)**(ulong*)(g_data_07556758 + 0xb8));
													return false;
												}
												goto label_05e1839f;
											}
										}
									}
								}
							}
							throw new IndexOutOfRangeException();
						}
						goto label_05e1839f;
					}
					pSVar4 = String.Concat("[Headless] Room \"", HeadlessManager. _RoomName_k__BackingField, "\" not found \xe2\x80\x93 retrying in 3 s\xe2\x80\xa6");
					Debug.Log((object)pSVar4);
					pUVar3 = new WaitForSeconds(3.0);
					this.__2__current = (object)pUVar3;
					this.__1__state = 2;
				}
				else {
					if (iVar1 != 0) {
						return false;
					}
					this.__1__state = -1;
					if (pAVar2 == null) {
		label_05e1839f: ;
						throw new NullReferenceException();
					}
					pAVar2._joining = true;
					pUVar3 = new WaitForSeconds(1.0);
					this.__2__current = (object)pUVar3;
					this.__1__state = 1;
				}
			}
			return bVar5;
		}

		[Token(Token = "0x60058D6")]
		[Address(RVA = "0x5D183C0", Offset = "0x5D173C0", VA = "0x5D183C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_HeadlessManager_TryJoinRoom_d__31_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002FDF")]
	[FieldOffset(Offset = "0x28")]
	private static HeadlessManager _instance;

	[Token(Token = "0x4002FE0")]
	[FieldOffset(Offset = "0x20")]
	private bool _lobbyReady;

	[Token(Token = "0x4002FE1")]
	[FieldOffset(Offset = "0x21")]
	private bool _joining;

	[Token(Token = "0x17000F44")]
	public static bool IsHeadless
	{
		[Token(Token = "0x60058B5")]
		[Address(RVA = "0x5D16730", Offset = "0x5D15730", VA = "0x5D16730")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$get_IsHeadless): clean
			return HeadlessManager._IsHeadless_k__BackingField;
		}
		[Token(Token = "0x60058B6")]
		[Address(RVA = "0x5D16770", Offset = "0x5D15770", VA = "0x5D16770")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$set_IsHeadless): clean
			HeadlessManager._IsHeadless_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F45")]
	public static HeadlessMode Mode
	{
		[Token(Token = "0x60058B7")]
		[Address(RVA = "0x5D167B0", Offset = "0x5D157B0", VA = "0x5D167B0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$get_Mode): clean
			return HeadlessManager._Mode_k__BackingField;
		}
		[Token(Token = "0x60058B8")]
		[Address(RVA = "0x5D167F0", Offset = "0x5D157F0", VA = "0x5D167F0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$set_Mode): clean
			HeadlessManager._Mode_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F46")]
	public static MultiplayerRegion Region
	{
		[Token(Token = "0x60058B9")]
		[Address(RVA = "0x5D16830", Offset = "0x5D15830", VA = "0x5D16830")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$get_Region): clean
			return HeadlessManager._Region_k__BackingField;
		}
		[Token(Token = "0x60058BA")]
		[Address(RVA = "0x5D16870", Offset = "0x5D15870", VA = "0x5D16870")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$set_Region): clean
			HeadlessManager._Region_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F47")]
	public static string RoomName
	{
		[Token(Token = "0x60058BB")]
		[Address(RVA = "0x5D168B0", Offset = "0x5D158B0", VA = "0x5D168B0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$get_RoomName): clean
			return HeadlessManager._RoomName_k__BackingField;
		}
		[Token(Token = "0x60058BC")]
		[Address(RVA = "0x5D168F0", Offset = "0x5D158F0", VA = "0x5D168F0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$set_RoomName): clean

			HeadlessManager._RoomName_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F48")]
	public static int MaxPlayers
	{
		[Token(Token = "0x60058BD")]
		[Address(RVA = "0x5D16940", Offset = "0x5D15940", VA = "0x5D16940")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$get_MaxPlayers): clean
			return HeadlessManager._MaxPlayers_k__BackingField;
		}
		[Token(Token = "0x60058BE")]
		[Address(RVA = "0x5D16980", Offset = "0x5D15980", VA = "0x5D16980")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$set_MaxPlayers): clean
			HeadlessManager._MaxPlayers_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F49")]
	public static string PresetName
	{
		[Token(Token = "0x60058BF")]
		[Address(RVA = "0x5D169C0", Offset = "0x5D159C0", VA = "0x5D169C0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$get_PresetName): clean
			return HeadlessManager._PresetName_k__BackingField;
		}
		[Token(Token = "0x60058C0")]
		[Address(RVA = "0x5D16A00", Offset = "0x5D15A00", VA = "0x5D16A00")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$set_PresetName): clean

			HeadlessManager._PresetName_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x60058C1")]
	[Address(RVA = "0x5D096B0", Offset = "0x5D086B0", VA = "0x5D096B0")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$Init): 5 lines keep C-only constructs
		MultiplayerSettings __this;
		int iVar1;
		bool bVar2;
		HeadlessManager pAVar3;
		Object[] args;
		object pIVar4;
		object pIVar5;
		String pSVar6;
		ApplicationManagers_HeadlessManager_StaticFields pAVar7;
		int local_40;
		int local_3c;
		int local_38;
		int local_34;
		int local_30;
		int local_2c;
		String local_28;
		String local_20;

		local_38 = 0;
		local_3c = 0;
		local_20 = null;
		local_40 = 0;
		local_28 = null;
		bVar2 = HeadlessManager.TryParseArgs(ref local_38, ref local_3c, ref local_20, ref local_40, ref local_28);
		if (!bVar2) {
			return;
		}
		iVar1 = local_38;
		pAVar7 = typeof(HeadlessManager).static_fields;
		pAVar7._IsHeadless_k__BackingField = true;
		if (Il2CppMethodInitialized_075484d7 == false) {
			Il2CppMethodInitialized_075484d7 = true;
			pAVar7 = typeof(HeadlessManager).static_fields;
			pAVar7._Mode_k__BackingField = iVar1;
			if (g_data_075484d8 == false) goto label_05e09bb0;
	label_05e097ce: ;
			pAVar7._Region_k__BackingField = local_3c;
			pSVar6 = local_20;
		}
		else {
			pAVar7._Mode_k__BackingField = local_38;
			if (g_data_075484d8 != false) goto label_05e097ce;
	label_05e09bb0: ;
			iVar1 = local_3c;
			g_data_075484d8 = true;
			pAVar7 = typeof(HeadlessManager).static_fields;
			pAVar7._Region_k__BackingField = iVar1;
			pSVar6 = local_20;
		}
		local_20 = pSVar6;
		if (Il2CppMethodInitialized_075484d9 == false) {
			Il2CppMethodInitialized_075484d9 = true;
			pAVar7 = typeof(HeadlessManager).static_fields;
		}
		pAVar7._RoomName_k__BackingField = pSVar6;
		iVar1 = local_40;
		pSVar6 = local_28;
		pAVar7 = typeof(HeadlessManager).static_fields;
		pAVar7._MaxPlayers_k__BackingField = iVar1;
		if (Il2CppMethodInitialized_075484db == false) {
			Il2CppMethodInitialized_075484db = true;
			pAVar7 = typeof(HeadlessManager).static_fields;
		}
		pAVar7._PresetName_k__BackingField = pSVar6;
		pAVar3 = SingletonFactory.CreateSingleton<HeadlessManager>((object)HeadlessManager._instance);
		pAVar7 = typeof(HeadlessManager).static_fields;
		pAVar7._instance = pAVar3;
		args = (Object[])new object[5];
		local_2c = HeadlessManager._Mode_k__BackingField;
		pIVar4 = (object)local_2c;
		if (args == null) {
	label_05e09c10: ;
			throw new NullReferenceException();
		}
		if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((args.obj).klass)._1).element_class), pIVar5 == null)) {
	label_05e09c01: ;
			pIVar4 = new ArrayTypeMismatchException();
			throw pIVar4;
		}
		if ((int)args.Length != 0) {
			args[0] = pIVar4;
			local_30 = HeadlessManager._Region_k__BackingField;
			pIVar4 = (object)local_30;
			if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((args.obj).klass)._1).element_class), pIVar5 == null)) goto label_05e09c01;
			if ((args.Length & 0xfffffffe) != 0) {
				args[1] = pIVar4;
				pSVar6 = HeadlessManager._RoomName_k__BackingField;
				if ((pSVar6 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar6, (((args.obj).klass)._1).element_class), pIVar4 == null)) goto label_05e09c01;
				if (2 < (uint)args.Length) {
					args[2] = (object)pSVar6;
					local_34 = HeadlessManager._MaxPlayers_k__BackingField;
					pIVar4 = (object)local_34;
					if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((args.obj).klass)._1).element_class), pIVar5 == null)) goto label_05e09c01;
					if ((args.Length & 0xfffffffc) != 0) {
						args[3] = pIVar4;
						pSVar6 = HeadlessManager._PresetName_k__BackingField;
						if ((pSVar6 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar6, (((args.obj).klass)._1).element_class) , pIVar4 == null)) goto label_05e09c01;
						if (4 < (uint)args.Length) {
							args[4] = (object)pSVar6;
							pSVar6 = String.Format("[Headless] Initialised \xe2\x80\x93 mode={0} region={1} room=\"{2}\" maxPlayers={3} preset=\"{4}\"", args);
							Debug.Log((object)pSVar6);
							__this = SettingsManager.MultiplayerSettings;
							if (__this != null) {
								__this.ConnectServer(HeadlessManager. _Region_k__BackingField);
								return;
							}
							goto label_05e09c10;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60058C2")]
	[Address(RVA = "0x5D16D80", Offset = "0x5D15D80", VA = "0x5D16D80")]
	public static void OnJoinedLobby()
	{
		// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$OnJoinedLobby): clean
		HeadlessManager pAVar1;
		bool bVar2;
		HeadlessManager.d__30<HostRoom> __this;

		if (HeadlessManager._IsHeadless_k__BackingField != false) {
			pAVar1 = HeadlessManager._instance;
			bVar2 = ((Object)pAVar1 == null);
			if (!bVar2) {
				pAVar1 = HeadlessManager._instance;
				if (HeadlessManager._Mode_k__BackingField == 0) {
					if (pAVar1 != null) {
						__this = new HeadlessManager.d__30<HostRoom>();
						__this.__1__state = 0;
						pAVar1.StartCoroutine((IEnumerator)__this);
						return;
					}
				}
				else if (pAVar1 != null) {
					pAVar1._lobbyReady = true;
					return;
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60058C3")]
	[Address(RVA = "0x5D16F00", Offset = "0x5D15F00", VA = "0x5D16F00")]
	public static void OnRoomListUpdate()
	{
		// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$OnRoomListUpdate): clean
		int iVar1;
		HeadlessManager pAVar2;
		ApplicationManagers_HeadlessManager_StaticFields pAVar3;
		bool bVar4;
		HeadlessManager.d__31<TryJoinRoom> __this;

		if (HeadlessManager._IsHeadless_k__BackingField != false) {
			pAVar2 = HeadlessManager._instance;
			bVar4 = ((Object)pAVar2 == null);
			if (!bVar4) {
				if (Il2CppMethodInitialized_075484dc == false) {
					Il2CppMethodInitialized_075484dc = true;
					pAVar3 = typeof(HeadlessManager).static_fields;
					iVar1 = pAVar3._Mode_k__BackingField;
				}
				else {
					pAVar3 = typeof(HeadlessManager).static_fields;
					iVar1 = pAVar3._Mode_k__BackingField;
				}
				if (iVar1 == 1) {
					pAVar2 = pAVar3._instance;
					if (pAVar2 == null) {
						throw new NullReferenceException();
					}
					if ((pAVar2._lobbyReady != false) && (pAVar2._joining == false)) {
						__this = new HeadlessManager.d__31<TryJoinRoom>();
						__this.__1__state = 0;
						__this.__4__this = pAVar2;
						pAVar2.StartCoroutine((IEnumerator)__this);
						return;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60058C4")]
	[Address(RVA = "0x5D16EB0", Offset = "0x5D15EB0", VA = "0x5D16EB0")]
	[IteratorStateMachine(typeof(_003CHostRoom_003Ed__30))]
	private IEnumerator HostRoom()
	{
		// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$HostRoom): clean
		HeadlessManager.d__30<HostRoom> __this_00;

		__this_00 = new HeadlessManager.d__30<HostRoom>();
		__this_00.__1__state = 0;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60058C5")]
	[Address(RVA = "0x5D17050", Offset = "0x5D16050", VA = "0x5D17050")]
	[IteratorStateMachine(typeof(_003CTryJoinRoom_003Ed__31))]
	private IEnumerator TryJoinRoom()
	{
		// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$TryJoinRoom): clean
		HeadlessManager.d__31<TryJoinRoom> __this_00;

		__this_00 = new HeadlessManager.d__31<TryJoinRoom>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60058C6")]
	[Address(RVA = "0x5D17100", Offset = "0x5D16100", VA = "0x5D17100")]
	private static RoomInfo FindRoom(string displayName)
	{
		// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$FindRoom): 2 lines keep C-only constructs
		Dictionary<object, object> __this;
		bool bVar1;
		String a;
		RoomInfo pPVar2;
		RoomInfo room;
		int iVar3;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;

		local_58._current.key = null;
		local_58._current.value = null;
		local_58._dictionary = null;
		local_58._version = 0;
		local_58._index = 0;
		local_58._getEnumeratorRetType = 0;
		local_58._36_4_ = 0;
		__this = (Dictionary<object, object>)MainMenuGameManager.RoomList;
		if (__this == null) {
			throw new NullReferenceException();
		}
		local_58 = __this.GetEnumerator();
		do {
			bVar1 = local_58.MoveNext();
			room = (RoomInfo)local_58._current.value;
			if (!bVar1) {
				iVar3 = 5;
				room = null;
				goto label_05e17267;
			}
			a = PhotonExtensions.GetStringProperty(room, RoomProperty.Name, "");
			bVar1 = String.Equals(a, displayName, 5);
		} while (!bVar1);
		iVar3 = 4;
	label_05e17267: ;
		local_58.Dispose();
		if (iVar3 == 4) {
		}
		return pPVar2;
	}

	[Token(Token = "0x60058C7")]
	[Address(RVA = "0x5D17300", Offset = "0x5D16300", VA = "0x5D17300")]
	private static void PrepareJoinCharacterSettings()
	{
		// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$PrepareJoinCharacterSettings): 3 lines keep C-only constructs
		byte bVar1;
		InGameCharacterSettings pSVar2;
		StringSetting pSVar3;
		HumanCustomSettings pSVar4;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar5;
		ListSetting<T> pSVar6;
		String pSVar7;
		bool bVar8;
		int iVar9;
		int iVar10;
		BaseSetting pSVar11;
		int index;
		int index_00;
		IntSetting pSVar12;

		pSVar2 = SettingsManager.InGameCharacterSettings;
		if (pSVar2 != null) {
			pSVar3 = pSVar2.CharacterType;
			if (pSVar3 != null) {
				pSVar3.Value = (object)PlayerCharacter.Human;
				pSVar12 = pSVar2.ChooseStatus;
				if (pSVar12 != null) {
					pSVar12.Value = 2;
					pSVar3 = pSVar2.Loadout;
					if (pSVar3 != null) {
						pSVar3.Value = (object)HumanLoadout.Blade;
						pSVar4 = SettingsManager.HumanCustomSettings;
						if (((pSVar4 != null) &&(pSVar5 = pSVar4.Costume1Sets, pSVar5 != null)) &&(pSVar6 = pSVar5.Sets, pSVar6 != null)) {
							iVar9 = pSVar6.GetCount();
							pSVar4 = SettingsManager.HumanCustomSettings;
							if (((pSVar4 != null) &&(pSVar5 = pSVar4.CustomSets, pSVar5 != null)) &&(pSVar6 = pSVar5.Sets, pSVar6 != null)) {
								iVar10 = pSVar6.GetCount();
								if (0 < iVar9) {
									index = 0;
									do {
										pSVar4 = SettingsManager.HumanCustomSettings;
										if (((pSVar4 == null) ||(pSVar5 = pSVar4.Costume1Sets, pSVar5 == null)) ||((pSVar6 = pSVar5.Sets, pSVar6 == null ||(pSVar11 = pSVar6.GetItemAt(index), pSVar11 == null)))) goto label_05e1775b;
										bVar1 = (typeof(BaseSetSetting)._2).typeHierarchyDepth;
										if (((pSVar11.klass._2).typeHierarchyDepth < bVar1) ||((pSVar11.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseSetSetting))) goto label_05e17760;
										if ((*(ulong)((sbyte)pSVar11 + 0x30)) == null) goto label_05e1775b;
										pSVar7 = (((*(Il2CppClass*)((sbyte)pSVar11 + 0x30)))._1).byval_arg.data;
										bVar8 = String.Equals(pSVar7, HeadlessManager. _PresetName_k__BackingField, 5);
										if (bVar8) {
											pSVar12 = pSVar2.CustomSet;
											if (pSVar12 != null) goto label_05e17739;
											goto label_05e1775b;
										}
										index = index + 1;
									} while (iVar9 != index);
								}
								if (0 < iVar10) {
									index_00 = 0;
									do {
										pSVar4 = SettingsManager.HumanCustomSettings;
										if ((((pSVar4 == null) ||(pSVar5 = pSVar4.CustomSets, pSVar5 == null)) ||(pSVar6 = pSVar5.Sets, pSVar6 == null)) ||(pSVar11 = pSVar6.GetItemAt(index_00), pSVar11 == null)) goto label_05e1775b;
										bVar1 = (typeof(BaseSetSetting)._2).typeHierarchyDepth;
										if (((pSVar11.klass._2).typeHierarchyDepth < bVar1) ||((pSVar11.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseSetSetting))) {
	label_05e17760: ;
											throw new InvalidCastException();
										}
										if ((*(ulong)((sbyte)pSVar11 + 0x30)) == null) goto label_05e1775b;
										pSVar7 = (((*(Il2CppClass*)((sbyte)pSVar11 + 0x30)))._1).byval_arg.data;
										bVar8 = String.Equals(pSVar7, HeadlessManager. _PresetName_k__BackingField, 5);
										if (bVar8) {
											pSVar12 = pSVar2.CustomSet;
											if (pSVar12 == null) goto label_05e1775b;
											index = iVar9 + index_00;
											goto label_05e17739;
										}
										index_00 = index_00 + 1;
									} while (iVar10 != index_00);
								}
								if (iVar10 + iVar9 < 1) {
									return;
								}
								pSVar12 = pSVar2.CustomSet;
								index = Random.Range(0, iVar10 + iVar9);
								if (pSVar12 != null) {
	label_05e17739: ;
									pSVar12.Value = index;
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05e1775b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058C8")]
	[Address(RVA = "0x5D17770", Offset = "0x5D16770", VA = "0x5D17770")]
	private static bool TryApplyPreset(string presetName)
	{
		// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$TryApplyPreset): 9 lines keep C-only constructs
		byte bVar1;
		InGameSettings pSVar2;
		SetSettingsContainer<InGameSet> pSVar3;
		ListSetting<T> __this;
		InGameSet pSVar4;
		object pIVar5;
		bool bVar6;
		bool bVar7;
		List<BaseSetting> __this_00;
		int iVar8;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		BaseSetting local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		pSVar2 = SettingsManager.InGameSettings;
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.InGameSets, pSVar3 != null)) &&(__this = pSVar3.Sets, __this != null)) {
			__this_00 = __this.GetItems();
			if (__this_00 != null) {
				local_48.GetEnumerator((List<object>)__this_00);
				local_68._current = (object)local_38;
				local_68._list = (List<T>)local_48._0_8_;
				local_68._index = local_48._8_4_;
				local_68._version = local_48._12_4_;
				local_48._0_8_ = null;
				local_48._8_8_ = &local_68;
				do {
					bVar6 = local_68.MoveNext();
					pIVar5 = local_68._current;
					if (!bVar6) {
						iVar8 = 5;
						goto label_05e17979;
					}
					if ((BaseSetting)local_68._current == null) {
						throw new NullReferenceException();
					}
					bVar1 = (typeof(InGameSet)._2).typeHierarchyDepth;
					if (((((BaseSetting)(local_68._current).klass)._2).typeHierarchyDepth < bVar1) || ((((BaseSetting)(local_68._current).klass)._2).typeHierarchy [(ulong)bVar1 - 1] != typeof(InGameSet))) {
						throw new InvalidCastException();
					}
					if (((BaseSetting)((long)local_68._current + 0x30)).klass ==null) {
						throw new NullReferenceException();
					}
					bVar7 = String.Equals((((BaseSetting)((long)local_68._current + 0x30)).klass._1). byval_arg.data, presetName, 5);
				} while (!bVar7);
				pSVar4 = SettingsManager.InGameCurrent;
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				pSVar4.Copy((BaseSetting)pIVar5);
				pSVar4 = SettingsManager.InGameUI;
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				iVar8 = 4;
				pSVar4.Copy((BaseSetting)pIVar5);
	label_05e17979: ;
				local_68.Dispose();
				return iVar8 == 4 && bVar6;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058C9")]
	[Address(RVA = "0x5D16A50", Offset = "0x5D15A50", VA = "0x5D16A50")]
	private static bool TryParseArgs(out HeadlessMode mode, out MultiplayerRegion region, out string roomName, out int maxPlayers, out string preset)
	{
		// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$TryParseArgs): 1 lines keep C-only constructs
		ulong uVar1;
		int iVar2;
		bool bVar3;
		bool bVar4;
		String[] pSVar5;
		String pSVar6;
		ulong uVar7;
		uint uVar8;

		*mode = 0;
		*region = 0;
		*roomName = (String)**(ulong*)(g_data_07556758 + 0xb8);
		*maxPlayers = 10;
		*preset = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar5 = Environment.GetCommandLineArgs();
		if (pSVar5 == null) {
			throw new NullReferenceException();
		}
		uVar1 = pSVar5.Length;
		if (0 < (int)uVar1) {
			uVar7 = 0;
			do {
				if (((uVar1 & 0xffffffff) <= uVar7) ||(bVar3 = (pSVar5[uVar7] == "-headless-host"),(uint)pSVar5.Length <= uVar7)) {
	label_05e16d72: ;
					throw new IndexOutOfRangeException();
				}
				bVar4 = (pSVar5[uVar7] == "-headless-join");
				uVar1 = pSVar5.Length;
				uVar8 = (uint)uVar1;
				if ((bVar4 || bVar3) && (iVar2 = (int)uVar7, iVar2 + 4 < (int)uVar8)) {
					if (iVar2 + 1U < uVar8) {
						pSVar6 = pSVar5[uVar7 + 1];
						bVar4 = Enum.TryParse<MultiplayerRegion>(pSVar6, true, region);
						if (!bVar4) {
							if ((uint)pSVar5.Length <= iVar2 + 1U) goto label_05e16d72;
							pSVar6 = String.Concat("[Headless] Unknown region \"", pSVar5[uVar7 + 1], "\" \xe2\x80\x93 defaulting to EU.");
							Debug.LogWarning((object)pSVar6);
						}
						if (iVar2 + 2U < (uint)pSVar5.Length) {
							*roomName = pSVar5[(int)(iVar2 + 2U)];
							uVar8 = iVar2 + 3;
							if (uVar8 < (uint)pSVar5.Length) {
								bVar4 = Int32.TryParse(pSVar5[(int)uVar8], maxPlayers);
								if ((!bVar4) || (*maxPlayers < 0)) {
									if ((uint)pSVar5.Length <= uVar8) goto label_05e16d72;
									pSVar6 = String.Concat("[Headless] Invalid maxplayers \"", pSVar5[(int)uVar8], "\" \xe2\x80\x93 defaulting to 10.");
									Debug.LogWarning((object)pSVar6);
									*maxPlayers = 10;
								}
								if (iVar2 + 4U < (uint)pSVar5.Length) {
									*preset = pSVar5[(int)(iVar2 + 4U)];
									*mode = (uint)!bVar3;
									return true;
								}
							}
						}
					}
					goto label_05e16d72;
				}
				uVar7 = uVar7 + 1;
			} while ((long)uVar7 < (long)(int)uVar8);
		}
		return false;
	}

	[Token(Token = "0x60058CA")]
	[Address(RVA = "0x5D17A40", Offset = "0x5D16A40", VA = "0x5D17A40")]
	private static bool TryParseRegion(string value, out MultiplayerRegion region)
	{
		// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$TryParseRegion): clean
		bool bVar1;

		bVar1 = Enum.TryParse<MultiplayerRegion>(value, true, region);
		return bVar1;
	}

	[Token(Token = "0x60058CB")]
	[Address(RVA = "0x5D17AB0", Offset = "0x5D16AB0", VA = "0x5D17AB0")]
	public HeadlessManager()
	{
		// Lifted from source/cpp/ApplicationManagers/HeadlessManager.c (ApplicationManagers.HeadlessManager$$.ctor): clean
		base();
		return;
	}
}
