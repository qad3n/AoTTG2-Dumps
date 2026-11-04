// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CarrySpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/CarrySpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/CarrySpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000678")]
internal class CarrySpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x4001EAD")]
	public const float DefaultCarryDistance = 25f;

	[Token(Token = "0x4001EAE")]
	public const float DefaultGroundedCarryDistance = 10f;

	[Token(Token = "0x4001EAF")]
	[FieldOffset(Offset = "0x50")]
	protected bool _needActivate;

	[Token(Token = "0x17000B1C")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004003")]
		[Address(RVA = "0x216A4B0", Offset = "0x2168AB0", VA = "0x18216A4B0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B1D")]
	protected float CarryDistance
	{
		[Token(Token = "0x6004004")]
		[Address(RVA = "0x2160800", Offset = "0x215EE00", VA = "0x182160800")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B1E")]
	protected float GroundedCarryDistance
	{
		[Token(Token = "0x6004005")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004006")]
	[Address(RVA = "0x216A490", Offset = "0x2168A90", VA = "0x18216A490")]
	public CarrySpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004007")]
	[Address(RVA = "0x2169AD0", Offset = "0x21680D0", VA = "0x182169AD0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004008")]
	[Address(RVA = "0x2169BB0", Offset = "0x21681B0", VA = "0x182169BB0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6004009")]
	[Address(RVA = "0x216A1F0", Offset = "0x21687F0", VA = "0x18216A1F0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
