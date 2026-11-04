// ==================== AoTTG2 cross-reference ====================
// Type: Characters.EscapeSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/EscapeSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/EscapeSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200067E")]
internal class EscapeSpecial : RechargeableUseable
{
	[Token(Token = "0x17000B27")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004022")]
		[Address(RVA = "0x216A4B0", Offset = "0x2168AB0", VA = "0x18216A4B0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004023")]
	[Address(RVA = "0x216E430", Offset = "0x216CA30", VA = "0x18216E430")]
	public EscapeSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004024")]
	[Address(RVA = "0x216C980", Offset = "0x216AF80", VA = "0x18216C980", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6004025")]
	[Address(RVA = "0x216C6D0", Offset = "0x216ACD0", VA = "0x18216C6D0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004026")]
	[Address(RVA = "0x216CA40", Offset = "0x216B040", VA = "0x18216CA40", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
