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
	[Address(RVA = "0x4CA45E0", Offset = "0x4CA45E0", VA = "0x4CA45E0")]
	public SelectorMatchRecord(StyleSheet sheet, int styleSheetIndexInStack)
	{
	}

	[Token(Token = "0x6002024")]
	[Address(RVA = "0x4CA4610", Offset = "0x4CA4610", VA = "0x4CA4610")]
	public static int Compare(SelectorMatchRecord a, SelectorMatchRecord b)
	{
		return default(int);
	}
}
