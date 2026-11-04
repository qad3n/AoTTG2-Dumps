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
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000377")]
	public string Namespace
	{
		[Token(Token = "0x6000D59")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000378")]
	internal ObjectMap ObjectMap
	{
		[Token(Token = "0x6000D5B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D5C")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000379")]
	internal ArrayList RelatedMaps
	{
		[Token(Token = "0x6000D5D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D5E")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x1700037A")]
	internal SerializationFormat Format
	{
		[Token(Token = "0x6000D5F")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(SerializationFormat);
		}
		[Token(Token = "0x6000D60")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700037B")]
	internal SerializationSource Source
	{
		[Token(Token = "0x6000D61")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x275EBA0", Offset = "0x275D1A0", VA = "0x18275EBA0")]
	internal XmlMapping(string elementName, string ns)
	{
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
	public void SetKey(string key)
	{
	}
}
