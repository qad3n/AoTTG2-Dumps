// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CarrySpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/CarrySpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/CarrySpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D7")]
internal class CarrySpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x400205B")]
	public const float DefaultCarryDistance = 25f;

	[Token(Token = "0x400205C")]
	public const float DefaultGroundedCarryDistance = 10f;

	[Token(Token = "0x400205D")]
	[FieldOffset(Offset = "0x49")]
	protected bool _needActivate;

	[Token(Token = "0x17000B66")]
	protected override float ActiveTime
	{
		[Token(Token = "0x600429B")]
		[Address(RVA = "0x5B09BB0", Offset = "0x5B08BB0", VA = "0x5B09BB0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B67")]
	protected float CarryDistance
	{
		[Token(Token = "0x600429C")]
		[Address(RVA = "0x5B09BC0", Offset = "0x5B08BC0", VA = "0x5B09BC0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B68")]
	protected float GroundedCarryDistance
	{
		[Token(Token = "0x600429D")]
		[Address(RVA = "0x5B09BD0", Offset = "0x5B08BD0", VA = "0x5B09BD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600429E")]
	[Address(RVA = "0x5B09BE0", Offset = "0x5B08BE0", VA = "0x5B09BE0")]
	public CarrySpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600429F")]
	[Address(RVA = "0x5B09C00", Offset = "0x5B08C00", VA = "0x5B09C00", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042A0")]
	[Address(RVA = "0x5B09CD0", Offset = "0x5B08CD0", VA = "0x5B09CD0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60042A1")]
	[Address(RVA = "0x5B0A3E0", Offset = "0x5B093E0", VA = "0x5B0A3E0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
