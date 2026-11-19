// ==================== AoTTG2 cross-reference ====================
// Type: Characters.PotatoSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/PotatoSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/PotatoSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006DF")]
internal class PotatoSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4002063")]
	[FieldOffset(Offset = "0x48")]
	private float _oldSpeed;

	[Token(Token = "0x4002064")]
	[FieldOffset(Offset = "0x4C")]
	private float _currentSpeed;

	[Token(Token = "0x17000B72")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042C3")]
		[Address(RVA = "0x5B0D800", Offset = "0x5B0C800", VA = "0x5B0D800", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B73")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60042C4")]
		[Address(RVA = "0x5B0D810", Offset = "0x5B0C810", VA = "0x5B0D810", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60042C5")]
	[Address(RVA = "0x5B0D820", Offset = "0x5B0C820", VA = "0x5B0D820")]
	public PotatoSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042C6")]
	[Address(RVA = "0x5B0D840", Offset = "0x5B0C840", VA = "0x5B0D840", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042C7")]
	[Address(RVA = "0x5B0D900", Offset = "0x5B0C900", VA = "0x5B0D900", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60042C8")]
	[Address(RVA = "0x5B0D930", Offset = "0x5B0C930", VA = "0x5B0D930", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
