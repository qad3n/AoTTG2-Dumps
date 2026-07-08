using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x200078D")]
internal class RegionBanEntry
{
	[Token(Token = "0x4002456")]
	[FieldOffset(Offset = "0x10")]
	public string TargetId;

	[Token(Token = "0x4002457")]
	[FieldOffset(Offset = "0x18")]
	public string Username;

	[Token(Token = "0x4002458")]
	[FieldOffset(Offset = "0x20")]
	public bool IsIPBan;

	[Token(Token = "0x4002459")]
	[FieldOffset(Offset = "0x28")]
	public string Reason;

	[Token(Token = "0x400245A")]
	[FieldOffset(Offset = "0x30")]
	public string BannedBy;

	[Token(Token = "0x6004875")]
	[Address(RVA = "0x40BE990", Offset = "0x40BE990", VA = "0x40BE990")]
	public RegionBanEntry()
	{
	}
}
