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

[Token(Token = "0x200068A")]
internal class AHSSWeapon : AmmoWeapon
{
	[Token(Token = "0x4001ECE")]
	[FieldOffset(Offset = "0x50")]
	protected Vector3 _target;

	[Token(Token = "0x600405E")]
	[Address(RVA = "0x21633E0", Offset = "0x21619E0", VA = "0x1821633E0")]
	public AHSSWeapon(BaseCharacter owner, int ammo, int ammoPerRound, float cooldown)
	{
	}

	[Token(Token = "0x600405F")]
	[Address(RVA = "0x2163250", Offset = "0x2161850", VA = "0x182163250", Slot = "15")]
	protected override float GetActiveTime()
	{
		return default(float);
	}

	[Token(Token = "0x6004060")]
	[Address(RVA = "0x21625D0", Offset = "0x2160BD0", VA = "0x1821625D0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004061")]
	[Address(RVA = "0x2162670", Offset = "0x2160C70", VA = "0x182162670", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x6004062")]
	[Address(RVA = "0x2163310", Offset = "0x2161910", VA = "0x182163310")]
	public void HandleUI()
	{
	}
}
