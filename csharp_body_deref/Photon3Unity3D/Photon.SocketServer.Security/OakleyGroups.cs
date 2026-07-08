using Il2CppDummyDll;

namespace Photon.SocketServer.Security;

[Token(Token = "0x200005C")]
internal static class OakleyGroups
{
	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int Generator;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x8")]
	public static readonly byte[] OakleyPrime768;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0x10")]
	public static readonly byte[] OakleyPrime1024;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x18")]
	public static readonly byte[] OakleyPrime1536;
}
