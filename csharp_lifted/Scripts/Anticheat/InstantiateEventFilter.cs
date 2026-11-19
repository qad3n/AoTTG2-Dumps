// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.InstantiateEventFilter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/InstantiateEventFilter.c
// Prior real C# source (older reference): Assets/Scripts/Anticheat/PhotonEvents/InstantiateEventFilter.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using Utility;

namespace Anticheat;

[Token(Token = "0x20009E5")]
internal class InstantiateEventFilter : BaseEventFilter
{
	[Token(Token = "0x6005B3F")]
	[Address(RVA = "0x5D2C3F0", Offset = "0x5D2B3F0", VA = "0x5D2C3F0")]
	public InstantiateEventFilter(Player player, PhotonEventType eventType)
	{
		// Lifted from source/cpp/Anticheat/InstantiateEventFilter.c (Anticheat.InstantiateEventFilter$$.ctor): clean
		base();
		this._player = player;
		this._eventType = eventType;
		return;
	}

	[Token(Token = "0x6005B40")]
	[Address(RVA = "0x5D38860", Offset = "0x5D37860", VA = "0x5D38860", Slot = "6")]
	public override bool CheckEvent(object[] data)
	{
		// Lifted from source/cpp/Anticheat/InstantiateEventFilter.c (Anticheat.InstantiateEventFilter$$CheckEvent): 6 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		int iVar3;
		Player pPVar4;
		int iVar5;
		bool bVar6;
		object pIVar7;
		int iVar8;
		int iVar9;
		int iVar10;
		Object[] data_00;
		String __this_00;

		pPVar4 = this._player;
		if (pPVar4 == null) goto label_05e38a4e;
		if (pPVar4.IsLocal != false) {
			return true;
		}
		data_00 = (Object[])(this.klass.vtable)._5_get_AlwaysAllowMaster.method;
		bVar6 = this.get_AlwaysAllowMaster();
		if (bVar6) {
			pPVar4 = this._player;
			if (pPVar4 == null) goto label_05e38a4e;
			data_00 = null;
			bVar6 = pPVar4.IsMasterClient;
			if (bVar6) {
				return true;
			}
		}
		bVar6 = this.CheckEvent(data_00);
		if (bVar6) {
			if (data == null) goto label_05e38a4e;
			if ((int)data.Length == 0) {
	label_05e38a53: ;
				throw new IndexOutOfRangeException();
			}
			__this_00 = (String)data[0];
			if (__this_00 == null) goto label_05e38a4e;
			if ((Il2CppClass)__this_00.klass != g_data_07556758) {
	label_05e38a5e: ;
				throw new InvalidCastException();
			}
			__this_00.ToLower();
			if ((data.Length & 0xfffffffe) == 0) goto label_05e38a53;
			__this_00 = (String)data[1];
			if (__this_00 == null) {
				pIVar7 = null;
				pPVar4 = this._player;
			}
			else {
				pIVar7 = ((object)__this_00 as int[]);
				if (pIVar7 == null) goto label_05e38a5e;
				pPVar4 = this._player;
			}
			if (pPVar4 == null) {
	label_05e38a4e: ;
				throw new NullReferenceException();
			}
			iVar9 = pPVar4.actorNumber;
			if (Il2CppMethodInitialized_0754858e == false) {
				Il2CppMethodInitialized_0754858e = true;
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (pIVar7 == null) goto label_05e38a4e;
			iVar2 = *(int)&pIVar7[1].monitor;
			if (0 < iVar2) {
				iVar8 = *(int)((long)(typeof(PhotonNetwork)).static_fields + 8);
				iVar9 = iVar9 * iVar8;
				if (*(int)&pIVar7[2].klass <= iVar9) {
					return false;
				}
				iVar8 = iVar8 + iVar9;
				if (iVar8 <= *(int)&pIVar7[2].klass) {
					return false;
				}
				iVar5 = 1;
				do {
					iVar10 = iVar5;
					if ((iVar2 == iVar10) || (iVar3 = *(int)((long)&pIVar7[2].klass + (long)iVar10 * 4), iVar3 <= iVar9) ) break;
					iVar5 = iVar10 + 1;
				} while (iVar3 < iVar8);
				if (iVar10 < iVar2) goto label_05e389fd;
			}
			bVar6 = true;
		}
		else {
	label_05e389fd: ;
			bVar6 = false;
		}
		return bVar6;
	}

	[Token(Token = "0x6005B41")]
	[Address(RVA = "0x5D38B50", Offset = "0x5D37B50", VA = "0x5D38B50")]
	private bool CheckRateLimit(string name, RateLimit limit, int count = 1)
	{
		// Lifted from source/cpp/Anticheat/InstantiateEventFilter.c (Anticheat.InstantiateEventFilter$$CheckRateLimit): clean
		Player player;
		bool bVar1;
		String reason;

		if (limit == null) {
			throw new NullReferenceException();
		}
		bVar1 = limit.Use(count);
		if (!bVar1) {
			player = this._player;
			reason = String.Concat("instantiate spamming: ", name);
			AnticheatManager.KickPlayer(player, false, reason);
		}
		return bVar1;
	}

	[Token(Token = "0x6005B42")]
	[Address(RVA = "0x5D38B40", Offset = "0x5D37B40", VA = "0x5D38B40")]
	private bool CheckInstantiate(string name)
	{
		// Lifted from source/cpp/Anticheat/InstantiateEventFilter.c (Anticheat.InstantiateEventFilter$$CheckInstantiate): clean
		return true;
	}

	[Token(Token = "0x6005B43")]
	[Address(RVA = "0x5D38A70", Offset = "0x5D37A70", VA = "0x5D38A70")]
	private bool CheckViewIds(int senderId, int[] viewIds)
	{
		// Lifted from source/cpp/Anticheat/InstantiateEventFilter.c (Anticheat.InstantiateEventFilter$$CheckViewIds): clean
		uint uVar1;
		int iVar2;
		int iVar3;
		bool bVar4;
		int iVar5;
		int iVar6;
		int iVar7;

		if (Il2CppMethodInitialized_0754858e == false) {
			Il2CppMethodInitialized_0754858e = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (viewIds == null) {
			throw new NullReferenceException();
		}
		iVar2 = (int)viewIds.Length;
		if (iVar2 < 1) {
			return true;
		}
		iVar5 = *(int)((long)(typeof(PhotonNetwork)).static_fields + 8);
		iVar6 = senderId * iVar5;
		if ((iVar6 < viewIds[0]) && (iVar5 = iVar5 + iVar6, viewIds[0] < iVar5)) {
			iVar3 = 1;
			do {
				iVar7 = iVar3;
				if ((iVar2 == iVar7) || (viewIds[iVar7] <= iVar6)) break;
				iVar3 = iVar7 + 1;
			} while (viewIds[iVar7] < iVar5);
			bVar4 = iVar2 <= iVar7;
		}
		return bVar4;
	}
}
