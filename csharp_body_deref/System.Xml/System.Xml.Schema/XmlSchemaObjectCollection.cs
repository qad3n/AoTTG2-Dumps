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
		[Address(RVA = "0x266D160", Offset = "0x266B760", VA = "0x18266D160", Slot = "29")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016DA")]
		[Address(RVA = "0x266D210", Offset = "0x266B810", VA = "0x18266D210", Slot = "30")]
		set
		{
		}
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x1924500", Offset = "0x1922B00", VA = "0x181924500")]
	public XmlSchemaObjectCollection()
	{
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0x266CED0", Offset = "0x266B4D0", VA = "0x18266CED0")]
	public new XmlSchemaObjectEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x266CDE0", Offset = "0x266B3E0", VA = "0x18266CDE0")]
	public int Add(XmlSchemaObject item)
	{
		return default(int);
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x266CF50", Offset = "0x266B550", VA = "0x18266CF50")]
	public void Insert(int index, XmlSchemaObject item)
	{
	}

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x266D090", Offset = "0x266B690", VA = "0x18266D090")]
	public void Remove(XmlSchemaObject item)
	{
	}

	[Token(Token = "0x60016DF")]
	[Address(RVA = "0x266CFF0", Offset = "0x266B5F0", VA = "0x18266CFF0", Slot = "21")]
	protected override void OnInsert(int index, object item)
	{
	}

	[Token(Token = "0x60016E0")]
	[Address(RVA = "0x266D030", Offset = "0x266B630", VA = "0x18266D030", Slot = "20")]
	protected override void OnSet(int index, object oldValue, object newValue)
	{
	}

	[Token(Token = "0x60016E1")]
	[Address(RVA = "0x266CFD0", Offset = "0x266B5D0", VA = "0x18266CFD0", Slot = "22")]
	protected override void OnClear()
	{
	}

	[Token(Token = "0x60016E2")]
	[Address(RVA = "0x266D010", Offset = "0x266B610", VA = "0x18266D010", Slot = "23")]
	protected override void OnRemove(int index, object item)
	{
	}

	[Token(Token = "0x60016E3")]
	[Address(RVA = "0x266CE50", Offset = "0x266B450", VA = "0x18266CE50")]
	internal XmlSchemaObjectCollection Clone()
	{
		return null;
	}

	[Token(Token = "0x60016E4")]
	[Address(RVA = "0x266CDB0", Offset = "0x266B3B0", VA = "0x18266CDB0")]
	private void Add(XmlSchemaObjectCollection collToAdd)
	{
	}
}
