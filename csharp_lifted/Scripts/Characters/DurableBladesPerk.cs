// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DurableBladesPerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DurableBladesPerk.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/DurableBladesPerk.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006C9")]
internal class DurableBladesPerk : BasePerk
{
	[Token(Token = "0x17000B4F")]
	public override string Name
	{
		[Token(Token = "0x6004212")]
		[Address(RVA = "0x5AFB3D0", Offset = "0x5AFA3D0", VA = "0x5AFB3D0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Characters/DurableBladesPerk.c (Characters.DurableBladesPerk$$get_Name): clean
			return "DurableBlades";
		}
	}

	[Token(Token = "0x17000B50")]
	public override int MaxPoints
	{
		[Token(Token = "0x6004213")]
		[Address(RVA = "0x5AFB400", Offset = "0x5AFA400", VA = "0x5AFB400", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Characters/DurableBladesPerk.c (Characters.DurableBladesPerk$$get_MaxPoints): clean
			return 1;
		}
	}

	[Token(Token = "0x6004214")]
	[Address(RVA = "0x5AF9670", Offset = "0x5AF8670", VA = "0x5AF9670")]
	public DurableBladesPerk()
	{
		// Lifted from source/cpp/Characters/DurableBladesPerk.c (Characters.DurableBladesPerk$$.ctor): clean
		Dictionary<string, int> __this_00;

		__this_00 = new Dictionary<string, int>();
		this.Requirements = __this_00;
		base();
		this.SetupRequirements();
		return;
	}
}
