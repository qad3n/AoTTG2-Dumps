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
[Token(Token = "0x2000086")]
internal sealed class SimpleType : ISerializable
{
	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0x10")]
	private string _baseType;

	[Token(Token = "0x40002B8")]
	[FieldOffset(Offset = "0x18")]
	private SimpleType _baseSimpleType;

	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x20")]
	private XmlQualifiedName _xmlBaseType;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x28")]
	private string _name;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x30")]
	private int _length;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x34")]
	private int _minLength;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x38")]
	private int _maxLength;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x40")]
	private string _pattern;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x48")]
	private string _ns;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0x50")]
	private string _maxExclusive;

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0x58")]
	private string _maxInclusive;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x60")]
	private string _minExclusive;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x68")]
	private string _minInclusive;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x70")]
	internal string _enumeration;

	[Token(Token = "0x17000138")]
	internal string BaseType
	{
		[Token(Token = "0x60007A3")]
		[Address(RVA = "0x45C41E0", Offset = "0x45C41E0", VA = "0x45C41E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	internal XmlQualifiedName XmlBaseType
	{
		[Token(Token = "0x60007A4")]
		[Address(RVA = "0x45C41F0", Offset = "0x45C41F0", VA = "0x45C41F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013A")]
	internal string Name
	{
		[Token(Token = "0x60007A5")]
		[Address(RVA = "0x45C4200", Offset = "0x45C4200", VA = "0x45C4200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013B")]
	internal string Namespace
	{
		[Token(Token = "0x60007A6")]
		[Address(RVA = "0x45C4210", Offset = "0x45C4210", VA = "0x45C4210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013C")]
	internal int Length
	{
		[Token(Token = "0x60007A7")]
		[Address(RVA = "0x45C4220", Offset = "0x45C4220", VA = "0x45C4220")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013D")]
	internal int MaxLength
	{
		[Token(Token = "0x60007A8")]
		[Address(RVA = "0x45C4230", Offset = "0x45C4230", VA = "0x45C4230")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007A9")]
		[Address(RVA = "0x45C4240", Offset = "0x45C4240", VA = "0x45C4240")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	internal SimpleType BaseSimpleType
	{
		[Token(Token = "0x60007AA")]
		[Address(RVA = "0x45C4250", Offset = "0x45C4250", VA = "0x45C4250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013F")]
	public string SimpleTypeQualifiedName
	{
		[Token(Token = "0x60007AB")]
		[Address(RVA = "0x45C4260", Offset = "0x45C4260", VA = "0x45C4260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x45C32E0", Offset = "0x45C32E0", VA = "0x45C32E0")]
	internal SimpleType(string baseType)
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x45C3420", Offset = "0x45C3420", VA = "0x45C3420")]
	internal SimpleType(XmlSchemaSimpleType node)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x45C4090", Offset = "0x45C4090", VA = "0x45C4090", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x45C3600", Offset = "0x45C3600", VA = "0x45C3600")]
	internal void LoadTypeValues(XmlSchemaSimpleType node)
	{
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x45C40D0", Offset = "0x45C40D0", VA = "0x45C40D0")]
	internal bool IsPlainString()
	{
		return default(bool);
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x45C42B0", Offset = "0x45C42B0", VA = "0x45C42B0")]
	internal string QualifiedName(string name)
	{
		return null;
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x45C4310", Offset = "0x45C4310", VA = "0x45C4310")]
	internal XmlNode ToNode(XmlDocument dc, Hashtable prefixes, bool inRemoting)
	{
		return null;
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x45C4880", Offset = "0x45C4880", VA = "0x45C4880")]
	internal static SimpleType CreateEnumeratedType(string values)
	{
		return null;
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x45C4900", Offset = "0x45C4900", VA = "0x45C4900")]
	internal static SimpleType CreateByteArrayType(string encoding)
	{
		return null;
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x45C4960", Offset = "0x45C4960", VA = "0x45C4960")]
	internal static SimpleType CreateLimitedStringType(int length)
	{
		return null;
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x45C49D0", Offset = "0x45C49D0", VA = "0x45C49D0")]
	internal static SimpleType CreateSimpleType(StorageType typeCode, Type type)
	{
		return null;
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x45C4A90", Offset = "0x45C4A90", VA = "0x45C4A90")]
	internal string HasConflictingDefinition(SimpleType otherSimpleType)
	{
		return null;
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x45C4B70", Offset = "0x45C4B70", VA = "0x45C4B70")]
	internal bool CanHaveMaxLength()
	{
		return default(bool);
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x45C4BD0", Offset = "0x45C4BD0", VA = "0x45C4BD0")]
	internal void ConvertToAnnonymousSimpleType()
	{
	}
}
