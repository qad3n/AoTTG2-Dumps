using Il2CppDummyDll;

namespace Photon.Pun;

[Token(Token = "0x2000021")]
internal class PunEvent
{
	[Token(Token = "0x40000C0")]
	public const byte RPC = 200;

	[Token(Token = "0x40000C1")]
	public const byte SendSerialize = 201;

	[Token(Token = "0x40000C2")]
	public const byte Instantiation = 202;

	[Token(Token = "0x40000C3")]
	public const byte CloseConnection = 203;

	[Token(Token = "0x40000C4")]
	public const byte Destroy = 204;

	[Token(Token = "0x40000C5")]
	public const byte RemoveCachedRPCs = 205;

	[Token(Token = "0x40000C6")]
	public const byte SendSerializeReliable = 206;

	[Token(Token = "0x40000C7")]
	public const byte DestroyPlayer = 207;

	[Token(Token = "0x40000C8")]
	public const byte OwnershipRequest = 209;

	[Token(Token = "0x40000C9")]
	public const byte OwnershipTransfer = 210;

	[Token(Token = "0x40000CA")]
	public const byte VacantViewIds = 211;

	[Token(Token = "0x40000CB")]
	public const byte OwnershipUpdate = 212;

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x3C17A00", Offset = "0x3C17A00", VA = "0x3C17A00")]
	public PunEvent()
	{
	}
}
