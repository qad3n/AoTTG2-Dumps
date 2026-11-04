// ==================== AoTTG2 cross-reference ====================
// Type: Characters.PotatoSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/PotatoSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/PotatoSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000680")]
internal class PotatoSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001EB5")]
	[FieldOffset(Offset = "0x48")]
	private float _oldSpeed;

	[Token(Token = "0x4001EB6")]
	[FieldOffset(Offset = "0x4C")]
	private float _currentSpeed;

	[Token(Token = "0x17000B28")]
	protected override float ActiveTime
	{
		[Token(Token = "0x600402B")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B29")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x600402C")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600402D")]
	[Address(RVA = "0x2171940", Offset = "0x216FF40", VA = "0x182171940")]
	public PotatoSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600402E")]
	[Address(RVA = "0x2171690", Offset = "0x216FC90", VA = "0x182171690", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x600402F")]
	[Address(RVA = "0x2171770", Offset = "0x216FD70", VA = "0x182171770", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6004030")]
	[Address(RVA = "0x21717A0", Offset = "0x216FDA0", VA = "0x1821717A0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
