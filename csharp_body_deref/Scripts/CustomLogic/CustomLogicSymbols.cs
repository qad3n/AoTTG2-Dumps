// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicSymbols
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicSymbols.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicSymbols.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000491")]
internal class CustomLogicSymbols
{
	[Token(Token = "0x40013B7")]
	[FieldOffset(Offset = "0x0")]
	public static Dictionary<string, int> Symbols;

	[Token(Token = "0x40013B8")]
	[FieldOffset(Offset = "0x8")]
	public static HashSet<string> SpecialSymbolNames;

	[Token(Token = "0x40013B9")]
	[FieldOffset(Offset = "0x10")]
	public static HashSet<string> AlphaSymbolNames;

	[Token(Token = "0x40013BA")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<int, int> BinopSymbolPriorities;

	[Token(Token = "0x40013BB")]
	[FieldOffset(Offset = "0x20")]
	public static HashSet<int> ClassSymbols;

	[Token(Token = "0x40013BC")]
	[FieldOffset(Offset = "0x28")]
	public static HashSet<int> ConditionalSymbols;

	[Token(Token = "0x40013BD")]
	[FieldOffset(Offset = "0x30")]
	private static bool _loaded;

	[Token(Token = "0x6003078")]
	[Address(RVA = "0x415E6C0", Offset = "0x415E6C0", VA = "0x415E6C0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6003079")]
	[Address(RVA = "0x4165290", Offset = "0x4165290", VA = "0x4165290")]
	private static void ClearSymbols()
	{
	}

	[Token(Token = "0x600307A")]
	[Address(RVA = "0x41653F0", Offset = "0x41653F0", VA = "0x41653F0")]
	private static void AddSymbols()
	{
	}

	[Token(Token = "0x600307B")]
	[Address(RVA = "0x4165E70", Offset = "0x4165E70", VA = "0x4165E70")]
	private static void CategorizeSymbols()
	{
	}

	[Token(Token = "0x600307C")]
	[Address(RVA = "0x41669E0", Offset = "0x41669E0", VA = "0x41669E0")]
	public CustomLogicSymbols()
	{
	}
}
