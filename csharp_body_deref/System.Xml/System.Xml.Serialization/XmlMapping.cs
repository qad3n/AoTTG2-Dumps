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
		[Address(RVA = "0x44D8150", Offset = "0x44D8150", VA = "0x44D8150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000377")]
	public string Namespace
	{
		[Token(Token = "0x6000D59")]
		[Address(RVA = "0x44D8160", Offset = "0x44D8160", VA = "0x44D8160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000378")]
	internal ObjectMap ObjectMap
	{
		[Token(Token = "0x6000D5B")]
		[Address(RVA = "0x44D8180", Offset = "0x44D8180", VA = "0x44D8180")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D5C")]
		[Address(RVA = "0x44D8190", Offset = "0x44D8190", VA = "0x44D8190")]
		set
		{
		}
	}

	[Token(Token = "0x17000379")]
	internal ArrayList RelatedMaps
	{
		[Token(Token = "0x6000D5D")]
		[Address(RVA = "0x44D81A0", Offset = "0x44D81A0", VA = "0x44D81A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D5E")]
		[Address(RVA = "0x44D81B0", Offset = "0x44D81B0", VA = "0x44D81B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700037A")]
	internal SerializationFormat Format
	{
		[Token(Token = "0x6000D5F")]
		[Address(RVA = "0x44D81C0", Offset = "0x44D81C0", VA = "0x44D81C0")]
		get
		{
			return default(SerializationFormat);
		}
		[Token(Token = "0x6000D60")]
		[Address(RVA = "0x44D81D0", Offset = "0x44D81D0", VA = "0x44D81D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700037B")]
	internal SerializationSource Source
	{
		[Token(Token = "0x6000D61")]
		[Address(RVA = "0x44D81E0", Offset = "0x44D81E0", VA = "0x44D81E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x44D8110", Offset = "0x44D8110", VA = "0x44D8110")]
	internal XmlMapping(string elementName, string ns)
	{
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x44D8170", Offset = "0x44D8170", VA = "0x44D8170")]
	public void SetKey(string key)
	{
	}
}
