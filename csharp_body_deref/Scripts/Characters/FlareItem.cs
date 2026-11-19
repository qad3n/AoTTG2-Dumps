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

[Token(Token = "0x20006C6")]
internal class FlareItem : SimpleUseable
{
	[Token(Token = "0x4001FE5")]
	[FieldOffset(Offset = "0x38")]
	private Color _color;

	[Token(Token = "0x4001FE6")]
	[FieldOffset(Offset = "0x48")]
	private float Speed;

	[Token(Token = "0x4001FE7")]
	[FieldOffset(Offset = "0x4C")]
	private Vector3 Gravity;

	[Token(Token = "0x6004206")]
	[Address(RVA = "0x5AFAA40", Offset = "0x5AF9A40", VA = "0x5AFAA40")]
	public FlareItem(BaseCharacter owner, string name, Color color, float cooldown)
	{
	}

	[Token(Token = "0x6004207")]
	[Address(RVA = "0x5AFAB10", Offset = "0x5AF9B10", VA = "0x5AFAB10", Slot = "9")]
	protected override void Activate()
	{
	}
}
