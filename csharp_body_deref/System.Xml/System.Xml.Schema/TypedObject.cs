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
			[Address(RVA = "0x4507230", Offset = "0x4507230", VA = "0x4507230")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000FB4")]
			[Address(RVA = "0x4507240", Offset = "0x4507240", VA = "0x4507240")]
			set
			{
			}
		}

		[Token(Token = "0x17000412")]
		public decimal[] Dvalue
		{
			[Token(Token = "0x6000FB5")]
			[Address(RVA = "0x4507250", Offset = "0x4507250", VA = "0x4507250")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000FB6")]
		[Address(RVA = "0x4506E00", Offset = "0x4506E00", VA = "0x4506E00")]
		public DecimalStruct()
		{
		}

		[Token(Token = "0x6000FB7")]
		[Address(RVA = "0x4506DA0", Offset = "0x4506DA0", VA = "0x4506DA0")]
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
		[Address(RVA = "0x4506810", Offset = "0x4506810", VA = "0x4506810")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700040C")]
	public bool IsList
	{
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x4506820", Offset = "0x4506820", VA = "0x4506820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700040D")]
	public bool IsDecimal
	{
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0x4506830", Offset = "0x4506830", VA = "0x4506830")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700040E")]
	public decimal[] Dvalue
	{
		[Token(Token = "0x6000FAB")]
		[Address(RVA = "0x4506850", Offset = "0x4506850", VA = "0x4506850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040F")]
	public object Value
	{
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x4506870", Offset = "0x4506870", VA = "0x4506870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000410")]
	public XmlSchemaDatatype Type
	{
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x4506880", Offset = "0x4506880", VA = "0x4506880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x4506890", Offset = "0x4506890", VA = "0x4506890")]
	public TypedObject(object obj, string svalue, XmlSchemaDatatype xsdtype)
	{
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x45069F0", Offset = "0x45069F0", VA = "0x45069F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x4506A00", Offset = "0x4506A00", VA = "0x4506A00")]
	public void SetDecimal()
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x4506E60", Offset = "0x4506E60", VA = "0x4506E60")]
	private bool ListDValueEquals(TypedObject other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x4506FB0", Offset = "0x4506FB0", VA = "0x4506FB0")]
	public bool Equals(TypedObject other)
	{
		return default(bool);
	}
}
