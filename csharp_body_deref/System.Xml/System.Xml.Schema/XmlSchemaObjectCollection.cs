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
		[Address(RVA = "0x43E81E0", Offset = "0x43E81E0", VA = "0x43E81E0", Slot = "29")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016DA")]
		[Address(RVA = "0x43E82D0", Offset = "0x43E82D0", VA = "0x43E82D0", Slot = "30")]
		set
		{
		}
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x43DE600", Offset = "0x43DE600", VA = "0x43DE600")]
	public XmlSchemaObjectCollection()
	{
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0x43E8380", Offset = "0x43E8380", VA = "0x43E8380")]
	public new XmlSchemaObjectEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x43E0150", Offset = "0x43E0150", VA = "0x43E0150")]
	public int Add(XmlSchemaObject item)
	{
		return default(int);
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x43E83F0", Offset = "0x43E83F0", VA = "0x43E83F0")]
	public void Insert(int index, XmlSchemaObject item)
	{
	}

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x43E84A0", Offset = "0x43E84A0", VA = "0x43E84A0")]
	public void Remove(XmlSchemaObject item)
	{
	}

	[Token(Token = "0x60016DF")]
	[Address(RVA = "0x43E8550", Offset = "0x43E8550", VA = "0x43E8550", Slot = "21")]
	protected override void OnInsert(int index, object item)
	{
	}

	[Token(Token = "0x60016E0")]
	[Address(RVA = "0x43E8580", Offset = "0x43E8580", VA = "0x43E8580", Slot = "20")]
	protected override void OnSet(int index, object oldValue, object newValue)
	{
	}

	[Token(Token = "0x60016E1")]
	[Address(RVA = "0x43E85E0", Offset = "0x43E85E0", VA = "0x43E85E0", Slot = "22")]
	protected override void OnClear()
	{
	}

	[Token(Token = "0x60016E2")]
	[Address(RVA = "0x43E8600", Offset = "0x43E8600", VA = "0x43E8600", Slot = "23")]
	protected override void OnRemove(int index, object item)
	{
	}

	[Token(Token = "0x60016E3")]
	[Address(RVA = "0x43E4D10", Offset = "0x43E4D10", VA = "0x43E4D10")]
	internal XmlSchemaObjectCollection Clone()
	{
		return null;
	}

	[Token(Token = "0x60016E4")]
	[Address(RVA = "0x43E8630", Offset = "0x43E8630", VA = "0x43E8630")]
	private void Add(XmlSchemaObjectCollection collToAdd)
	{
	}
}
