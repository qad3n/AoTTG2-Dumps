// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ConfuseSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ConfuseSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/ConfuseSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D9")]
internal class ConfuseSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x400205F")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000B6B")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042A7")]
		[Address(RVA = "0x5B0A970", Offset = "0x5B09970", VA = "0x5B0A970", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B6C")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60042A8")]
		[Address(RVA = "0x5B0A980", Offset = "0x5B09980", VA = "0x5B0A980", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60042A9")]
	[Address(RVA = "0x5B0A990", Offset = "0x5B09990", VA = "0x5B0A990")]
	public ConfuseSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042AA")]
	[Address(RVA = "0x5B0A9B0", Offset = "0x5B099B0", VA = "0x5B0A9B0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042AB")]
	[Address(RVA = "0x5B0AD30", Offset = "0x5B09D30", VA = "0x5B0AD30", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
