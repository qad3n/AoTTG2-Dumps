using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200033F")]
[CompilerGenerated]
internal class CustomLogicHumanStateEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000340")]
	public static class Factory
	{
		[Token(Token = "0x6001E45")]
		[Address(RVA = "0x3D66530", Offset = "0x3D66530", VA = "0x3D66530")]
		public static CustomLogicHumanStateEnum CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000341")]
	public static class Bindings
	{
		[Token(Token = "0x4000F36")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001E46")]
		[Address(RVA = "0x3D66650", Offset = "0x3D66650", VA = "0x3D66650")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001E47")]
		[Address(RVA = "0x3D66CF0", Offset = "0x3D66CF0", VA = "0x3D66CF0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Idle()
		{
			return null;
		}

		[Token(Token = "0x6001E48")]
		[Address(RVA = "0x3D66D90", Offset = "0x3D66D90", VA = "0x3D66D90")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Attack()
		{
			return null;
		}

		[Token(Token = "0x6001E49")]
		[Address(RVA = "0x3D66E30", Offset = "0x3D66E30", VA = "0x3D66E30")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__GroundDodge()
		{
			return null;
		}

		[Token(Token = "0x6001E4A")]
		[Address(RVA = "0x3D66ED0", Offset = "0x3D66ED0", VA = "0x3D66ED0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__AirDodge()
		{
			return null;
		}

		[Token(Token = "0x6001E4B")]
		[Address(RVA = "0x3D66F70", Offset = "0x3D66F70", VA = "0x3D66F70")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Reload()
		{
			return null;
		}

		[Token(Token = "0x6001E4C")]
		[Address(RVA = "0x3D67010", Offset = "0x3D67010", VA = "0x3D67010")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Refill()
		{
			return null;
		}

		[Token(Token = "0x6001E4D")]
		[Address(RVA = "0x3D670B0", Offset = "0x3D670B0", VA = "0x3D670B0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Die()
		{
			return null;
		}

		[Token(Token = "0x6001E4E")]
		[Address(RVA = "0x3D67150", Offset = "0x3D67150", VA = "0x3D67150")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Grab()
		{
			return null;
		}

		[Token(Token = "0x6001E4F")]
		[Address(RVA = "0x3D671F0", Offset = "0x3D671F0", VA = "0x3D671F0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__EmoteAction()
		{
			return null;
		}

		[Token(Token = "0x6001E50")]
		[Address(RVA = "0x3D67290", Offset = "0x3D67290", VA = "0x3D67290")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__SpecialAttack()
		{
			return null;
		}

		[Token(Token = "0x6001E51")]
		[Address(RVA = "0x3D67330", Offset = "0x3D67330", VA = "0x3D67330")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__SpecialAction()
		{
			return null;
		}

		[Token(Token = "0x6001E52")]
		[Address(RVA = "0x3D673D0", Offset = "0x3D673D0", VA = "0x3D673D0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Slide()
		{
			return null;
		}

		[Token(Token = "0x6001E53")]
		[Address(RVA = "0x3D67470", Offset = "0x3D67470", VA = "0x3D67470")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Run()
		{
			return null;
		}

		[Token(Token = "0x6001E54")]
		[Address(RVA = "0x3D67510", Offset = "0x3D67510", VA = "0x3D67510")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Land()
		{
			return null;
		}

		[Token(Token = "0x6001E55")]
		[Address(RVA = "0x3D675B0", Offset = "0x3D675B0", VA = "0x3D675B0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__MountingHorse()
		{
			return null;
		}

		[Token(Token = "0x6001E56")]
		[Address(RVA = "0x3D67650", Offset = "0x3D67650", VA = "0x3D67650")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Stun()
		{
			return null;
		}

		[Token(Token = "0x6001E57")]
		[Address(RVA = "0x3D676F0", Offset = "0x3D676F0", VA = "0x3D676F0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__WallSlide()
		{
			return null;
		}
	}

	[Token(Token = "0x4000F25")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string IdleValue;

	[Token(Token = "0x4000F26")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string AttackValue;

	[Token(Token = "0x4000F27")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string GroundDodgeValue;

	[Token(Token = "0x4000F28")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string AirDodgeValue;

	[Token(Token = "0x4000F29")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string ReloadValue;

	[Token(Token = "0x4000F2A")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string RefillValue;

	[Token(Token = "0x4000F2B")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string DieValue;

	[Token(Token = "0x4000F2C")]
	[FieldOffset(Offset = "0x38")]
	private static readonly string GrabValue;

	[Token(Token = "0x4000F2D")]
	[FieldOffset(Offset = "0x40")]
	private static readonly string EmoteActionValue;

	[Token(Token = "0x4000F2E")]
	[FieldOffset(Offset = "0x48")]
	private static readonly string SpecialAttackValue;

	[Token(Token = "0x4000F2F")]
	[FieldOffset(Offset = "0x50")]
	private static readonly string SpecialActionValue;

	[Token(Token = "0x4000F30")]
	[FieldOffset(Offset = "0x58")]
	private static readonly string SlideValue;

	[Token(Token = "0x4000F31")]
	[FieldOffset(Offset = "0x60")]
	private static readonly string RunValue;

	[Token(Token = "0x4000F32")]
	[FieldOffset(Offset = "0x68")]
	private static readonly string LandValue;

	[Token(Token = "0x4000F33")]
	[FieldOffset(Offset = "0x70")]
	private static readonly string MountingHorseValue;

	[Token(Token = "0x4000F34")]
	[FieldOffset(Offset = "0x78")]
	private static readonly string StunValue;

	[Token(Token = "0x4000F35")]
	[FieldOffset(Offset = "0x80")]
	private static readonly string WallSlideValue;

	[Token(Token = "0x17000510")]
	public static string Idle
	{
		[Token(Token = "0x6001E2F")]
		[Address(RVA = "0x3D65850", Offset = "0x3D65850", VA = "0x3D65850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000511")]
	public static string Attack
	{
		[Token(Token = "0x6001E30")]
		[Address(RVA = "0x3D658C0", Offset = "0x3D658C0", VA = "0x3D658C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000512")]
	public static string GroundDodge
	{
		[Token(Token = "0x6001E31")]
		[Address(RVA = "0x3D65930", Offset = "0x3D65930", VA = "0x3D65930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000513")]
	public static string AirDodge
	{
		[Token(Token = "0x6001E32")]
		[Address(RVA = "0x3D659A0", Offset = "0x3D659A0", VA = "0x3D659A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000514")]
	public static string Reload
	{
		[Token(Token = "0x6001E33")]
		[Address(RVA = "0x3D65A10", Offset = "0x3D65A10", VA = "0x3D65A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000515")]
	public static string Refill
	{
		[Token(Token = "0x6001E34")]
		[Address(RVA = "0x3D65A80", Offset = "0x3D65A80", VA = "0x3D65A80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000516")]
	public static string Die
	{
		[Token(Token = "0x6001E35")]
		[Address(RVA = "0x3D65AF0", Offset = "0x3D65AF0", VA = "0x3D65AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000517")]
	public static string Grab
	{
		[Token(Token = "0x6001E36")]
		[Address(RVA = "0x3D65B60", Offset = "0x3D65B60", VA = "0x3D65B60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000518")]
	public static string EmoteAction
	{
		[Token(Token = "0x6001E37")]
		[Address(RVA = "0x3D65BD0", Offset = "0x3D65BD0", VA = "0x3D65BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000519")]
	public static string SpecialAttack
	{
		[Token(Token = "0x6001E38")]
		[Address(RVA = "0x3D65C40", Offset = "0x3D65C40", VA = "0x3D65C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051A")]
	public static string SpecialAction
	{
		[Token(Token = "0x6001E39")]
		[Address(RVA = "0x3D65CB0", Offset = "0x3D65CB0", VA = "0x3D65CB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051B")]
	public static string Slide
	{
		[Token(Token = "0x6001E3A")]
		[Address(RVA = "0x3D65D20", Offset = "0x3D65D20", VA = "0x3D65D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051C")]
	public static string Run
	{
		[Token(Token = "0x6001E3B")]
		[Address(RVA = "0x3D65D90", Offset = "0x3D65D90", VA = "0x3D65D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051D")]
	public static string Land
	{
		[Token(Token = "0x6001E3C")]
		[Address(RVA = "0x3D65E00", Offset = "0x3D65E00", VA = "0x3D65E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051E")]
	public static string MountingHorse
	{
		[Token(Token = "0x6001E3D")]
		[Address(RVA = "0x3D65E70", Offset = "0x3D65E70", VA = "0x3D65E70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051F")]
	public static string Stun
	{
		[Token(Token = "0x6001E3E")]
		[Address(RVA = "0x3D65EE0", Offset = "0x3D65EE0", VA = "0x3D65EE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000520")]
	public static string WallSlide
	{
		[Token(Token = "0x6001E3F")]
		[Address(RVA = "0x3D65F50", Offset = "0x3D65F50", VA = "0x3D65F50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000521")]
	public override string ClassName
	{
		[Token(Token = "0x6001E40")]
		[Address(RVA = "0x3D65FC0", Offset = "0x3D65FC0", VA = "0x3D65FC0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000522")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001E41")]
		[Address(RVA = "0x3D65FF0", Offset = "0x3D65FF0", VA = "0x3D65FF0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000523")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001E42")]
		[Address(RVA = "0x3D66000", Offset = "0x3D66000", VA = "0x3D66000", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000524")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001E43")]
		[Address(RVA = "0x3D66010", Offset = "0x3D66010", VA = "0x3D66010", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E2E")]
	[Address(RVA = "0x3D657E0", Offset = "0x3D657E0", VA = "0x3D657E0")]
	public CustomLogicHumanStateEnum()
	{
	}
}
