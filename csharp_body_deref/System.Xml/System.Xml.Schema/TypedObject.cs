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
			[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000FB4")]
			[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
			set
			{
			}
		}

		[Token(Token = "0x17000412")]
		public decimal[] Dvalue
		{
			[Token(Token = "0x6000FB5")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000FB6")]
		[Address(RVA = "0x277D2D0", Offset = "0x277B8D0", VA = "0x18277D2D0")]
		public DecimalStruct()
		{
		}

		[Token(Token = "0x6000FB7")]
		[Address(RVA = "0x277D270", Offset = "0x277B870", VA = "0x18277D270")]
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
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700040C")]
	public bool IsList
	{
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0xAB9F70", Offset = "0xAB8570", VA = "0x180AB9F70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700040D")]
	public bool IsDecimal
	{
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0x27868E0", Offset = "0x2784EE0", VA = "0x1827868E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700040E")]
	public decimal[] Dvalue
	{
		[Token(Token = "0x6000FAB")]
		[Address(RVA = "0x19BCDF0", Offset = "0x19BB3F0", VA = "0x1819BCDF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040F")]
	public object Value
	{
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000410")]
	public XmlSchemaDatatype Type
	{
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x2786790", Offset = "0x2784D90", VA = "0x182786790")]
	public TypedObject(object obj, string svalue, XmlSchemaDatatype xsdtype)
	{
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x2786500", Offset = "0x2784B00", VA = "0x182786500")]
	public void SetDecimal()
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x27863E0", Offset = "0x27849E0", VA = "0x1827863E0")]
	private bool ListDValueEquals(TypedObject other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x2786060", Offset = "0x2784660", VA = "0x182786060")]
	public bool Equals(TypedObject other)
	{
		return default(bool);
	}
}
