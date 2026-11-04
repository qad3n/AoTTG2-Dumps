// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.AncestorFilter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200017F")]
internal class AncestorFilter
{
	[Token(Token = "0x40006D6")]
	[FieldOffset(Offset = "0x10")]
	private CountingBloomFilter m_CountingBloomFilter;

	[Token(Token = "0x40006D7")]
	[FieldOffset(Offset = "0x4010")]
	private Stack<int> m_HashStack;

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x323E420", Offset = "0x323CA20", VA = "0x18323E420")]
	public AncestorFilter()
	{
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x323E050", Offset = "0x323C650", VA = "0x18323E050")]
	private void AddHash(int hash)
	{
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x323E0D0", Offset = "0x323C6D0", VA = "0x18323E0D0")]
	public bool IsCandidate(StyleComplexSelector complexSel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x323E210", Offset = "0x323C810", VA = "0x18323E210")]
	public void PushElement(VisualElement element)
	{
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x323E130", Offset = "0x323C730", VA = "0x18323E130")]
	public void PopElement()
	{
	}
}
