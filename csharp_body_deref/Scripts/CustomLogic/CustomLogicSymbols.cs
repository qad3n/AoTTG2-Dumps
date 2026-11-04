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

[Token(Token = "0x20005E8")]
internal class CustomLogicSymbols
{
	[Token(Token = "0x40019FD")]
	[FieldOffset(Offset = "0x0")]
	public static Dictionary<string, int> Symbols;

	[Token(Token = "0x40019FE")]
	[FieldOffset(Offset = "0x8")]
	public static HashSet<string> SpecialSymbolNames;

	[Token(Token = "0x40019FF")]
	[FieldOffset(Offset = "0x10")]
	public static HashSet<string> AlphaSymbolNames;

	[Token(Token = "0x4001A00")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<int, int> BinopSymbolPriorities;

	[Token(Token = "0x4001A01")]
	[FieldOffset(Offset = "0x20")]
	public static HashSet<int> ClassSymbols;

	[Token(Token = "0x4001A02")]
	[FieldOffset(Offset = "0x28")]
	public static HashSet<int> ConditionalSymbols;

	[Token(Token = "0x4001A03")]
	[FieldOffset(Offset = "0x30")]
	private static bool _loaded;

	[Token(Token = "0x60039F9")]
	[Address(RVA = "0x20E9DC0", Offset = "0x20E83C0", VA = "0x1820E9DC0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60039FA")]
	[Address(RVA = "0x20E9C70", Offset = "0x20E8270", VA = "0x1820E9C70")]
	private static void ClearSymbols()
	{
	}

	[Token(Token = "0x60039FB")]
	[Address(RVA = "0x20E85C0", Offset = "0x20E6BC0", VA = "0x1820E85C0")]
	private static void AddSymbols()
	{
	}

	[Token(Token = "0x60039FC")]
	[Address(RVA = "0x20E91E0", Offset = "0x20E77E0", VA = "0x1820E91E0")]
	private static void CategorizeSymbols()
	{
	}

	[Token(Token = "0x60039FD")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CustomLogicSymbols()
	{
	}
}
