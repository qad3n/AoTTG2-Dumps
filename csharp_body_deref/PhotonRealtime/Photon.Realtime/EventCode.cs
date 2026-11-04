// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.EventCode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200002A")]
public class EventCode
{
	[Token(Token = "0x4000115")]
	public const byte GameList = 230;

	[Token(Token = "0x4000116")]
	public const byte GameListUpdate = 229;

	[Token(Token = "0x4000117")]
	public const byte QueueState = 228;

	[Token(Token = "0x4000118")]
	public const byte Match = 227;

	[Token(Token = "0x4000119")]
	public const byte AppStats = 226;

	[Token(Token = "0x400011A")]
	public const byte LobbyStats = 224;

	[Token(Token = "0x400011B")]
	[Obsolete("TCP routing was removed after becoming obsolete.")]
	public const byte AzureNodeInfo = 210;

	[Token(Token = "0x400011C")]
	public const byte Join = 255;

	[Token(Token = "0x400011D")]
	public const byte Leave = 254;

	[Token(Token = "0x400011E")]
	public const byte PropertiesChanged = 253;

	[Token(Token = "0x400011F")]
	[Obsolete("Use PropertiesChanged now.")]
	public const byte SetProperties = 253;

	[Token(Token = "0x4000120")]
	public const byte ErrorInfo = 251;

	[Token(Token = "0x4000121")]
	public const byte CacheSliceChanged = 250;

	[Token(Token = "0x4000122")]
	public const byte AuthEvent = 223;

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public EventCode()
	{
	}
}
