using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000011")]
public struct PhotonPortDefinition
{
	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly PhotonPortDefinition AlternativeUdpPorts;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x0")]
	public ushort NameServerPort;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x2")]
	public ushort MasterServerPort;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x4")]
	public ushort GameServerPort;
}
