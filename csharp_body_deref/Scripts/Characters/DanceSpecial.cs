// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DanceSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DanceSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DanceSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000521")]
internal class DanceSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001815")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x170009EF")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60035D6")]
		[Address(RVA = "0x41F49F0", Offset = "0x41F49F0", VA = "0x41F49F0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009F0")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60035D7")]
		[Address(RVA = "0x41F4A00", Offset = "0x41F4A00", VA = "0x41F4A00", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60035D8")]
	[Address(RVA = "0x41E4100", Offset = "0x41E4100", VA = "0x41E4100")]
	public DanceSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035D9")]
	[Address(RVA = "0x41F4A10", Offset = "0x41F4A10", VA = "0x41F4A10", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60035DA")]
	[Address(RVA = "0x41F4A80", Offset = "0x41F4A80", VA = "0x41F4A80", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
