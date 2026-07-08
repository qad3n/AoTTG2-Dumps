using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000500")]
internal class WallColossalComponentCache : ShifterComponentCache
{
	[Token(Token = "0x40017AC")]
	[FieldOffset(Offset = "0x100")]
	public ParticleSystem ColossalSteam1;

	[Token(Token = "0x40017AD")]
	[FieldOffset(Offset = "0x108")]
	public ParticleSystem ColossalSteam2;

	[Token(Token = "0x40017AE")]
	[FieldOffset(Offset = "0x110")]
	public Transform LeftHand;

	[Token(Token = "0x40017AF")]
	[FieldOffset(Offset = "0x118")]
	public Transform RightHand;

	[Token(Token = "0x40017B0")]
	[FieldOffset(Offset = "0x120")]
	public ParticleSystem LeftHandSteam;

	[Token(Token = "0x40017B1")]
	[FieldOffset(Offset = "0x128")]
	public ParticleSystem RightHandSteam;

	[Token(Token = "0x40017B2")]
	[FieldOffset(Offset = "0x130")]
	public GameObject SteamWarningZone;

	[Token(Token = "0x40017B3")]
	[FieldOffset(Offset = "0x138")]
	public WallColossalSteamWarningZone SteamWarningZoneComponent;

	[Token(Token = "0x600349D")]
	[Address(RVA = "0x3EF8180", Offset = "0x3EF8180", VA = "0x3EF8180")]
	public WallColossalComponentCache(GameObject owner)
	{
	}
}
