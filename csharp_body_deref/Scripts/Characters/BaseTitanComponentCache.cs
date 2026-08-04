// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseTitanComponentCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseTitanComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BaseTitanComponentCache.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x2000554")]
internal class BaseTitanComponentCache : BaseComponentCache
{
	[Token(Token = "0x4001967")]
	[FieldOffset(Offset = "0x38")]
	public Transform Head;

	[Token(Token = "0x4001968")]
	[FieldOffset(Offset = "0x40")]
	public Transform Neck;

	[Token(Token = "0x4001969")]
	[FieldOffset(Offset = "0x48")]
	public Transform Core;

	[Token(Token = "0x400196A")]
	[FieldOffset(Offset = "0x50")]
	public Transform Hip;

	[Token(Token = "0x400196B")]
	[FieldOffset(Offset = "0x58")]
	public Transform GrabLSocket;

	[Token(Token = "0x400196C")]
	[FieldOffset(Offset = "0x60")]
	public Transform GrabRSocket;

	[Token(Token = "0x400196D")]
	[FieldOffset(Offset = "0x68")]
	public Collider NapeHurtbox;

	[Token(Token = "0x400196E")]
	[FieldOffset(Offset = "0x70")]
	public Collider Movebox;

	[Token(Token = "0x400196F")]
	[FieldOffset(Offset = "0x78")]
	public Collider SitPushbox;

	[Token(Token = "0x4001970")]
	[FieldOffset(Offset = "0x80")]
	public BaseHitbox MouthHitbox;

	[Token(Token = "0x4001971")]
	[FieldOffset(Offset = "0x88")]
	public BaseHitbox HandLHitbox;

	[Token(Token = "0x4001972")]
	[FieldOffset(Offset = "0x90")]
	public BaseHitbox HandRHitbox;

	[Token(Token = "0x4001973")]
	[FieldOffset(Offset = "0x98")]
	public BaseHitbox FootLHitbox;

	[Token(Token = "0x4001974")]
	[FieldOffset(Offset = "0xA0")]
	public BaseHitbox FootRHitbox;

	[Token(Token = "0x4001975")]
	[FieldOffset(Offset = "0xA8")]
	public BaseHitbox SteamHitbox;

	[Token(Token = "0x4001976")]
	[FieldOffset(Offset = "0xB0")]
	public BaseHitbox ForearmLHitbox;

	[Token(Token = "0x4001977")]
	[FieldOffset(Offset = "0xB8")]
	public BaseHitbox ForearmRHitbox;

	[Token(Token = "0x4001978")]
	[FieldOffset(Offset = "0xC0")]
	public Collider EyesHurtbox;

	[Token(Token = "0x4001979")]
	[FieldOffset(Offset = "0xC8")]
	public Collider LegLHurtbox;

	[Token(Token = "0x400197A")]
	[FieldOffset(Offset = "0xD0")]
	public Collider LegRHurtbox;

	[Token(Token = "0x400197B")]
	[FieldOffset(Offset = "0xD8")]
	public Collider HandLHurtbox;

	[Token(Token = "0x400197C")]
	[FieldOffset(Offset = "0xE0")]
	public Collider HandRHurtbox;

	[Token(Token = "0x400197D")]
	[FieldOffset(Offset = "0xE8")]
	public List<Collider> ToggleColliders;

	[Token(Token = "0x400197E")]
	[FieldOffset(Offset = "0xF0")]
	public List<BaseHitbox> Hitboxes;

	[Token(Token = "0x400197F")]
	[FieldOffset(Offset = "0xF8")]
	public List<Collider> Hurtboxes;

	[Token(Token = "0x600377B")]
	[Address(RVA = "0x4211520", Offset = "0x4211520", VA = "0x4211520")]
	public BaseTitanComponentCache(GameObject owner)
	{
	}
}
