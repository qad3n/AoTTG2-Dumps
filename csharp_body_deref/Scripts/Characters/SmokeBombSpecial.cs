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

[Token(Token = "0x2000529")]
internal class SmokeBombSpecial : SimpleUseable
{
	[Token(Token = "0x400181E")]
	[FieldOffset(Offset = "0x38")]
	private float Speed;

	[Token(Token = "0x400181F")]
	[FieldOffset(Offset = "0x3C")]
	private Vector3 Gravity;

	[Token(Token = "0x60035FC")]
	[Address(RVA = "0x41E4250", Offset = "0x41E4250", VA = "0x41E4250")]
	public SmokeBombSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035FD")]
	[Address(RVA = "0x41F7C70", Offset = "0x41F7C70", VA = "0x41F7C70", Slot = "9")]
	protected override void Activate()
	{
	}
}
