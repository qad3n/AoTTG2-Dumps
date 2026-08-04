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
		[Address(RVA = "0x4811860", Offset = "0x4811860", VA = "0x4811860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700035A")]
	public XmlAttributes this[Type type, string member]
	{
		[Token(Token = "0x6000D26")]
		[Address(RVA = "0x4811880", Offset = "0x4811880", VA = "0x4811880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x48117F0", Offset = "0x48117F0", VA = "0x48117F0")]
	public XmlAttributeOverrides()
	{
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x4811960", Offset = "0x4811960", VA = "0x4811960")]
	private TypeMember GetKey(Type type, string member)
	{
		return null;
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x48119C0", Offset = "0x48119C0", VA = "0x48119C0")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
