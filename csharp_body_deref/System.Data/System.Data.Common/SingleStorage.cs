using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D9")]
internal sealed class SingleStorage : DataStorage
{
	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x50")]
	private float[] _values;

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x43188C0", Offset = "0x43188C0", VA = "0x43188C0")]
	public SingleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x4318980", Offset = "0x4318980", VA = "0x4318980", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x43193F0", Offset = "0x43193F0", VA = "0x43193F0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x4319470", Offset = "0x4319470", VA = "0x4319470", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x4319540", Offset = "0x4319540", VA = "0x4319540", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x4319670", Offset = "0x4319670", VA = "0x4319670", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x43196C0", Offset = "0x43196C0", VA = "0x43196C0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x4319720", Offset = "0x4319720", VA = "0x4319720", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x4319870", Offset = "0x4319870", VA = "0x4319870", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x4319930", Offset = "0x4319930", VA = "0x4319930", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x43199A0", Offset = "0x43199A0", VA = "0x43199A0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x4319A30", Offset = "0x4319A30", VA = "0x4319A30", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x4319A70", Offset = "0x4319A70", VA = "0x4319A70", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x4319B70", Offset = "0x4319B70", VA = "0x4319B70", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
