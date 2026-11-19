// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AdvancedAlloyPerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AdvancedAlloyPerk.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/AdvancedAlloyPerk.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Characters/AdvancedAlloyPerk.c (Characters.AdvancedAlloyPerk$$get_Name): clean
			return "AdvancedAlloy";
		}
	}

	[Token(Token = "0x17000B4C")]
	public override int MaxPoints
	{
		[Token(Token = "0x6004209")]
		[Address(RVA = "0x5AFAFE0", Offset = "0x5AF9FE0", VA = "0x5AFAFE0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Characters/AdvancedAlloyPerk.c (Characters.AdvancedAlloyPerk$$get_MaxPoints): clean
			return 1;
		}
	}

	[Token(Token = "0x600420A")]
	[Address(RVA = "0x5AFAFF0", Offset = "0x5AF9FF0", VA = "0x5AFAFF0", Slot = "6")]
	protected override void SetupRequirements()
	{
		// Lifted from source/cpp/Characters/AdvancedAlloyPerk.c (Characters.AdvancedAlloyPerk$$SetupRequirements): clean
		Dictionary<object, int> __this_00;

		__this_00 = (Dictionary<object, int>)this.Requirements;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Add((Il2CppObject *)"DurableBlades", 1);
		return;
	}

	[Token(Token = "0x600420B")]
	[Address(RVA = "0x5AF95E0", Offset = "0x5AF85E0", VA = "0x5AF95E0")]
	public AdvancedAlloyPerk()
	{
		// Lifted from source/cpp/Characters/AdvancedAlloyPerk.c (Characters.AdvancedAlloyPerk$$.ctor): clean
		Dictionary<string, int> __this_00;

		__this_00 = new Dictionary<string, int>();
		this.Requirements = __this_00;
		base();
		this.SetupRequirements();
		return;
	}
}
