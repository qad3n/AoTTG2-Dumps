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
		[Address(RVA = "0x4286A80", Offset = "0x4286A80", VA = "0x4286A80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	internal XmlQualifiedName XmlBaseType
	{
		[Token(Token = "0x60007A4")]
		[Address(RVA = "0x4286A90", Offset = "0x4286A90", VA = "0x4286A90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013A")]
	internal string Name
	{
		[Token(Token = "0x60007A5")]
		[Address(RVA = "0x4286AA0", Offset = "0x4286AA0", VA = "0x4286AA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013B")]
	internal string Namespace
	{
		[Token(Token = "0x60007A6")]
		[Address(RVA = "0x4286AB0", Offset = "0x4286AB0", VA = "0x4286AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013C")]
	internal int Length
	{
		[Token(Token = "0x60007A7")]
		[Address(RVA = "0x4286AC0", Offset = "0x4286AC0", VA = "0x4286AC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013D")]
	internal int MaxLength
	{
		[Token(Token = "0x60007A8")]
		[Address(RVA = "0x4286AD0", Offset = "0x4286AD0", VA = "0x4286AD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007A9")]
		[Address(RVA = "0x4286AE0", Offset = "0x4286AE0", VA = "0x4286AE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	internal SimpleType BaseSimpleType
	{
		[Token(Token = "0x60007AA")]
		[Address(RVA = "0x4286AF0", Offset = "0x4286AF0", VA = "0x4286AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013F")]
	public string SimpleTypeQualifiedName
	{
		[Token(Token = "0x60007AB")]
		[Address(RVA = "0x4286B00", Offset = "0x4286B00", VA = "0x4286B00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x4285B80", Offset = "0x4285B80", VA = "0x4285B80")]
	internal SimpleType(string baseType)
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x4285CC0", Offset = "0x4285CC0", VA = "0x4285CC0")]
	internal SimpleType(XmlSchemaSimpleType node)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x4286930", Offset = "0x4286930", VA = "0x4286930", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x4285EA0", Offset = "0x4285EA0", VA = "0x4285EA0")]
	internal void LoadTypeValues(XmlSchemaSimpleType node)
	{
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x4286970", Offset = "0x4286970", VA = "0x4286970")]
	internal bool IsPlainString()
	{
		return default(bool);
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x4286B50", Offset = "0x4286B50", VA = "0x4286B50")]
	internal string QualifiedName(string name)
	{
		return null;
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x4286BB0", Offset = "0x4286BB0", VA = "0x4286BB0")]
	internal XmlNode ToNode(XmlDocument dc, Hashtable prefixes, bool inRemoting)
	{
		return null;
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x4287120", Offset = "0x4287120", VA = "0x4287120")]
	internal static SimpleType CreateEnumeratedType(string values)
	{
		return null;
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x42871A0", Offset = "0x42871A0", VA = "0x42871A0")]
	internal static SimpleType CreateByteArrayType(string encoding)
	{
		return null;
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x4287200", Offset = "0x4287200", VA = "0x4287200")]
	internal static SimpleType CreateLimitedStringType(int length)
	{
		return null;
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x4287270", Offset = "0x4287270", VA = "0x4287270")]
	internal static SimpleType CreateSimpleType(StorageType typeCode, Type type)
	{
		return null;
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x4287330", Offset = "0x4287330", VA = "0x4287330")]
	internal string HasConflictingDefinition(SimpleType otherSimpleType)
	{
		return null;
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x4287410", Offset = "0x4287410", VA = "0x4287410")]
	internal bool CanHaveMaxLength()
	{
		return default(bool);
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x4287470", Offset = "0x4287470", VA = "0x4287470")]
	internal void ConvertToAnnonymousSimpleType()
	{
	}
}
