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
[Token(Token = "0x2000004")]
public class AppSettings
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x10")]
	public string AppIdRealtime;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x18")]
	public string AppIdFusion;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x20")]
	public string AppIdChat;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x28")]
	public string AppIdVoice;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x30")]
	public string AppVersion;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x38")]
	public bool UseNameServer;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x40")]
	public string FixedRegion;

	[NonSerialized]
	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x48")]
	public string BestRegionSummaryFromStorage;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x50")]
	public string Server;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x58")]
	public int Port;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x60")]
	public string ProxyServer;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x68")]
	public ConnectionProtocol Protocol;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x69")]
	public bool EnableProtocolFallback;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x6C")]
	public AuthModeOption AuthMode;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x70")]
	public bool EnableLobbyStatistics;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x71")]
	public DebugLevel NetworkLogging;

	[Token(Token = "0x17000001")]
	public bool IsMasterServerAddress
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x3EB9400", Offset = "0x3EB9400", VA = "0x3EB9400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public bool IsBestRegion
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x3EB9410", Offset = "0x3EB9410", VA = "0x3EB9410")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000003")]
	public bool IsDefaultNameServer
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x3EB9430", Offset = "0x3EB9430", VA = "0x3EB9430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public bool IsDefaultPort
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x3EB9450", Offset = "0x3EB9450", VA = "0x3EB9450")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x3EB9460", Offset = "0x3EB9460", VA = "0x3EB9460")]
	public string ToStringFull()
	{
		return null;
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x3EB9D60", Offset = "0x3EB9D60", VA = "0x3EB9D60")]
	public static bool IsAppId(string val)
	{
		return default(bool);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x3EB9CF0", Offset = "0x3EB9CF0", VA = "0x3EB9CF0")]
	private string HideAppId(string appId)
	{
		return null;
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x3EB9E00", Offset = "0x3EB9E00", VA = "0x3EB9E00")]
	public AppSettings CopyTo(AppSettings d)
	{
		return null;
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x3EB9EF0", Offset = "0x3EB9EF0", VA = "0x3EB9EF0")]
	public AppSettings()
	{
	}
}
