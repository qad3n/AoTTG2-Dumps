// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseHoldAttackSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseHoldAttackSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseHoldAttackSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200051C")]
internal class BaseHoldAttackSpecial : HoldUseable
{
	[Token(Token = "0x400180B")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x400180C")]
	[FieldOffset(Offset = "0x48")]
	protected bool _keyIsReset;

	[Token(Token = "0x170009E6")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60035BB")]
		[Address(RVA = "0x41F2C10", Offset = "0x41F2C10", VA = "0x41F2C10", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60035BC")]
	[Address(RVA = "0x41F2C20", Offset = "0x41F2C20", VA = "0x41F2C20")]
	public BaseHoldAttackSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035BD")]
	[Address(RVA = "0x41F2CD0", Offset = "0x41F2CD0", VA = "0x41F2CD0", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x60035BE")]
	[Address(RVA = "0x41F2D80", Offset = "0x41F2D80", VA = "0x41F2D80", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60035BF")]
	[Address(RVA = "0x41F2D90", Offset = "0x41F2D90", VA = "0x41F2D90", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
