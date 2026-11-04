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

[Token(Token = "0x200055D")]
[CompilerGenerated]
internal class CustomLogicLocaleBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200055E")]
	public static class Factory
	{
		[Token(Token = "0x60032C4")]
		[Address(RVA = "0x203C4C0", Offset = "0x203AAC0", VA = "0x18203C4C0")]
		public static CustomLogicLocaleBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200055F")]
	public static class Bindings
	{
		[Token(Token = "0x4001763")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60032C5")]
		[Address(RVA = "0x201B560", Offset = "0x2019B60", VA = "0x18201B560")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60032C6")]
		[Address(RVA = "0x202DDE0", Offset = "0x202C3E0", VA = "0x18202DDE0")]
		public static CLPropertyBinding<CustomLogicLocaleBuiltin> __CreatePropertyBinding__CurrentLanguage()
		{
			return null;
		}

		[Token(Token = "0x60032C7")]
		[Address(RVA = "0x202E060", Offset = "0x202C660", VA = "0x18202E060")]
		public static CLPropertyBinding<CustomLogicLocaleBuiltin> __CreatePropertyBinding__DefaultLanguage()
		{
			return null;
		}

		[Token(Token = "0x60032C8")]
		[Address(RVA = "0x2028AD0", Offset = "0x20270D0", VA = "0x182028AD0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__Get()
		{
			return null;
		}

		[Token(Token = "0x60032C9")]
		[Address(RVA = "0x202BA70", Offset = "0x202A070", VA = "0x18202BA70")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x60032CA")]
		[Address(RVA = "0x2029BC0", Offset = "0x20281C0", VA = "0x182029BC0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterLanguage()
		{
			return null;
		}

		[Token(Token = "0x60032CB")]
		[Address(RVA = "0x2029CE0", Offset = "0x20282E0", VA = "0x182029CE0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterLanguages()
		{
			return null;
		}

		[Token(Token = "0x60032CC")]
		[Address(RVA = "0x2029AA0", Offset = "0x20280A0", VA = "0x182029AA0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterFallback()
		{
			return null;
		}

		[Token(Token = "0x60032CD")]
		[Address(RVA = "0x2029E00", Offset = "0x2028400", VA = "0x182029E00")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RemoveFallback()
		{
			return null;
		}
	}

	[Token(Token = "0x4001760")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Dictionary<string, string>> _languages;

	[Token(Token = "0x4001761")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, string> _languageFallbacks;

	[Token(Token = "0x17000963")]
	public static string CurrentLanguage
	{
		[Token(Token = "0x60032B5")]
		[Address(RVA = "0x20330D0", Offset = "0x20316D0", VA = "0x1820330D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000964")]
	public static string DefaultLanguage
	{
		[Token(Token = "0x60032B6")]
		[Address(RVA = "0x2033130", Offset = "0x2031730", VA = "0x182033130")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60032B7")]
		[Address(RVA = "0x2033180", Offset = "0x2031780", VA = "0x182033180")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000965")]
	public override string ClassName
	{
		[Token(Token = "0x60032BF")]
		[Address(RVA = "0x20330A0", Offset = "0x20316A0", VA = "0x1820330A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000966")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60032C0")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000967")]
	public override bool IsStatic
	{
		[Token(Token = "0x60032C1")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000968")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60032C2")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60032B4")]
	[Address(RVA = "0x2032F20", Offset = "0x2031520", VA = "0x182032F20")]
	public CustomLogicLocaleBuiltin()
	{
	}

	[Token(Token = "0x60032B8")]
	[Address(RVA = "0x2032360", Offset = "0x2030960", VA = "0x182032360")]
	public static string Get(string key)
	{
		return null;
	}

	[Token(Token = "0x60032B9")]
	[Address(RVA = "0x2032CC0", Offset = "0x20312C0", VA = "0x182032CC0")]
	public static void Set(string language, string key, string value)
	{
	}

	[Token(Token = "0x60032BA")]
	[Address(RVA = "0x2032500", Offset = "0x2030B00", VA = "0x182032500")]
	public static void RegisterLanguage(string language, CustomLogicDictBuiltin strings)
	{
	}

	[Token(Token = "0x60032BB")]
	[Address(RVA = "0x2032780", Offset = "0x2030D80", VA = "0x182032780")]
	public static void RegisterLanguages(string pattern)
	{
	}

	[Token(Token = "0x60032BC")]
	[Address(RVA = "0x2032470", Offset = "0x2030A70", VA = "0x182032470")]
	public static void RegisterFallback(string fromLanguage, string toLanguage)
	{
	}

	[Token(Token = "0x60032BD")]
	[Address(RVA = "0x2032960", Offset = "0x2030F60", VA = "0x182032960")]
	public static void RemoveFallback(string fromLanguage)
	{
	}

	[Token(Token = "0x60032BE")]
	[Address(RVA = "0x20329E0", Offset = "0x2030FE0", VA = "0x1820329E0")]
	private static string ResolveString(string key, string requestedLang)
	{
		return null;
	}
}
