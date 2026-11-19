// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SimpleType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.Common;
using System.Runtime.Serialization;
using System.Xml;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x2000090")]
internal sealed class SimpleType : ISerializable
{
	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x10")]
	private string _baseType;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x18")]
	private SimpleType _baseSimpleType;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x20")]
	private XmlQualifiedName _xmlBaseType;

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x28")]
	private string _name;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x30")]
	private int _length;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0x34")]
	private int _minLength;

	[Token(Token = "0x40002D0")]
	[FieldOffset(Offset = "0x38")]
	private int _maxLength;

	[Token(Token = "0x40002D1")]
	[FieldOffset(Offset = "0x40")]
	private string _pattern;

	[Token(Token = "0x40002D2")]
	[FieldOffset(Offset = "0x48")]
	private string _ns;

	[Token(Token = "0x40002D3")]
	[FieldOffset(Offset = "0x50")]
	private string _maxExclusive;

	[Token(Token = "0x40002D4")]
	[FieldOffset(Offset = "0x58")]
	private string _maxInclusive;

	[Token(Token = "0x40002D5")]
	[FieldOffset(Offset = "0x60")]
	private string _minExclusive;

	[Token(Token = "0x40002D6")]
	[FieldOffset(Offset = "0x68")]
	private string _minInclusive;

	[Token(Token = "0x40002D7")]
	[FieldOffset(Offset = "0x70")]
	internal string _enumeration;

	[Token(Token = "0x1700013B")]
	internal string BaseType
	{
		[Token(Token = "0x60007C2")]
		[Address(RVA = "0x5ECCAB0", Offset = "0x5ECBAB0", VA = "0x5ECCAB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013C")]
	internal XmlQualifiedName XmlBaseType
	{
		[Token(Token = "0x60007C3")]
		[Address(RVA = "0x5ECCAC0", Offset = "0x5ECBAC0", VA = "0x5ECCAC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013D")]
	internal string Name
	{
		[Token(Token = "0x60007C4")]
		[Address(RVA = "0x5ECCAD0", Offset = "0x5ECBAD0", VA = "0x5ECCAD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013E")]
	internal string Namespace
	{
		[Token(Token = "0x60007C5")]
		[Address(RVA = "0x5ECCAE0", Offset = "0x5ECBAE0", VA = "0x5ECCAE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013F")]
	internal int Length
	{
		[Token(Token = "0x60007C6")]
		[Address(RVA = "0x5ECCAF0", Offset = "0x5ECBAF0", VA = "0x5ECCAF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000140")]
	internal int MaxLength
	{
		[Token(Token = "0x60007C7")]
		[Address(RVA = "0x5ECCB00", Offset = "0x5ECBB00", VA = "0x5ECCB00")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x5ECCB10", Offset = "0x5ECBB10", VA = "0x5ECCB10")]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	internal SimpleType BaseSimpleType
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x5ECCB20", Offset = "0x5ECBB20", VA = "0x5ECCB20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000142")]
	public string SimpleTypeQualifiedName
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x5ECCB30", Offset = "0x5ECBB30", VA = "0x5ECCB30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x5ECBD00", Offset = "0x5ECAD00", VA = "0x5ECBD00")]
	internal SimpleType(string baseType)
	{
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x5ECBE40", Offset = "0x5ECAE40", VA = "0x5ECBE40")]
	internal SimpleType(XmlSchemaSimpleType node)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x5ECC960", Offset = "0x5ECB960", VA = "0x5ECC960", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x5ECC020", Offset = "0x5ECB020", VA = "0x5ECC020")]
	internal void LoadTypeValues(XmlSchemaSimpleType node)
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x5ECC9A0", Offset = "0x5ECB9A0", VA = "0x5ECC9A0")]
	internal bool IsPlainString()
	{
		return default(bool);
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x5ECCB80", Offset = "0x5ECBB80", VA = "0x5ECCB80")]
	internal string QualifiedName(string name)
	{
		return null;
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x5ECCBE0", Offset = "0x5ECBBE0", VA = "0x5ECCBE0")]
	internal XmlNode ToNode(XmlDocument dc, Hashtable prefixes, bool inRemoting)
	{
		return null;
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x5ECD130", Offset = "0x5ECC130", VA = "0x5ECD130")]
	internal static SimpleType CreateEnumeratedType(string values)
	{
		return null;
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x5ECD1B0", Offset = "0x5ECC1B0", VA = "0x5ECD1B0")]
	internal static SimpleType CreateByteArrayType(string encoding)
	{
		return null;
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x5ECD210", Offset = "0x5ECC210", VA = "0x5ECD210")]
	internal static SimpleType CreateLimitedStringType(int length)
	{
		return null;
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x5ECD280", Offset = "0x5ECC280", VA = "0x5ECD280")]
	internal static SimpleType CreateSimpleType(StorageType typeCode, Type type)
	{
		return null;
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x5ECD340", Offset = "0x5ECC340", VA = "0x5ECD340")]
	internal string HasConflictingDefinition(SimpleType otherSimpleType)
	{
		return null;
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x5ECD420", Offset = "0x5ECC420", VA = "0x5ECD420")]
	internal bool CanHaveMaxLength()
	{
		return default(bool);
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x5ECD480", Offset = "0x5ECC480", VA = "0x5ECD480")]
	internal void ConvertToAnnonymousSimpleType()
	{
	}
}
