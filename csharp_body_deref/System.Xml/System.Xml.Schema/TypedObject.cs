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
			[Address(RVA = "0x4844990", Offset = "0x4844990", VA = "0x4844990")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000FB4")]
			[Address(RVA = "0x48449A0", Offset = "0x48449A0", VA = "0x48449A0")]
			set
			{
			}
		}

		[Token(Token = "0x17000412")]
		public decimal[] Dvalue
		{
			[Token(Token = "0x6000FB5")]
			[Address(RVA = "0x48449B0", Offset = "0x48449B0", VA = "0x48449B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000FB6")]
		[Address(RVA = "0x4844560", Offset = "0x4844560", VA = "0x4844560")]
		public DecimalStruct()
		{
		}

		[Token(Token = "0x6000FB7")]
		[Address(RVA = "0x4844500", Offset = "0x4844500", VA = "0x4844500")]
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
		[Address(RVA = "0x4843F70", Offset = "0x4843F70", VA = "0x4843F70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700040C")]
	public bool IsList
	{
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x4843F80", Offset = "0x4843F80", VA = "0x4843F80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700040D")]
	public bool IsDecimal
	{
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0x4843F90", Offset = "0x4843F90", VA = "0x4843F90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700040E")]
	public decimal[] Dvalue
	{
		[Token(Token = "0x6000FAB")]
		[Address(RVA = "0x4843FB0", Offset = "0x4843FB0", VA = "0x4843FB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040F")]
	public object Value
	{
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x4843FD0", Offset = "0x4843FD0", VA = "0x4843FD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000410")]
	public XmlSchemaDatatype Type
	{
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x4843FE0", Offset = "0x4843FE0", VA = "0x4843FE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x4843FF0", Offset = "0x4843FF0", VA = "0x4843FF0")]
	public TypedObject(object obj, string svalue, XmlSchemaDatatype xsdtype)
	{
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x4844150", Offset = "0x4844150", VA = "0x4844150", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x4844160", Offset = "0x4844160", VA = "0x4844160")]
	public void SetDecimal()
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x48445C0", Offset = "0x48445C0", VA = "0x48445C0")]
	private bool ListDValueEquals(TypedObject other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x4844710", Offset = "0x4844710", VA = "0x4844710")]
	public bool Equals(TypedObject other)
	{
		return default(bool);
	}
}
