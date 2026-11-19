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

[Token(Token = "0x2000626")]
[CompilerGenerated]
internal class CustomLogicRandomBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000627")]
	public static class Factory
	{
		[Token(Token = "0x6003AAB")]
		[Address(RVA = "0x5A34EE0", Offset = "0x5A33EE0", VA = "0x5A34EE0")]
		public static CustomLogicRandomBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000628")]
	public static class Bindings
	{
		[Token(Token = "0x4001A7F")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003AAC")]
		[Address(RVA = "0x5A350C0", Offset = "0x5A340C0", VA = "0x5A350C0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003AAD")]
		[Address(RVA = "0x5A35440", Offset = "0x5A34440", VA = "0x5A35440")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomInt()
		{
			return null;
		}

		[Token(Token = "0x6003AAE")]
		[Address(RVA = "0x5A35580", Offset = "0x5A34580", VA = "0x5A35580")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomFloat()
		{
			return null;
		}

		[Token(Token = "0x6003AAF")]
		[Address(RVA = "0x5A356C0", Offset = "0x5A346C0", VA = "0x5A356C0")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomBool()
		{
			return null;
		}

		[Token(Token = "0x6003AB0")]
		[Address(RVA = "0x5A35800", Offset = "0x5A34800", VA = "0x5A35800")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomVector3()
		{
			return null;
		}

		[Token(Token = "0x6003AB1")]
		[Address(RVA = "0x5A35940", Offset = "0x5A34940", VA = "0x5A35940")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomDirection()
		{
			return null;
		}

		[Token(Token = "0x6003AB2")]
		[Address(RVA = "0x5A35A80", Offset = "0x5A34A80", VA = "0x5A35A80")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomSign()
		{
			return null;
		}

		[Token(Token = "0x6003AB3")]
		[Address(RVA = "0x5A35BC0", Offset = "0x5A34BC0", VA = "0x5A35BC0")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__PerlinNoise()
		{
			return null;
		}
	}

	[Token(Token = "0x4001A7D")]
	[FieldOffset(Offset = "0x30")]
	public Random Rand;

	[Token(Token = "0x4001A7E")]
	[FieldOffset(Offset = "0x34")]
	public readonly bool UseInstanceRandom;

	[Token(Token = "0x17000A4F")]
	public override string ClassName
	{
		[Token(Token = "0x6003AA7")]
		[Address(RVA = "0x5A34E80", Offset = "0x5A33E80", VA = "0x5A34E80", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A50")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003AA8")]
		[Address(RVA = "0x5A34EB0", Offset = "0x5A33EB0", VA = "0x5A34EB0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A51")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003AA9")]
		[Address(RVA = "0x5A34EC0", Offset = "0x5A33EC0", VA = "0x5A34EC0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A52")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003AAA")]
		[Address(RVA = "0x5A34ED0", Offset = "0x5A33ED0", VA = "0x5A34ED0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003A9E")]
	[Address(RVA = "0x5A347B0", Offset = "0x5A337B0", VA = "0x5A347B0")]
	public CustomLogicRandomBuiltin()
	{
	}

	[Token(Token = "0x6003A9F")]
	[Address(RVA = "0x5A34820", Offset = "0x5A33820", VA = "0x5A34820")]
	public CustomLogicRandomBuiltin(int seed)
	{
	}

	[Token(Token = "0x6003AA0")]
	[Address(RVA = "0x5A34890", Offset = "0x5A33890", VA = "0x5A34890")]
	public int RandomInt(int min, int max)
	{
		return default(int);
	}

	[Token(Token = "0x6003AA1")]
	[Address(RVA = "0x5A348D0", Offset = "0x5A338D0", VA = "0x5A348D0")]
	public float RandomFloat(float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x6003AA2")]
	[Address(RVA = "0x5A34920", Offset = "0x5A33920", VA = "0x5A34920")]
	public bool RandomBool()
	{
		return default(bool);
	}

	[Token(Token = "0x6003AA3")]
	[Address(RVA = "0x5A34950", Offset = "0x5A33950", VA = "0x5A34950")]
	public CustomLogicVector3Builtin RandomVector3(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6003AA4")]
	[Address(RVA = "0x5A34B30", Offset = "0x5A33B30", VA = "0x5A34B30")]
	public CustomLogicVector3Builtin RandomDirection(bool flat = false)
	{
		return null;
	}

	[Token(Token = "0x6003AA5")]
	[Address(RVA = "0x5A34E30", Offset = "0x5A33E30", VA = "0x5A34E30")]
	public int RandomSign()
	{
		return default(int);
	}

	[Token(Token = "0x6003AA6")]
	[Address(RVA = "0x5A34E70", Offset = "0x5A33E70", VA = "0x5A34E70")]
	public float PerlinNoise(float x, float y)
	{
		return default(float);
	}
}
