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
	[Address(RVA = "0x4CEE2C0", Offset = "0x4CEE2C0", VA = "0x4CEE2C0")]
	public AncestorFilter()
	{
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x4CEE340", Offset = "0x4CEE340", VA = "0x4CEE340")]
	private void AddHash(int hash)
	{
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x4CEE3D0", Offset = "0x4CEE3D0", VA = "0x4CEE3D0")]
	public bool IsCandidate(StyleComplexSelector complexSel)
	{
		return default(bool);
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x4CEE490", Offset = "0x4CEE490", VA = "0x4CEE490")]
	public void PushElement(VisualElement element)
	{
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x4CEE850", Offset = "0x4CEE850", VA = "0x4CEE850")]
	public void PopElement()
	{
	}
}
