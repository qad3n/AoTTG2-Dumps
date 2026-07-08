using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200003D")]
public struct SendOptions
{
	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SendOptions SendReliable;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x8")]
	public static readonly SendOptions SendUnreliable;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x0")]
	public DeliveryMode DeliveryMode;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x4")]
	public bool Encrypt;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x5")]
	public byte Channel;

	[Token(Token = "0x17000092")]
	public bool Reliability
	{
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x3B95C20", Offset = "0x3B95C20", VA = "0x3B95C20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x3B95C30", Offset = "0x3B95C30", VA = "0x3B95C30")]
		set
		{
		}
	}
}
