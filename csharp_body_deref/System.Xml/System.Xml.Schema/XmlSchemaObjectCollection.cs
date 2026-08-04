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
		[Address(RVA = "0x4725940", Offset = "0x4725940", VA = "0x4725940", Slot = "29")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016DA")]
		[Address(RVA = "0x4725A30", Offset = "0x4725A30", VA = "0x4725A30", Slot = "30")]
		set
		{
		}
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x471BD60", Offset = "0x471BD60", VA = "0x471BD60")]
	public XmlSchemaObjectCollection()
	{
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0x4725AE0", Offset = "0x4725AE0", VA = "0x4725AE0")]
	public new XmlSchemaObjectEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x471D8B0", Offset = "0x471D8B0", VA = "0x471D8B0")]
	public int Add(XmlSchemaObject item)
	{
		return default(int);
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x4725B50", Offset = "0x4725B50", VA = "0x4725B50")]
	public void Insert(int index, XmlSchemaObject item)
	{
	}

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x4725C00", Offset = "0x4725C00", VA = "0x4725C00")]
	public void Remove(XmlSchemaObject item)
	{
	}

	[Token(Token = "0x60016DF")]
	[Address(RVA = "0x4725CB0", Offset = "0x4725CB0", VA = "0x4725CB0", Slot = "21")]
	protected override void OnInsert(int index, object item)
	{
	}

	[Token(Token = "0x60016E0")]
	[Address(RVA = "0x4725CE0", Offset = "0x4725CE0", VA = "0x4725CE0", Slot = "20")]
	protected override void OnSet(int index, object oldValue, object newValue)
	{
	}

	[Token(Token = "0x60016E1")]
	[Address(RVA = "0x4725D40", Offset = "0x4725D40", VA = "0x4725D40", Slot = "22")]
	protected override void OnClear()
	{
	}

	[Token(Token = "0x60016E2")]
	[Address(RVA = "0x4725D60", Offset = "0x4725D60", VA = "0x4725D60", Slot = "23")]
	protected override void OnRemove(int index, object item)
	{
	}

	[Token(Token = "0x60016E3")]
	[Address(RVA = "0x4722470", Offset = "0x4722470", VA = "0x4722470")]
	internal XmlSchemaObjectCollection Clone()
	{
		return null;
	}

	[Token(Token = "0x60016E4")]
	[Address(RVA = "0x4725D90", Offset = "0x4725D90", VA = "0x4725D90")]
	private void Add(XmlSchemaObjectCollection collToAdd)
	{
	}
}
