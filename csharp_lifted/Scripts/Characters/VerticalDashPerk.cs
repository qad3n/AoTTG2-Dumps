// ==================== AoTTG2 cross-reference ====================
// Type: Characters.VerticalDashPerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/VerticalDashPerk.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/VerticalDashPerk.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Assets.Scripts.Characters.Human.Perks;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006CC")]
internal class VerticalDashPerk : DivisivePowerPerk
{
	[Token(Token = "0x17000B59")]
	public override string Name
	{
		[Token(Token = "0x6004220")]
		[Address(RVA = "0x5AFB530", Offset = "0x5AFA530", VA = "0x5AFB530", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Characters/VerticalDashPerk.c (Characters.VerticalDashPerk$$get_Name): clean
			return "VerticalDash";
		}
	}

	[Token(Token = "0x17000B5A")]
	public override int MaxPoints
	{
		[Token(Token = "0x6004221")]
		[Address(RVA = "0x5AFB560", Offset = "0x5AFA560", VA = "0x5AFB560", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Characters/VerticalDashPerk.c (Characters.VerticalDashPerk$$get_MaxPoints): clean
			return 1;
		}
	}

	[Token(Token = "0x17000B5B")]
	protected override float MaxPower
	{
		[Token(Token = "0x6004222")]
		[Address(RVA = "0x5AFB570", Offset = "0x5AFA570", VA = "0x5AFB570", Slot = "9")]
		get
		{
			// Lifted from source/cpp/Characters/VerticalDashPerk.c (Characters.VerticalDashPerk$$get_MaxPower): clean
			return 100.0;
		}
	}

	[Token(Token = "0x17000B5C")]
	protected override float MinPower
	{
		[Token(Token = "0x6004223")]
		[Address(RVA = "0x5AFB580", Offset = "0x5AFA580", VA = "0x5AFB580", Slot = "10")]
		get
		{
			// Lifted from source/cpp/Characters/VerticalDashPerk.c (Characters.VerticalDashPerk$$get_MinPower): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000B5D")]
	protected override float PowerUsageDivisor
	{
		[Token(Token = "0x6004224")]
		[Address(RVA = "0x5AFB590", Offset = "0x5AFA590", VA = "0x5AFB590", Slot = "11")]
		get
		{
			// Lifted from source/cpp/Characters/VerticalDashPerk.c (Characters.VerticalDashPerk$$get_PowerUsageDivisor): clean
			return 3.0;
		}
	}

	[Token(Token = "0x17000B5E")]
	protected override float LinearRecoveryRate
	{
		[Token(Token = "0x6004225")]
		[Address(RVA = "0x5AFB5A0", Offset = "0x5AFA5A0", VA = "0x5AFB5A0", Slot = "12")]
		get
		{
			// Lifted from source/cpp/Characters/VerticalDashPerk.c (Characters.VerticalDashPerk$$get_LinearRecoveryRate): clean
			return 25.0;
		}
	}

	[Token(Token = "0x6004226")]
	[Address(RVA = "0x5AF9790", Offset = "0x5AF8790", VA = "0x5AF9790")]
	public VerticalDashPerk()
	{
		// Lifted from source/cpp/Characters/VerticalDashPerk.c (Characters.VerticalDashPerk$$.ctor): clean
		base();
		return;
	}
}
