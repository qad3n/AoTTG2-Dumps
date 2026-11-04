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

[Token(Token = "0x200097E")]
internal class BaseEventFilter
{
	[Token(Token = "0x4002ECE")]
	[FieldOffset(Offset = "0x10")]
	protected Player _player;

	[Token(Token = "0x4002ECF")]
	[FieldOffset(Offset = "0x18")]
	protected PhotonEventType _eventType;

	[Token(Token = "0x17000FCC")]
	protected virtual RateLimit TotalRateLimit
	{
		[Token(Token = "0x60057E3")]
		[Address(RVA = "0x236A2F0", Offset = "0x23688F0", VA = "0x18236A2F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000FCD")]
	protected virtual bool AlwaysAllowMaster
	{
		[Token(Token = "0x60057E4")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60057E5")]
	[Address(RVA = "0x8FB340", Offset = "0x8F9940", VA = "0x1808FB340")]
	public BaseEventFilter(Player player, PhotonEventType eventType)
	{
	}

	[Token(Token = "0x60057E6")]
	[Address(RVA = "0x236A290", Offset = "0x2368890", VA = "0x18236A290")]
	public bool IsMasterOrLocal()
	{
		return default(bool);
	}

	[Token(Token = "0x60057E7")]
	[Address(RVA = "0x236A180", Offset = "0x2368780", VA = "0x18236A180", Slot = "6")]
	public virtual bool CheckEvent(object[] data)
	{
		return default(bool);
	}
}
