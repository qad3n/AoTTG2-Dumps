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

[Token(Token = "0x2000469")]
[CompilerGenerated]
internal class CustomLogicJsonBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200046A")]
	public static class Factory
	{
		[Token(Token = "0x6002E0C")]
		[Address(RVA = "0x4135F90", Offset = "0x4135F90", VA = "0x4135F90")]
		public static CustomLogicJsonBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200046B")]
	public static class Bindings
	{
		[Token(Token = "0x4001272")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002E0D")]
		[Address(RVA = "0x41360B0", Offset = "0x41360B0", VA = "0x41360B0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002E0E")]
		[Address(RVA = "0x41361F0", Offset = "0x41361F0", VA = "0x41361F0")]
		public static CLMethodBinding<CustomLogicJsonBuiltin> __CreateMethodBinding__LoadFromString()
		{
			return null;
		}

		[Token(Token = "0x6002E0F")]
		[Address(RVA = "0x4136340", Offset = "0x4136340", VA = "0x4136340")]
		public static CLMethodBinding<CustomLogicJsonBuiltin> __CreateMethodBinding__SaveToString()
		{
			return null;
		}
	}

	[Token(Token = "0x17000904")]
	public override string ClassName
	{
		[Token(Token = "0x6002E08")]
		[Address(RVA = "0x4135F30", Offset = "0x4135F30", VA = "0x4135F30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000905")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002E09")]
		[Address(RVA = "0x4135F60", Offset = "0x4135F60", VA = "0x4135F60", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000906")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002E0A")]
		[Address(RVA = "0x4135F70", Offset = "0x4135F70", VA = "0x4135F70", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000907")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002E0B")]
		[Address(RVA = "0x4135F80", Offset = "0x4135F80", VA = "0x4135F80", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002E03")]
	[Address(RVA = "0x4134830", Offset = "0x4134830", VA = "0x4134830")]
	public CustomLogicJsonBuiltin()
	{
	}

	[Token(Token = "0x6002E04")]
	[Address(RVA = "0x41348A0", Offset = "0x41348A0", VA = "0x41348A0")]
	public static object LoadFromString(string json)
	{
		return null;
	}

	[Token(Token = "0x6002E05")]
	[Address(RVA = "0x4135360", Offset = "0x4135360", VA = "0x4135360")]
	public static string SaveToString(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002E06")]
	[Address(RVA = "0x41349E0", Offset = "0x41349E0", VA = "0x41349E0")]
	protected static object LoadJSON(JSONNode json)
	{
		return null;
	}

	[Token(Token = "0x6002E07")]
	[Address(RVA = "0x4135390", Offset = "0x4135390", VA = "0x4135390")]
	protected static JSONNode SaveJSON(object obj)
	{
		return null;
	}
}
