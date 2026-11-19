// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CombatDashSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/CombatDashSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/CombatDashSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D8")]
internal class CombatDashSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x400205E")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000B69")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042A2")]
		[Address(RVA = "0x5B0A6B0", Offset = "0x5B096B0", VA = "0x5B0A6B0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B6A")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60042A3")]
		[Address(RVA = "0x5B0A6C0", Offset = "0x5B096C0", VA = "0x5B0A6C0", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60042A4")]
	[Address(RVA = "0x5B0A6D0", Offset = "0x5B096D0", VA = "0x5B0A6D0")]
	public CombatDashSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042A5")]
	[Address(RVA = "0x5B0A6F0", Offset = "0x5B096F0", VA = "0x5B0A6F0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042A6")]
	[Address(RVA = "0x5B0A960", Offset = "0x5B09960", VA = "0x5B0A960", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
