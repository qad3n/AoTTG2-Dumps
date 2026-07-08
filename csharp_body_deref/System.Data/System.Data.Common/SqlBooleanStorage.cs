using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D8")]
internal sealed class SqlBooleanStorage : DataStorage
{
	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x50")]
	private SqlBoolean[] _values;

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x4317680", Offset = "0x4317680", VA = "0x4317680")]
	public SqlBooleanStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x43177A0", Offset = "0x43177A0", VA = "0x43177A0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x4317DA0", Offset = "0x4317DA0", VA = "0x4317DA0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x4317E30", Offset = "0x4317E30", VA = "0x4317E30", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x4317EE0", Offset = "0x4317EE0", VA = "0x4317EE0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x4317F40", Offset = "0x4317F40", VA = "0x4317F40", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x4317F70", Offset = "0x4317F70", VA = "0x4317F70", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x4317FE0", Offset = "0x4317FE0", VA = "0x4317FE0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x4318050", Offset = "0x4318050", VA = "0x4318050", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x4318090", Offset = "0x4318090", VA = "0x4318090", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x4318140", Offset = "0x4318140", VA = "0x4318140", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x4318410", Offset = "0x4318410", VA = "0x4318410", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x43186E0", Offset = "0x43186E0", VA = "0x43186E0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x4318720", Offset = "0x4318720", VA = "0x4318720", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x4318820", Offset = "0x4318820", VA = "0x4318820", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
