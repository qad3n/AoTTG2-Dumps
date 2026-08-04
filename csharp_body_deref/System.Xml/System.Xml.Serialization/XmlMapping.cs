// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlMapping
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000125")]
public abstract class XmlMapping
{
	[Token(Token = "0x4000657")]
	[FieldOffset(Offset = "0x10")]
	private ObjectMap map;

	[Token(Token = "0x4000658")]
	[FieldOffset(Offset = "0x18")]
	private ArrayList relatedMaps;

	[Token(Token = "0x4000659")]
	[FieldOffset(Offset = "0x20")]
	private SerializationFormat format;

	[Token(Token = "0x400065A")]
	[FieldOffset(Offset = "0x28")]
	private SerializationSource source;

	[Token(Token = "0x400065B")]
	[FieldOffset(Offset = "0x30")]
	internal string _elementName;

	[Token(Token = "0x400065C")]
	[FieldOffset(Offset = "0x38")]
	internal string _namespace;

	[Token(Token = "0x400065D")]
	[FieldOffset(Offset = "0x40")]
	private string key;

	[Token(Token = "0x17000376")]
	public string ElementName
	{
		[Token(Token = "0x6000D58")]
		[Address(RVA = "0x48158B0", Offset = "0x48158B0", VA = "0x48158B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000377")]
	public string Namespace
	{
		[Token(Token = "0x6000D59")]
		[Address(RVA = "0x48158C0", Offset = "0x48158C0", VA = "0x48158C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000378")]
	internal ObjectMap ObjectMap
	{
		[Token(Token = "0x6000D5B")]
		[Address(RVA = "0x48158E0", Offset = "0x48158E0", VA = "0x48158E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D5C")]
		[Address(RVA = "0x48158F0", Offset = "0x48158F0", VA = "0x48158F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000379")]
	internal ArrayList RelatedMaps
	{
		[Token(Token = "0x6000D5D")]
		[Address(RVA = "0x4815900", Offset = "0x4815900", VA = "0x4815900")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D5E")]
		[Address(RVA = "0x4815910", Offset = "0x4815910", VA = "0x4815910")]
		set
		{
		}
	}

	[Token(Token = "0x1700037A")]
	internal SerializationFormat Format
	{
		[Token(Token = "0x6000D5F")]
		[Address(RVA = "0x4815920", Offset = "0x4815920", VA = "0x4815920")]
		get
		{
			return default(SerializationFormat);
		}
		[Token(Token = "0x6000D60")]
		[Address(RVA = "0x4815930", Offset = "0x4815930", VA = "0x4815930")]
		set
		{
		}
	}

	[Token(Token = "0x1700037B")]
	internal SerializationSource Source
	{
		[Token(Token = "0x6000D61")]
		[Address(RVA = "0x4815940", Offset = "0x4815940", VA = "0x4815940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x4815870", Offset = "0x4815870", VA = "0x4815870")]
	internal XmlMapping(string elementName, string ns)
	{
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x48158D0", Offset = "0x48158D0", VA = "0x48158D0")]
	public void SetKey(string key)
	{
	}
}
