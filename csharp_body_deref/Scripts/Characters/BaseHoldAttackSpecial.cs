// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseHoldAttackSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseHoldAttackSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseHoldAttackSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000676")]
internal class BaseHoldAttackSpecial : HoldUseable
{
	[Token(Token = "0x4001EA8")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x4001EA9")]
	[FieldOffset(Offset = "0x48")]
	protected bool _keyIsReset;

	[Token(Token = "0x17000B1A")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6003FF9")]
		[Address(RVA = "0x20A7610", Offset = "0x20A5C10", VA = "0x1820A7610", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003FFA")]
	[Address(RVA = "0x2167160", Offset = "0x2165760", VA = "0x182167160")]
	public BaseHoldAttackSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6003FFB")]
	[Address(RVA = "0x21670A0", Offset = "0x21656A0", VA = "0x1821670A0", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x6003FFC")]
	[Address(RVA = "0x2167090", Offset = "0x2165690", VA = "0x182167090", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6003FFD")]
	[Address(RVA = "0x2166E10", Offset = "0x2165410", VA = "0x182166E10", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
