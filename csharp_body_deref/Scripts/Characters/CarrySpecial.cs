// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CarrySpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/CarrySpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/CarrySpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200051E")]
internal class CarrySpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x4001810")]
	public const float DefaultCarryDistance = 25f;

	[Token(Token = "0x4001811")]
	public const float DefaultGroundedCarryDistance = 10f;

	[Token(Token = "0x4001812")]
	[FieldOffset(Offset = "0x49")]
	protected bool _needActivate;

	[Token(Token = "0x170009E8")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60035C5")]
		[Address(RVA = "0x41F3730", Offset = "0x41F3730", VA = "0x41F3730", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009E9")]
	protected float CarryDistance
	{
		[Token(Token = "0x60035C6")]
		[Address(RVA = "0x41F3740", Offset = "0x41F3740", VA = "0x41F3740")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009EA")]
	protected float GroundedCarryDistance
	{
		[Token(Token = "0x60035C7")]
		[Address(RVA = "0x41F3750", Offset = "0x41F3750", VA = "0x41F3750")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60035C8")]
	[Address(RVA = "0x41E42D0", Offset = "0x41E42D0", VA = "0x41E42D0")]
	public CarrySpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035C9")]
	[Address(RVA = "0x41F3760", Offset = "0x41F3760", VA = "0x41F3760", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60035CA")]
	[Address(RVA = "0x41F3830", Offset = "0x41F3830", VA = "0x41F3830", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60035CB")]
	[Address(RVA = "0x41F40A0", Offset = "0x41F40A0", VA = "0x41F40A0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
