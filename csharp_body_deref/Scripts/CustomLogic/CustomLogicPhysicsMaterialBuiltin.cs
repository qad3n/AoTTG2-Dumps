using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20002C1")]
[CompilerGenerated]
internal class CustomLogicPhysicsMaterialBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20002C2")]
	public static class Factory
	{
		[Token(Token = "0x6001319")]
		[Address(RVA = "0x3CF0010", Offset = "0x3CF0010", VA = "0x3CF0010")]
		public static CustomLogicPhysicsMaterialBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002C3")]
	public static class Bindings
	{
		[Token(Token = "0x4000E13")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600131A")]
		[Address(RVA = "0x3CF0100", Offset = "0x3CF0100", VA = "0x3CF0100")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600131B")]
		[Address(RVA = "0x3CF0370", Offset = "0x3CF0370", VA = "0x3CF0370")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__StaticFriction()
		{
			return null;
		}

		[Token(Token = "0x600131C")]
		[Address(RVA = "0x3CF0450", Offset = "0x3CF0450", VA = "0x3CF0450")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__DynamicFriction()
		{
			return null;
		}

		[Token(Token = "0x600131D")]
		[Address(RVA = "0x3CF0530", Offset = "0x3CF0530", VA = "0x3CF0530")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__Bounciness()
		{
			return null;
		}

		[Token(Token = "0x600131E")]
		[Address(RVA = "0x3CF0610", Offset = "0x3CF0610", VA = "0x3CF0610")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__FrictionCombine()
		{
			return null;
		}

		[Token(Token = "0x600131F")]
		[Address(RVA = "0x3CF06F0", Offset = "0x3CF06F0", VA = "0x3CF06F0")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__BounceCombine()
		{
			return null;
		}

		[Token(Token = "0x6001320")]
		[Address(RVA = "0x3CF07D0", Offset = "0x3CF07D0", VA = "0x3CF07D0")]
		public static CLMethodBinding<CustomLogicPhysicsMaterialBuiltin> __CreateMethodBinding__Setup()
		{
			return null;
		}
	}

	[Token(Token = "0x4000E10")]
	[FieldOffset(Offset = "0x38")]
	public CustomPhysicsMaterial Value;

	[Token(Token = "0x4000E11")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x4000E12")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x17000257")]
	public float StaticFriction
	{
		[Token(Token = "0x600130A")]
		[Address(RVA = "0x3CEFE50", Offset = "0x3CEFE50", VA = "0x3CEFE50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600130B")]
		[Address(RVA = "0x3CEFE70", Offset = "0x3CEFE70", VA = "0x3CEFE70")]
		set
		{
		}
	}

	[Token(Token = "0x17000258")]
	public float DynamicFriction
	{
		[Token(Token = "0x600130C")]
		[Address(RVA = "0x3CEFE90", Offset = "0x3CEFE90", VA = "0x3CEFE90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600130D")]
		[Address(RVA = "0x3CEFEB0", Offset = "0x3CEFEB0", VA = "0x3CEFEB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000259")]
	public float Bounciness
	{
		[Token(Token = "0x600130E")]
		[Address(RVA = "0x3CEFED0", Offset = "0x3CEFED0", VA = "0x3CEFED0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600130F")]
		[Address(RVA = "0x3CEFEF0", Offset = "0x3CEFEF0", VA = "0x3CEFEF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700025A")]
	public int FrictionCombine
	{
		[Token(Token = "0x6001310")]
		[Address(RVA = "0x3CEFF10", Offset = "0x3CEFF10", VA = "0x3CEFF10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001311")]
		[Address(RVA = "0x3CEFF30", Offset = "0x3CEFF30", VA = "0x3CEFF30")]
		set
		{
		}
	}

	[Token(Token = "0x1700025B")]
	public int BounceCombine
	{
		[Token(Token = "0x6001312")]
		[Address(RVA = "0x3CEFF50", Offset = "0x3CEFF50", VA = "0x3CEFF50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001313")]
		[Address(RVA = "0x3CEFF70", Offset = "0x3CEFF70", VA = "0x3CEFF70")]
		set
		{
		}
	}

	[Token(Token = "0x1700025C")]
	public override string ClassName
	{
		[Token(Token = "0x6001315")]
		[Address(RVA = "0x3CEFFB0", Offset = "0x3CEFFB0", VA = "0x3CEFFB0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025D")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001316")]
		[Address(RVA = "0x3CEFFE0", Offset = "0x3CEFFE0", VA = "0x3CEFFE0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700025E")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001317")]
		[Address(RVA = "0x3CEFFF0", Offset = "0x3CEFFF0", VA = "0x3CEFFF0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700025F")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001318")]
		[Address(RVA = "0x3CF0000", Offset = "0x3CF0000", VA = "0x3CF0000", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x3CEFD20", Offset = "0x3CEFD20", VA = "0x3CEFD20")]
	public CustomLogicPhysicsMaterialBuiltin()
	{
	}

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x3CEFD30", Offset = "0x3CEFD30", VA = "0x3CEFD30")]
	public CustomLogicPhysicsMaterialBuiltin(CustomLogicMapObjectBuiltin owner)
	{
	}

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x3CEFF90", Offset = "0x3CEFF90", VA = "0x3CEFF90")]
	public void Setup(bool allChildColliders)
	{
	}
}
