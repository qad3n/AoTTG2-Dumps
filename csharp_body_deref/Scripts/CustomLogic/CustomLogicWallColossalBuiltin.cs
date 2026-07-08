using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Characters;
using Controllers;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20002F7")]
[CompilerGenerated]
internal class CustomLogicWallColossalBuiltin : CustomLogicShifterBuiltin
{
	[Token(Token = "0x20002F8")]
	public new static class Factory
	{
		[Token(Token = "0x60019B9")]
		[Address(RVA = "0x3D3C070", Offset = "0x3D3C070", VA = "0x3D3C070")]
		public static CustomLogicWallColossalBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002F9")]
	public new static class Bindings
	{
		[Token(Token = "0x4000EFE")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60019BA")]
		[Address(RVA = "0x3D3C100", Offset = "0x3D3C100", VA = "0x3D3C100")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60019BB")]
		[Address(RVA = "0x3D3CA10", Offset = "0x3D3CA10", VA = "0x3D3CA10")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__HandHealth()
		{
			return null;
		}

		[Token(Token = "0x60019BC")]
		[Address(RVA = "0x3D3CAF0", Offset = "0x3D3CAF0", VA = "0x3D3CAF0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__MaxHandHealth()
		{
			return null;
		}

		[Token(Token = "0x60019BD")]
		[Address(RVA = "0x3D3CBD0", Offset = "0x3D3CBD0", VA = "0x3D3CBD0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__LeftHandHealth()
		{
			return null;
		}

		[Token(Token = "0x60019BE")]
		[Address(RVA = "0x3D3CCB0", Offset = "0x3D3CCB0", VA = "0x3D3CCB0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__MaxLeftHandHealth()
		{
			return null;
		}

		[Token(Token = "0x60019BF")]
		[Address(RVA = "0x3D3CD90", Offset = "0x3D3CD90", VA = "0x3D3CD90")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RightHandHealth()
		{
			return null;
		}

		[Token(Token = "0x60019C0")]
		[Address(RVA = "0x3D3CE70", Offset = "0x3D3CE70", VA = "0x3D3CE70")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__MaxRightHandHealth()
		{
			return null;
		}

		[Token(Token = "0x60019C1")]
		[Address(RVA = "0x3D3CF50", Offset = "0x3D3CF50", VA = "0x3D3CF50")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__CanDamageLeftHand()
		{
			return null;
		}

		[Token(Token = "0x60019C2")]
		[Address(RVA = "0x3D3D030", Offset = "0x3D3D030", VA = "0x3D3D030")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__CanDamageRightHand()
		{
			return null;
		}

		[Token(Token = "0x60019C3")]
		[Address(RVA = "0x3D3D110", Offset = "0x3D3D110", VA = "0x3D3D110")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__LeftHandState()
		{
			return null;
		}

		[Token(Token = "0x60019C4")]
		[Address(RVA = "0x3D3D1B0", Offset = "0x3D3D1B0", VA = "0x3D3D1B0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RightHandState()
		{
			return null;
		}

		[Token(Token = "0x60019C5")]
		[Address(RVA = "0x3D3D250", Offset = "0x3D3D250", VA = "0x3D3D250")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__HandSeverWindow()
		{
			return null;
		}

		[Token(Token = "0x60019C6")]
		[Address(RVA = "0x3D3D330", Offset = "0x3D3D330", VA = "0x3D3D330")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__LeftHandSeverTimeLeft()
		{
			return null;
		}

		[Token(Token = "0x60019C7")]
		[Address(RVA = "0x3D3D410", Offset = "0x3D3D410", VA = "0x3D3D410")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RightHandSeverTimeLeft()
		{
			return null;
		}

		[Token(Token = "0x60019C8")]
		[Address(RVA = "0x3D3D4F0", Offset = "0x3D3D4F0", VA = "0x3D3D4F0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__StunDuration()
		{
			return null;
		}

		[Token(Token = "0x60019C9")]
		[Address(RVA = "0x3D3D5D0", Offset = "0x3D3D5D0", VA = "0x3D3D5D0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__StunTimeLeft()
		{
			return null;
		}

		[Token(Token = "0x60019CA")]
		[Address(RVA = "0x3D3D6B0", Offset = "0x3D3D6B0", VA = "0x3D3D6B0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RecoveryDuration()
		{
			return null;
		}

		[Token(Token = "0x60019CB")]
		[Address(RVA = "0x3D3D790", Offset = "0x3D3D790", VA = "0x3D3D790")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RecoveryTimeLeft()
		{
			return null;
		}

		[Token(Token = "0x60019CC")]
		[Address(RVA = "0x3D3D870", Offset = "0x3D3D870", VA = "0x3D3D870")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__StunState()
		{
			return null;
		}

		[Token(Token = "0x60019CD")]
		[Address(RVA = "0x3D3D910", Offset = "0x3D3D910", VA = "0x3D3D910")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__WallAttackCooldown()
		{
			return null;
		}

		[Token(Token = "0x60019CE")]
		[Address(RVA = "0x3D3D9F0", Offset = "0x3D3D9F0", VA = "0x3D3D9F0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__WallAttackCooldownLeft()
		{
			return null;
		}

		[Token(Token = "0x60019CF")]
		[Address(RVA = "0x3D3DAD0", Offset = "0x3D3DAD0", VA = "0x3D3DAD0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__SteamState()
		{
			return null;
		}

		[Token(Token = "0x60019D0")]
		[Address(RVA = "0x3D3DB70", Offset = "0x3D3DB70", VA = "0x3D3DB70")]
		public static CLMethodBinding<CustomLogicWallColossalBuiltin> __CreateMethodBinding__AttackSteam()
		{
			return null;
		}

		[Token(Token = "0x60019D1")]
		[Address(RVA = "0x3D3DCC0", Offset = "0x3D3DCC0", VA = "0x3D3DCC0")]
		public static CLMethodBinding<CustomLogicWallColossalBuiltin> __CreateMethodBinding__StopSteam()
		{
			return null;
		}

		[Token(Token = "0x60019D2")]
		[Address(RVA = "0x3D3DE10", Offset = "0x3D3DE10", VA = "0x3D3DE10")]
		public static CLMethodBinding<CustomLogicWallColossalBuiltin> __CreateMethodBinding__WallAttack()
		{
			return null;
		}
	}

	[Token(Token = "0x4000EFC")]
	[FieldOffset(Offset = "0x48")]
	public new readonly WallColossalShifter Shifter;

	[Token(Token = "0x4000EFD")]
	[FieldOffset(Offset = "0x50")]
	public new readonly WallColossalAIController Controller;

	[Token(Token = "0x17000375")]
	public int HandHealth
	{
		[Token(Token = "0x600198C")]
		[Address(RVA = "0x3D3B780", Offset = "0x3D3B780", VA = "0x3D3B780")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600198D")]
		[Address(RVA = "0x3D3B7B0", Offset = "0x3D3B7B0", VA = "0x3D3B7B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000376")]
	public int MaxHandHealth
	{
		[Token(Token = "0x600198E")]
		[Address(RVA = "0x3D3B810", Offset = "0x3D3B810", VA = "0x3D3B810")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600198F")]
		[Address(RVA = "0x3D3B840", Offset = "0x3D3B840", VA = "0x3D3B840")]
		set
		{
		}
	}

	[Token(Token = "0x17000377")]
	public int LeftHandHealth
	{
		[Token(Token = "0x6001990")]
		[Address(RVA = "0x3D3B8A0", Offset = "0x3D3B8A0", VA = "0x3D3B8A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001991")]
		[Address(RVA = "0x3D3B8C0", Offset = "0x3D3B8C0", VA = "0x3D3B8C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000378")]
	public int MaxLeftHandHealth
	{
		[Token(Token = "0x6001992")]
		[Address(RVA = "0x3D3B900", Offset = "0x3D3B900", VA = "0x3D3B900")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001993")]
		[Address(RVA = "0x3D3B920", Offset = "0x3D3B920", VA = "0x3D3B920")]
		set
		{
		}
	}

	[Token(Token = "0x17000379")]
	public int RightHandHealth
	{
		[Token(Token = "0x6001994")]
		[Address(RVA = "0x3D3B960", Offset = "0x3D3B960", VA = "0x3D3B960")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001995")]
		[Address(RVA = "0x3D3B980", Offset = "0x3D3B980", VA = "0x3D3B980")]
		set
		{
		}
	}

	[Token(Token = "0x1700037A")]
	public int MaxRightHandHealth
	{
		[Token(Token = "0x6001996")]
		[Address(RVA = "0x3D3B9C0", Offset = "0x3D3B9C0", VA = "0x3D3B9C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001997")]
		[Address(RVA = "0x3D3B9E0", Offset = "0x3D3B9E0", VA = "0x3D3B9E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700037B")]
	public bool CanDamageLeftHand
	{
		[Token(Token = "0x6001998")]
		[Address(RVA = "0x3D3BA20", Offset = "0x3D3BA20", VA = "0x3D3BA20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001999")]
		[Address(RVA = "0x3D3BA40", Offset = "0x3D3BA40", VA = "0x3D3BA40")]
		set
		{
		}
	}

	[Token(Token = "0x1700037C")]
	public bool CanDamageRightHand
	{
		[Token(Token = "0x600199A")]
		[Address(RVA = "0x3D3BA80", Offset = "0x3D3BA80", VA = "0x3D3BA80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600199B")]
		[Address(RVA = "0x3D3BAA0", Offset = "0x3D3BAA0", VA = "0x3D3BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700037D")]
	public int LeftHandState
	{
		[Token(Token = "0x600199C")]
		[Address(RVA = "0x3D3BAE0", Offset = "0x3D3BAE0", VA = "0x3D3BAE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700037E")]
	public int RightHandState
	{
		[Token(Token = "0x600199D")]
		[Address(RVA = "0x3D3BB00", Offset = "0x3D3BB00", VA = "0x3D3BB00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700037F")]
	public float HandSeverWindow
	{
		[Token(Token = "0x600199E")]
		[Address(RVA = "0x3D3BB20", Offset = "0x3D3BB20", VA = "0x3D3BB20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600199F")]
		[Address(RVA = "0x3D3BB40", Offset = "0x3D3BB40", VA = "0x3D3BB40")]
		set
		{
		}
	}

	[Token(Token = "0x17000380")]
	public float LeftHandSeverTimeLeft
	{
		[Token(Token = "0x60019A0")]
		[Address(RVA = "0x3D3BB90", Offset = "0x3D3BB90", VA = "0x3D3BB90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60019A1")]
		[Address(RVA = "0x3D3BBB0", Offset = "0x3D3BBB0", VA = "0x3D3BBB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000381")]
	public float RightHandSeverTimeLeft
	{
		[Token(Token = "0x60019A2")]
		[Address(RVA = "0x3D3BC00", Offset = "0x3D3BC00", VA = "0x3D3BC00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60019A3")]
		[Address(RVA = "0x3D3BC20", Offset = "0x3D3BC20", VA = "0x3D3BC20")]
		set
		{
		}
	}

	[Token(Token = "0x17000382")]
	public float StunDuration
	{
		[Token(Token = "0x60019A4")]
		[Address(RVA = "0x3D3BC70", Offset = "0x3D3BC70", VA = "0x3D3BC70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60019A5")]
		[Address(RVA = "0x3D3BC90", Offset = "0x3D3BC90", VA = "0x3D3BC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000383")]
	public float StunTimeLeft
	{
		[Token(Token = "0x60019A6")]
		[Address(RVA = "0x3D3BCE0", Offset = "0x3D3BCE0", VA = "0x3D3BCE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60019A7")]
		[Address(RVA = "0x3D3BD00", Offset = "0x3D3BD00", VA = "0x3D3BD00")]
		set
		{
		}
	}

	[Token(Token = "0x17000384")]
	public float RecoveryDuration
	{
		[Token(Token = "0x60019A8")]
		[Address(RVA = "0x3D3BD50", Offset = "0x3D3BD50", VA = "0x3D3BD50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60019A9")]
		[Address(RVA = "0x3D3BD70", Offset = "0x3D3BD70", VA = "0x3D3BD70")]
		set
		{
		}
	}

	[Token(Token = "0x17000385")]
	public float RecoveryTimeLeft
	{
		[Token(Token = "0x60019AA")]
		[Address(RVA = "0x3D3BDC0", Offset = "0x3D3BDC0", VA = "0x3D3BDC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60019AB")]
		[Address(RVA = "0x3D3BDE0", Offset = "0x3D3BDE0", VA = "0x3D3BDE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000386")]
	public string StunState
	{
		[Token(Token = "0x60019AC")]
		[Address(RVA = "0x3D3BE30", Offset = "0x3D3BE30", VA = "0x3D3BE30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000387")]
	public float WallAttackCooldown
	{
		[Token(Token = "0x60019AD")]
		[Address(RVA = "0x3D3BEA0", Offset = "0x3D3BEA0", VA = "0x3D3BEA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60019AE")]
		[Address(RVA = "0x3D3BEC0", Offset = "0x3D3BEC0", VA = "0x3D3BEC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000388")]
	public float WallAttackCooldownLeft
	{
		[Token(Token = "0x60019AF")]
		[Address(RVA = "0x3D3BEE0", Offset = "0x3D3BEE0", VA = "0x3D3BEE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60019B0")]
		[Address(RVA = "0x3D3BF00", Offset = "0x3D3BF00", VA = "0x3D3BF00")]
		set
		{
		}
	}

	[Token(Token = "0x17000389")]
	public int SteamState
	{
		[Token(Token = "0x60019B1")]
		[Address(RVA = "0x3D3BF20", Offset = "0x3D3BF20", VA = "0x3D3BF20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700038A")]
	public override string ClassName
	{
		[Token(Token = "0x60019B5")]
		[Address(RVA = "0x3D3C010", Offset = "0x3D3C010", VA = "0x3D3C010", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700038B")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60019B6")]
		[Address(RVA = "0x3D3C040", Offset = "0x3D3C040", VA = "0x3D3C040", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038C")]
	public override bool IsStatic
	{
		[Token(Token = "0x60019B7")]
		[Address(RVA = "0x3D3C050", Offset = "0x3D3C050", VA = "0x3D3C050", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038D")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60019B8")]
		[Address(RVA = "0x3D3C060", Offset = "0x3D3C060", VA = "0x3D3C060", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600198B")]
	[Address(RVA = "0x3D301E0", Offset = "0x3D301E0", VA = "0x3D301E0")]
	public CustomLogicWallColossalBuiltin(WallColossalShifter shifter)
	{
	}

	[Token(Token = "0x60019B2")]
	[Address(RVA = "0x3D3BF40", Offset = "0x3D3BF40", VA = "0x3D3BF40")]
	public void AttackSteam()
	{
	}

	[Token(Token = "0x60019B3")]
	[Address(RVA = "0x3D3BF80", Offset = "0x3D3BF80", VA = "0x3D3BF80")]
	public void StopSteam()
	{
	}

	[Token(Token = "0x60019B4")]
	[Address(RVA = "0x3D3BFC0", Offset = "0x3D3BFC0", VA = "0x3D3BFC0")]
	public void WallAttack()
	{
	}
}
