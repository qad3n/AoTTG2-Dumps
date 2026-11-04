// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.Win32_FIXED_INFO
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x2000364")]
internal struct Win32_FIXED_INFO
{
	[Token(Token = "0x4000DE3")]
	[FieldOffset(Offset = "0x0")]
	public string HostName;

	[Token(Token = "0x4000DE4")]
	[FieldOffset(Offset = "0x8")]
	public string DomainName;

	[Token(Token = "0x4000DE5")]
	[FieldOffset(Offset = "0x10")]
	public IntPtr CurrentDnsServer;

	[Token(Token = "0x4000DE6")]
	[FieldOffset(Offset = "0x18")]
	public Win32_IP_ADDR_STRING DnsServerList;

	[Token(Token = "0x4000DE7")]
	[FieldOffset(Offset = "0x38")]
	public NetBiosNodeType NodeType;

	[Token(Token = "0x4000DE8")]
	[FieldOffset(Offset = "0x40")]
	public string ScopeId;

	[Token(Token = "0x4000DE9")]
	[FieldOffset(Offset = "0x48")]
	public uint EnableRouting;

	[Token(Token = "0x4000DEA")]
	[FieldOffset(Offset = "0x4C")]
	public uint EnableProxy;

	[Token(Token = "0x4000DEB")]
	[FieldOffset(Offset = "0x50")]
	public uint EnableDns;
}
