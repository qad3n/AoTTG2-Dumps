// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DistractSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DistractSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DistractSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006DB")]
internal class DistractSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4002061")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000B6F")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042B1")]
		[Address(RVA = "0x5B0B130", Offset = "0x5B0A130", VA = "0x5B0B130", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B70")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60042B2")]
		[Address(RVA = "0x5B0B140", Offset = "0x5B0A140", VA = "0x5B0B140", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60042B3")]
	[Address(RVA = "0x5B0B150", Offset = "0x5B0A150", VA = "0x5B0B150")]
	public DistractSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042B4")]
	[Address(RVA = "0x5B0B170", Offset = "0x5B0A170", VA = "0x5B0B170", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042B5")]
	[Address(RVA = "0x5B0B1E0", Offset = "0x5B0A1E0", VA = "0x5B0B1E0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
