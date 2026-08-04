// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasicTitanComponentCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BasicTitanComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanComponentCache.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000558")]
internal class BasicTitanComponentCache : BaseTitanComponentCache
{
	[Token(Token = "0x4001A39")]
	[FieldOffset(Offset = "0x100")]
	public BaseHitbox BodyHitbox;

	[Token(Token = "0x4001A3A")]
	[FieldOffset(Offset = "0x108")]
	public BaseHitbox CrawlerHitbox;

	[Token(Token = "0x4001A3B")]
	[FieldOffset(Offset = "0x110")]
	public Transform ForearmL;

	[Token(Token = "0x4001A3C")]
	[FieldOffset(Offset = "0x118")]
	public Transform ForearmR;

	[Token(Token = "0x4001A3D")]
	[FieldOffset(Offset = "0x120")]
	public Transform Body;

	[Token(Token = "0x4001A3E")]
	[FieldOffset(Offset = "0x128")]
	public Collider ForearmLHurtbox;

	[Token(Token = "0x4001A3F")]
	[FieldOffset(Offset = "0x130")]
	public Collider ForearmRHurtbox;

	[Token(Token = "0x4001A40")]
	[FieldOffset(Offset = "0x138")]
	public ParticleSystem ForearmBloodL;

	[Token(Token = "0x4001A41")]
	[FieldOffset(Offset = "0x140")]
	public ParticleSystem ForearmBloodR;

	[Token(Token = "0x4001A42")]
	[FieldOffset(Offset = "0x148")]
	public ParticleSystem ForearmSmokeL;

	[Token(Token = "0x4001A43")]
	[FieldOffset(Offset = "0x150")]
	public ParticleSystem ForearmSmokeR;

	[Token(Token = "0x4001A44")]
	[FieldOffset(Offset = "0x158")]
	public ParticleSystem NapeBlood;

	[Token(Token = "0x60037D0")]
	[Address(RVA = "0x4213D90", Offset = "0x4213D90", VA = "0x4213D90")]
	public BasicTitanComponentCache(GameObject owner)
	{
	}

	[Token(Token = "0x60037D1")]
	[Address(RVA = "0x421E380", Offset = "0x421E380", VA = "0x421E380")]
	private void SetupParticles()
	{
	}
}
