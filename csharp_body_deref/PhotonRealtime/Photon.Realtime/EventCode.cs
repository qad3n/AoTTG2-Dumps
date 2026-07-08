using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200002C")]
public class EventCode
{
	[Token(Token = "0x400011A")]
	public const byte GameList = 230;

	[Token(Token = "0x400011B")]
	public const byte GameListUpdate = 229;

	[Token(Token = "0x400011C")]
	public const byte QueueState = 228;

	[Token(Token = "0x400011D")]
	public const byte Match = 227;

	[Token(Token = "0x400011E")]
	public const byte AppStats = 226;

	[Token(Token = "0x400011F")]
	public const byte LobbyStats = 224;

	[Token(Token = "0x4000120")]
	[Obsolete("TCP routing was removed after becoming obsolete.")]
	public const byte AzureNodeInfo = 210;

	[Token(Token = "0x4000121")]
	public const byte Join = byte.MaxValue;

	[Token(Token = "0x4000122")]
	public const byte Leave = 254;

	[Token(Token = "0x4000123")]
	public const byte PropertiesChanged = 253;

	[Token(Token = "0x4000124")]
	[Obsolete("Use PropertiesChanged now.")]
	public const byte SetProperties = 253;

	[Token(Token = "0x4000125")]
	public const byte ErrorInfo = 251;

	[Token(Token = "0x4000126")]
	public const byte CacheSliceChanged = 250;

	[Token(Token = "0x4000127")]
	public const byte AuthEvent = 223;

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x3BD9580", Offset = "0x3BD9580", VA = "0x3BD9580")]
	public EventCode()
	{
	}
}
