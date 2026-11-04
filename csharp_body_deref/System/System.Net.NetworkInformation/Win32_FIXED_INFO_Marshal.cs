// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.Win32_FIXED_INFO_Marshal
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x2000365")]
internal struct Win32_FIXED_INFO_Marshal
{
	[Token(Token = "0x4000DEC")]
	[FieldOffset(Offset = "0x0")]
	public unsafe fixed byte HostName[132];

	[Token(Token = "0x4000DED")]
	[FieldOffset(Offset = "0x84")]
	public unsafe fixed byte DomainName[132];

	[Token(Token = "0x4000DEE")]
	[FieldOffset(Offset = "0x108")]
	public IntPtr CurrentDnsServer;

	[Token(Token = "0x4000DEF")]
	[FieldOffset(Offset = "0x110")]
	public Win32_IP_ADDR_STRING DnsServerList;

	[Token(Token = "0x4000DF0")]
	[FieldOffset(Offset = "0x130")]
	public NetBiosNodeType NodeType;

	[Token(Token = "0x4000DF1")]
	[FieldOffset(Offset = "0x134")]
	public unsafe fixed byte ScopeId[260];

	[Token(Token = "0x4000DF2")]
	[FieldOffset(Offset = "0x238")]
	public uint EnableRouting;

	[Token(Token = "0x4000DF3")]
	[FieldOffset(Offset = "0x23C")]
	public uint EnableProxy;

	[Token(Token = "0x4000DF4")]
	[FieldOffset(Offset = "0x240")]
	public uint EnableDns;
}
