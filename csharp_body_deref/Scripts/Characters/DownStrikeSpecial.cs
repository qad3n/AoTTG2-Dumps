// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DownStrikeSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DownStrikeSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DownStrikeSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006DC")]
internal class DownStrikeSpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x4002062")]
	[FieldOffset(Offset = "0x49")]
	protected bool _needActivate;

	[Token(Token = "0x60042B6")]
	[Address(RVA = "0x5B0B520", Offset = "0x5B0A520", VA = "0x5B0B520")]
	public DownStrikeSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042B7")]
	[Address(RVA = "0x5B0B540", Offset = "0x5B0A540", VA = "0x5B0B540", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042B8")]
	[Address(RVA = "0x5B0B630", Offset = "0x5B0A630", VA = "0x5B0B630", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60042B9")]
	[Address(RVA = "0x5B0B920", Offset = "0x5B0A920", VA = "0x5B0B920", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}
}
