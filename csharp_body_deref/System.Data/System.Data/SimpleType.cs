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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013C")]
	internal XmlQualifiedName XmlBaseType
	{
		[Token(Token = "0x60007C3")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013D")]
	internal string Name
	{
		[Token(Token = "0x60007C4")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013E")]
	internal string Namespace
	{
		[Token(Token = "0x60007C5")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013F")]
	internal int Length
	{
		[Token(Token = "0x60007C6")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000140")]
	internal int MaxLength
	{
		[Token(Token = "0x60007C7")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	internal SimpleType BaseSimpleType
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000142")]
	public string SimpleTypeQualifiedName
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x2526DA0", Offset = "0x25253A0", VA = "0x182526DA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x2526A80", Offset = "0x2525080", VA = "0x182526A80")]
	internal SimpleType(string baseType)
	{
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x2526BC0", Offset = "0x25251C0", VA = "0x182526BC0")]
	internal SimpleType(XmlSchemaSimpleType node)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x2526530", Offset = "0x2524B30", VA = "0x182526530", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x2525C60", Offset = "0x2524260", VA = "0x182525C60")]
	internal void LoadTypeValues(XmlSchemaSimpleType node)
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x2525B50", Offset = "0x2524150", VA = "0x182525B50")]
	internal bool IsPlainString()
	{
		return default(bool);
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x25264C0", Offset = "0x2524AC0", VA = "0x1825264C0")]
	internal string QualifiedName(string name)
	{
		return null;
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x2526570", Offset = "0x2524B70", VA = "0x182526570")]
	internal XmlNode ToNode(XmlDocument dc, Hashtable prefixes, bool inRemoting)
	{
		return null;
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x2525860", Offset = "0x2523E60", VA = "0x182525860")]
	internal static SimpleType CreateEnumeratedType(string values)
	{
		return null;
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x2525800", Offset = "0x2523E00", VA = "0x182525800")]
	internal static SimpleType CreateByteArrayType(string encoding)
	{
		return null;
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x25258E0", Offset = "0x2523EE0", VA = "0x1825258E0")]
	internal static SimpleType CreateLimitedStringType(int length)
	{
		return null;
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x2525960", Offset = "0x2523F60", VA = "0x182525960")]
	internal static SimpleType CreateSimpleType(StorageType typeCode, Type type)
	{
		return null;
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x2525A30", Offset = "0x2524030", VA = "0x182525A30")]
	internal string HasConflictingDefinition(SimpleType otherSimpleType)
	{
		return null;
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x25256E0", Offset = "0x2523CE0", VA = "0x1825256E0")]
	internal bool CanHaveMaxLength()
	{
		return default(bool);
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x2525750", Offset = "0x2523D50", VA = "0x182525750")]
	internal void ConvertToAnnonymousSimpleType()
	{
	}
}
