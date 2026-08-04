// ==================== AoTTG2 cross-reference ====================
// Type: Characters.FlareItem
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/FlareItem.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Items/FlareItem.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200050D")]
internal class FlareItem : SimpleUseable
{
	[Token(Token = "0x40017AB")]
	[FieldOffset(Offset = "0x38")]
	private Color _color;

	[Token(Token = "0x40017AC")]
	[FieldOffset(Offset = "0x48")]
	private float Speed;

	[Token(Token = "0x40017AD")]
	[FieldOffset(Offset = "0x4C")]
	private Vector3 Gravity;

	[Token(Token = "0x6003541")]
	[Address(RVA = "0x41E6520", Offset = "0x41E6520", VA = "0x41E6520")]
	public FlareItem(BaseCharacter owner, string name, Color color, float cooldown)
	{
	}

	[Token(Token = "0x6003542")]
	[Address(RVA = "0x41E65E0", Offset = "0x41E65E0", VA = "0x41E65E0", Slot = "9")]
	protected override void Activate()
	{
	}
}
