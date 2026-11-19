// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.AttributeCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000131")]
public class AttributeCollection : ICollection, IEnumerable
{
	[Token(Token = "0x2000132")]
	private struct AttributeEntry
	{
		[Token(Token = "0x400056C")]
		[FieldOffset(Offset = "0x0")]
		public Type type;

		[Token(Token = "0x400056D")]
		[FieldOffset(Offset = "0x8")]
		public int index;
	}

	[Token(Token = "0x4000565")]
	[FieldOffset(Offset = "0x0")]
	public static readonly AttributeCollection Empty;

	[Token(Token = "0x4000566")]
	[FieldOffset(Offset = "0x8")]
	private static Hashtable s_defaultAttributes;

	[Token(Token = "0x4000567")]
	[FieldOffset(Offset = "0x10")]
	private readonly Attribute[] _attributes;

	[Token(Token = "0x4000568")]
	[FieldOffset(Offset = "0x10")]
	private static readonly object s_internalSyncObject;

	[Token(Token = "0x4000569")]
	private const int FOUND_TYPES_LIMIT = 5;

	[Token(Token = "0x400056A")]
	[FieldOffset(Offset = "0x18")]
	private AttributeEntry[] _foundAttributeTypes;

	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x20")]
	private int _index;

	[Token(Token = "0x1700018E")]
	protected virtual Attribute[] Attributes
	{
		[Token(Token = "0x6000776")]
		[Address(RVA = "0x62251A0", Offset = "0x62241A0", VA = "0x62251A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018F")]
	public int Count
	{
		[Token(Token = "0x6000777")]
		[Address(RVA = "0x6225110", Offset = "0x6224110", VA = "0x6225110")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000190")]
	public virtual Attribute this[int index]
	{
		[Token(Token = "0x6000778")]
		[Address(RVA = "0x62251B0", Offset = "0x62241B0", VA = "0x62251B0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000191")]
	public virtual Attribute this[Type attributeType]
	{
		[Token(Token = "0x6000779")]
		[Address(RVA = "0x62251F0", Offset = "0x62241F0", VA = "0x62251F0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000192")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000780")]
		[Address(RVA = "0x6225FD0", Offset = "0x6224FD0", VA = "0x6225FD0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000193")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000781")]
		[Address(RVA = "0x6225FE0", Offset = "0x6224FE0", VA = "0x6225FE0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000194")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6000782")]
		[Address(RVA = "0x6225FF0", Offset = "0x6224FF0", VA = "0x6225FF0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x6224AE0", Offset = "0x6223AE0", VA = "0x6224AE0")]
	public AttributeCollection(params Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x6224C60", Offset = "0x6223C60", VA = "0x6224C60")]
	protected AttributeCollection()
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x6224C70", Offset = "0x6223C70", VA = "0x6224C70")]
	public static AttributeCollection FromExisting(AttributeCollection existing, params Attribute[] newAttributes)
	{
		return null;
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x6225D80", Offset = "0x6224D80", VA = "0x6225D80")]
	public bool Contains(Attribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x6225DF0", Offset = "0x6224DF0", VA = "0x6225DF0")]
	public bool Contains(Attribute[] attributes)
	{
		return default(bool);
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x6225740", Offset = "0x6224740", VA = "0x6225740")]
	protected Attribute GetDefaultAttribute(Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x6225E90", Offset = "0x6224E90", VA = "0x6225E90")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x6225EC0", Offset = "0x6224EC0", VA = "0x6225EC0")]
	public bool Matches(Attribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x6225F70", Offset = "0x6224F70", VA = "0x6225F70")]
	public bool Matches(Attribute[] attributes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x6226010", Offset = "0x6225010", VA = "0x6226010", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x6225130", Offset = "0x6224130", VA = "0x6225130", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}
}
