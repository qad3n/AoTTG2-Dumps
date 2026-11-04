// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.SocketOptionName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x200038E")]
public enum SocketOptionName
{
	[Token(Token = "0x4000F36")]
	Debug = 1,
	[Token(Token = "0x4000F37")]
	AcceptConnection = 2,
	[Token(Token = "0x4000F38")]
	ReuseAddress = 4,
	[Token(Token = "0x4000F39")]
	KeepAlive = 8,
	[Token(Token = "0x4000F3A")]
	DontRoute = 16,
	[Token(Token = "0x4000F3B")]
	Broadcast = 32,
	[Token(Token = "0x4000F3C")]
	UseLoopback = 64,
	[Token(Token = "0x4000F3D")]
	Linger = 128,
	[Token(Token = "0x4000F3E")]
	OutOfBandInline = 256,
	[Token(Token = "0x4000F3F")]
	DontLinger = -129,
	[Token(Token = "0x4000F40")]
	ExclusiveAddressUse = -5,
	[Token(Token = "0x4000F41")]
	SendBuffer = 4097,
	[Token(Token = "0x4000F42")]
	ReceiveBuffer = 4098,
	[Token(Token = "0x4000F43")]
	SendLowWater = 4099,
	[Token(Token = "0x4000F44")]
	ReceiveLowWater = 4100,
	[Token(Token = "0x4000F45")]
	SendTimeout = 4101,
	[Token(Token = "0x4000F46")]
	ReceiveTimeout = 4102,
	[Token(Token = "0x4000F47")]
	Error = 4103,
	[Token(Token = "0x4000F48")]
	Type = 4104,
	[Token(Token = "0x4000F49")]
	ReuseUnicastPort = 12295,
	[Token(Token = "0x4000F4A")]
	MaxConnections = 2147483647,
	[Token(Token = "0x4000F4B")]
	IPOptions = Debug,
	[Token(Token = "0x4000F4C")]
	HeaderIncluded = AcceptConnection,
	[Token(Token = "0x4000F4D")]
	TypeOfService = 3,
	[Token(Token = "0x4000F4E")]
	IpTimeToLive = ReuseAddress,
	[Token(Token = "0x4000F4F")]
	MulticastInterface = 9,
	[Token(Token = "0x4000F50")]
	MulticastTimeToLive = 10,
	[Token(Token = "0x4000F51")]
	MulticastLoopback = 11,
	[Token(Token = "0x4000F52")]
	AddMembership = 12,
	[Token(Token = "0x4000F53")]
	DropMembership = 13,
	[Token(Token = "0x4000F54")]
	DontFragment = 14,
	[Token(Token = "0x4000F55")]
	AddSourceMembership = 15,
	[Token(Token = "0x4000F56")]
	DropSourceMembership = DontRoute,
	[Token(Token = "0x4000F57")]
	BlockSource = 17,
	[Token(Token = "0x4000F58")]
	UnblockSource = 18,
	[Token(Token = "0x4000F59")]
	PacketInformation = 19,
	[Token(Token = "0x4000F5A")]
	HopLimit = 21,
	[Token(Token = "0x4000F5B")]
	IPProtectionLevel = 23,
	[Token(Token = "0x4000F5C")]
	IPv6Only = 27,
	[Token(Token = "0x4000F5D")]
	NoDelay = Debug,
	[Token(Token = "0x4000F5E")]
	BsdUrgent = AcceptConnection,
	[Token(Token = "0x4000F5F")]
	Expedited = AcceptConnection,
	[Token(Token = "0x4000F60")]
	NoChecksum = Debug,
	[Token(Token = "0x4000F61")]
	ChecksumCoverage = 20,
	[Token(Token = "0x4000F62")]
	UpdateAcceptContext = 28683,
	[Token(Token = "0x4000F63")]
	UpdateConnectContext = 28688
}
