using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x200050F")]
internal class BaseTitanComponentCache : BaseComponentCache
{
	[Token(Token = "0x4001856")]
	[FieldOffset(Offset = "0x38")]
	public Transform Head;

	[Token(Token = "0x4001857")]
	[FieldOffset(Offset = "0x40")]
	public Transform Neck;

	[Token(Token = "0x4001858")]
	[FieldOffset(Offset = "0x48")]
	public Transform Core;

	[Token(Token = "0x4001859")]
	[FieldOffset(Offset = "0x50")]
	public Transform Hip;

	[Token(Token = "0x400185A")]
	[FieldOffset(Offset = "0x58")]
	public Transform GrabLSocket;

	[Token(Token = "0x400185B")]
	[FieldOffset(Offset = "0x60")]
	public Transform GrabRSocket;

	[Token(Token = "0x400185C")]
	[FieldOffset(Offset = "0x68")]
	public Collider NapeHurtbox;

	[Token(Token = "0x400185D")]
	[FieldOffset(Offset = "0x70")]
	public Collider Movebox;

	[Token(Token = "0x400185E")]
	[FieldOffset(Offset = "0x78")]
	public Collider SitPushbox;

	[Token(Token = "0x400185F")]
	[FieldOffset(Offset = "0x80")]
	public BaseHitbox MouthHitbox;

	[Token(Token = "0x4001860")]
	[FieldOffset(Offset = "0x88")]
	public BaseHitbox HandLHitbox;

	[Token(Token = "0x4001861")]
	[FieldOffset(Offset = "0x90")]
	public BaseHitbox HandRHitbox;

	[Token(Token = "0x4001862")]
	[FieldOffset(Offset = "0x98")]
	public BaseHitbox FootLHitbox;

	[Token(Token = "0x4001863")]
	[FieldOffset(Offset = "0xA0")]
	public BaseHitbox FootRHitbox;

	[Token(Token = "0x4001864")]
	[FieldOffset(Offset = "0xA8")]
	public BaseHitbox SteamHitbox;

	[Token(Token = "0x4001865")]
	[FieldOffset(Offset = "0xB0")]
	public BaseHitbox ForearmLHitbox;

	[Token(Token = "0x4001866")]
	[FieldOffset(Offset = "0xB8")]
	public BaseHitbox ForearmRHitbox;

	[Token(Token = "0x4001867")]
	[FieldOffset(Offset = "0xC0")]
	public Collider EyesHurtbox;

	[Token(Token = "0x4001868")]
	[FieldOffset(Offset = "0xC8")]
	public Collider LegLHurtbox;

	[Token(Token = "0x4001869")]
	[FieldOffset(Offset = "0xD0")]
	public Collider LegRHurtbox;

	[Token(Token = "0x400186A")]
	[FieldOffset(Offset = "0xD8")]
	public Collider HandLHurtbox;

	[Token(Token = "0x400186B")]
	[FieldOffset(Offset = "0xE0")]
	public Collider HandRHurtbox;

	[Token(Token = "0x400186C")]
	[FieldOffset(Offset = "0xE8")]
	public List<Collider> ToggleColliders;

	[Token(Token = "0x400186D")]
	[FieldOffset(Offset = "0xF0")]
	public List<BaseHitbox> Hitboxes;

	[Token(Token = "0x400186E")]
	[FieldOffset(Offset = "0xF8")]
	public List<Collider> Hurtboxes;

	[Token(Token = "0x600356D")]
	[Address(RVA = "0x3F04C60", Offset = "0x3F04C60", VA = "0x3F04C60")]
	public BaseTitanComponentCache(GameObject owner)
	{
	}
}
