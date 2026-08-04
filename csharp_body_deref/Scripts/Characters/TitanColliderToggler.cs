// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanColliderToggler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanColliderToggler.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanColliderToggler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200055C")]
internal class TitanColliderToggler : MonoBehaviour
{
	[Token(Token = "0x4001A53")]
	[FieldOffset(Offset = "0x20")]
	public BaseTitan Owner;

	[Token(Token = "0x4001A54")]
	[FieldOffset(Offset = "0x28")]
	public HashSet<BaseCharacter> NearbyCharacters;

	[Token(Token = "0x4001A55")]
	[FieldOffset(Offset = "0x30")]
	public TitanProjectileDetection _projectile;

	[Token(Token = "0x4001A56")]
	[FieldOffset(Offset = "0x38")]
	protected bool _look;

	[Token(Token = "0x4001A57")]
	[FieldOffset(Offset = "0x39")]
	protected bool _enabled;

	[Token(Token = "0x60037E1")]
	[Address(RVA = "0x4220BC0", Offset = "0x4220BC0", VA = "0x4220BC0")]
	public static TitanColliderToggler Create(BaseTitan owner)
	{
		return null;
	}

	[Token(Token = "0x60037E2")]
	[Address(RVA = "0x42210A0", Offset = "0x42210A0", VA = "0x42210A0")]
	public void RegisterLook()
	{
	}

	[Token(Token = "0x60037E3")]
	[Address(RVA = "0x42210B0", Offset = "0x42210B0", VA = "0x42210B0")]
	public void SetNearby(BaseCharacter character, bool nearby)
	{
	}

	[Token(Token = "0x60037E4")]
	[Address(RVA = "0x4221160", Offset = "0x4221160", VA = "0x4221160")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x60037E5")]
	[Address(RVA = "0x4220EB0", Offset = "0x4220EB0", VA = "0x4220EB0")]
	protected void SetColliders(bool enable)
	{
	}

	[Token(Token = "0x60037E6")]
	[Address(RVA = "0x4221250", Offset = "0x4221250", VA = "0x4221250")]
	public TitanColliderToggler()
	{
	}
}
