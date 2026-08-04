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

[Token(Token = "0x2000407")]
[CompilerGenerated]
internal class CustomLogicLocaleBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000408")]
	public static class Factory
	{
		[Token(Token = "0x6002964")]
		[Address(RVA = "0x40CF070", Offset = "0x40CF070", VA = "0x40CF070")]
		public static CustomLogicLocaleBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000409")]
	public static class Bindings
	{
		[Token(Token = "0x4001126")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002965")]
		[Address(RVA = "0x40CF160", Offset = "0x40CF160", VA = "0x40CF160")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002966")]
		[Address(RVA = "0x40CF550", Offset = "0x40CF550", VA = "0x40CF550")]
		public static CLPropertyBinding<CustomLogicLocaleBuiltin> __CreatePropertyBinding__CurrentLanguage()
		{
			return null;
		}

		[Token(Token = "0x6002967")]
		[Address(RVA = "0x40CF5F0", Offset = "0x40CF5F0", VA = "0x40CF5F0")]
		public static CLPropertyBinding<CustomLogicLocaleBuiltin> __CreatePropertyBinding__DefaultLanguage()
		{
			return null;
		}

		[Token(Token = "0x6002968")]
		[Address(RVA = "0x40CF6D0", Offset = "0x40CF6D0", VA = "0x40CF6D0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__Get()
		{
			return null;
		}

		[Token(Token = "0x6002969")]
		[Address(RVA = "0x40CF820", Offset = "0x40CF820", VA = "0x40CF820")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x600296A")]
		[Address(RVA = "0x40CF970", Offset = "0x40CF970", VA = "0x40CF970")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterLanguage()
		{
			return null;
		}

		[Token(Token = "0x600296B")]
		[Address(RVA = "0x40CFAC0", Offset = "0x40CFAC0", VA = "0x40CFAC0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterLanguages()
		{
			return null;
		}

		[Token(Token = "0x600296C")]
		[Address(RVA = "0x40CFC10", Offset = "0x40CFC10", VA = "0x40CFC10")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterFallback()
		{
			return null;
		}

		[Token(Token = "0x600296D")]
		[Address(RVA = "0x40CFD60", Offset = "0x40CFD60", VA = "0x40CFD60")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RemoveFallback()
		{
			return null;
		}
	}

	[Token(Token = "0x4001123")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Dictionary<string, string>> _languages;

	[Token(Token = "0x4001124")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, string> _languageFallbacks;

	[Token(Token = "0x17000871")]
	public static string CurrentLanguage
	{
		[Token(Token = "0x6002955")]
		[Address(RVA = "0x40CE2A0", Offset = "0x40CE2A0", VA = "0x40CE2A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000872")]
	public static string DefaultLanguage
	{
		[Token(Token = "0x6002956")]
		[Address(RVA = "0x40CE300", Offset = "0x40CE300", VA = "0x40CE300")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002957")]
		[Address(RVA = "0x40CE370", Offset = "0x40CE370", VA = "0x40CE370")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000873")]
	public override string ClassName
	{
		[Token(Token = "0x600295F")]
		[Address(RVA = "0x40CEF30", Offset = "0x40CEF30", VA = "0x40CEF30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000874")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002960")]
		[Address(RVA = "0x40CEF60", Offset = "0x40CEF60", VA = "0x40CEF60", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000875")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002961")]
		[Address(RVA = "0x40CEF70", Offset = "0x40CEF70", VA = "0x40CEF70", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000876")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002962")]
		[Address(RVA = "0x40CEF80", Offset = "0x40CEF80", VA = "0x40CEF80", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002954")]
	[Address(RVA = "0x40CDFD0", Offset = "0x40CDFD0", VA = "0x40CDFD0")]
	public CustomLogicLocaleBuiltin()
	{
	}

	[Token(Token = "0x6002958")]
	[Address(RVA = "0x40CE3D0", Offset = "0x40CE3D0", VA = "0x40CE3D0")]
	public static string Get(string key)
	{
		return null;
	}

	[Token(Token = "0x6002959")]
	[Address(RVA = "0x40CE790", Offset = "0x40CE790", VA = "0x40CE790")]
	public static void Set(string language, string key, string value)
	{
	}

	[Token(Token = "0x600295A")]
	[Address(RVA = "0x40CE8F0", Offset = "0x40CE8F0", VA = "0x40CE8F0")]
	public static void RegisterLanguage(string language, CustomLogicDictBuiltin strings)
	{
	}

	[Token(Token = "0x600295B")]
	[Address(RVA = "0x40CEC70", Offset = "0x40CEC70", VA = "0x40CEC70")]
	public static void RegisterLanguages(string pattern)
	{
	}

	[Token(Token = "0x600295C")]
	[Address(RVA = "0x40CE200", Offset = "0x40CE200", VA = "0x40CE200")]
	public static void RegisterFallback(string fromLanguage, string toLanguage)
	{
	}

	[Token(Token = "0x600295D")]
	[Address(RVA = "0x40CEE90", Offset = "0x40CEE90", VA = "0x40CEE90")]
	public static void RemoveFallback(string fromLanguage)
	{
	}

	[Token(Token = "0x600295E")]
	[Address(RVA = "0x40CE4C0", Offset = "0x40CE4C0", VA = "0x40CE4C0")]
	private static string ResolveString(string key, string requestedLang)
	{
		return null;
	}
}
