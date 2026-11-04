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

[Token(Token = "0x20005C7")]
[CompilerGenerated]
internal class CustomLogicRandomBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005C8")]
	public static class Factory
	{
		[Token(Token = "0x600381F")]
		[Address(RVA = "0x20AB200", Offset = "0x20A9800", VA = "0x1820AB200")]
		public static CustomLogicRandomBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005C9")]
	public static class Bindings
	{
		[Token(Token = "0x40018DF")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003820")]
		[Address(RVA = "0x208ED90", Offset = "0x208D390", VA = "0x18208ED90")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003821")]
		[Address(RVA = "0x2098020", Offset = "0x2096620", VA = "0x182098020")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomInt()
		{
			return null;
		}

		[Token(Token = "0x6003822")]
		[Address(RVA = "0x2097F00", Offset = "0x2096500", VA = "0x182097F00")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomFloat()
		{
			return null;
		}

		[Token(Token = "0x6003823")]
		[Address(RVA = "0x2097CC0", Offset = "0x20962C0", VA = "0x182097CC0")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomBool()
		{
			return null;
		}

		[Token(Token = "0x6003824")]
		[Address(RVA = "0x2098260", Offset = "0x2096860", VA = "0x182098260")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomVector3()
		{
			return null;
		}

		[Token(Token = "0x6003825")]
		[Address(RVA = "0x2097DE0", Offset = "0x20963E0", VA = "0x182097DE0")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomDirection()
		{
			return null;
		}

		[Token(Token = "0x6003826")]
		[Address(RVA = "0x2098140", Offset = "0x2096740", VA = "0x182098140")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomSign()
		{
			return null;
		}

		[Token(Token = "0x6003827")]
		[Address(RVA = "0x2097820", Offset = "0x2095E20", VA = "0x182097820")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__PerlinNoise()
		{
			return null;
		}
	}

	[Token(Token = "0x40018DD")]
	[FieldOffset(Offset = "0x30")]
	public Random Rand;

	[Token(Token = "0x40018DE")]
	[FieldOffset(Offset = "0x34")]
	public readonly bool UseInstanceRandom;

	[Token(Token = "0x17000A07")]
	public override string ClassName
	{
		[Token(Token = "0x600381B")]
		[Address(RVA = "0x20AA5E0", Offset = "0x20A8BE0", VA = "0x1820AA5E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A08")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600381C")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A09")]
	public override bool IsStatic
	{
		[Token(Token = "0x600381D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A0A")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600381E")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003812")]
	[Address(RVA = "0x20AA590", Offset = "0x20A8B90", VA = "0x1820AA590")]
	public CustomLogicRandomBuiltin()
	{
	}

	[Token(Token = "0x6003813")]
	[Address(RVA = "0x20AA510", Offset = "0x20A8B10", VA = "0x1820AA510")]
	public CustomLogicRandomBuiltin(int seed)
	{
	}

	[Token(Token = "0x6003814")]
	[Address(RVA = "0x20AA2A0", Offset = "0x20A88A0", VA = "0x1820AA2A0")]
	public int RandomInt(int min, int max)
	{
		return default(int);
	}

	[Token(Token = "0x6003815")]
	[Address(RVA = "0x20AA240", Offset = "0x20A8840", VA = "0x1820AA240")]
	public float RandomFloat(float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x6003816")]
	[Address(RVA = "0x20A9F90", Offset = "0x20A8590", VA = "0x1820A9F90")]
	public bool RandomBool()
	{
		return default(bool);
	}

	[Token(Token = "0x6003817")]
	[Address(RVA = "0x20AA340", Offset = "0x20A8940", VA = "0x1820AA340")]
	public CustomLogicVector3Builtin RandomVector3(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6003818")]
	[Address(RVA = "0x20A9FD0", Offset = "0x20A85D0", VA = "0x1820A9FD0")]
	public CustomLogicVector3Builtin RandomDirection(bool flat = false)
	{
		return null;
	}

	[Token(Token = "0x6003819")]
	[Address(RVA = "0x20AA2F0", Offset = "0x20A88F0", VA = "0x1820AA2F0")]
	public int RandomSign()
	{
		return default(int);
	}

	[Token(Token = "0x600381A")]
	[Address(RVA = "0x20A9F80", Offset = "0x20A8580", VA = "0x1820A9F80")]
	public float PerlinNoise(float x, float y)
	{
		return default(float);
	}
}
