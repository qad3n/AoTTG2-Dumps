// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.MibIPGlobalProperties
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x20001DC")]
internal class MibIPGlobalProperties : UnixIPGlobalProperties
{
	[Token(Token = "0x40009C5")]
	[FieldOffset(Offset = "0x10")]
	public readonly string StatisticsFile;

	[Token(Token = "0x40009C6")]
	[FieldOffset(Offset = "0x18")]
	public readonly string StatisticsFileIPv6;

	[Token(Token = "0x40009C7")]
	[FieldOffset(Offset = "0x20")]
	public readonly string TcpFile;

	[Token(Token = "0x40009C8")]
	[FieldOffset(Offset = "0x28")]
	public readonly string Tcp6File;

	[Token(Token = "0x40009C9")]
	[FieldOffset(Offset = "0x30")]
	public readonly string UdpFile;

	[Token(Token = "0x40009CA")]
	[FieldOffset(Offset = "0x38")]
	public readonly string Udp6File;

	[Token(Token = "0x40009CB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] wsChars;

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x49A46D0", Offset = "0x49A46D0", VA = "0x49A46D0")]
	public MibIPGlobalProperties(string procDir)
	{
	}
}
