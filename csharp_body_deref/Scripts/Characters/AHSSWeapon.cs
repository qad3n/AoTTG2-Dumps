// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AHSSWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AHSSWeapon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/AHSSWeapon.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000530")]
internal class AHSSWeapon : AmmoWeapon
{
	[Token(Token = "0x4001831")]
	[FieldOffset(Offset = "0x4C")]
	protected Vector3 _target;

	[Token(Token = "0x6003620")]
	[Address(RVA = "0x41F98A0", Offset = "0x41F98A0", VA = "0x41F98A0")]
	public AHSSWeapon(BaseCharacter owner, int ammo, int ammoPerRound, float cooldown)
	{
	}

	[Token(Token = "0x6003621")]
	[Address(RVA = "0x41F9960", Offset = "0x41F9960", VA = "0x41F9960", Slot = "15")]
	protected override float GetActiveTime()
	{
		return default(float);
	}

	[Token(Token = "0x6003622")]
	[Address(RVA = "0x41F9A50", Offset = "0x41F9A50", VA = "0x41F9A50", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003623")]
	[Address(RVA = "0x41F9AD0", Offset = "0x41F9AD0", VA = "0x41F9AD0", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x6003624")]
	[Address(RVA = "0x41FA5A0", Offset = "0x41FA5A0", VA = "0x41FA5A0")]
	public void HandleUI()
	{
	}
}
