using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x200053E")]
internal static class StyleSheetCache
{
	[Token(Token = "0x200053F")]
	private struct SheetHandleKey
	{
		[Token(Token = "0x400121B")]
		[FieldOffset(Offset = "0x0")]
		public readonly int sheetInstanceID;

		[Token(Token = "0x400121C")]
		[FieldOffset(Offset = "0x4")]
		public readonly int index;

		[Token(Token = "0x600202D")]
		[Address(RVA = "0x4CA5450", Offset = "0x4CA5450", VA = "0x4CA5450")]
		public SheetHandleKey(StyleSheet sheet, int index)
		{
		}
	}

	[Token(Token = "0x2000540")]
	private class SheetHandleKeyComparer : IEqualityComparer<SheetHandleKey>
	{
		[Token(Token = "0x600202E")]
		[Address(RVA = "0x4CA5730", Offset = "0x4CA5730", VA = "0x4CA5730", Slot = "4")]
		public bool Equals(SheetHandleKey x, SheetHandleKey y)
		{
			return default(bool);
		}

		[Token(Token = "0x600202F")]
		[Address(RVA = "0x4CA5750", Offset = "0x4CA5750", VA = "0x4CA5750", Slot = "5")]
		public int GetHashCode(SheetHandleKey key)
		{
			return default(int);
		}

		[Token(Token = "0x6002030")]
		[Address(RVA = "0x4CA5720", Offset = "0x4CA5720", VA = "0x4CA5720")]
		public SheetHandleKeyComparer()
		{
		}
	}

	[Token(Token = "0x4001219")]
	[FieldOffset(Offset = "0x0")]
	private static SheetHandleKeyComparer s_Comparer;

	[Token(Token = "0x400121A")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<SheetHandleKey, StylePropertyId[]> s_RulePropertyIdsCache;

	[Token(Token = "0x6002029")]
	[Address(RVA = "0x4C9F7B0", Offset = "0x4C9F7B0", VA = "0x4C9F7B0")]
	internal static StylePropertyId[] GetPropertyIds(StyleSheet sheet, int ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x600202A")]
	[Address(RVA = "0x4CA5570", Offset = "0x4CA5570", VA = "0x4CA5570")]
	internal static StylePropertyId[] GetPropertyIds(StyleRule rule)
	{
		return null;
	}

	[Token(Token = "0x600202B")]
	[Address(RVA = "0x4CA5480", Offset = "0x4CA5480", VA = "0x4CA5480")]
	private static StylePropertyId GetPropertyId(StyleRule rule, int index)
	{
		return default(StylePropertyId);
	}
}
