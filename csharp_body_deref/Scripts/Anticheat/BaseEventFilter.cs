using Il2CppDummyDll;
using Photon.Realtime;
using Utility;

namespace Anticheat;

[Token(Token = "0x200078F")]
internal class BaseEventFilter
{
	[Token(Token = "0x400245E")]
	[FieldOffset(Offset = "0x10")]
	protected Player _player;

	[Token(Token = "0x400245F")]
	[FieldOffset(Offset = "0x18")]
	protected PhotonEventType _eventType;

	[Token(Token = "0x17000DCD")]
	protected virtual RateLimit TotalRateLimit
	{
		[Token(Token = "0x6004877")]
		[Address(RVA = "0x40BE9A0", Offset = "0x40BE9A0", VA = "0x40BE9A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DCE")]
	protected virtual bool AlwaysAllowMaster
	{
		[Token(Token = "0x6004878")]
		[Address(RVA = "0x40BE9F0", Offset = "0x40BE9F0", VA = "0x40BE9F0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004879")]
	[Address(RVA = "0x40BEA00", Offset = "0x40BEA00", VA = "0x40BEA00")]
	public BaseEventFilter(Player player, PhotonEventType eventType)
	{
	}

	[Token(Token = "0x600487A")]
	[Address(RVA = "0x40BEA30", Offset = "0x40BEA30", VA = "0x40BEA30")]
	public bool IsMasterOrLocal()
	{
		return default(bool);
	}

	[Token(Token = "0x600487B")]
	[Address(RVA = "0x40BEA80", Offset = "0x40BEA80", VA = "0x40BEA80", Slot = "6")]
	public virtual bool CheckEvent(object[] data)
	{
		return default(bool);
	}
}
