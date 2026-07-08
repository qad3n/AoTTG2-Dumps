using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x200078B")]
internal class RoomBanEntry
{
	[Token(Token = "0x400244C")]
	[FieldOffset(Offset = "0x10")]
	public string SessionId;

	[Token(Token = "0x400244D")]
	[FieldOffset(Offset = "0x18")]
	public string IPAddress;

	[Token(Token = "0x400244E")]
	[FieldOffset(Offset = "0x20")]
	public string Username;

	[Token(Token = "0x400244F")]
	[FieldOffset(Offset = "0x28")]
	public int ActorNumber;

	[Token(Token = "0x4002450")]
	[FieldOffset(Offset = "0x2C")]
	public bool IsIPBan;

	[Token(Token = "0x4002451")]
	[FieldOffset(Offset = "0x30")]
	public string Reason;

	[Token(Token = "0x4002452")]
	[FieldOffset(Offset = "0x38")]
	public bool CanUnban;

	[Token(Token = "0x6004873")]
	[Address(RVA = "0x40BE980", Offset = "0x40BE980", VA = "0x40BE980")]
	public RoomBanEntry()
	{
	}
}
