using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x20006F1")]
internal class PhysicsLayer
{
	[Token(Token = "0x4002163")]
	[FieldOffset(Offset = "0x0")]
	public static int UI;

	[Token(Token = "0x4002164")]
	[FieldOffset(Offset = "0x4")]
	public static int NoCollision;

	[Token(Token = "0x4002165")]
	[FieldOffset(Offset = "0x8")]
	public static int Hitbox;

	[Token(Token = "0x4002166")]
	[FieldOffset(Offset = "0xC")]
	public static int Human;

	[Token(Token = "0x4002167")]
	[FieldOffset(Offset = "0x10")]
	public static int TitanMovebox;

	[Token(Token = "0x4002168")]
	[FieldOffset(Offset = "0x14")]
	public static int TitanPushbox;

	[Token(Token = "0x4002169")]
	[FieldOffset(Offset = "0x18")]
	public static int Hurtbox;

	[Token(Token = "0x400216A")]
	[FieldOffset(Offset = "0x1C")]
	public static int Projectile;

	[Token(Token = "0x400216B")]
	[FieldOffset(Offset = "0x20")]
	public static int ProjectileDetection;

	[Token(Token = "0x400216C")]
	[FieldOffset(Offset = "0x24")]
	public static int CharacterDetection;

	[Token(Token = "0x400216D")]
	[FieldOffset(Offset = "0x28")]
	public static int NPC;

	[Token(Token = "0x400216E")]
	[FieldOffset(Offset = "0x2C")]
	public static int MapObjectMapObjects;

	[Token(Token = "0x400216F")]
	[FieldOffset(Offset = "0x30")]
	public static int MapObjectProjectiles;

	[Token(Token = "0x4002170")]
	[FieldOffset(Offset = "0x34")]
	public static int MapObjectCharacters;

	[Token(Token = "0x4002171")]
	[FieldOffset(Offset = "0x38")]
	public static int MapObjectEntities;

	[Token(Token = "0x4002172")]
	[FieldOffset(Offset = "0x3C")]
	public static int MapObjectAll;

	[Token(Token = "0x4002173")]
	[FieldOffset(Offset = "0x40")]
	public static int MapEditorObject;

	[Token(Token = "0x4002174")]
	[FieldOffset(Offset = "0x44")]
	public static int MapEditorGizmo;

	[Token(Token = "0x4002175")]
	[FieldOffset(Offset = "0x48")]
	public static int MinimapIcon;

	[Token(Token = "0x4002176")]
	[FieldOffset(Offset = "0x4C")]
	public static int Background;

	[Token(Token = "0x4002177")]
	[FieldOffset(Offset = "0x50")]
	public static int MapObjectTitans;

	[Token(Token = "0x4002178")]
	[FieldOffset(Offset = "0x54")]
	public static int MapObjectHumans;

	[Token(Token = "0x4002179")]
	[FieldOffset(Offset = "0x58")]
	private static Dictionary<int, LayerMask> _masks;

	[Token(Token = "0x6004486")]
	[Address(RVA = "0x407ADE0", Offset = "0x407ADE0", VA = "0x407ADE0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004487")]
	[Address(RVA = "0x407B810", Offset = "0x407B810", VA = "0x407B810")]
	public static LayerMask GetMask(params int[] layers)
	{
		return default(LayerMask);
	}

	[Token(Token = "0x6004488")]
	[Address(RVA = "0x407B8B0", Offset = "0x407B8B0", VA = "0x407B8B0")]
	public static LayerMask CopyMask(int originLayer)
	{
		return default(LayerMask);
	}

	[Token(Token = "0x6004489")]
	[Address(RVA = "0x407B6C0", Offset = "0x407B6C0", VA = "0x407B6C0")]
	private static void SetLayerCollisions(int layer, int[] others)
	{
	}

	[Token(Token = "0x600448A")]
	[Address(RVA = "0x407B950", Offset = "0x407B950", VA = "0x407B950")]
	public PhysicsLayer()
	{
	}
}
