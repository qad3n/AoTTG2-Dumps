using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x200078A")]
internal class PlayerEntry
{
	[Token(Token = "0x4002448")]
	[FieldOffset(Offset = "0x10")]
	public string SessionId;

	[Token(Token = "0x4002449")]
	[FieldOffset(Offset = "0x18")]
	public string IPAddress;

	[Token(Token = "0x400244A")]
	[FieldOffset(Offset = "0x20")]
	public string Username;

	[Token(Token = "0x400244B")]
	[FieldOffset(Offset = "0x28")]
	public int ActorNumber;

	[Token(Token = "0x6004872")]
	[Address(RVA = "0x40BE970", Offset = "0x40BE970", VA = "0x40BE970")]
	public PlayerEntry()
	{
	}
}
