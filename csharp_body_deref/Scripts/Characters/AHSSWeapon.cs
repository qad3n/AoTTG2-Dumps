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

[Token(Token = "0x20006E9")]
internal class AHSSWeapon : AmmoWeapon
{
	[Token(Token = "0x400207C")]
	[FieldOffset(Offset = "0x4C")]
	protected Vector3 _target;

	[Token(Token = "0x60042F6")]
	[Address(RVA = "0x5B0FEC0", Offset = "0x5B0EEC0", VA = "0x5B0FEC0")]
	public AHSSWeapon(BaseCharacter owner, int ammo, int ammoPerRound, float cooldown)
	{
	}

	[Token(Token = "0x60042F7")]
	[Address(RVA = "0x5B0FF80", Offset = "0x5B0EF80", VA = "0x5B0FF80", Slot = "15")]
	protected override float GetActiveTime()
	{
		return default(float);
	}

	[Token(Token = "0x60042F8")]
	[Address(RVA = "0x5B10070", Offset = "0x5B0F070", VA = "0x5B10070", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042F9")]
	[Address(RVA = "0x5B100F0", Offset = "0x5B0F0F0", VA = "0x5B100F0", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x60042FA")]
	[Address(RVA = "0x5B10C60", Offset = "0x5B0FC60", VA = "0x5B10C60")]
	public void HandleUI()
	{
	}
}
