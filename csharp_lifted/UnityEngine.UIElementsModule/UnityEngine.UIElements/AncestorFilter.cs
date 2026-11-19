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
	[Address(RVA = "0x6C4D620", Offset = "0x6C4C620", VA = "0x6C4D620")]
	public AncestorFilter()
	{
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x6C4D6A0", Offset = "0x6C4C6A0", VA = "0x6C4D6A0")]
	private void AddHash(int hash)
	{
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x6C4D730", Offset = "0x6C4C730", VA = "0x6C4D730")]
	public bool IsCandidate(StyleComplexSelector complexSel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x6C4D7F0", Offset = "0x6C4C7F0", VA = "0x6C4D7F0")]
	public void PushElement(VisualElement element)
	{
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x6C4DAD0", Offset = "0x6C4CAD0", VA = "0x6C4DAD0")]
	public void PopElement()
	{
	}
}
