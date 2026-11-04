// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SmellSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SmellSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SmellSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000682")]
internal class SmellSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001EB9")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x4001EBA")]
	[FieldOffset(Offset = "0x4C")]
	protected float Delay;

	[Token(Token = "0x17000B2B")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004035")]
		[Address(RVA = "0x2175ED0", Offset = "0x21744D0", VA = "0x182175ED0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B2C")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x6004036")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004037")]
	[Address(RVA = "0x2175EA0", Offset = "0x21744A0", VA = "0x182175EA0")]
	public SmellSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004038")]
	[Address(RVA = "0x2175AE0", Offset = "0x21740E0", VA = "0x182175AE0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004039")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
