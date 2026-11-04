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

[Token(Token = "0x20008C4")]
internal class PhysicsLayer
{
	[Token(Token = "0x4002B80")]
	[FieldOffset(Offset = "0x0")]
	public static int UI;

	[Token(Token = "0x4002B81")]
	[FieldOffset(Offset = "0x4")]
	public static int NoCollision;

	[Token(Token = "0x4002B82")]
	[FieldOffset(Offset = "0x8")]
	public static int Hitbox;

	[Token(Token = "0x4002B83")]
	[FieldOffset(Offset = "0xC")]
	public static int Human;

	[Token(Token = "0x4002B84")]
	[FieldOffset(Offset = "0x10")]
	public static int TitanMovebox;

	[Token(Token = "0x4002B85")]
	[FieldOffset(Offset = "0x14")]
	public static int TitanPushbox;

	[Token(Token = "0x4002B86")]
	[FieldOffset(Offset = "0x18")]
	public static int Hurtbox;

	[Token(Token = "0x4002B87")]
	[FieldOffset(Offset = "0x1C")]
	public static int Projectile;

	[Token(Token = "0x4002B88")]
	[FieldOffset(Offset = "0x20")]
	public static int ProjectileDetection;

	[Token(Token = "0x4002B89")]
	[FieldOffset(Offset = "0x24")]
	public static int CharacterDetection;

	[Token(Token = "0x4002B8A")]
	[FieldOffset(Offset = "0x28")]
	public static int NPC;

	[Token(Token = "0x4002B8B")]
	[FieldOffset(Offset = "0x2C")]
	public static int MapObjectMapObjects;

	[Token(Token = "0x4002B8C")]
	[FieldOffset(Offset = "0x30")]
	public static int MapObjectProjectiles;

	[Token(Token = "0x4002B8D")]
	[FieldOffset(Offset = "0x34")]
	public static int MapObjectCharacters;

	[Token(Token = "0x4002B8E")]
	[FieldOffset(Offset = "0x38")]
	public static int MapObjectEntities;

	[Token(Token = "0x4002B8F")]
	[FieldOffset(Offset = "0x3C")]
	public static int MapObjectAll;

	[Token(Token = "0x4002B90")]
	[FieldOffset(Offset = "0x40")]
	public static int MapEditorObject;

	[Token(Token = "0x4002B91")]
	[FieldOffset(Offset = "0x44")]
	public static int MapEditorGizmo;

	[Token(Token = "0x4002B92")]
	[FieldOffset(Offset = "0x48")]
	public static int MinimapIcon;

	[Token(Token = "0x4002B93")]
	[FieldOffset(Offset = "0x4C")]
	public static int Background;

	[Token(Token = "0x4002B94")]
	[FieldOffset(Offset = "0x50")]
	public static int MapObjectTitans;

	[Token(Token = "0x4002B95")]
	[FieldOffset(Offset = "0x54")]
	public static int MapObjectHumans;

	[Token(Token = "0x4002B96")]
	[FieldOffset(Offset = "0x58")]
	private static Dictionary<int, LayerMask> _masks;

	[Token(Token = "0x600534A")]
	[Address(RVA = "0x233BCD0", Offset = "0x233A2D0", VA = "0x18233BCD0")]
	public static void Init()
	{
	}

	[Token(Token = "0x600534B")]
	[Address(RVA = "0x233BC40", Offset = "0x233A240", VA = "0x18233BC40")]
	public static LayerMask GetMask(params int[] layers)
	{
		return default(LayerMask);
	}

	[Token(Token = "0x600534C")]
	[Address(RVA = "0x233BBC0", Offset = "0x233A1C0", VA = "0x18233BBC0")]
	public static LayerMask CopyMask(int originLayer)
	{
		return default(LayerMask);
	}

	[Token(Token = "0x600534D")]
	[Address(RVA = "0x233CB30", Offset = "0x233B130", VA = "0x18233CB30")]
	private static void SetLayerCollisions(int layer, int[] others)
	{
	}

	[Token(Token = "0x600534E")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public PhysicsLayer()
	{
	}
}
