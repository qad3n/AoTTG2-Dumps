// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.Win32_IP_ADDR_STRING
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x2000369")]
internal struct Win32_IP_ADDR_STRING
{
	[Token(Token = "0x4000DF8")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr Next;

	[Token(Token = "0x4000DF9")]
	[FieldOffset(Offset = "0x8")]
	public string IpAddress;

	[Token(Token = "0x4000DFA")]
	[FieldOffset(Offset = "0x10")]
	public string IpMask;

	[Token(Token = "0x4000DFB")]
	[FieldOffset(Offset = "0x18")]
	public uint Context;
}
