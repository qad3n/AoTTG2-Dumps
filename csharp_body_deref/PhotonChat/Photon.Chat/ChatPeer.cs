// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.ChatPeer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3EB2E00", Offset = "0x3EB2E00", VA = "0x3EB2E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001A")]
	internal virtual bool IsProtocolSecure
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x3EB8A80", Offset = "0x3EB8A80", VA = "0x3EB8A80", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x3EB2970", Offset = "0x3EB2970", VA = "0x3EB2970")]
	public ChatPeer(IPhotonPeerListener listener, ConnectionProtocol protocol)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x3EB8A90", Offset = "0x3EB8A90", VA = "0x3EB8A90")]
	[Conditional("SUPPORTED_UNITY")]
	private void ConfigUnitySockets()
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3EB8820", Offset = "0x3EB8820", VA = "0x3EB8820")]
	private string GetNameServerAddress()
	{
		return null;
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x3EB7DC0", Offset = "0x3EB7DC0", VA = "0x3EB7DC0")]
	public bool AuthenticateOnNameServer(string appId, string appVersion, string region, AuthenticationValues authValues)
	{
		return default(bool);
	}
}
