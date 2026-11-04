// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicJsonBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicJsonBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicJsonBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace CustomLogic;

[Token(Token = "0x20005BF")]
[CompilerGenerated]
internal class CustomLogicJsonBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005C0")]
	public static class Factory
	{
		[Token(Token = "0x600377E")]
		[Address(RVA = "0x20AB400", Offset = "0x20A9A00", VA = "0x1820AB400")]
		public static CustomLogicJsonBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005C1")]
	public static class Bindings
	{
		[Token(Token = "0x40018B2")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600377F")]
		[Address(RVA = "0x2090AB0", Offset = "0x208F0B0", VA = "0x182090AB0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003780")]
		[Address(RVA = "0x2097010", Offset = "0x2095610", VA = "0x182097010")]
		public static CLMethodBinding<CustomLogicJsonBuiltin> __CreateMethodBinding__LoadFromString()
		{
			return null;
		}

		[Token(Token = "0x6003781")]
		[Address(RVA = "0x2098810", Offset = "0x2096E10", VA = "0x182098810")]
		public static CLMethodBinding<CustomLogicJsonBuiltin> __CreateMethodBinding__SaveToString()
		{
			return null;
		}
	}

	[Token(Token = "0x170009F9")]
	public override string ClassName
	{
		[Token(Token = "0x600377A")]
		[Address(RVA = "0x20A18E0", Offset = "0x209FEE0", VA = "0x1820A18E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009FA")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600377B")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009FB")]
	public override bool IsStatic
	{
		[Token(Token = "0x600377C")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009FC")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600377D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003775")]
	[Address(RVA = "0x20A1890", Offset = "0x209FE90", VA = "0x1820A1890")]
	public CustomLogicJsonBuiltin()
	{
	}

	[Token(Token = "0x6003776")]
	[Address(RVA = "0x20A0190", Offset = "0x209E790", VA = "0x1820A0190")]
	public static object LoadFromString(string json)
	{
		return null;
	}

	[Token(Token = "0x6003777")]
	[Address(RVA = "0x20A1850", Offset = "0x209FE50", VA = "0x1820A1850")]
	public static string SaveToString(object obj)
	{
		return null;
	}

	[Token(Token = "0x6003778")]
	[Address(RVA = "0x20A0200", Offset = "0x209E800", VA = "0x1820A0200")]
	protected static object LoadJSON(JSONNode json)
	{
		return null;
	}

	[Token(Token = "0x6003779")]
	[Address(RVA = "0x20A0B70", Offset = "0x209F170", VA = "0x1820A0B70")]
	protected static JSONNode SaveJSON(object obj)
	{
		return null;
	}
}
