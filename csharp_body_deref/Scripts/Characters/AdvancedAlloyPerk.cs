// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AdvancedAlloyPerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AdvancedAlloyPerk.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/AdvancedAlloyPerk.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000668")]
internal class AdvancedAlloyPerk : BasePerk
{
	[Token(Token = "0x17000B01")]
	public override string Name
	{
		[Token(Token = "0x6003F70")]
		[Address(RVA = "0x21466C0", Offset = "0x2144CC0", VA = "0x1821466C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B02")]
	public override int MaxPoints
	{
		[Token(Token = "0x6003F71")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003F72")]
	[Address(RVA = "0x2146650", Offset = "0x2144C50", VA = "0x182146650", Slot = "6")]
	protected override void SetupRequirements()
	{
	}

	[Token(Token = "0x6003F73")]
	[Address(RVA = "0x21466B0", Offset = "0x2144CB0", VA = "0x1821466B0")]
	public AdvancedAlloyPerk()
	{
	}
}
