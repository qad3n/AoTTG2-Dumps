// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SmokeBombSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SmokeBombSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SmokeBombSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000683")]
internal class SmokeBombSpecial : SimpleUseable
{
	[Token(Token = "0x4001EBB")]
	[FieldOffset(Offset = "0x38")]
	private float Speed;

	[Token(Token = "0x4001EBC")]
	[FieldOffset(Offset = "0x3C")]
	private Vector3 Gravity;

	[Token(Token = "0x600403A")]
	[Address(RVA = "0x21762E0", Offset = "0x21748E0", VA = "0x1821762E0")]
	public SmokeBombSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600403B")]
	[Address(RVA = "0x2175EE0", Offset = "0x21744E0", VA = "0x182175EE0", Slot = "9")]
	protected override void Activate()
	{
	}
}
