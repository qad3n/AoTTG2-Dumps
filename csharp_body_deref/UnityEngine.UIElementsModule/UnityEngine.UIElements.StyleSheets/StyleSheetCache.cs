// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.StyleSheetCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4FCCD80", Offset = "0x4FCCD80", VA = "0x4FCCD80")]
		public SheetHandleKey(StyleSheet sheet, int index)
		{
		}
	}

	[Token(Token = "0x2000540")]
	private class SheetHandleKeyComparer : IEqualityComparer<SheetHandleKey>
	{
		[Token(Token = "0x600202E")]
		[Address(RVA = "0x4FCD060", Offset = "0x4FCD060", VA = "0x4FCD060", Slot = "4")]
		public bool Equals(SheetHandleKey x, SheetHandleKey y)
		{
			return default(bool);
		}

		[Token(Token = "0x600202F")]
		[Address(RVA = "0x4FCD080", Offset = "0x4FCD080", VA = "0x4FCD080", Slot = "5")]
		public int GetHashCode(SheetHandleKey key)
		{
			return default(int);
		}

		[Token(Token = "0x6002030")]
		[Address(RVA = "0x4FCD050", Offset = "0x4FCD050", VA = "0x4FCD050")]
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
	[Address(RVA = "0x4FC70E0", Offset = "0x4FC70E0", VA = "0x4FC70E0")]
	internal static StylePropertyId[] GetPropertyIds(StyleSheet sheet, int ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x600202A")]
	[Address(RVA = "0x4FCCEA0", Offset = "0x4FCCEA0", VA = "0x4FCCEA0")]
	internal static StylePropertyId[] GetPropertyIds(StyleRule rule)
	{
		return null;
	}

	[Token(Token = "0x600202B")]
	[Address(RVA = "0x4FCCDB0", Offset = "0x4FCCDB0", VA = "0x4FCCDB0")]
	private static StylePropertyId GetPropertyId(StyleRule rule, int index)
	{
		return default(StylePropertyId);
	}
}
