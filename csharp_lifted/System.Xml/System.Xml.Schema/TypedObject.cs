// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.TypedObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200016E")]
internal class TypedObject
{
	[Token(Token = "0x200016F")]
	private class DecimalStruct
	{
		[Token(Token = "0x400076A")]
		[FieldOffset(Offset = "0x10")]
		private bool isDecimal;

		[Token(Token = "0x400076B")]
		[FieldOffset(Offset = "0x18")]
		private decimal[] dvalue;

		[Token(Token = "0x17000411")]
		public bool IsDecimal
		{
			[Token(Token = "0x6000FB3")]
			[Address(RVA = "0x6143AB0", Offset = "0x6142AB0", VA = "0x6143AB0")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000FB4")]
			[Address(RVA = "0x6143AC0", Offset = "0x6142AC0", VA = "0x6143AC0")]
			set
			{
			}
		}

		[Token(Token = "0x17000412")]
		public decimal[] Dvalue
		{
			[Token(Token = "0x6000FB5")]
			[Address(RVA = "0x6143AD0", Offset = "0x6142AD0", VA = "0x6143AD0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000FB6")]
		[Address(RVA = "0x6143680", Offset = "0x6142680", VA = "0x6143680")]
		public DecimalStruct()
		{
		}

		[Token(Token = "0x6000FB7")]
		[Address(RVA = "0x6143620", Offset = "0x6142620", VA = "0x6143620")]
		public DecimalStruct(int dim)
		{
		}
	}

	[Token(Token = "0x4000764")]
	[FieldOffset(Offset = "0x10")]
	private DecimalStruct dstruct;

	[Token(Token = "0x4000765")]
	[FieldOffset(Offset = "0x18")]
	private object ovalue;

	[Token(Token = "0x4000766")]
	[FieldOffset(Offset = "0x20")]
	private string svalue;

	[Token(Token = "0x4000767")]
	[FieldOffset(Offset = "0x28")]
	private XmlSchemaDatatype xsdtype;

	[Token(Token = "0x4000768")]
	[FieldOffset(Offset = "0x30")]
	private int dim;

	[Token(Token = "0x4000769")]
	[FieldOffset(Offset = "0x34")]
	private bool isList;

	[Token(Token = "0x1700040B")]
	public int Dim
	{
		[Token(Token = "0x6000FA8")]
		[Address(RVA = "0x6143090", Offset = "0x6142090", VA = "0x6143090")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700040C")]
	public bool IsList
	{
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x61430A0", Offset = "0x61420A0", VA = "0x61430A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700040D")]
	public bool IsDecimal
	{
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0x61430B0", Offset = "0x61420B0", VA = "0x61430B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700040E")]
	public decimal[] Dvalue
	{
		[Token(Token = "0x6000FAB")]
		[Address(RVA = "0x61430D0", Offset = "0x61420D0", VA = "0x61430D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040F")]
	public object Value
	{
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x61430F0", Offset = "0x61420F0", VA = "0x61430F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000410")]
	public XmlSchemaDatatype Type
	{
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x6143100", Offset = "0x6142100", VA = "0x6143100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x6143110", Offset = "0x6142110", VA = "0x6143110")]
	public TypedObject(object obj, string svalue, XmlSchemaDatatype xsdtype)
	{
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x6143270", Offset = "0x6142270", VA = "0x6143270", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x6143280", Offset = "0x6142280", VA = "0x6143280")]
	public void SetDecimal()
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x61436E0", Offset = "0x61426E0", VA = "0x61436E0")]
	private bool ListDValueEquals(TypedObject other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x6143830", Offset = "0x6142830", VA = "0x6143830")]
	public bool Equals(TypedObject other)
	{
		return default(bool);
	}
}
