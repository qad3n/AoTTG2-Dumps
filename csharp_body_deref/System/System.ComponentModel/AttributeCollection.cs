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

[Token(Token = "0x2000170")]
public class AttributeCollection : ICollection, IEnumerable
{
	[Token(Token = "0x2000171")]
	private struct AttributeEntry
	{
		[Token(Token = "0x400063B")]
		[FieldOffset(Offset = "0x0")]
		public Type type;

		[Token(Token = "0x400063C")]
		[FieldOffset(Offset = "0x8")]
		public int index;
	}

	[Token(Token = "0x4000634")]
	[FieldOffset(Offset = "0x0")]
	public static readonly AttributeCollection Empty;

	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x8")]
	private static Hashtable s_defaultAttributes;

	[Token(Token = "0x4000636")]
	[FieldOffset(Offset = "0x10")]
	private readonly Attribute[] _attributes;

	[Token(Token = "0x4000637")]
	[FieldOffset(Offset = "0x10")]
	private static readonly object s_internalSyncObject;

	[Token(Token = "0x4000638")]
	private const int FOUND_TYPES_LIMIT = 5;

	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x18")]
	private AttributeEntry[] _foundAttributeTypes;

	[Token(Token = "0x400063A")]
	[FieldOffset(Offset = "0x20")]
	private int _index;

	[Token(Token = "0x170001BD")]
	protected virtual Attribute[] Attributes
	{
		[Token(Token = "0x6000936")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BE")]
	public int Count
	{
		[Token(Token = "0x6000937")]
		[Address(RVA = "0x287A8E0", Offset = "0x2878EE0", VA = "0x18287A8E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001BF")]
	public virtual Attribute this[int index]
	{
		[Token(Token = "0x6000938")]
		[Address(RVA = "0x287AAC0", Offset = "0x28790C0", VA = "0x18287AAC0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C0")]
	public virtual Attribute this[Type attributeType]
	{
		[Token(Token = "0x6000939")]
		[Address(RVA = "0x287AB00", Offset = "0x2879100", VA = "0x18287AB00", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C1")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000940")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C2")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000941")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6000942")]
		[Address(RVA = "0x287A8E0", Offset = "0x2878EE0", VA = "0x18287A8E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x287A9D0", Offset = "0x2878FD0", VA = "0x18287A9D0")]
	public AttributeCollection(params Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected AttributeCollection()
	{
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x2879E00", Offset = "0x2878400", VA = "0x182879E00")]
	public static AttributeCollection FromExisting(AttributeCollection existing, params Attribute[] newAttributes)
	{
		return null;
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x2879C70", Offset = "0x2878270", VA = "0x182879C70")]
	public bool Contains(Attribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x2879CE0", Offset = "0x28782E0", VA = "0x182879CE0")]
	public bool Contains(Attribute[] attributes)
	{
		return default(bool);
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x287A200", Offset = "0x2878800", VA = "0x18287A200")]
	protected Attribute GetDefaultAttribute(Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x287A700", Offset = "0x2878D00", VA = "0x18287A700")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x287A730", Offset = "0x2878D30", VA = "0x18287A730")]
	public bool Matches(Attribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x287A800", Offset = "0x2878E00", VA = "0x18287A800")]
	public bool Matches(Attribute[] attributes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x287A700", Offset = "0x2878D00", VA = "0x18287A700", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x2879D90", Offset = "0x2878390", VA = "0x182879D90", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}
}
