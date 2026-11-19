// ==================== AoTTG2 cross-reference ====================
// Type: Utility.PhysicsLayer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/PhysicsLayer.c
// Prior real C# source (older reference): Assets/Scripts/Utility/PhysicsLayer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x200092F")]
internal class PhysicsLayer
{
	[Token(Token = "0x4002E39")]
	[FieldOffset(Offset = "0x0")]
	public static int UI;

	[Token(Token = "0x4002E3A")]
	[FieldOffset(Offset = "0x4")]
	public static int NoCollision;

	[Token(Token = "0x4002E3B")]
	[FieldOffset(Offset = "0x8")]
	public static int Hitbox;

	[Token(Token = "0x4002E3C")]
	[FieldOffset(Offset = "0xC")]
	public static int Human;

	[Token(Token = "0x4002E3D")]
	[FieldOffset(Offset = "0x10")]
	public static int TitanMovebox;

	[Token(Token = "0x4002E3E")]
	[FieldOffset(Offset = "0x14")]
	public static int TitanPushbox;

	[Token(Token = "0x4002E3F")]
	[FieldOffset(Offset = "0x18")]
	public static int Hurtbox;

	[Token(Token = "0x4002E40")]
	[FieldOffset(Offset = "0x1C")]
	public static int Projectile;

	[Token(Token = "0x4002E41")]
	[FieldOffset(Offset = "0x20")]
	public static int ProjectileDetection;

	[Token(Token = "0x4002E42")]
	[FieldOffset(Offset = "0x24")]
	public static int CharacterDetection;

	[Token(Token = "0x4002E43")]
	[FieldOffset(Offset = "0x28")]
	public static int NPC;

	[Token(Token = "0x4002E44")]
	[FieldOffset(Offset = "0x2C")]
	public static int MapObjectMapObjects;

	[Token(Token = "0x4002E45")]
	[FieldOffset(Offset = "0x30")]
	public static int MapObjectProjectiles;

	[Token(Token = "0x4002E46")]
	[FieldOffset(Offset = "0x34")]
	public static int MapObjectCharacters;

	[Token(Token = "0x4002E47")]
	[FieldOffset(Offset = "0x38")]
	public static int MapObjectEntities;

	[Token(Token = "0x4002E48")]
	[FieldOffset(Offset = "0x3C")]
	public static int MapObjectAll;

	[Token(Token = "0x4002E49")]
	[FieldOffset(Offset = "0x40")]
	public static int MapEditorObject;

	[Token(Token = "0x4002E4A")]
	[FieldOffset(Offset = "0x44")]
	public static int MapEditorGizmo;

	[Token(Token = "0x4002E4B")]
	[FieldOffset(Offset = "0x48")]
	public static int MinimapIcon;

	[Token(Token = "0x4002E4C")]
	[FieldOffset(Offset = "0x4C")]
	public static int Background;

	[Token(Token = "0x4002E4D")]
	[FieldOffset(Offset = "0x50")]
	public static int MapObjectTitans;

	[Token(Token = "0x4002E4E")]
	[FieldOffset(Offset = "0x54")]
	public static int MapObjectHumans;

	[Token(Token = "0x4002E4F")]
	[FieldOffset(Offset = "0x58")]
	private static Dictionary<int, LayerMask> _masks;

	[Token(Token = "0x60056A5")]
	[Address(RVA = "0x5CEF560", Offset = "0x5CEE560", VA = "0x5CEF560")]
	public static void Init()
	{
	}

	[Token(Token = "0x60056A6")]
	[Address(RVA = "0x5CEFFC0", Offset = "0x5CEEFC0", VA = "0x5CEFFC0")]
	public static LayerMask GetMask(params int[] layers)
	{
		return default(LayerMask);
	}

	[Token(Token = "0x60056A7")]
	[Address(RVA = "0x5CF0060", Offset = "0x5CEF060", VA = "0x5CF0060")]
	public static LayerMask CopyMask(int originLayer)
	{
		return default(LayerMask);
	}

	[Token(Token = "0x60056A8")]
	[Address(RVA = "0x5CEFE80", Offset = "0x5CEEE80", VA = "0x5CEFE80")]
	private static void SetLayerCollisions(int layer, int[] others)
	{
	}

	[Token(Token = "0x60056A9")]
	[Address(RVA = "0x5CF0100", Offset = "0x5CEF100", VA = "0x5CF0100")]
	public PhysicsLayer()
	{
	}
}
