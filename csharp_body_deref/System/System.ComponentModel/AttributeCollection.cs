using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000265")]
public class AttributeCollection : ICollection, IEnumerable
{
	[Token(Token = "0x2000266")]
	private struct AttributeEntry
	{
		[Token(Token = "0x4000D04")]
		[FieldOffset(Offset = "0x0")]
		public Type type;

		[Token(Token = "0x4000D05")]
		[FieldOffset(Offset = "0x8")]
		public int index;
	}

	[Token(Token = "0x4000CFD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly AttributeCollection Empty;

	[Token(Token = "0x4000CFE")]
	[FieldOffset(Offset = "0x8")]
	private static Hashtable s_defaultAttributes;

	[Token(Token = "0x4000CFF")]
	[FieldOffset(Offset = "0x10")]
	private readonly Attribute[] _attributes;

	[Token(Token = "0x4000D00")]
	[FieldOffset(Offset = "0x10")]
	private static readonly object s_internalSyncObject;

	[Token(Token = "0x4000D01")]
	private const int FOUND_TYPES_LIMIT = 5;

	[Token(Token = "0x4000D02")]
	[FieldOffset(Offset = "0x18")]
	private AttributeEntry[] _foundAttributeTypes;

	[Token(Token = "0x4000D03")]
	[FieldOffset(Offset = "0x20")]
	private int _index;

	[Token(Token = "0x1700034E")]
	protected virtual Attribute[] Attributes
	{
		[Token(Token = "0x6000EEE")]
		[Address(RVA = "0x455F650", Offset = "0x455F650", VA = "0x455F650", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034F")]
	public int Count
	{
		[Token(Token = "0x6000EEF")]
		[Address(RVA = "0x455F5C0", Offset = "0x455F5C0", VA = "0x455F5C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000350")]
	public virtual Attribute this[int index]
	{
		[Token(Token = "0x6000EF0")]
		[Address(RVA = "0x455F660", Offset = "0x455F660", VA = "0x455F660", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000351")]
	public virtual Attribute this[Type attributeType]
	{
		[Token(Token = "0x6000EF1")]
		[Address(RVA = "0x455F6A0", Offset = "0x455F6A0", VA = "0x455F6A0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000352")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000EF8")]
		[Address(RVA = "0x4560A30", Offset = "0x4560A30", VA = "0x4560A30", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000353")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000EF9")]
		[Address(RVA = "0x4560A40", Offset = "0x4560A40", VA = "0x4560A40", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000354")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6000EFA")]
		[Address(RVA = "0x4560A50", Offset = "0x4560A50", VA = "0x4560A50", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x455EF50", Offset = "0x455EF50", VA = "0x455EF50")]
	public AttributeCollection(params Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x455F0D0", Offset = "0x455F0D0", VA = "0x455F0D0")]
	protected AttributeCollection()
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x455F0E0", Offset = "0x455F0E0", VA = "0x455F0E0")]
	public static AttributeCollection FromExisting(AttributeCollection existing, params Attribute[] newAttributes)
	{
		return null;
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x45607D0", Offset = "0x45607D0", VA = "0x45607D0")]
	public bool Contains(Attribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x4560840", Offset = "0x4560840", VA = "0x4560840")]
	public bool Contains(Attribute[] attributes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x4560080", Offset = "0x4560080", VA = "0x4560080")]
	protected Attribute GetDefaultAttribute(Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x45608F0", Offset = "0x45608F0", VA = "0x45608F0")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x4560920", Offset = "0x4560920", VA = "0x4560920")]
	public bool Matches(Attribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x45609D0", Offset = "0x45609D0", VA = "0x45609D0")]
	public bool Matches(Attribute[] attributes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x4560A70", Offset = "0x4560A70", VA = "0x4560A70", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x455F5E0", Offset = "0x455F5E0", VA = "0x455F5E0", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}
}
