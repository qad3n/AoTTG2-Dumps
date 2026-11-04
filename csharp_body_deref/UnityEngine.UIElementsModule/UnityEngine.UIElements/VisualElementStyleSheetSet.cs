// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementStyleSheetSet
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000551")]
[DefaultMember("Item")]
public struct VisualElementStyleSheetSet : IEquatable<VisualElementStyleSheetSet>
{
	[Token(Token = "0x40011FE")]
	[FieldOffset(Offset = "0x0")]
	private readonly VisualElement m_Element;

	[Token(Token = "0x17000A35")]
	public int count
	{
		[Token(Token = "0x6002823")]
		[Address(RVA = "0x316A1B0", Offset = "0x31687B0", VA = "0x18316A1B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600281F")]
	[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
	internal VisualElementStyleSheetSet(VisualElement element)
	{
	}

	[Token(Token = "0x6002820")]
	[Address(RVA = "0x3169D90", Offset = "0x3168390", VA = "0x183169D90")]
	public void Add(StyleSheet styleSheet)
	{
	}

	[Token(Token = "0x6002821")]
	[Address(RVA = "0x3169EA0", Offset = "0x31684A0", VA = "0x183169EA0")]
	public void Insert(int index, StyleSheet styleSheet)
	{
	}

	[Token(Token = "0x6002822")]
	[Address(RVA = "0x316A050", Offset = "0x3168650", VA = "0x18316A050")]
	public bool Remove(StyleSheet styleSheet)
	{
		return default(bool);
	}

	[Token(Token = "0x6002824")]
	[Address(RVA = "0x3169E90", Offset = "0x3168490", VA = "0x183169E90", Slot = "4")]
	public bool Equals(VisualElementStyleSheetSet other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002825")]
	[Address(RVA = "0x3169E00", Offset = "0x3168400", VA = "0x183169E00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002826")]
	[Address(RVA = "0x30ED3D0", Offset = "0x30EB9D0", VA = "0x1830ED3D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
