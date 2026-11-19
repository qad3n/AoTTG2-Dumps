// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaObjectCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000245")]
public class XmlSchemaObjectCollection : CollectionBase
{
	[Token(Token = "0x4000BC5")]
	[FieldOffset(Offset = "0x18")]
	private XmlSchemaObject parent;

	[Token(Token = "0x17000651")]
	public virtual XmlSchemaObject this[int index]
	{
		[Token(Token = "0x60016D9")]
		[Address(RVA = "0x602DA80", Offset = "0x602CA80", VA = "0x602DA80", Slot = "29")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016DA")]
		[Address(RVA = "0x602DB70", Offset = "0x602CB70", VA = "0x602DB70", Slot = "30")]
		set
		{
		}
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x6024010", Offset = "0x6023010", VA = "0x6024010")]
	public XmlSchemaObjectCollection()
	{
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0x602DC20", Offset = "0x602CC20", VA = "0x602DC20")]
	public new XmlSchemaObjectEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x6025AF0", Offset = "0x6024AF0", VA = "0x6025AF0")]
	public int Add(XmlSchemaObject item)
	{
		return default(int);
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x602DC90", Offset = "0x602CC90", VA = "0x602DC90")]
	public void Insert(int index, XmlSchemaObject item)
	{
	}

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x602DD40", Offset = "0x602CD40", VA = "0x602DD40")]
	public void Remove(XmlSchemaObject item)
	{
	}

	[Token(Token = "0x60016DF")]
	[Address(RVA = "0x602DDF0", Offset = "0x602CDF0", VA = "0x602DDF0", Slot = "21")]
	protected override void OnInsert(int index, object item)
	{
	}

	[Token(Token = "0x60016E0")]
	[Address(RVA = "0x602DE20", Offset = "0x602CE20", VA = "0x602DE20", Slot = "20")]
	protected override void OnSet(int index, object oldValue, object newValue)
	{
	}

	[Token(Token = "0x60016E1")]
	[Address(RVA = "0x602DE80", Offset = "0x602CE80", VA = "0x602DE80", Slot = "22")]
	protected override void OnClear()
	{
	}

	[Token(Token = "0x60016E2")]
	[Address(RVA = "0x602DEA0", Offset = "0x602CEA0", VA = "0x602DEA0", Slot = "23")]
	protected override void OnRemove(int index, object item)
	{
	}

	[Token(Token = "0x60016E3")]
	[Address(RVA = "0x602A5A0", Offset = "0x60295A0", VA = "0x602A5A0")]
	internal XmlSchemaObjectCollection Clone()
	{
		return null;
	}

	[Token(Token = "0x60016E4")]
	[Address(RVA = "0x602DED0", Offset = "0x602CED0", VA = "0x602DED0")]
	private void Add(XmlSchemaObjectCollection collToAdd)
	{
	}
}
