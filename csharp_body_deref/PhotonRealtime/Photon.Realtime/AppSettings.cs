// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.AppSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/AppSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Serializable]
[Token(Token = "0x2000002")]
public class AppSettings
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x10")]
	public string AppIdRealtime;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x18")]
	public string AppIdFusion;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x20")]
	public string AppIdChat;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x28")]
	public string AppIdVoice;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x30")]
	public string AppVersion;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x38")]
	public bool UseNameServer;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x40")]
	public string FixedRegion;

	[NonSerialized]
	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x48")]
	public string BestRegionSummaryFromStorage;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x50")]
	public string Server;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x58")]
	public int Port;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x60")]
	public string ProxyServer;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x68")]
	public ConnectionProtocol Protocol;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x69")]
	public bool EnableProtocolFallback;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x6C")]
	public AuthModeOption AuthMode;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x70")]
	public bool EnableLobbyStatistics;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x71")]
	public DebugLevel NetworkLogging;

	[Token(Token = "0x17000001")]
	public bool IsMasterServerAddress
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x1BC3220", Offset = "0x1BC1820", VA = "0x181BC3220")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public bool IsBestRegion
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x1D11B90", Offset = "0x1D10190", VA = "0x181D11B90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000003")]
	public bool IsDefaultNameServer
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x1D11BB0", Offset = "0x1D101B0", VA = "0x181D11BB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public bool IsDefaultPort
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x1D11BD0", Offset = "0x1D101D0", VA = "0x181D11BD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x1D112C0", Offset = "0x1D0F8C0", VA = "0x181D112C0")]
	public string ToStringFull()
	{
		return null;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x1D11290", Offset = "0x1D0F890", VA = "0x181D11290")]
	public static bool IsAppId(string val)
	{
		return default(bool);
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x1D11210", Offset = "0x1D0F810", VA = "0x181D11210")]
	private string HideAppId(string appId)
	{
		return null;
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x1D11110", Offset = "0x1D0F710", VA = "0x181D11110")]
	public AppSettings CopyTo(AppSettings d)
	{
		return null;
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x1D11B70", Offset = "0x1D10170", VA = "0x181D11B70")]
	public AppSettings()
	{
	}
}
