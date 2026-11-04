// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasicTitanComponentCache
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BasicTitanComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanComponentCache.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006B8")]
internal class BasicTitanComponentCache : BaseTitanComponentCache
{
	[Token(Token = "0x400213E")]
	[FieldOffset(Offset = "0x100")]
	public BaseHitbox BodyHitbox;

	[Token(Token = "0x400213F")]
	[FieldOffset(Offset = "0x108")]
	public BaseHitbox CrawlerHitbox;

	[Token(Token = "0x4002140")]
	[FieldOffset(Offset = "0x110")]
	public Transform ForearmL;

	[Token(Token = "0x4002141")]
	[FieldOffset(Offset = "0x118")]
	public Transform ForearmR;

	[Token(Token = "0x4002142")]
	[FieldOffset(Offset = "0x120")]
	public Transform HandL;

	[Token(Token = "0x4002143")]
	[FieldOffset(Offset = "0x128")]
	public Transform HandR;

	[Token(Token = "0x4002144")]
	[FieldOffset(Offset = "0x130")]
	public float HandLHurtboxRadius;

	[Token(Token = "0x4002145")]
	[FieldOffset(Offset = "0x134")]
	public float HandRHurtboxRadius;

	[Token(Token = "0x4002146")]
	[FieldOffset(Offset = "0x138")]
	public Transform Body;

	[Token(Token = "0x4002147")]
	[FieldOffset(Offset = "0x140")]
	public Transform HairSocket;

	[Token(Token = "0x4002148")]
	[FieldOffset(Offset = "0x148")]
	public CapsuleCollider HeadCollider;

	[Token(Token = "0x4002149")]
	[FieldOffset(Offset = "0x150")]
	public Collider ForearmLHurtbox;

	[Token(Token = "0x400214A")]
	[FieldOffset(Offset = "0x158")]
	public Collider ForearmRHurtbox;

	[Token(Token = "0x400214B")]
	[FieldOffset(Offset = "0x160")]
	public ParticleSystem ForearmBloodL;

	[Token(Token = "0x400214C")]
	[FieldOffset(Offset = "0x168")]
	public ParticleSystem ForearmBloodR;

	[Token(Token = "0x400214D")]
	[FieldOffset(Offset = "0x170")]
	public ParticleSystem ForearmSmokeL;

	[Token(Token = "0x400214E")]
	[FieldOffset(Offset = "0x178")]
	public ParticleSystem ForearmSmokeR;

	[Token(Token = "0x400214F")]
	[FieldOffset(Offset = "0x180")]
	public ParticleSystem WardedWeakSpotForearmL;

	[Token(Token = "0x4002150")]
	[FieldOffset(Offset = "0x188")]
	public ParticleSystem WardedWeakSpotForearmR;

	[Token(Token = "0x4002151")]
	[FieldOffset(Offset = "0x190")]
	public ParticleSystem WardedWeakSpotLegL;

	[Token(Token = "0x4002152")]
	[FieldOffset(Offset = "0x198")]
	public ParticleSystem WardedWeakSpotLegR;

	[Token(Token = "0x4002153")]
	[FieldOffset(Offset = "0x1A0")]
	public ParticleSystem NapeBlood;

	[Token(Token = "0x4002154")]
	[FieldOffset(Offset = "0x1A8")]
	public ParticleSystem DecapitationBlood;

	[Token(Token = "0x600428C")]
	[Address(RVA = "0x219D990", Offset = "0x219BF90", VA = "0x18219D990")]
	public BasicTitanComponentCache(GameObject owner)
	{
	}

	[Token(Token = "0x600428D")]
	[Address(RVA = "0x219C880", Offset = "0x219AE80", VA = "0x18219C880")]
	private void SetupParticles()
	{
	}
}
