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

[Token(Token = "0x2000647")]
internal class CustomLogicSymbols
{
	[Token(Token = "0x4001B9E")]
	[FieldOffset(Offset = "0x0")]
	public static Dictionary<string, int> Symbols;

	[Token(Token = "0x4001B9F")]
	[FieldOffset(Offset = "0x8")]
	public static HashSet<string> SpecialSymbolNames;

	[Token(Token = "0x4001BA0")]
	[FieldOffset(Offset = "0x10")]
	public static HashSet<string> AlphaSymbolNames;

	[Token(Token = "0x4001BA1")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<int, int> BinopSymbolPriorities;

	[Token(Token = "0x4001BA2")]
	[FieldOffset(Offset = "0x20")]
	public static HashSet<int> ClassSymbols;

	[Token(Token = "0x4001BA3")]
	[FieldOffset(Offset = "0x28")]
	public static HashSet<int> ConditionalSymbols;

	[Token(Token = "0x4001BA4")]
	[FieldOffset(Offset = "0x30")]
	private static bool _loaded;

	[Token(Token = "0x6003C87")]
	[Address(RVA = "0x5A74620", Offset = "0x5A73620", VA = "0x5A74620")]
	public static void Init()
	{
	}

	[Token(Token = "0x6003C88")]
	[Address(RVA = "0x5A7F430", Offset = "0x5A7E430", VA = "0x5A7F430")]
	private static void ClearSymbols()
	{
	}

	[Token(Token = "0x6003C89")]
	[Address(RVA = "0x5A7F590", Offset = "0x5A7E590", VA = "0x5A7F590")]
	private static void AddSymbols()
	{
	}

	[Token(Token = "0x6003C8A")]
	[Address(RVA = "0x5A800C0", Offset = "0x5A7F0C0", VA = "0x5A800C0")]
	private static void CategorizeSymbols()
	{
	}

	[Token(Token = "0x6003C8B")]
	[Address(RVA = "0x5A80BF0", Offset = "0x5A7FBF0", VA = "0x5A80BF0")]
	public CustomLogicSymbols()
	{
	}
}
