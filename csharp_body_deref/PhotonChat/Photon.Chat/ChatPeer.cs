using System.Collections.Generic;
using System.Diagnostics;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x200000D")]
public class ChatPeer : PhotonPeer
{
	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x118")]
	public string NameServerHost;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<ConnectionProtocol, int> ProtocolToNameServerPort;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x120")]
	public ushort NameServerPortOverride;

	[Token(Token = "0x17000019")]
	public string NameServerAddress
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x3BBD4B0", Offset = "0x3BBD4B0", VA = "0x3BBD4B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001A")]
	internal virtual bool IsProtocolSecure
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x3BC3130", Offset = "0x3BC3130", VA = "0x3BC3130", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x3BBD020", Offset = "0x3BBD020", VA = "0x3BBD020")]
	public ChatPeer(IPhotonPeerListener listener, ConnectionProtocol protocol)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x3BC3140", Offset = "0x3BC3140", VA = "0x3BC3140")]
	[Conditional("SUPPORTED_UNITY")]
	private void ConfigUnitySockets()
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3BC2ED0", Offset = "0x3BC2ED0", VA = "0x3BC2ED0")]
	private string GetNameServerAddress()
	{
		return null;
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x3BC2470", Offset = "0x3BC2470", VA = "0x3BC2470")]
	public bool AuthenticateOnNameServer(string appId, string appVersion, string region, AuthenticationValues authValues)
	{
		return default(bool);
	}
}
