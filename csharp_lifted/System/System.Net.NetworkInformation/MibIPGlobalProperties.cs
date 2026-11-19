// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.MibIPGlobalProperties
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x2000325")]
internal class MibIPGlobalProperties : UnixIPGlobalProperties
{
	[Token(Token = "0x4000D0C")]
	[FieldOffset(Offset = "0x10")]
	public readonly string StatisticsFile;

	[Token(Token = "0x4000D0D")]
	[FieldOffset(Offset = "0x18")]
	public readonly string StatisticsFileIPv6;

	[Token(Token = "0x4000D0E")]
	[FieldOffset(Offset = "0x20")]
	public readonly string TcpFile;

	[Token(Token = "0x4000D0F")]
	[FieldOffset(Offset = "0x28")]
	public readonly string Tcp6File;

	[Token(Token = "0x4000D10")]
	[FieldOffset(Offset = "0x30")]
	public readonly string UdpFile;

	[Token(Token = "0x4000D11")]
	[FieldOffset(Offset = "0x38")]
	public readonly string Udp6File;

	[Token(Token = "0x4000D12")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] wsChars;

	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x61A4A40", Offset = "0x61A3A40", VA = "0x61A4A40")]
	public MibIPGlobalProperties(string procDir)
	{
	}
}
