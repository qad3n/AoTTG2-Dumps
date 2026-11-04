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

[Token(Token = "0x2000667")]
internal class FlareItem : SimpleUseable
{
	[Token(Token = "0x4001E37")]
	[FieldOffset(Offset = "0x38")]
	private Color _color;

	[Token(Token = "0x4001E38")]
	[FieldOffset(Offset = "0x48")]
	private float Speed;

	[Token(Token = "0x4001E39")]
	[FieldOffset(Offset = "0x4C")]
	private Vector3 Gravity;

	[Token(Token = "0x6003F6E")]
	[Address(RVA = "0x2146ED0", Offset = "0x21454D0", VA = "0x182146ED0")]
	public FlareItem(BaseCharacter owner, string name, Color color, float cooldown)
	{
	}

	[Token(Token = "0x6003F6F")]
	[Address(RVA = "0x2146A20", Offset = "0x2145020", VA = "0x182146A20", Slot = "9")]
	protected override void Activate()
	{
	}
}
