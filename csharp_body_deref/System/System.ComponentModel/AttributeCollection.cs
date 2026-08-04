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
		[Address(RVA = "0x4884750", Offset = "0x4884750", VA = "0x4884750", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034F")]
	public int Count
	{
		[Token(Token = "0x6000EEF")]
		[Address(RVA = "0x48846C0", Offset = "0x48846C0", VA = "0x48846C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000350")]
	public virtual Attribute this[int index]
	{
		[Token(Token = "0x6000EF0")]
		[Address(RVA = "0x4884760", Offset = "0x4884760", VA = "0x4884760", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000351")]
	public virtual Attribute this[Type attributeType]
	{
		[Token(Token = "0x6000EF1")]
		[Address(RVA = "0x48847A0", Offset = "0x48847A0", VA = "0x48847A0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000352")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000EF8")]
		[Address(RVA = "0x4885B30", Offset = "0x4885B30", VA = "0x4885B30", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000353")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000EF9")]
		[Address(RVA = "0x4885B40", Offset = "0x4885B40", VA = "0x4885B40", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000354")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6000EFA")]
		[Address(RVA = "0x4885B50", Offset = "0x4885B50", VA = "0x4885B50", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x4884050", Offset = "0x4884050", VA = "0x4884050")]
	public AttributeCollection(params Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x48841D0", Offset = "0x48841D0", VA = "0x48841D0")]
	protected AttributeCollection()
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x48841E0", Offset = "0x48841E0", VA = "0x48841E0")]
	public static AttributeCollection FromExisting(AttributeCollection existing, params Attribute[] newAttributes)
	{
		return null;
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x48858D0", Offset = "0x48858D0", VA = "0x48858D0")]
	public bool Contains(Attribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x4885940", Offset = "0x4885940", VA = "0x4885940")]
	public bool Contains(Attribute[] attributes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x4885180", Offset = "0x4885180", VA = "0x4885180")]
	protected Attribute GetDefaultAttribute(Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x48859F0", Offset = "0x48859F0", VA = "0x48859F0")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x4885A20", Offset = "0x4885A20", VA = "0x4885A20")]
	public bool Matches(Attribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x4885AD0", Offset = "0x4885AD0", VA = "0x4885AD0")]
	public bool Matches(Attribute[] attributes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x4885B70", Offset = "0x4885B70", VA = "0x4885B70", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x48846E0", Offset = "0x48846E0", VA = "0x48846E0", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}
}
