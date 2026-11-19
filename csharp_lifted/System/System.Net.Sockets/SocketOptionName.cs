// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.SocketOptionName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x200034A")]
public enum SocketOptionName
{
	[Token(Token = "0x4000E4E")]
	Debug = 1,
	[Token(Token = "0x4000E4F")]
	AcceptConnection = 2,
	[Token(Token = "0x4000E50")]
	ReuseAddress = 4,
	[Token(Token = "0x4000E51")]
	KeepAlive = 8,
	[Token(Token = "0x4000E52")]
	DontRoute = 16,
	[Token(Token = "0x4000E53")]
	Broadcast = 32,
	[Token(Token = "0x4000E54")]
	UseLoopback = 64,
	[Token(Token = "0x4000E55")]
	Linger = 128,
	[Token(Token = "0x4000E56")]
	OutOfBandInline = 256,
	[Token(Token = "0x4000E57")]
	DontLinger = -129,
	[Token(Token = "0x4000E58")]
	ExclusiveAddressUse = -5,
	[Token(Token = "0x4000E59")]
	SendBuffer = 4097,
	[Token(Token = "0x4000E5A")]
	ReceiveBuffer = 4098,
	[Token(Token = "0x4000E5B")]
	SendLowWater = 4099,
	[Token(Token = "0x4000E5C")]
	ReceiveLowWater = 4100,
	[Token(Token = "0x4000E5D")]
	SendTimeout = 4101,
	[Token(Token = "0x4000E5E")]
	ReceiveTimeout = 4102,
	[Token(Token = "0x4000E5F")]
	Error = 4103,
	[Token(Token = "0x4000E60")]
	Type = 4104,
	[Token(Token = "0x4000E61")]
	ReuseUnicastPort = 12295,
	[Token(Token = "0x4000E62")]
	MaxConnections = 2147483647,
	[Token(Token = "0x4000E63")]
	IPOptions = Debug,
	[Token(Token = "0x4000E64")]
	HeaderIncluded = AcceptConnection,
	[Token(Token = "0x4000E65")]
	TypeOfService = 3,
	[Token(Token = "0x4000E66")]
	IpTimeToLive = ReuseAddress,
	[Token(Token = "0x4000E67")]
	MulticastInterface = 9,
	[Token(Token = "0x4000E68")]
	MulticastTimeToLive = 10,
	[Token(Token = "0x4000E69")]
	MulticastLoopback = 11,
	[Token(Token = "0x4000E6A")]
	AddMembership = 12,
	[Token(Token = "0x4000E6B")]
	DropMembership = 13,
	[Token(Token = "0x4000E6C")]
	DontFragment = 14,
	[Token(Token = "0x4000E6D")]
	AddSourceMembership = 15,
	[Token(Token = "0x4000E6E")]
	DropSourceMembership = DontRoute,
	[Token(Token = "0x4000E6F")]
	BlockSource = 17,
	[Token(Token = "0x4000E70")]
	UnblockSource = 18,
	[Token(Token = "0x4000E71")]
	PacketInformation = 19,
	[Token(Token = "0x4000E72")]
	HopLimit = 21,
	[Token(Token = "0x4000E73")]
	IPProtectionLevel = 23,
	[Token(Token = "0x4000E74")]
	IPv6Only = 27,
	[Token(Token = "0x4000E75")]
	NoDelay = Debug,
	[Token(Token = "0x4000E76")]
	BsdUrgent = AcceptConnection,
	[Token(Token = "0x4000E77")]
	Expedited = AcceptConnection,
	[Token(Token = "0x4000E78")]
	NoChecksum = Debug,
	[Token(Token = "0x4000E79")]
	ChecksumCoverage = 20,
	[Token(Token = "0x4000E7A")]
	UpdateAcceptContext = 28683,
	[Token(Token = "0x4000E7B")]
	UpdateConnectContext = 28688
}
