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

[Token(Token = "0x200000B")]
public class ChatPeer : PhotonPeer
{
	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x118")]
	public string NameServerHost;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<ConnectionProtocol, int> ProtocolToNameServerPort;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x120")]
	public ushort NameServerPortOverride;

	[Token(Token = "0x17000019")]
	public string NameServerAddress
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x1D110C0", Offset = "0x1D0F6C0", VA = "0x181D110C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001A")]
	internal virtual bool IsProtocolSecure
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x1D110A0", Offset = "0x1D0F6A0", VA = "0x181D110A0", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x1D10E70", Offset = "0x1D0F470", VA = "0x181D10E70")]
	public ChatPeer(IPhotonPeerListener listener, ConnectionProtocol protocol)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x1D10950", Offset = "0x1D0EF50", VA = "0x181D10950")]
	[Conditional("SUPPORTED_UNITY")]
	private void ConfigUnitySockets()
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x1D10B00", Offset = "0x1D0F100", VA = "0x181D10B00")]
	private string GetNameServerAddress()
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x1D10710", Offset = "0x1D0ED10", VA = "0x181D10710")]
	public bool AuthenticateOnNameServer(string appId, string appVersion, string region, AuthenticationValues authValues)
	{
		return default(bool);
	}
}
