using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000BE")]
internal sealed class DateTimeOffsetStorage : DataStorage
{
	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DateTimeOffset s_defaultValue;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0x50")]
	private DateTimeOffset[] _values;

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x42E8880", Offset = "0x42E8880", VA = "0x42E8880")]
	internal DateTimeOffsetStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x42EAA20", Offset = "0x42EAA20", VA = "0x42EAA20", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x42EB290", Offset = "0x42EB290", VA = "0x42EB290", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x42EB470", Offset = "0x42EB470", VA = "0x42EB470", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x42EB600", Offset = "0x42EB600", VA = "0x42EB600", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x42EB690", Offset = "0x42EB690", VA = "0x42EB690", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x42EB720", Offset = "0x42EB720", VA = "0x42EB720", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x42EB870", Offset = "0x42EB870", VA = "0x42EB870", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x42EB9C0", Offset = "0x42EB9C0", VA = "0x42EB9C0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x42EBAE0", Offset = "0x42EBAE0", VA = "0x42EBAE0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x42EBB60", Offset = "0x42EBB60", VA = "0x42EBB60", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x42EBC00", Offset = "0x42EBC00", VA = "0x42EBC00", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x42EBC40", Offset = "0x42EBC40", VA = "0x42EBC40", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x42EBD70", Offset = "0x42EBD70", VA = "0x42EBD70", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
