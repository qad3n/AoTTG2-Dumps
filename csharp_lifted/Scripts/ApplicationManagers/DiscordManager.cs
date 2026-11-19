// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.DiscordManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/DiscordManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DiscordManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Discord;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x200097A")]
internal class DiscordManager : MonoBehaviour
{
	[Token(Token = "0x4002FCD")]
	private const float StatusUpdateInterval = 5f;

	[Token(Token = "0x4002FCE")]
	private const string LargeImage = "aottg2-logo2";

	[Token(Token = "0x4002FCF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] TrackedProperties;

	[Token(Token = "0x4002FD0")]
	[FieldOffset(Offset = "0x8")]
	private static DiscordManager _instance;

	[Token(Token = "0x4002FD1")]
	[FieldOffset(Offset = "0x10")]
	public static global::Discord.Discord discord;

	[Token(Token = "0x4002FD2")]
	[FieldOffset(Offset = "0x18")]
	private static long appID;

	[Token(Token = "0x4002FD3")]
	[FieldOffset(Offset = "0x20")]
	private static long time;

	[Token(Token = "0x4002FD4")]
	[FieldOffset(Offset = "0x20")]
	private float _nextStatusUpdateTime;

	[Token(Token = "0x4002FD5")]
	[FieldOffset(Offset = "0x28")]
	private string _lastStatus;

	[Token(Token = "0x600589F")]
	[Address(RVA = "0x5D09FD0", Offset = "0x5D08FD0", VA = "0x5D09FD0")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/DiscordManager.c (ApplicationManagers.DiscordManager$$Init): 1 lines keep C-only constructs
		ApplicationManagers_DiscordManager_StaticFields pAVar1;
		bool bVar2;
		DiscordManager pAVar3;
		Discord __this;
		long iVar4;
		DateTimeOffset SVar5;
		DateTimeOffset local_28;

		local_28._dateTime._dateData = (DateTime)0;
		local_28._offsetMinutes = 0;
		local_28._10_6_ = 0;
		bVar2 = MobilePlatformUtility.IsMobileRuntime();
		if (!bVar2) {
			pAVar3 = SingletonFactory.CreateSingleton<DiscordManager>((object)DiscordManager._instance);
			pAVar1 = typeof(DiscordManager).static_fields;
			pAVar1._instance = pAVar3;
			iVar4 = DiscordManager.appID;
			__this = new Discord(iVar4, 1);
			pAVar1 = typeof(DiscordManager).static_fields;
			pAVar1.discord = __this;
			SVar5 = DateTimeOffset.Now;
			local_28._dateTime = SVar5._dateTime._dateData;
			local_28._offsetMinutes = SVar5._offsetMinutes;
			iVar4 = local_28.ToUnixTimeMilliseconds();
			DiscordManager.time = iVar4;
		}
		return;
	}

	[Token(Token = "0x60058A0")]
	[Address(RVA = "0x5D140E0", Offset = "0x5D130E0", VA = "0x5D140E0")]
	private void Update()
	{
		// Lifted from source/cpp/ApplicationManagers/DiscordManager.c (ApplicationManagers.DiscordManager$$Update): clean
		Discord __this_00;

		__this_00 = DiscordManager.discord;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.RunCallbacks();
		return;
	}

	[Token(Token = "0x60058A1")]
	[Address(RVA = "0x5D141F0", Offset = "0x5D131F0", VA = "0x5D141F0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/ApplicationManagers/DiscordManager.c (ApplicationManagers.DiscordManager$$LateUpdate): clean
		float fVar1;

		fVar1 = Time.unscaledTime;
		if (fVar1 < this._nextStatusUpdateTime) {
			return;
		}
		fVar1 = Time.unscaledTime;
		this._nextStatusUpdateTime = fVar1 + 5.0;
		this.UpdateStatus();
		return;
	}

	[Token(Token = "0x60058A2")]
	[Address(RVA = "0x5D14230", Offset = "0x5D13230", VA = "0x5D14230")]
	private void UpdateStatus()
	{
		// Lifted from source/cpp/ApplicationManagers/DiscordManager.c (ApplicationManagers.DiscordManager$$UpdateStatus): 12 lines keep C-only constructs
		String* targetAddress;
		uint uVar1;
		int iVar2;
		ProfileSettings pSVar3;
		NameSetting pSVar4;
		StringSetting pSVar5;
		InGameSet pSVar6;
		InGameGeneralSettings pSVar7;
		Discord __this_00;
		bool bVar8;
		String pSVar9;
		String pSVar10;
		String pSVar11;
		Room pPVar12;
		Player player;
		String pSVar13;
		Object[] values;
		object pIVar14;
		object pIVar15;
		ActivityManager __this_01;
		long lVar16;
		ulong puVar17;
		ulong puVar18;
		byte bVar19;
		ulong[] auStackY_598 = new ulong[128];
		Activity in_stack_fffffffffffffe68;
		int iStack_104;
		int iStack_f0;
		int iStack_ec;
		String pSStack_e8;
		ulong uStack_c8;
		ulong uStack_68;

		bVar19 = 0;
		uStack_c8 = 0;
		pSVar3 = SettingsManager.ProfileSettings;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		pSVar4 = pSVar3.Name;
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		pSVar9 = pSVar4._value;
		pSVar9 = MiscExtensions.StripHex(pSVar9);
		pSVar3 = SettingsManager.ProfileSettings;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		pSVar4 = pSVar3.Guild;
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		bVar8 = (pSVar4._value != "");
		if (bVar8) {
			pSVar3 = SettingsManager.ProfileSettings;
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			pSVar4 = pSVar3.Guild;
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			pSVar10 = pSVar4._value;
			pSVar10 = MiscExtensions.StripHex(pSVar10);
			pSVar9 = String.Concat("[", pSVar10, "] ", pSVar9);
		}
		pSVar10 = "Creating a room";
		pSVar3 = SettingsManager.ProfileSettings;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		pSVar5 = pSVar3.ProfileIcon;
		if (pSVar5 == null) {
			throw new NullReferenceException();
		}
		pSVar11 = pSVar5._value;
		if (pSVar11 == null) {
			throw new NullReferenceException();
		}
		pSVar11 = pSVar11.ToLower();
		iVar2 = 0;
		pPVar12 = PhotonNetwork.CurrentRoom;
		if (pPVar12 == null) {
			iStack_104 = 0;
			goto label_05e146a2;
		}
		pPVar12 = PhotonNetwork.CurrentRoom;
		if (pPVar12 == null) {
			throw new NullReferenceException();
		}
		iStack_104 = pPVar12.PlayerCount;
		if (Il2CppMethodInitialized_07544cc2 == false) {
			Il2CppMethodInitialized_07544cc2 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		iVar2 = 1;
		if (PhotonNetwork.offlineMode == false) {
			pPVar12 = PhotonNetwork.CurrentRoom;
			if (pPVar12 == null) {
				throw new NullReferenceException();
			}
			iVar2 = pPVar12.maxPlayers;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07544cc2 == false) {
			Il2CppMethodInitialized_07544cc2 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05e14603;
	label_05e145c2: ;
			if (PhotonNetwork.offlineMode != false) goto label_05e145cf;
	label_05e14618: ;
			pSVar6 = SettingsManager.InGameCurrent;
			if (pSVar6 == null) {
				throw new NullReferenceException();
			}
			pSVar7 = pSVar6.General;
			if (pSVar7 == null) {
				throw new NullReferenceException();
			}
			pSVar5 = pSVar7.RoomName;
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			pSVar10 = pSVar5._value;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05e145c2;
	label_05e14603: ;
			if (PhotonNetwork.offlineMode == false) goto label_05e14618;
	label_05e145cf: ;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			pSVar10 = "SinglePlayer";
		}
		if (uVar1 == 0) {
		}
		player = PhotonNetwork.LocalPlayer;
		pSVar13 = DiscordManager.GetScore(player);
		pSVar9 = String.Concat(pSVar9, " ", pSVar13);
	label_05e146a2: ;
		values = (Object[])new object[5];
		if (values == null) {
			throw new NullReferenceException();
		}
		if ((pSVar10 != null) &&(pIVar14 = il2cpp_vm_Object_IsInst((object)pSVar10, (((values.obj).klass)._1).element_class), pIVar14 == null)) {
			pIVar14 = new ArrayTypeMismatchException();
			throw pIVar14;
		}
		if ((int)values.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		values[0] = (object)pSVar10;
		if ((pSVar9 != null) &&(pIVar14 = il2cpp_vm_Object_IsInst((object)pSVar9, (((values.obj).klass)._1).element_class), pIVar14 == null)) {
			pIVar14 = new ArrayTypeMismatchException();
			throw pIVar14;
		}
		if ((values.Length & 0xfffffffe) == 0) {
			throw new IndexOutOfRangeException();
		}
		values[1] = (object)pSVar9;
		if ((pSVar11 != null) &&(pIVar14 = il2cpp_vm_Object_IsInst((object)pSVar11, (((values.obj).klass)._1).element_class), pIVar14 == null)) {
			pIVar14 = new ArrayTypeMismatchException();
			throw pIVar14;
		}
		if ((uint)values.Length < 3) {
			throw new IndexOutOfRangeException();
		}
		values[2] = (object)pSVar11;
		iStack_ec = iStack_104;
		pIVar14 = (object)iStack_ec;
		if ((pIVar14 != null) &&(pIVar15 = il2cpp_vm_Object_IsInst(pIVar14, (((values.obj).klass)._1).element_class), pIVar15 == null)) {
			pIVar14 = new ArrayTypeMismatchException();
			throw pIVar14;
		}
		if ((values.Length & 0xfffffffc) == 0) {
			throw new IndexOutOfRangeException();
		}
		values[3] = pIVar14;
		iStack_f0 = iVar2;
		pIVar14 = (object)iStack_f0;
		if ((pIVar14 != null) &&(pIVar15 = il2cpp_vm_Object_IsInst(pIVar14, (((values.obj).klass)._1).element_class), pIVar15 == null)) {
			pIVar14 = new ArrayTypeMismatchException();
			throw pIVar14;
		}
		if ((uint)values.Length < 5) {
			throw new IndexOutOfRangeException();
		}
		values[4] = pIVar14;
		pSVar13 = String.Join("|", values);
		bVar8 = (pSVar13 == this._lastStatus);
		if (!bVar8) {
			targetAddress = &this._lastStatus;
			*targetAddress = pSVar13;
			__this_00 = DiscordManager.discord;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_01 = __this_00.GetActivityManager();
			uStack_c8 = 0;
			pSStack_e8 = "aottg2-logo2";
			uStack_68 = CONCAT44(iVar2, iStack_104);
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			puVar17 = &uStack_c8;
			puVar18 = auStackY_598 + 0x80;
			for (lVar16 = 0x12; lVar16 != 0; lVar16 = lVar16 + -1) {
				*puVar18 = *puVar17;
				puVar17 = puVar17 + (ulong)bVar19 * -2 + 1;
				puVar18 = puVar18 + (ulong)bVar19 * -2 + 1;
			}
			__this_01.UpdateActivity(in_stack_fffffffffffffe68, null);
		}
		return;
	}

	[Token(Token = "0x60058A3")]
	[Address(RVA = "0x5D14C10", Offset = "0x5D13C10", VA = "0x5D14C10")]
	private static string GetScore(Player player)
	{
		// Lifted from source/cpp/ApplicationManagers/DiscordManager.c (ApplicationManagers.DiscordManager$$GetScore): 2 lines keep C-only constructs
		uint uVar1;
		String[] pSVar2;
		String[] pSVar3;
		object pIVar4;
		ulong uVar5;
		String pSVar6;
		String* targetAddress;

		if (Il2CppMethodInitialized_07548424 == false) {
			Il2CppMethodInitialized_07548424 = true;
			uVar1 = (typeof(DiscordManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(DiscordManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = DiscordManager.TrackedProperties;
		}
		else {
			pSVar2 = *(String[]*)(typeof(DiscordManager)).static_fields;
		}
		if (pSVar2 == null) {
	label_05e14dda: ;
			throw new NullReferenceException();
		}
		pSVar2 = (String[])new string[(uint32_t)pSVar2.Length];
		targetAddress = pSVar2.m_Items;
		uVar5 = 0;
		uVar1 = (typeof(DiscordManager)._2).cctor_finished_or_no_cctor;
		while(true) {
			if (uVar1 == 0) {
			}
			pSVar3 = DiscordManager.TrackedProperties;
			if (pSVar3 == null) goto label_05e14dda;
			if ((long)(int)pSVar3.Length <= (long)uVar5) {
				pSVar6 = String.Join(" / ", pSVar2);
				return pSVar6;
			}
			if ((typeof(DiscordManager)._2).cctor_finished_or_no_cctor == 0) {
				pSVar3 = DiscordManager.TrackedProperties;
				if (pSVar3 == null) goto label_05e14dda;
			}
			if ((uint)pSVar3.Length <= uVar5) break;
			pIVar4 = PhotonExtensions.GetCustomProperty(player, pSVar3[uVar5]);
			pSVar6 = null;
			if (pIVar4 != null) {
				if (pIVar4 == null) goto label_05e14dda;
				pSVar6 = (String)(*pIVar4.klass.vtable[3].methodPtr)(pIVar4,pIVar4.klass.vtable[3].method);
			}
			if (pSVar6 == null) {
				pSVar6 = "0";
			}
			if (pSVar2 == null) goto label_05e14dda;
			if ((uint)pSVar2.Length <= uVar5) break;
			*targetAddress = pSVar6;
			uVar5 = uVar5 + 1;
			targetAddress = targetAddress + 1;
			uVar1 = (typeof(DiscordManager)._2).cctor_finished_or_no_cctor;
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60058A4")]
	[Address(RVA = "0x5D14DF0", Offset = "0x5D13DF0", VA = "0x5D14DF0")]
	public DiscordManager()
	{
		// Lifted from source/cpp/ApplicationManagers/DiscordManager.c (ApplicationManagers.DiscordManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/DiscordManager.c.

	// ApplicationManagers.DiscordManager$$.cctor: clean
	static DiscordManager()
	{
		String[] pSVar1;

		pSVar1 = (String[])new string[4];
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "Kills";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "Deaths";
				if (2 < (uint)pSVar1.Length) {
					pSVar1[2] = "HighestDamage";
					if ((pSVar1.Length & 0xfffffffc) != 0) {
						pSVar1[3] = "TotalDamage";
						DiscordManager.TrackedProperties = pSVar1;
						DiscordManager.appID = 0x115181d372441070;
						return;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
