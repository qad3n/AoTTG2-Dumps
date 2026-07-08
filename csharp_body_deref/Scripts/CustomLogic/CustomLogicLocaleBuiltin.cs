using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003CA")]
[CompilerGenerated]
internal class CustomLogicLocaleBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20003CB")]
	public static class Factory
	{
		[Token(Token = "0x600279E")]
		[Address(RVA = "0x3DC8360", Offset = "0x3DC8360", VA = "0x3DC8360")]
		public static CustomLogicLocaleBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003CC")]
	public static class Bindings
	{
		[Token(Token = "0x400103C")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600279F")]
		[Address(RVA = "0x3DC8450", Offset = "0x3DC8450", VA = "0x3DC8450")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60027A0")]
		[Address(RVA = "0x3DC8840", Offset = "0x3DC8840", VA = "0x3DC8840")]
		public static CLPropertyBinding<CustomLogicLocaleBuiltin> __CreatePropertyBinding__CurrentLanguage()
		{
			return null;
		}

		[Token(Token = "0x60027A1")]
		[Address(RVA = "0x3DC88E0", Offset = "0x3DC88E0", VA = "0x3DC88E0")]
		public static CLPropertyBinding<CustomLogicLocaleBuiltin> __CreatePropertyBinding__DefaultLanguage()
		{
			return null;
		}

		[Token(Token = "0x60027A2")]
		[Address(RVA = "0x3DC89C0", Offset = "0x3DC89C0", VA = "0x3DC89C0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__Get()
		{
			return null;
		}

		[Token(Token = "0x60027A3")]
		[Address(RVA = "0x3DC8B10", Offset = "0x3DC8B10", VA = "0x3DC8B10")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x60027A4")]
		[Address(RVA = "0x3DC8C60", Offset = "0x3DC8C60", VA = "0x3DC8C60")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterLanguage()
		{
			return null;
		}

		[Token(Token = "0x60027A5")]
		[Address(RVA = "0x3DC8DB0", Offset = "0x3DC8DB0", VA = "0x3DC8DB0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterLanguages()
		{
			return null;
		}

		[Token(Token = "0x60027A6")]
		[Address(RVA = "0x3DC8F00", Offset = "0x3DC8F00", VA = "0x3DC8F00")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterFallback()
		{
			return null;
		}

		[Token(Token = "0x60027A7")]
		[Address(RVA = "0x3DC9050", Offset = "0x3DC9050", VA = "0x3DC9050")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RemoveFallback()
		{
			return null;
		}
	}

	[Token(Token = "0x4001039")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Dictionary<string, string>> _languages;

	[Token(Token = "0x400103A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, string> _languageFallbacks;

	[Token(Token = "0x17000813")]
	public static string CurrentLanguage
	{
		[Token(Token = "0x600278F")]
		[Address(RVA = "0x3DC7590", Offset = "0x3DC7590", VA = "0x3DC7590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000814")]
	public static string DefaultLanguage
	{
		[Token(Token = "0x6002790")]
		[Address(RVA = "0x3DC75F0", Offset = "0x3DC75F0", VA = "0x3DC75F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002791")]
		[Address(RVA = "0x3DC7660", Offset = "0x3DC7660", VA = "0x3DC7660")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000815")]
	public override string ClassName
	{
		[Token(Token = "0x6002799")]
		[Address(RVA = "0x3DC8220", Offset = "0x3DC8220", VA = "0x3DC8220", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000816")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600279A")]
		[Address(RVA = "0x3DC8250", Offset = "0x3DC8250", VA = "0x3DC8250", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000817")]
	public override bool IsStatic
	{
		[Token(Token = "0x600279B")]
		[Address(RVA = "0x3DC8260", Offset = "0x3DC8260", VA = "0x3DC8260", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000818")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600279C")]
		[Address(RVA = "0x3DC8270", Offset = "0x3DC8270", VA = "0x3DC8270", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600278E")]
	[Address(RVA = "0x3DC72C0", Offset = "0x3DC72C0", VA = "0x3DC72C0")]
	public CustomLogicLocaleBuiltin()
	{
	}

	[Token(Token = "0x6002792")]
	[Address(RVA = "0x3DC76C0", Offset = "0x3DC76C0", VA = "0x3DC76C0")]
	public static string Get(string key)
	{
		return null;
	}

	[Token(Token = "0x6002793")]
	[Address(RVA = "0x3DC7A80", Offset = "0x3DC7A80", VA = "0x3DC7A80")]
	public static void Set(string language, string key, string value)
	{
	}

	[Token(Token = "0x6002794")]
	[Address(RVA = "0x3DC7BE0", Offset = "0x3DC7BE0", VA = "0x3DC7BE0")]
	public static void RegisterLanguage(string language, CustomLogicDictBuiltin strings)
	{
	}

	[Token(Token = "0x6002795")]
	[Address(RVA = "0x3DC7F60", Offset = "0x3DC7F60", VA = "0x3DC7F60")]
	public static void RegisterLanguages(string pattern)
	{
	}

	[Token(Token = "0x6002796")]
	[Address(RVA = "0x3DC74F0", Offset = "0x3DC74F0", VA = "0x3DC74F0")]
	public static void RegisterFallback(string fromLanguage, string toLanguage)
	{
	}

	[Token(Token = "0x6002797")]
	[Address(RVA = "0x3DC8180", Offset = "0x3DC8180", VA = "0x3DC8180")]
	public static void RemoveFallback(string fromLanguage)
	{
	}

	[Token(Token = "0x6002798")]
	[Address(RVA = "0x3DC77B0", Offset = "0x3DC77B0", VA = "0x3DC77B0")]
	private static string ResolveString(string key, string requestedLang)
	{
		return null;
	}
}
