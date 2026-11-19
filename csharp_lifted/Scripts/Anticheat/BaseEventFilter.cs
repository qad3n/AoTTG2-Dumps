// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.BaseEventFilter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/BaseEventFilter.c
// Prior real C# source (older reference): Assets/Scripts/Anticheat/PhotonEvents/BaseEventFilter.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using Utility;

namespace Anticheat;

[Token(Token = "0x20009E4")]
internal class BaseEventFilter
{
	[Token(Token = "0x400317E")]
	[FieldOffset(Offset = "0x10")]
	protected Player _player;

	[Token(Token = "0x400317F")]
	[FieldOffset(Offset = "0x18")]
	protected PhotonEventType _eventType;

	[Token(Token = "0x17000FAB")]
	protected virtual RateLimit TotalRateLimit
	{
		[Token(Token = "0x6005B3A")]
		[Address(RVA = "0x5D38670", Offset = "0x5D37670", VA = "0x5D38670", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Anticheat/BaseEventFilter.c (Anticheat.BaseEventFilter$$get_TotalRateLimit): clean
			RateLimit __this_00;

			__this_00 = new RateLimit(100, 1.0);
			return __this_00;
		}
	}

	[Token(Token = "0x17000FAC")]
	protected virtual bool AlwaysAllowMaster
	{
		[Token(Token = "0x6005B3B")]
		[Address(RVA = "0x5D386C0", Offset = "0x5D376C0", VA = "0x5D386C0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Anticheat/BaseEventFilter.c (Anticheat.BaseEventFilter$$get_AlwaysAllowMaster): clean
			return true;
		}
	}

	[Token(Token = "0x6005B3C")]
	[Address(RVA = "0x5D386D0", Offset = "0x5D376D0", VA = "0x5D386D0")]
	public BaseEventFilter(Player player, PhotonEventType eventType)
	{
		// Lifted from source/cpp/Anticheat/BaseEventFilter.c (Anticheat.BaseEventFilter$$.ctor): clean
		base();
		this._player = player;
		this._eventType = eventType;
		return;
	}

	[Token(Token = "0x6005B3D")]
	[Address(RVA = "0x5D38700", Offset = "0x5D37700", VA = "0x5D38700")]
	public bool IsMasterOrLocal()
	{
		// Lifted from source/cpp/Anticheat/BaseEventFilter.c (Anticheat.BaseEventFilter$$IsMasterOrLocal): clean
		Player pPVar1;
		bool bVar2;

		pPVar1 = this._player;
		if (pPVar1 == null) {
	label_05e3874b: ;
			throw new NullReferenceException();
		}
		bVar2 = true;
		if (pPVar1.IsLocal == false) {
			bVar2 = this.get_AlwaysAllowMaster();
			if (bVar2) {
				pPVar1 = this._player;
				if (pPVar1 == null) goto label_05e3874b;
				bVar2 = pPVar1.IsMasterClient;
				if (bVar2) {
					return true;
				}
			}
			bVar2 = false;
		}
		return bVar2;
	}

	[Token(Token = "0x6005B3E")]
	[Address(RVA = "0x5D38750", Offset = "0x5D37750", VA = "0x5D38750", Slot = "6")]
	public virtual bool CheckEvent(object[] data)
	{
		// Lifted from source/cpp/Anticheat/BaseEventFilter.c (Anticheat.BaseEventFilter$$CheckEvent): 1 lines keep C-only constructs
		Player player;
		bool bVar1;
		RateLimit __this_00;
		String pSVar2;
		Enum local_30;

		__this_00 = this.get_TotalRateLimit();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.Use(1);
		if (!bVar1) {
			player = this._player;
			local_30.klass = (Enum)typeof(PhotonEventType);
			local_30.monitor = (IntPtr)0xffffffffffffffff;
			pSVar2 = local_30.ToString();
			pSVar2 = String.Concat("sending too many ", pSVar2, " events");
			AnticheatManager.KickPlayer(player, false, pSVar2);
		}
		return bVar1;
	}
}
