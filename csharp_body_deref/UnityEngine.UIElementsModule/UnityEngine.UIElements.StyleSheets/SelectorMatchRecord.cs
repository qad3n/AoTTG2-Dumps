// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.SelectorMatchRecord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x200053C")]
internal struct SelectorMatchRecord
{
	[Token(Token = "0x4001216")]
	[FieldOffset(Offset = "0x0")]
	public StyleSheet sheet;

	[Token(Token = "0x4001217")]
	[FieldOffset(Offset = "0x8")]
	public int styleSheetIndexInStack;

	[Token(Token = "0x4001218")]
	[FieldOffset(Offset = "0x10")]
	public StyleComplexSelector complexSelector;

	[Token(Token = "0x6002023")]
	[Address(RVA = "0x4FCBF10", Offset = "0x4FCBF10", VA = "0x4FCBF10")]
	public SelectorMatchRecord(StyleSheet sheet, int styleSheetIndexInStack)
	{
	}

	[Token(Token = "0x6002024")]
	[Address(RVA = "0x4FCBF40", Offset = "0x4FCBF40", VA = "0x4FCBF40")]
	public static int Compare(SelectorMatchRecord a, SelectorMatchRecord b)
	{
		return default(int);
	}
}
