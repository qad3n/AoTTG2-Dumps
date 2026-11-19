// ==================== AoTTG2 cross-reference ====================
// Type: Characters.OmniDashPerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/OmniDashPerk.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/OmniDashPerk.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Assets.Scripts.Characters.Human.Perks;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006CA")]
internal class OmniDashPerk : DivisivePowerPerk
{
	[Token(Token = "0x17000B51")]
	public override string Name
	{
		[Token(Token = "0x6004215")]
		[Address(RVA = "0x5AFB410", Offset = "0x5AFA410", VA = "0x5AFB410", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Characters/OmniDashPerk.c (Characters.OmniDashPerk$$get_Name): clean
			return "OmniDash";
		}
	}

	[Token(Token = "0x17000B52")]
	public override int MaxPoints
	{
		[Token(Token = "0x6004216")]
		[Address(RVA = "0x5AFB440", Offset = "0x5AFA440", VA = "0x5AFB440", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Characters/OmniDashPerk.c (Characters.OmniDashPerk$$get_MaxPoints): clean
			return 1;
		}
	}

	[Token(Token = "0x17000B53")]
	protected override float MaxPower
	{
		[Token(Token = "0x6004217")]
		[Address(RVA = "0x5AFB450", Offset = "0x5AFA450", VA = "0x5AFB450", Slot = "9")]
		get
		{
			// Lifted from source/cpp/Characters/OmniDashPerk.c (Characters.OmniDashPerk$$get_MaxPower): clean
			return 100.0;
		}
	}

	[Token(Token = "0x17000B54")]
	protected override float MinPower
	{
		[Token(Token = "0x6004218")]
		[Address(RVA = "0x5AFB460", Offset = "0x5AFA460", VA = "0x5AFB460", Slot = "10")]
		get
		{
			// Lifted from source/cpp/Characters/OmniDashPerk.c (Characters.OmniDashPerk$$get_MinPower): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000B55")]
	protected override float PowerUsageDivisor
	{
		[Token(Token = "0x6004219")]
		[Address(RVA = "0x5AFB470", Offset = "0x5AFA470", VA = "0x5AFB470", Slot = "11")]
		get
		{
			// Lifted from source/cpp/Characters/OmniDashPerk.c (Characters.OmniDashPerk$$get_PowerUsageDivisor): clean
			return 2.0;
		}
	}

	[Token(Token = "0x17000B56")]
	protected override float LinearRecoveryRate
	{
		[Token(Token = "0x600421A")]
		[Address(RVA = "0x5AFB480", Offset = "0x5AFA480", VA = "0x5AFB480", Slot = "12")]
		get
		{
			// Lifted from source/cpp/Characters/OmniDashPerk.c (Characters.OmniDashPerk$$get_LinearRecoveryRate): clean
			return 25.0;
		}
	}

	[Token(Token = "0x600421B")]
	[Address(RVA = "0x5AFB490", Offset = "0x5AFA490", VA = "0x5AFB490", Slot = "6")]
	protected override void SetupRequirements()
	{
		// Lifted from source/cpp/Characters/OmniDashPerk.c (Characters.OmniDashPerk$$SetupRequirements): clean
		Dictionary<object, int> __this_00;

		__this_00 = (Dictionary<object, int>)this.Requirements;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Add((Il2CppObject *)"VerticalDash", 1);
		return;
	}

	[Token(Token = "0x600421C")]
	[Address(RVA = "0x5AF97A0", Offset = "0x5AF87A0", VA = "0x5AF97A0")]
	public OmniDashPerk()
	{
		// Lifted from source/cpp/Characters/OmniDashPerk.c (Characters.OmniDashPerk$$.ctor): clean
		base();
		return;
	}
}
