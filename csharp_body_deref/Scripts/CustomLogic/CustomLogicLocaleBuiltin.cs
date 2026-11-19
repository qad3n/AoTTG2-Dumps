// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLocaleBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005BC")]
[CompilerGenerated]
internal class CustomLogicLocaleBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005BD")]
	public static class Factory
	{
		[Token(Token = "0x6003550")]
		[Address(RVA = "0x59E3E20", Offset = "0x59E2E20", VA = "0x59E3E20")]
		public static CustomLogicLocaleBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005BE")]
	public static class Bindings
	{
		[Token(Token = "0x4001903")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003551")]
		[Address(RVA = "0x59E3F00", Offset = "0x59E2F00", VA = "0x59E3F00")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003552")]
		[Address(RVA = "0x59E42F0", Offset = "0x59E32F0", VA = "0x59E42F0")]
		public static CLPropertyBinding<CustomLogicLocaleBuiltin> __CreatePropertyBinding__CurrentLanguage()
		{
			return null;
		}

		[Token(Token = "0x6003553")]
		[Address(RVA = "0x59E4390", Offset = "0x59E3390", VA = "0x59E4390")]
		public static CLPropertyBinding<CustomLogicLocaleBuiltin> __CreatePropertyBinding__DefaultLanguage()
		{
			return null;
		}

		[Token(Token = "0x6003554")]
		[Address(RVA = "0x59E4470", Offset = "0x59E3470", VA = "0x59E4470")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__Get()
		{
			return null;
		}

		[Token(Token = "0x6003555")]
		[Address(RVA = "0x59E45B0", Offset = "0x59E35B0", VA = "0x59E45B0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x6003556")]
		[Address(RVA = "0x59E46F0", Offset = "0x59E36F0", VA = "0x59E46F0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterLanguage()
		{
			return null;
		}

		[Token(Token = "0x6003557")]
		[Address(RVA = "0x59E4830", Offset = "0x59E3830", VA = "0x59E4830")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterLanguages()
		{
			return null;
		}

		[Token(Token = "0x6003558")]
		[Address(RVA = "0x59E4970", Offset = "0x59E3970", VA = "0x59E4970")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterFallback()
		{
			return null;
		}

		[Token(Token = "0x6003559")]
		[Address(RVA = "0x59E4AB0", Offset = "0x59E3AB0", VA = "0x59E4AB0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RemoveFallback()
		{
			return null;
		}
	}

	[Token(Token = "0x4001900")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Dictionary<string, string>> _languages;

	[Token(Token = "0x4001901")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, string> _languageFallbacks;

	[Token(Token = "0x170009AB")]
	public static string CurrentLanguage
	{
		[Token(Token = "0x6003541")]
		[Address(RVA = "0x59E30D0", Offset = "0x59E20D0", VA = "0x59E30D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009AC")]
	public static string DefaultLanguage
	{
		[Token(Token = "0x6003542")]
		[Address(RVA = "0x59E3130", Offset = "0x59E2130", VA = "0x59E3130")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003543")]
		[Address(RVA = "0x59E31A0", Offset = "0x59E21A0", VA = "0x59E31A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170009AD")]
	public override string ClassName
	{
		[Token(Token = "0x600354B")]
		[Address(RVA = "0x59E3CE0", Offset = "0x59E2CE0", VA = "0x59E3CE0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009AE")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600354C")]
		[Address(RVA = "0x59E3D10", Offset = "0x59E2D10", VA = "0x59E3D10", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009AF")]
	public override bool IsStatic
	{
		[Token(Token = "0x600354D")]
		[Address(RVA = "0x59E3D20", Offset = "0x59E2D20", VA = "0x59E3D20", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009B0")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600354E")]
		[Address(RVA = "0x59E3D30", Offset = "0x59E2D30", VA = "0x59E3D30", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003540")]
	[Address(RVA = "0x59E2E00", Offset = "0x59E1E00", VA = "0x59E2E00")]
	public CustomLogicLocaleBuiltin()
	{
	}

	[Token(Token = "0x6003544")]
	[Address(RVA = "0x59E3200", Offset = "0x59E2200", VA = "0x59E3200")]
	public static string Get(string key)
	{
		return null;
	}

	[Token(Token = "0x6003545")]
	[Address(RVA = "0x59E35C0", Offset = "0x59E25C0", VA = "0x59E35C0")]
	public static void Set(string language, string key, string value)
	{
	}

	[Token(Token = "0x6003546")]
	[Address(RVA = "0x59E3720", Offset = "0x59E2720", VA = "0x59E3720")]
	public static void RegisterLanguage(string language, CustomLogicDictBuiltin strings)
	{
	}

	[Token(Token = "0x6003547")]
	[Address(RVA = "0x59E3A50", Offset = "0x59E2A50", VA = "0x59E3A50")]
	public static void RegisterLanguages(string pattern)
	{
	}

	[Token(Token = "0x6003548")]
	[Address(RVA = "0x59E3030", Offset = "0x59E2030", VA = "0x59E3030")]
	public static void RegisterFallback(string fromLanguage, string toLanguage)
	{
	}

	[Token(Token = "0x6003549")]
	[Address(RVA = "0x59E3C40", Offset = "0x59E2C40", VA = "0x59E3C40")]
	public static void RemoveFallback(string fromLanguage)
	{
	}

	[Token(Token = "0x600354A")]
	[Address(RVA = "0x59E32F0", Offset = "0x59E22F0", VA = "0x59E32F0")]
	private static string ResolveString(string key, string requestedLang)
	{
		return null;
	}
}
