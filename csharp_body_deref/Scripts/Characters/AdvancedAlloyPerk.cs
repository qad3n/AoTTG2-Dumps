// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AdvancedAlloyPerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AdvancedAlloyPerk.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/AdvancedAlloyPerk.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006C7")]
internal class AdvancedAlloyPerk : BasePerk
{
	[Token(Token = "0x17000B4B")]
	public override string Name
	{
		[Token(Token = "0x6004208")]
		[Address(RVA = "0x5AFAFB0", Offset = "0x5AF9FB0", VA = "0x5AFAFB0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B4C")]
	public override int MaxPoints
	{
		[Token(Token = "0x6004209")]
		[Address(RVA = "0x5AFAFE0", Offset = "0x5AF9FE0", VA = "0x5AFAFE0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600420A")]
	[Address(RVA = "0x5AFAFF0", Offset = "0x5AF9FF0", VA = "0x5AFAFF0", Slot = "6")]
	protected override void SetupRequirements()
	{
	}

	[Token(Token = "0x600420B")]
	[Address(RVA = "0x5AF95E0", Offset = "0x5AF85E0", VA = "0x5AF95E0")]
	public AdvancedAlloyPerk()
	{
	}
}
