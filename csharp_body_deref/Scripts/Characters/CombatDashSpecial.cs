// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CombatDashSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/CombatDashSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/CombatDashSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200051F")]
internal class CombatDashSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001813")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x170009EB")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60035CC")]
		[Address(RVA = "0x41F4370", Offset = "0x41F4370", VA = "0x41F4370", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009EC")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60035CD")]
		[Address(RVA = "0x41F4380", Offset = "0x41F4380", VA = "0x41F4380", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60035CE")]
	[Address(RVA = "0x41F4390", Offset = "0x41F4390", VA = "0x41F4390")]
	public CombatDashSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035CF")]
	[Address(RVA = "0x41F43B0", Offset = "0x41F43B0", VA = "0x41F43B0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60035D0")]
	[Address(RVA = "0x41F45D0", Offset = "0x41F45D0", VA = "0x41F45D0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
