// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DanceSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DanceSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DanceSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006DA")]
internal class DanceSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4002060")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000B6D")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042AC")]
		[Address(RVA = "0x5B0AD40", Offset = "0x5B09D40", VA = "0x5B0AD40", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B6E")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60042AD")]
		[Address(RVA = "0x5B0AD50", Offset = "0x5B09D50", VA = "0x5B0AD50", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60042AE")]
	[Address(RVA = "0x5B0AD60", Offset = "0x5B09D60", VA = "0x5B0AD60")]
	public DanceSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042AF")]
	[Address(RVA = "0x5B0AD80", Offset = "0x5B09D80", VA = "0x5B0AD80", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042B0")]
	[Address(RVA = "0x5B0ADF0", Offset = "0x5B09DF0", VA = "0x5B0ADF0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
