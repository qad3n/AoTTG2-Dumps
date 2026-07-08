using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200044C")]
internal class CustomLogicSymbols
{
	[Token(Token = "0x40012A8")]
	[FieldOffset(Offset = "0x0")]
	public static Dictionary<string, int> Symbols;

	[Token(Token = "0x40012A9")]
	[FieldOffset(Offset = "0x8")]
	public static HashSet<string> SpecialSymbolNames;

	[Token(Token = "0x40012AA")]
	[FieldOffset(Offset = "0x10")]
	public static HashSet<string> AlphaSymbolNames;

	[Token(Token = "0x40012AB")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<int, int> BinopSymbolPriorities;

	[Token(Token = "0x40012AC")]
	[FieldOffset(Offset = "0x20")]
	public static HashSet<int> ClassSymbols;

	[Token(Token = "0x40012AD")]
	[FieldOffset(Offset = "0x28")]
	public static HashSet<int> ConditionalSymbols;

	[Token(Token = "0x40012AE")]
	[FieldOffset(Offset = "0x30")]
	private static bool _loaded;

	[Token(Token = "0x6002E6B")]
	[Address(RVA = "0x3E59370", Offset = "0x3E59370", VA = "0x3E59370")]
	public static void Init()
	{
	}

	[Token(Token = "0x6002E6C")]
	[Address(RVA = "0x3E59410", Offset = "0x3E59410", VA = "0x3E59410")]
	private static void ClearSymbols()
	{
	}

	[Token(Token = "0x6002E6D")]
	[Address(RVA = "0x3E59570", Offset = "0x3E59570", VA = "0x3E59570")]
	private static void AddSymbols()
	{
	}

	[Token(Token = "0x6002E6E")]
	[Address(RVA = "0x3E59FF0", Offset = "0x3E59FF0", VA = "0x3E59FF0")]
	private static void CategorizeSymbols()
	{
	}

	[Token(Token = "0x6002E6F")]
	[Address(RVA = "0x3E5AB60", Offset = "0x3E5AB60", VA = "0x3E5AB60")]
	public CustomLogicSymbols()
	{
	}
}
