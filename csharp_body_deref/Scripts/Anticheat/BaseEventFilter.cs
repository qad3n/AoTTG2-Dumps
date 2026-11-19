// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.BaseEventFilter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/BaseEventFilter.c
// Prior real C# source (older reference): Assets/Scripts/Anticheat/PhotonEvents/BaseEventFilter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return null;
		}
	}

	[Token(Token = "0x17000FAC")]
	protected virtual bool AlwaysAllowMaster
	{
		[Token(Token = "0x6005B3B")]
		[Address(RVA = "0x5D386C0", Offset = "0x5D376C0", VA = "0x5D386C0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6005B3C")]
	[Address(RVA = "0x5D386D0", Offset = "0x5D376D0", VA = "0x5D386D0")]
	public BaseEventFilter(Player player, PhotonEventType eventType)
	{
	}

	[Token(Token = "0x6005B3D")]
	[Address(RVA = "0x5D38700", Offset = "0x5D37700", VA = "0x5D38700")]
	public bool IsMasterOrLocal()
	{
		return default(bool);
	}

	[Token(Token = "0x6005B3E")]
	[Address(RVA = "0x5D38750", Offset = "0x5D37750", VA = "0x5D38750", Slot = "6")]
	public virtual bool CheckEvent(object[] data)
	{
		return default(bool);
	}
}
