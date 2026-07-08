using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Mathematics;

namespace CustomLogic;

[Token(Token = "0x200042C")]
[CompilerGenerated]
internal class CustomLogicRandomBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200042D")]
	public static class Factory
	{
		[Token(Token = "0x6002CA5")]
		[Address(RVA = "0x3E43E30", Offset = "0x3E43E30", VA = "0x3E43E30")]
		public static CustomLogicRandomBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200042E")]
	public static class Bindings
	{
		[Token(Token = "0x4001195")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002CA6")]
		[Address(RVA = "0x3E44010", Offset = "0x3E44010", VA = "0x3E44010")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002CA7")]
		[Address(RVA = "0x3E44390", Offset = "0x3E44390", VA = "0x3E44390")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomInt()
		{
			return null;
		}

		[Token(Token = "0x6002CA8")]
		[Address(RVA = "0x3E444E0", Offset = "0x3E444E0", VA = "0x3E444E0")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomFloat()
		{
			return null;
		}

		[Token(Token = "0x6002CA9")]
		[Address(RVA = "0x3E44630", Offset = "0x3E44630", VA = "0x3E44630")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomBool()
		{
			return null;
		}

		[Token(Token = "0x6002CAA")]
		[Address(RVA = "0x3E44780", Offset = "0x3E44780", VA = "0x3E44780")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomVector3()
		{
			return null;
		}

		[Token(Token = "0x6002CAB")]
		[Address(RVA = "0x3E448D0", Offset = "0x3E448D0", VA = "0x3E448D0")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomDirection()
		{
			return null;
		}

		[Token(Token = "0x6002CAC")]
		[Address(RVA = "0x3E44A20", Offset = "0x3E44A20", VA = "0x3E44A20")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomSign()
		{
			return null;
		}

		[Token(Token = "0x6002CAD")]
		[Address(RVA = "0x3E44B70", Offset = "0x3E44B70", VA = "0x3E44B70")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__PerlinNoise()
		{
			return null;
		}
	}

	[Token(Token = "0x4001193")]
	[FieldOffset(Offset = "0x30")]
	public Random Rand;

	[Token(Token = "0x4001194")]
	[FieldOffset(Offset = "0x34")]
	public readonly bool UseInstanceRandom;

	[Token(Token = "0x170008A8")]
	public override string ClassName
	{
		[Token(Token = "0x6002CA1")]
		[Address(RVA = "0x3E43DD0", Offset = "0x3E43DD0", VA = "0x3E43DD0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008A9")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002CA2")]
		[Address(RVA = "0x3E43E00", Offset = "0x3E43E00", VA = "0x3E43E00", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008AA")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002CA3")]
		[Address(RVA = "0x3E43E10", Offset = "0x3E43E10", VA = "0x3E43E10", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008AB")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002CA4")]
		[Address(RVA = "0x3E43E20", Offset = "0x3E43E20", VA = "0x3E43E20", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002C98")]
	[Address(RVA = "0x3E43730", Offset = "0x3E43730", VA = "0x3E43730")]
	public CustomLogicRandomBuiltin()
	{
	}

	[Token(Token = "0x6002C99")]
	[Address(RVA = "0x3E43790", Offset = "0x3E43790", VA = "0x3E43790")]
	public CustomLogicRandomBuiltin(int seed)
	{
	}

	[Token(Token = "0x6002C9A")]
	[Address(RVA = "0x3E43800", Offset = "0x3E43800", VA = "0x3E43800")]
	public int RandomInt(int min, int max)
	{
		return default(int);
	}

	[Token(Token = "0x6002C9B")]
	[Address(RVA = "0x3E43840", Offset = "0x3E43840", VA = "0x3E43840")]
	public float RandomFloat(float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x6002C9C")]
	[Address(RVA = "0x3E43890", Offset = "0x3E43890", VA = "0x3E43890")]
	public bool RandomBool()
	{
		return default(bool);
	}

	[Token(Token = "0x6002C9D")]
	[Address(RVA = "0x3E438C0", Offset = "0x3E438C0", VA = "0x3E438C0")]
	public CustomLogicVector3Builtin RandomVector3(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6002C9E")]
	[Address(RVA = "0x3E43AA0", Offset = "0x3E43AA0", VA = "0x3E43AA0")]
	public CustomLogicVector3Builtin RandomDirection(bool flat = false)
	{
		return null;
	}

	[Token(Token = "0x6002C9F")]
	[Address(RVA = "0x3E43D70", Offset = "0x3E43D70", VA = "0x3E43D70")]
	public int RandomSign()
	{
		return default(int);
	}

	[Token(Token = "0x6002CA0")]
	[Address(RVA = "0x3E43DC0", Offset = "0x3E43DC0", VA = "0x3E43DC0")]
	public float PerlinNoise(float x, float y)
	{
		return default(float);
	}
}
