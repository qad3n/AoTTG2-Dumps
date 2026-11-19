// ==================== AoTTG2 cross-reference ====================
// Type: Characters.RefillTimePerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/RefillTimePerk.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/RefillTimePerk.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006CB")]
internal class RefillTimePerk : BasePerk
{
	[Token(Token = "0x17000B57")]
	public override string Name
	{
		[Token(Token = "0x600421D")]
		[Address(RVA = "0x5AFB4F0", Offset = "0x5AFA4F0", VA = "0x5AFB4F0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Characters/RefillTimePerk.c (Characters.RefillTimePerk$$get_Name): clean
			return "RefillTime";
		}
	}

	[Token(Token = "0x17000B58")]
	public override int MaxPoints
	{
		[Token(Token = "0x600421E")]
		[Address(RVA = "0x5AFB520", Offset = "0x5AFA520", VA = "0x5AFB520", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Characters/RefillTimePerk.c (Characters.RefillTimePerk$$get_MaxPoints): clean
			return 2;
		}
	}

	[Token(Token = "0x600421F")]
	[Address(RVA = "0x5AF9700", Offset = "0x5AF8700", VA = "0x5AF9700")]
	public RefillTimePerk()
	{
		// Lifted from source/cpp/Characters/RefillTimePerk.c (Characters.RefillTimePerk$$.ctor): clean
		Dictionary<string, int> __this_00;

		__this_00 = new Dictionary<string, int>();
		this.Requirements = __this_00;
		base();
		this.SetupRequirements();
		return;
	}
}
