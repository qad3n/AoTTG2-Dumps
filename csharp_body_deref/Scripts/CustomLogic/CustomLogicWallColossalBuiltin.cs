// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicWallColossalBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Characters;
using Controllers;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000330")]
[CompilerGenerated]
internal class CustomLogicWallColossalBuiltin : CustomLogicShifterBuiltin
{
	[Token(Token = "0x2000331")]
	public new static class Factory
	{
		[Token(Token = "0x6001B6E")]
		[Address(RVA = "0x40422D0", Offset = "0x40422D0", VA = "0x40422D0")]
		public static CustomLogicWallColossalBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000332")]
	public new static class Bindings
	{
		[Token(Token = "0x4000FE4")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001B6F")]
		[Address(RVA = "0x4042360", Offset = "0x4042360", VA = "0x4042360")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001B70")]
		[Address(RVA = "0x4042C70", Offset = "0x4042C70", VA = "0x4042C70")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__HandHealth()
		{
			return null;
		}

		[Token(Token = "0x6001B71")]
		[Address(RVA = "0x4042D50", Offset = "0x4042D50", VA = "0x4042D50")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__MaxHandHealth()
		{
			return null;
		}

		[Token(Token = "0x6001B72")]
		[Address(RVA = "0x4042E30", Offset = "0x4042E30", VA = "0x4042E30")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__LeftHandHealth()
		{
			return null;
		}

		[Token(Token = "0x6001B73")]
		[Address(RVA = "0x4042F10", Offset = "0x4042F10", VA = "0x4042F10")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__MaxLeftHandHealth()
		{
			return null;
		}

		[Token(Token = "0x6001B74")]
		[Address(RVA = "0x4042FF0", Offset = "0x4042FF0", VA = "0x4042FF0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RightHandHealth()
		{
			return null;
		}

		[Token(Token = "0x6001B75")]
		[Address(RVA = "0x40430D0", Offset = "0x40430D0", VA = "0x40430D0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__MaxRightHandHealth()
		{
			return null;
		}

		[Token(Token = "0x6001B76")]
		[Address(RVA = "0x40431B0", Offset = "0x40431B0", VA = "0x40431B0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__CanDamageLeftHand()
		{
			return null;
		}

		[Token(Token = "0x6001B77")]
		[Address(RVA = "0x4043290", Offset = "0x4043290", VA = "0x4043290")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__CanDamageRightHand()
		{
			return null;
		}

		[Token(Token = "0x6001B78")]
		[Address(RVA = "0x4043370", Offset = "0x4043370", VA = "0x4043370")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__LeftHandState()
		{
			return null;
		}

		[Token(Token = "0x6001B79")]
		[Address(RVA = "0x4043410", Offset = "0x4043410", VA = "0x4043410")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RightHandState()
		{
			return null;
		}

		[Token(Token = "0x6001B7A")]
		[Address(RVA = "0x40434B0", Offset = "0x40434B0", VA = "0x40434B0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__HandSeverWindow()
		{
			return null;
		}

		[Token(Token = "0x6001B7B")]
		[Address(RVA = "0x4043590", Offset = "0x4043590", VA = "0x4043590")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__LeftHandSeverTimeLeft()
		{
			return null;
		}

		[Token(Token = "0x6001B7C")]
		[Address(RVA = "0x4043670", Offset = "0x4043670", VA = "0x4043670")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RightHandSeverTimeLeft()
		{
			return null;
		}

		[Token(Token = "0x6001B7D")]
		[Address(RVA = "0x4043750", Offset = "0x4043750", VA = "0x4043750")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__StunDuration()
		{
			return null;
		}

		[Token(Token = "0x6001B7E")]
		[Address(RVA = "0x4043830", Offset = "0x4043830", VA = "0x4043830")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__StunTimeLeft()
		{
			return null;
		}

		[Token(Token = "0x6001B7F")]
		[Address(RVA = "0x4043910", Offset = "0x4043910", VA = "0x4043910")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RecoveryDuration()
		{
			return null;
		}

		[Token(Token = "0x6001B80")]
		[Address(RVA = "0x40439F0", Offset = "0x40439F0", VA = "0x40439F0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RecoveryTimeLeft()
		{
			return null;
		}

		[Token(Token = "0x6001B81")]
		[Address(RVA = "0x4043AD0", Offset = "0x4043AD0", VA = "0x4043AD0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__StunState()
		{
			return null;
		}

		[Token(Token = "0x6001B82")]
		[Address(RVA = "0x4043B70", Offset = "0x4043B70", VA = "0x4043B70")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__WallAttackCooldown()
		{
			return null;
		}

		[Token(Token = "0x6001B83")]
		[Address(RVA = "0x4043C50", Offset = "0x4043C50", VA = "0x4043C50")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__WallAttackCooldownLeft()
		{
			return null;
		}

		[Token(Token = "0x6001B84")]
		[Address(RVA = "0x4043D30", Offset = "0x4043D30", VA = "0x4043D30")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__SteamState()
		{
			return null;
		}

		[Token(Token = "0x6001B85")]
		[Address(RVA = "0x4043DD0", Offset = "0x4043DD0", VA = "0x4043DD0")]
		public static CLMethodBinding<CustomLogicWallColossalBuiltin> __CreateMethodBinding__AttackSteam()
		{
			return null;
		}

		[Token(Token = "0x6001B86")]
		[Address(RVA = "0x4043F20", Offset = "0x4043F20", VA = "0x4043F20")]
		public static CLMethodBinding<CustomLogicWallColossalBuiltin> __CreateMethodBinding__StopSteam()
		{
			return null;
		}

		[Token(Token = "0x6001B87")]
		[Address(RVA = "0x4044070", Offset = "0x4044070", VA = "0x4044070")]
		public static CLMethodBinding<CustomLogicWallColossalBuiltin> __CreateMethodBinding__WallAttack()
		{
			return null;
		}
	}

	[Token(Token = "0x4000FE2")]
	[FieldOffset(Offset = "0x48")]
	public new readonly WallColossalShifter Shifter;

	[Token(Token = "0x4000FE3")]
	[FieldOffset(Offset = "0x50")]
	public new readonly WallColossalAIController Controller;

	[Token(Token = "0x170003CF")]
	public int HandHealth
	{
		[Token(Token = "0x6001B41")]
		[Address(RVA = "0x40419E0", Offset = "0x40419E0", VA = "0x40419E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001B42")]
		[Address(RVA = "0x4041A10", Offset = "0x4041A10", VA = "0x4041A10")]
		set
		{
		}
	}

	[Token(Token = "0x170003D0")]
	public int MaxHandHealth
	{
		[Token(Token = "0x6001B43")]
		[Address(RVA = "0x4041A70", Offset = "0x4041A70", VA = "0x4041A70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001B44")]
		[Address(RVA = "0x4041AA0", Offset = "0x4041AA0", VA = "0x4041AA0")]
		set
		{
		}
	}

	[Token(Token = "0x170003D1")]
	public int LeftHandHealth
	{
		[Token(Token = "0x6001B45")]
		[Address(RVA = "0x4041B00", Offset = "0x4041B00", VA = "0x4041B00")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001B46")]
		[Address(RVA = "0x4041B20", Offset = "0x4041B20", VA = "0x4041B20")]
		set
		{
		}
	}

	[Token(Token = "0x170003D2")]
	public int MaxLeftHandHealth
	{
		[Token(Token = "0x6001B47")]
		[Address(RVA = "0x4041B60", Offset = "0x4041B60", VA = "0x4041B60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001B48")]
		[Address(RVA = "0x4041B80", Offset = "0x4041B80", VA = "0x4041B80")]
		set
		{
		}
	}

	[Token(Token = "0x170003D3")]
	public int RightHandHealth
	{
		[Token(Token = "0x6001B49")]
		[Address(RVA = "0x4041BC0", Offset = "0x4041BC0", VA = "0x4041BC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001B4A")]
		[Address(RVA = "0x4041BE0", Offset = "0x4041BE0", VA = "0x4041BE0")]
		set
		{
		}
	}

	[Token(Token = "0x170003D4")]
	public int MaxRightHandHealth
	{
		[Token(Token = "0x6001B4B")]
		[Address(RVA = "0x4041C20", Offset = "0x4041C20", VA = "0x4041C20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001B4C")]
		[Address(RVA = "0x4041C40", Offset = "0x4041C40", VA = "0x4041C40")]
		set
		{
		}
	}

	[Token(Token = "0x170003D5")]
	public bool CanDamageLeftHand
	{
		[Token(Token = "0x6001B4D")]
		[Address(RVA = "0x4041C80", Offset = "0x4041C80", VA = "0x4041C80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001B4E")]
		[Address(RVA = "0x4041CA0", Offset = "0x4041CA0", VA = "0x4041CA0")]
		set
		{
		}
	}

	[Token(Token = "0x170003D6")]
	public bool CanDamageRightHand
	{
		[Token(Token = "0x6001B4F")]
		[Address(RVA = "0x4041CE0", Offset = "0x4041CE0", VA = "0x4041CE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001B50")]
		[Address(RVA = "0x4041D00", Offset = "0x4041D00", VA = "0x4041D00")]
		set
		{
		}
	}

	[Token(Token = "0x170003D7")]
	public int LeftHandState
	{
		[Token(Token = "0x6001B51")]
		[Address(RVA = "0x4041D40", Offset = "0x4041D40", VA = "0x4041D40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003D8")]
	public int RightHandState
	{
		[Token(Token = "0x6001B52")]
		[Address(RVA = "0x4041D60", Offset = "0x4041D60", VA = "0x4041D60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003D9")]
	public float HandSeverWindow
	{
		[Token(Token = "0x6001B53")]
		[Address(RVA = "0x4041D80", Offset = "0x4041D80", VA = "0x4041D80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001B54")]
		[Address(RVA = "0x4041DA0", Offset = "0x4041DA0", VA = "0x4041DA0")]
		set
		{
		}
	}

	[Token(Token = "0x170003DA")]
	public float LeftHandSeverTimeLeft
	{
		[Token(Token = "0x6001B55")]
		[Address(RVA = "0x4041DF0", Offset = "0x4041DF0", VA = "0x4041DF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001B56")]
		[Address(RVA = "0x4041E10", Offset = "0x4041E10", VA = "0x4041E10")]
		set
		{
		}
	}

	[Token(Token = "0x170003DB")]
	public float RightHandSeverTimeLeft
	{
		[Token(Token = "0x6001B57")]
		[Address(RVA = "0x4041E60", Offset = "0x4041E60", VA = "0x4041E60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001B58")]
		[Address(RVA = "0x4041E80", Offset = "0x4041E80", VA = "0x4041E80")]
		set
		{
		}
	}

	[Token(Token = "0x170003DC")]
	public float StunDuration
	{
		[Token(Token = "0x6001B59")]
		[Address(RVA = "0x4041ED0", Offset = "0x4041ED0", VA = "0x4041ED0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001B5A")]
		[Address(RVA = "0x4041EF0", Offset = "0x4041EF0", VA = "0x4041EF0")]
		set
		{
		}
	}

	[Token(Token = "0x170003DD")]
	public float StunTimeLeft
	{
		[Token(Token = "0x6001B5B")]
		[Address(RVA = "0x4041F40", Offset = "0x4041F40", VA = "0x4041F40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001B5C")]
		[Address(RVA = "0x4041F60", Offset = "0x4041F60", VA = "0x4041F60")]
		set
		{
		}
	}

	[Token(Token = "0x170003DE")]
	public float RecoveryDuration
	{
		[Token(Token = "0x6001B5D")]
		[Address(RVA = "0x4041FB0", Offset = "0x4041FB0", VA = "0x4041FB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001B5E")]
		[Address(RVA = "0x4041FD0", Offset = "0x4041FD0", VA = "0x4041FD0")]
		set
		{
		}
	}

	[Token(Token = "0x170003DF")]
	public float RecoveryTimeLeft
	{
		[Token(Token = "0x6001B5F")]
		[Address(RVA = "0x4042020", Offset = "0x4042020", VA = "0x4042020")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001B60")]
		[Address(RVA = "0x4042040", Offset = "0x4042040", VA = "0x4042040")]
		set
		{
		}
	}

	[Token(Token = "0x170003E0")]
	public string StunState
	{
		[Token(Token = "0x6001B61")]
		[Address(RVA = "0x4042090", Offset = "0x4042090", VA = "0x4042090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E1")]
	public float WallAttackCooldown
	{
		[Token(Token = "0x6001B62")]
		[Address(RVA = "0x4042100", Offset = "0x4042100", VA = "0x4042100")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001B63")]
		[Address(RVA = "0x4042120", Offset = "0x4042120", VA = "0x4042120")]
		set
		{
		}
	}

	[Token(Token = "0x170003E2")]
	public float WallAttackCooldownLeft
	{
		[Token(Token = "0x6001B64")]
		[Address(RVA = "0x4042140", Offset = "0x4042140", VA = "0x4042140")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001B65")]
		[Address(RVA = "0x4042160", Offset = "0x4042160", VA = "0x4042160")]
		set
		{
		}
	}

	[Token(Token = "0x170003E3")]
	public int SteamState
	{
		[Token(Token = "0x6001B66")]
		[Address(RVA = "0x4042180", Offset = "0x4042180", VA = "0x4042180")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E4")]
	public override string ClassName
	{
		[Token(Token = "0x6001B6A")]
		[Address(RVA = "0x4042270", Offset = "0x4042270", VA = "0x4042270", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E5")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001B6B")]
		[Address(RVA = "0x40422A0", Offset = "0x40422A0", VA = "0x40422A0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E6")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001B6C")]
		[Address(RVA = "0x40422B0", Offset = "0x40422B0", VA = "0x40422B0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E7")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001B6D")]
		[Address(RVA = "0x40422C0", Offset = "0x40422C0", VA = "0x40422C0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001B40")]
	[Address(RVA = "0x4041960", Offset = "0x4041960", VA = "0x4041960")]
	public CustomLogicWallColossalBuiltin(WallColossalShifter shifter)
	{
	}

	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x40421A0", Offset = "0x40421A0", VA = "0x40421A0")]
	public void AttackSteam()
	{
	}

	[Token(Token = "0x6001B68")]
	[Address(RVA = "0x40421E0", Offset = "0x40421E0", VA = "0x40421E0")]
	public void StopSteam()
	{
	}

	[Token(Token = "0x6001B69")]
	[Address(RVA = "0x4042220", Offset = "0x4042220", VA = "0x4042220")]
	public void WallAttack()
	{
	}
}
