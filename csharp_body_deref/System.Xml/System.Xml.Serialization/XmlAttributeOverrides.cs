// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlAttributeOverrides
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200011C")]
public class XmlAttributeOverrides
{
	[Token(Token = "0x400063D")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable overrides;

	[Token(Token = "0x17000359")]
	public XmlAttributes this[Type type]
	{
		[Token(Token = "0x6000D25")]
		[Address(RVA = "0x275AF80", Offset = "0x2759580", VA = "0x18275AF80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700035A")]
	public XmlAttributes this[Type type, string member]
	{
		[Token(Token = "0x6000D26")]
		[Address(RVA = "0x275AFA0", Offset = "0x27595A0", VA = "0x18275AFA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x275AF10", Offset = "0x2759510", VA = "0x18275AF10")]
	public XmlAttributeOverrides()
	{
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x275AEA0", Offset = "0x27594A0", VA = "0x18275AEA0")]
	private TypeMember GetKey(Type type, string member)
	{
		return null;
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x275AAE0", Offset = "0x27590E0", VA = "0x18275AAE0")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
