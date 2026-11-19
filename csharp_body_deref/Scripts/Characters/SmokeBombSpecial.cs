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

[Token(Token = "0x20006E2")]
internal class SmokeBombSpecial : SimpleUseable
{
	[Token(Token = "0x4002069")]
	[FieldOffset(Offset = "0x38")]
	private float Speed;

	[Token(Token = "0x400206A")]
	[FieldOffset(Offset = "0x3C")]
	private Vector3 Gravity;

	[Token(Token = "0x60042D2")]
	[Address(RVA = "0x5B0E0A0", Offset = "0x5B0D0A0", VA = "0x5B0E0A0")]
	public SmokeBombSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042D3")]
	[Address(RVA = "0x5B0E120", Offset = "0x5B0D120", VA = "0x5B0E120", Slot = "9")]
	protected override void Activate()
	{
	}
}
