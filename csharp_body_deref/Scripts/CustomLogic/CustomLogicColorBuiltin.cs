// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicColorBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicColorBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicColorBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace CustomLogic;

[Token(Token = "0x2000455")]
[CompilerGenerated]
internal class CustomLogicColorBuiltin : BuiltinClassInstance, ICustomLogicEquals, ICustomLogicCopyable, ICustomLogicMathOperators, ICustomLogicToString
{
	[Token(Token = "0x2000456")]
	public static class Factory
	{
		[Token(Token = "0x6001ADB")]
		[Address(RVA = "0x58AB430", Offset = "0x58AA430", VA = "0x58AB430")]
		public static CustomLogicColorBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000457")]
	public static class Bindings
	{
		[Token(Token = "0x40015BB")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001ADC")]
		[Address(RVA = "0x58AB710", Offset = "0x58AA710", VA = "0x58AB710")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001ADD")]
		[Address(RVA = "0x58ABD30", Offset = "0x58AAD30", VA = "0x58ABD30")]
		public static CLPropertyBinding<CustomLogicColorBuiltin> __CreatePropertyBinding__R()
		{
			return null;
		}

		[Token(Token = "0x6001ADE")]
		[Address(RVA = "0x58ABE10", Offset = "0x58AAE10", VA = "0x58ABE10")]
		public static CLPropertyBinding<CustomLogicColorBuiltin> __CreatePropertyBinding__G()
		{
			return null;
		}

		[Token(Token = "0x6001ADF")]
		[Address(RVA = "0x58ABEF0", Offset = "0x58AAEF0", VA = "0x58ABEF0")]
		public static CLPropertyBinding<CustomLogicColorBuiltin> __CreatePropertyBinding__B()
		{
			return null;
		}

		[Token(Token = "0x6001AE0")]
		[Address(RVA = "0x58ABFD0", Offset = "0x58AAFD0", VA = "0x58ABFD0")]
		public static CLPropertyBinding<CustomLogicColorBuiltin> __CreatePropertyBinding__A()
		{
			return null;
		}

		[Token(Token = "0x6001AE1")]
		[Address(RVA = "0x58AC0B0", Offset = "0x58AB0B0", VA = "0x58AC0B0")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding__ToHexString()
		{
			return null;
		}

		[Token(Token = "0x6001AE2")]
		[Address(RVA = "0x58AC1F0", Offset = "0x58AB1F0", VA = "0x58AC1F0")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding__Lerp()
		{
			return null;
		}

		[Token(Token = "0x6001AE3")]
		[Address(RVA = "0x58AC330", Offset = "0x58AB330", VA = "0x58AC330")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding__Gradient()
		{
			return null;
		}

		[Token(Token = "0x6001AE4")]
		[Address(RVA = "0x58AC470", Offset = "0x58AB470", VA = "0x58AC470")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Eq__()
		{
			return null;
		}

		[Token(Token = "0x6001AE5")]
		[Address(RVA = "0x58AC5B0", Offset = "0x58AB5B0", VA = "0x58AC5B0")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Hash__()
		{
			return null;
		}

		[Token(Token = "0x6001AE6")]
		[Address(RVA = "0x58AC6F0", Offset = "0x58AB6F0", VA = "0x58AC6F0")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Copy__()
		{
			return null;
		}

		[Token(Token = "0x6001AE7")]
		[Address(RVA = "0x58AC830", Offset = "0x58AB830", VA = "0x58AC830")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Str__()
		{
			return null;
		}

		[Token(Token = "0x6001AE8")]
		[Address(RVA = "0x58AC970", Offset = "0x58AB970", VA = "0x58AC970")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Add__()
		{
			return null;
		}

		[Token(Token = "0x6001AE9")]
		[Address(RVA = "0x58ACAB0", Offset = "0x58ABAB0", VA = "0x58ACAB0")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Sub__()
		{
			return null;
		}

		[Token(Token = "0x6001AEA")]
		[Address(RVA = "0x58ACBF0", Offset = "0x58ABBF0", VA = "0x58ACBF0")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Mul__()
		{
			return null;
		}

		[Token(Token = "0x6001AEB")]
		[Address(RVA = "0x58ACD30", Offset = "0x58ABD30", VA = "0x58ACD30")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Div__()
		{
			return null;
		}
	}

	[Token(Token = "0x40015BA")]
	[FieldOffset(Offset = "0x30")]
	public Color255 Value;

	[Token(Token = "0x170002DE")]
	public int R
	{
		[Token(Token = "0x6001ABF")]
		[Address(RVA = "0x58AA390", Offset = "0x58A9390", VA = "0x58AA390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AC0")]
		[Address(RVA = "0x58AA3B0", Offset = "0x58A93B0", VA = "0x58AA3B0")]
		set
		{
		}
	}

	[Token(Token = "0x170002DF")]
	public int G
	{
		[Token(Token = "0x6001AC1")]
		[Address(RVA = "0x58AA3D0", Offset = "0x58A93D0", VA = "0x58AA3D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AC2")]
		[Address(RVA = "0x58AA3F0", Offset = "0x58A93F0", VA = "0x58AA3F0")]
		set
		{
		}
	}

	[Token(Token = "0x170002E0")]
	public int B
	{
		[Token(Token = "0x6001AC3")]
		[Address(RVA = "0x58AA410", Offset = "0x58A9410", VA = "0x58AA410")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AC4")]
		[Address(RVA = "0x58AA430", Offset = "0x58A9430", VA = "0x58AA430")]
		set
		{
		}
	}

	[Token(Token = "0x170002E1")]
	public int A
	{
		[Token(Token = "0x6001AC5")]
		[Address(RVA = "0x58AA450", Offset = "0x58A9450", VA = "0x58AA450")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AC6")]
		[Address(RVA = "0x58AA470", Offset = "0x58A9470", VA = "0x58AA470")]
		set
		{
		}
	}

	[Token(Token = "0x170002E2")]
	public override string ClassName
	{
		[Token(Token = "0x6001AD7")]
		[Address(RVA = "0x58AB3D0", Offset = "0x58AA3D0", VA = "0x58AB3D0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E3")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001AD8")]
		[Address(RVA = "0x58AB400", Offset = "0x58AA400", VA = "0x58AB400", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E4")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001AD9")]
		[Address(RVA = "0x58AB410", Offset = "0x58AA410", VA = "0x58AB410", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E5")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001ADA")]
		[Address(RVA = "0x58AB420", Offset = "0x58AA420", VA = "0x58AB420", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001AB9")]
	[Address(RVA = "0x58A9EC0", Offset = "0x58A8EC0", VA = "0x58A9EC0")]
	public CustomLogicColorBuiltin()
	{
	}

	[Token(Token = "0x6001ABA")]
	[Address(RVA = "0x58A9F50", Offset = "0x58A8F50", VA = "0x58A9F50")]
	public CustomLogicColorBuiltin(string hexString)
	{
	}

	[Token(Token = "0x6001ABB")]
	[Address(RVA = "0x58AA050", Offset = "0x58A9050", VA = "0x58AA050")]
	public CustomLogicColorBuiltin(int r, int g, int b)
	{
	}

	[Token(Token = "0x6001ABC")]
	[Address(RVA = "0x58AA130", Offset = "0x58A9130", VA = "0x58AA130")]
	public CustomLogicColorBuiltin(int r, int g, int b, int a)
	{
	}

	[Token(Token = "0x6001ABD")]
	[Address(RVA = "0x58AA210", Offset = "0x58A9210", VA = "0x58AA210")]
	public CustomLogicColorBuiltin(Color color)
	{
	}

	[Token(Token = "0x6001ABE")]
	[Address(RVA = "0x58AA2E0", Offset = "0x58A92E0", VA = "0x58AA2E0")]
	public CustomLogicColorBuiltin(Color255 value)
	{
	}

	[Token(Token = "0x6001AC7")]
	[Address(RVA = "0x58AA490", Offset = "0x58A9490", VA = "0x58AA490")]
	public string ToHexString()
	{
		return null;
	}

	[Token(Token = "0x6001AC8")]
	[Address(RVA = "0x58AA4B0", Offset = "0x58A94B0", VA = "0x58AA4B0")]
	public static CustomLogicColorBuiltin Lerp(CustomLogicColorBuiltin a, CustomLogicColorBuiltin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6001AC9")]
	[Address(RVA = "0x58AA530", Offset = "0x58A9530", VA = "0x58AA530")]
	public static CustomLogicColorBuiltin Gradient(CustomLogicColorBuiltin a, CustomLogicColorBuiltin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x58AA790", Offset = "0x58A9790", VA = "0x58AA790", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001ACB")]
	[Address(RVA = "0x58AA7C0", Offset = "0x58A97C0", VA = "0x58AA7C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x58AA860", Offset = "0x58A9860", VA = "0x58AA860", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001ACD")]
	[Address(RVA = "0x58AAA80", Offset = "0x58A9A80", VA = "0x58AAA80")]
	public CustomLogicColorBuiltin Copy()
	{
		return null;
	}

	[Token(Token = "0x6001ACE")]
	[Address(RVA = "0x58AAB30", Offset = "0x58A9B30", VA = "0x58AAB30", Slot = "11")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ACF")]
	[Address(RVA = "0x58AABD0", Offset = "0x58A9BD0", VA = "0x58AABD0", Slot = "12")]
	public int __Hash__()
	{
		return default(int);
	}

	[Token(Token = "0x6001AD0")]
	[Address(RVA = "0x58AAC00", Offset = "0x58A9C00", VA = "0x58AAC00", Slot = "13")]
	public object __Copy__()
	{
		return null;
	}

	[Token(Token = "0x6001AD1")]
	[Address(RVA = "0x58AACB0", Offset = "0x58A9CB0", VA = "0x58AACB0", Slot = "19")]
	public string __Str__()
	{
		return null;
	}

	[Token(Token = "0x6001AD2")]
	[Address(RVA = "0x58AACD0", Offset = "0x58A9CD0", VA = "0x58AACD0", Slot = "14")]
	public object __Add__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6001AD3")]
	[Address(RVA = "0x58AAE80", Offset = "0x58A9E80", VA = "0x58AAE80", Slot = "15")]
	public object __Sub__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x58AB030", Offset = "0x58AA030", VA = "0x58AB030", Slot = "16")]
	public object __Mul__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6001AD5")]
	[Address(RVA = "0x58AB1E0", Offset = "0x58AA1E0", VA = "0x58AB1E0", Slot = "17")]
	public object __Div__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6001AD6")]
	[Address(RVA = "0x58AB390", Offset = "0x58AA390", VA = "0x58AB390", Slot = "18")]
	public object __Mod__(object self, object other)
	{
		return null;
	}
}
