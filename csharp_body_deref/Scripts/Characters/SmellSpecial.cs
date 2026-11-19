// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SmellSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SmellSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SmellSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006E1")]
internal class SmellSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4002067")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x4002068")]
	[FieldOffset(Offset = "0x4C")]
	protected float Delay;

	[Token(Token = "0x17000B75")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042CD")]
		[Address(RVA = "0x5B0DC50", Offset = "0x5B0CC50", VA = "0x5B0DC50", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B76")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60042CE")]
		[Address(RVA = "0x5B0DC60", Offset = "0x5B0CC60", VA = "0x5B0DC60", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60042CF")]
	[Address(RVA = "0x5B0DC70", Offset = "0x5B0CC70", VA = "0x5B0DC70")]
	public SmellSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042D0")]
	[Address(RVA = "0x5B0DC90", Offset = "0x5B0CC90", VA = "0x5B0DC90", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042D1")]
	[Address(RVA = "0x5B0E090", Offset = "0x5B0D090", VA = "0x5B0E090", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
