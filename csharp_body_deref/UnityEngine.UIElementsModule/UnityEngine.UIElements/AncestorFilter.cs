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

[Token(Token = "0x2000133")]
internal class AncestorFilter
{
	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x10")]
	private CountingBloomFilter m_CountingBloomFilter;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x4010")]
	private Stack<int> m_HashStack;

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x5015BF0", Offset = "0x5015BF0", VA = "0x5015BF0")]
	public AncestorFilter()
	{
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x5015C70", Offset = "0x5015C70", VA = "0x5015C70")]
	private void AddHash(int hash)
	{
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x5015D00", Offset = "0x5015D00", VA = "0x5015D00")]
	public bool IsCandidate(StyleComplexSelector complexSel)
	{
		return default(bool);
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x5015DC0", Offset = "0x5015DC0", VA = "0x5015DC0")]
	public void PushElement(VisualElement element)
	{
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x5016180", Offset = "0x5016180", VA = "0x5016180")]
	public void PopElement()
	{
	}
}
