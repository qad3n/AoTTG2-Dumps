// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.SelectorMatchRecord
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000634")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal struct SelectorMatchRecord : IEquatable<SelectorMatchRecord>
{
	[Token(Token = "0x40017C0")]
	[FieldOffset(Offset = "0x0")]
	public StyleSheet sheet;

	[Token(Token = "0x40017C1")]
	[FieldOffset(Offset = "0x8")]
	public int styleSheetIndexInStack;

	[Token(Token = "0x40017C2")]
	[FieldOffset(Offset = "0x10")]
	public StyleComplexSelector complexSelector;

	[Token(Token = "0x6002D8F")]
	[Address(RVA = "0x31ED870", Offset = "0x31EBE70", VA = "0x1831ED870")]
	public SelectorMatchRecord(StyleSheet sheet, int styleSheetIndexInStack)
	{
	}

	[Token(Token = "0x6002D90")]
	[Address(RVA = "0x31ED5C0", Offset = "0x31EBBC0", VA = "0x1831ED5C0")]
	public static int Compare(SelectorMatchRecord a, SelectorMatchRecord b)
	{
		return default(int);
	}

	[Token(Token = "0x6002D91")]
	[Address(RVA = "0x31ED6C0", Offset = "0x31EBCC0", VA = "0x1831ED6C0", Slot = "4")]
	public bool Equals(SelectorMatchRecord other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D92")]
	[Address(RVA = "0x31ED720", Offset = "0x31EBD20", VA = "0x1831ED720", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D93")]
	[Address(RVA = "0x31ED7F0", Offset = "0x31EBDF0", VA = "0x1831ED7F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
