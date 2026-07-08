using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000513")]
internal class BasicTitanComponentCache : BaseTitanComponentCache
{
	[Token(Token = "0x4001926")]
	[FieldOffset(Offset = "0x100")]
	public BaseHitbox BodyHitbox;

	[Token(Token = "0x4001927")]
	[FieldOffset(Offset = "0x108")]
	public BaseHitbox CrawlerHitbox;

	[Token(Token = "0x4001928")]
	[FieldOffset(Offset = "0x110")]
	public Transform ForearmL;

	[Token(Token = "0x4001929")]
	[FieldOffset(Offset = "0x118")]
	public Transform ForearmR;

	[Token(Token = "0x400192A")]
	[FieldOffset(Offset = "0x120")]
	public Transform Body;

	[Token(Token = "0x400192B")]
	[FieldOffset(Offset = "0x128")]
	public Collider ForearmLHurtbox;

	[Token(Token = "0x400192C")]
	[FieldOffset(Offset = "0x130")]
	public Collider ForearmRHurtbox;

	[Token(Token = "0x400192D")]
	[FieldOffset(Offset = "0x138")]
	public ParticleSystem ForearmBloodL;

	[Token(Token = "0x400192E")]
	[FieldOffset(Offset = "0x140")]
	public ParticleSystem ForearmBloodR;

	[Token(Token = "0x400192F")]
	[FieldOffset(Offset = "0x148")]
	public ParticleSystem ForearmSmokeL;

	[Token(Token = "0x4001930")]
	[FieldOffset(Offset = "0x150")]
	public ParticleSystem ForearmSmokeR;

	[Token(Token = "0x4001931")]
	[FieldOffset(Offset = "0x158")]
	public ParticleSystem NapeBlood;

	[Token(Token = "0x60035C2")]
	[Address(RVA = "0x3F07480", Offset = "0x3F07480", VA = "0x3F07480")]
	public BasicTitanComponentCache(GameObject owner)
	{
	}

	[Token(Token = "0x60035C3")]
	[Address(RVA = "0x3F11980", Offset = "0x3F11980", VA = "0x3F11980")]
	private void SetupParticles()
	{
	}
}
