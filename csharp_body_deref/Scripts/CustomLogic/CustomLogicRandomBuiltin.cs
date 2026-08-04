// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicRandomBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicRandomBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRandomBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Mathematics;

namespace CustomLogic;

[Token(Token = "0x2000471")]
[CompilerGenerated]
internal class CustomLogicRandomBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000472")]
	public static class Factory
	{
		[Token(Token = "0x6002EAD")]
		[Address(RVA = "0x414F350", Offset = "0x414F350", VA = "0x414F350")]
		public static CustomLogicRandomBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000473")]
	public static class Bindings
	{
		[Token(Token = "0x400129F")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002EAE")]
		[Address(RVA = "0x414F530", Offset = "0x414F530", VA = "0x414F530")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002EAF")]
		[Address(RVA = "0x414F8B0", Offset = "0x414F8B0", VA = "0x414F8B0")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomInt()
		{
			return null;
		}

		[Token(Token = "0x6002EB0")]
		[Address(RVA = "0x414FA00", Offset = "0x414FA00", VA = "0x414FA00")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomFloat()
		{
			return null;
		}

		[Token(Token = "0x6002EB1")]
		[Address(RVA = "0x414FB50", Offset = "0x414FB50", VA = "0x414FB50")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomBool()
		{
			return null;
		}

		[Token(Token = "0x6002EB2")]
		[Address(RVA = "0x414FCA0", Offset = "0x414FCA0", VA = "0x414FCA0")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomVector3()
		{
			return null;
		}

		[Token(Token = "0x6002EB3")]
		[Address(RVA = "0x414FDF0", Offset = "0x414FDF0", VA = "0x414FDF0")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomDirection()
		{
			return null;
		}

		[Token(Token = "0x6002EB4")]
		[Address(RVA = "0x414FF40", Offset = "0x414FF40", VA = "0x414FF40")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomSign()
		{
			return null;
		}

		[Token(Token = "0x6002EB5")]
		[Address(RVA = "0x4150090", Offset = "0x4150090", VA = "0x4150090")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__PerlinNoise()
		{
			return null;
		}
	}

	[Token(Token = "0x400129D")]
	[FieldOffset(Offset = "0x30")]
	public Random Rand;

	[Token(Token = "0x400129E")]
	[FieldOffset(Offset = "0x34")]
	public readonly bool UseInstanceRandom;

	[Token(Token = "0x17000912")]
	public override string ClassName
	{
		[Token(Token = "0x6002EA9")]
		[Address(RVA = "0x414F2F0", Offset = "0x414F2F0", VA = "0x414F2F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000913")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002EAA")]
		[Address(RVA = "0x414F320", Offset = "0x414F320", VA = "0x414F320", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000914")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002EAB")]
		[Address(RVA = "0x414F330", Offset = "0x414F330", VA = "0x414F330", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000915")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002EAC")]
		[Address(RVA = "0x414F340", Offset = "0x414F340", VA = "0x414F340", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002EA0")]
	[Address(RVA = "0x414EC50", Offset = "0x414EC50", VA = "0x414EC50")]
	public CustomLogicRandomBuiltin()
	{
	}

	[Token(Token = "0x6002EA1")]
	[Address(RVA = "0x414ECB0", Offset = "0x414ECB0", VA = "0x414ECB0")]
	public CustomLogicRandomBuiltin(int seed)
	{
	}

	[Token(Token = "0x6002EA2")]
	[Address(RVA = "0x414ED20", Offset = "0x414ED20", VA = "0x414ED20")]
	public int RandomInt(int min, int max)
	{
		return default(int);
	}

	[Token(Token = "0x6002EA3")]
	[Address(RVA = "0x414ED60", Offset = "0x414ED60", VA = "0x414ED60")]
	public float RandomFloat(float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x6002EA4")]
	[Address(RVA = "0x414EDB0", Offset = "0x414EDB0", VA = "0x414EDB0")]
	public bool RandomBool()
	{
		return default(bool);
	}

	[Token(Token = "0x6002EA5")]
	[Address(RVA = "0x414EDE0", Offset = "0x414EDE0", VA = "0x414EDE0")]
	public CustomLogicVector3Builtin RandomVector3(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6002EA6")]
	[Address(RVA = "0x414EFC0", Offset = "0x414EFC0", VA = "0x414EFC0")]
	public CustomLogicVector3Builtin RandomDirection(bool flat = false)
	{
		return null;
	}

	[Token(Token = "0x6002EA7")]
	[Address(RVA = "0x414F290", Offset = "0x414F290", VA = "0x414F290")]
	public int RandomSign()
	{
		return default(int);
	}

	[Token(Token = "0x6002EA8")]
	[Address(RVA = "0x414F2E0", Offset = "0x414F2E0", VA = "0x414F2E0")]
	public float PerlinNoise(float x, float y)
	{
		return default(float);
	}
}
