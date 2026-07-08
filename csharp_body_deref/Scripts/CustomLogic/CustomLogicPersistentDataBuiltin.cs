using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003D7")]
[CompilerGenerated]
internal class CustomLogicPersistentDataBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20003D8")]
	public static class Factory
	{
		[Token(Token = "0x6002839")]
		[Address(RVA = "0x3DD46C0", Offset = "0x3DD46C0", VA = "0x3DD46C0")]
		public static CustomLogicPersistentDataBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003D9")]
	public static class Bindings
	{
		[Token(Token = "0x4001065")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600283A")]
		[Address(RVA = "0x3DD47E0", Offset = "0x3DD47E0", VA = "0x3DD47E0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600283B")]
		[Address(RVA = "0x3DD4B50", Offset = "0x3DD4B50", VA = "0x3DD4B50")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__SetProperty()
		{
			return null;
		}

		[Token(Token = "0x600283C")]
		[Address(RVA = "0x3DD4CA0", Offset = "0x3DD4CA0", VA = "0x3DD4CA0")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__GetProperty()
		{
			return null;
		}

		[Token(Token = "0x600283D")]
		[Address(RVA = "0x3DD4DF0", Offset = "0x3DD4DF0", VA = "0x3DD4DF0")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__LoadFromFile()
		{
			return null;
		}

		[Token(Token = "0x600283E")]
		[Address(RVA = "0x3DD4F40", Offset = "0x3DD4F40", VA = "0x3DD4F40")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__SaveToFile()
		{
			return null;
		}

		[Token(Token = "0x600283F")]
		[Address(RVA = "0x3DD5090", Offset = "0x3DD5090", VA = "0x3DD5090")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__Clear()
		{
			return null;
		}

		[Token(Token = "0x6002840")]
		[Address(RVA = "0x3DD51E0", Offset = "0x3DD51E0", VA = "0x3DD51E0")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__IsValidFileName()
		{
			return null;
		}

		[Token(Token = "0x6002841")]
		[Address(RVA = "0x3DD5330", Offset = "0x3DD5330", VA = "0x3DD5330")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__FileExists()
		{
			return null;
		}
	}

	[Token(Token = "0x17000828")]
	public override string ClassName
	{
		[Token(Token = "0x6002835")]
		[Address(RVA = "0x3DD4660", Offset = "0x3DD4660", VA = "0x3DD4660", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000829")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002836")]
		[Address(RVA = "0x3DD4690", Offset = "0x3DD4690", VA = "0x3DD4690", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700082A")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002837")]
		[Address(RVA = "0x3DD46A0", Offset = "0x3DD46A0", VA = "0x3DD46A0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700082B")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002838")]
		[Address(RVA = "0x3DD46B0", Offset = "0x3DD46B0", VA = "0x3DD46B0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600282D")]
	[Address(RVA = "0x3DD2E80", Offset = "0x3DD2E80", VA = "0x3DD2E80")]
	public CustomLogicPersistentDataBuiltin()
	{
	}

	[Token(Token = "0x600282E")]
	[Address(RVA = "0x3DD2EF0", Offset = "0x3DD2EF0", VA = "0x3DD2EF0")]
	public static void SetProperty(string property, object value)
	{
	}

	[Token(Token = "0x600282F")]
	[Address(RVA = "0x3DD2FF0", Offset = "0x3DD2FF0", VA = "0x3DD2FF0")]
	public static object GetProperty(string property, object defaultValue)
	{
		return null;
	}

	[Token(Token = "0x6002830")]
	[Address(RVA = "0x3DD3070", Offset = "0x3DD3070", VA = "0x3DD3070")]
	public static void LoadFromFile(string fileName, bool encrypted)
	{
	}

	[Token(Token = "0x6002831")]
	[Address(RVA = "0x3DD36B0", Offset = "0x3DD36B0", VA = "0x3DD36B0")]
	public static void SaveToFile(string fileName, bool encrypted)
	{
	}

	[Token(Token = "0x6002832")]
	[Address(RVA = "0x3DD4420", Offset = "0x3DD4420", VA = "0x3DD4420")]
	public static void Clear()
	{
	}

	[Token(Token = "0x6002833")]
	[Address(RVA = "0x3DD44C0", Offset = "0x3DD44C0", VA = "0x3DD44C0")]
	public static bool IsValidFileName(string fileName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002834")]
	[Address(RVA = "0x3DD4530", Offset = "0x3DD4530", VA = "0x3DD4530")]
	public static bool FileExists(string fileName)
	{
		return default(bool);
	}
}
