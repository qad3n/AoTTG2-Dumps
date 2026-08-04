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

[Token(Token = "0x200073F")]
internal class PhysicsLayer
{
	[Token(Token = "0x40022C0")]
	[FieldOffset(Offset = "0x0")]
	public static int UI;

	[Token(Token = "0x40022C1")]
	[FieldOffset(Offset = "0x4")]
	public static int NoCollision;

	[Token(Token = "0x40022C2")]
	[FieldOffset(Offset = "0x8")]
	public static int Hitbox;

	[Token(Token = "0x40022C3")]
	[FieldOffset(Offset = "0xC")]
	public static int Human;

	[Token(Token = "0x40022C4")]
	[FieldOffset(Offset = "0x10")]
	public static int TitanMovebox;

	[Token(Token = "0x40022C5")]
	[FieldOffset(Offset = "0x14")]
	public static int TitanPushbox;

	[Token(Token = "0x40022C6")]
	[FieldOffset(Offset = "0x18")]
	public static int Hurtbox;

	[Token(Token = "0x40022C7")]
	[FieldOffset(Offset = "0x1C")]
	public static int Projectile;

	[Token(Token = "0x40022C8")]
	[FieldOffset(Offset = "0x20")]
	public static int ProjectileDetection;

	[Token(Token = "0x40022C9")]
	[FieldOffset(Offset = "0x24")]
	public static int CharacterDetection;

	[Token(Token = "0x40022CA")]
	[FieldOffset(Offset = "0x28")]
	public static int NPC;

	[Token(Token = "0x40022CB")]
	[FieldOffset(Offset = "0x2C")]
	public static int MapObjectMapObjects;

	[Token(Token = "0x40022CC")]
	[FieldOffset(Offset = "0x30")]
	public static int MapObjectProjectiles;

	[Token(Token = "0x40022CD")]
	[FieldOffset(Offset = "0x34")]
	public static int MapObjectCharacters;

	[Token(Token = "0x40022CE")]
	[FieldOffset(Offset = "0x38")]
	public static int MapObjectEntities;

	[Token(Token = "0x40022CF")]
	[FieldOffset(Offset = "0x3C")]
	public static int MapObjectAll;

	[Token(Token = "0x40022D0")]
	[FieldOffset(Offset = "0x40")]
	public static int MapEditorObject;

	[Token(Token = "0x40022D1")]
	[FieldOffset(Offset = "0x44")]
	public static int MapEditorGizmo;

	[Token(Token = "0x40022D2")]
	[FieldOffset(Offset = "0x48")]
	public static int MinimapIcon;

	[Token(Token = "0x40022D3")]
	[FieldOffset(Offset = "0x4C")]
	public static int Background;

	[Token(Token = "0x40022D4")]
	[FieldOffset(Offset = "0x50")]
	public static int MapObjectTitans;

	[Token(Token = "0x40022D5")]
	[FieldOffset(Offset = "0x54")]
	public static int MapObjectHumans;

	[Token(Token = "0x40022D6")]
	[FieldOffset(Offset = "0x58")]
	private static Dictionary<int, LayerMask> _masks;

	[Token(Token = "0x60046EE")]
	[Address(RVA = "0x4392DC0", Offset = "0x4392DC0", VA = "0x4392DC0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60046EF")]
	[Address(RVA = "0x43937F0", Offset = "0x43937F0", VA = "0x43937F0")]
	public static LayerMask GetMask(params int[] layers)
	{
		return default(LayerMask);
	}

	[Token(Token = "0x60046F0")]
	[Address(RVA = "0x4393890", Offset = "0x4393890", VA = "0x4393890")]
	public static LayerMask CopyMask(int originLayer)
	{
		return default(LayerMask);
	}

	[Token(Token = "0x60046F1")]
	[Address(RVA = "0x43936A0", Offset = "0x43936A0", VA = "0x43936A0")]
	private static void SetLayerCollisions(int layer, int[] others)
	{
	}

	[Token(Token = "0x60046F2")]
	[Address(RVA = "0x4393930", Offset = "0x4393930", VA = "0x4393930")]
	public PhysicsLayer()
	{
	}
}
