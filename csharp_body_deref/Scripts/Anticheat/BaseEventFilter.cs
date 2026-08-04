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

[Token(Token = "0x20007F1")]
internal class BaseEventFilter
{
	[Token(Token = "0x40025FC")]
	[FieldOffset(Offset = "0x10")]
	protected Player _player;

	[Token(Token = "0x40025FD")]
	[FieldOffset(Offset = "0x18")]
	protected PhotonEventType _eventType;

	[Token(Token = "0x17000E69")]
	protected virtual RateLimit TotalRateLimit
	{
		[Token(Token = "0x6004B6A")]
		[Address(RVA = "0x43DC320", Offset = "0x43DC320", VA = "0x43DC320", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E6A")]
	protected virtual bool AlwaysAllowMaster
	{
		[Token(Token = "0x6004B6B")]
		[Address(RVA = "0x43DC370", Offset = "0x43DC370", VA = "0x43DC370", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004B6C")]
	[Address(RVA = "0x43DC380", Offset = "0x43DC380", VA = "0x43DC380")]
	public BaseEventFilter(Player player, PhotonEventType eventType)
	{
	}

	[Token(Token = "0x6004B6D")]
	[Address(RVA = "0x43DC3B0", Offset = "0x43DC3B0", VA = "0x43DC3B0")]
	public bool IsMasterOrLocal()
	{
		return default(bool);
	}

	[Token(Token = "0x6004B6E")]
	[Address(RVA = "0x43DC400", Offset = "0x43DC400", VA = "0x43DC400", Slot = "6")]
	public virtual bool CheckEvent(object[] data)
	{
		return default(bool);
	}
}
