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

[Token(Token = "0x200061E")]
[CompilerGenerated]
internal class CustomLogicJsonBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200061F")]
	public static class Factory
	{
		[Token(Token = "0x6003A0A")]
		[Address(RVA = "0x5A2C9E0", Offset = "0x5A2B9E0", VA = "0x5A2C9E0")]
		public static CustomLogicJsonBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000620")]
	public static class Bindings
	{
		[Token(Token = "0x4001A52")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003A0B")]
		[Address(RVA = "0x5A2CB00", Offset = "0x5A2BB00", VA = "0x5A2CB00")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003A0C")]
		[Address(RVA = "0x5A2CC40", Offset = "0x5A2BC40", VA = "0x5A2CC40")]
		public static CLMethodBinding<CustomLogicJsonBuiltin> __CreateMethodBinding__LoadFromString()
		{
			return null;
		}

		[Token(Token = "0x6003A0D")]
		[Address(RVA = "0x5A2CD80", Offset = "0x5A2BD80", VA = "0x5A2CD80")]
		public static CLMethodBinding<CustomLogicJsonBuiltin> __CreateMethodBinding__SaveToString()
		{
			return null;
		}
	}

	[Token(Token = "0x17000A41")]
	public override string ClassName
	{
		[Token(Token = "0x6003A06")]
		[Address(RVA = "0x5A2C980", Offset = "0x5A2B980", VA = "0x5A2C980", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A42")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003A07")]
		[Address(RVA = "0x5A2C9B0", Offset = "0x5A2B9B0", VA = "0x5A2C9B0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A43")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003A08")]
		[Address(RVA = "0x5A2C9C0", Offset = "0x5A2B9C0", VA = "0x5A2C9C0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A44")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003A09")]
		[Address(RVA = "0x5A2C9D0", Offset = "0x5A2B9D0", VA = "0x5A2C9D0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003A01")]
	[Address(RVA = "0x5A2B2E0", Offset = "0x5A2A2E0", VA = "0x5A2B2E0")]
	public CustomLogicJsonBuiltin()
	{
	}

	[Token(Token = "0x6003A02")]
	[Address(RVA = "0x5A2B350", Offset = "0x5A2A350", VA = "0x5A2B350")]
	public static object LoadFromString(string json)
	{
		return null;
	}

	[Token(Token = "0x6003A03")]
	[Address(RVA = "0x5A2BE10", Offset = "0x5A2AE10", VA = "0x5A2BE10")]
	public static string SaveToString(object obj)
	{
		return null;
	}

	[Token(Token = "0x6003A04")]
	[Address(RVA = "0x5A2B490", Offset = "0x5A2A490", VA = "0x5A2B490")]
	protected static object LoadJSON(JSONNode json)
	{
		return null;
	}

	[Token(Token = "0x6003A05")]
	[Address(RVA = "0x5A2BE40", Offset = "0x5A2AE40", VA = "0x5A2BE40")]
	protected static JSONNode SaveJSON(object obj)
	{
		return null;
	}
}
