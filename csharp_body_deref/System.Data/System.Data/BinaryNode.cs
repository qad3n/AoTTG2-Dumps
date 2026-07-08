using System.Collections.Generic;
using System.Data.Common;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200004F")]
internal class BinaryNode : ExpressionNode
{
	[Token(Token = "0x2000050")]
	private enum DataTypePrecedence
	{
		[Token(Token = "0x4000186")]
		SqlDateTime = 25,
		[Token(Token = "0x4000187")]
		DateTimeOffset = 24,
		[Token(Token = "0x4000188")]
		DateTime = 23,
		[Token(Token = "0x4000189")]
		TimeSpan = 20,
		[Token(Token = "0x400018A")]
		SqlDouble = 19,
		[Token(Token = "0x400018B")]
		Double = 18,
		[Token(Token = "0x400018C")]
		SqlSingle = 17,
		[Token(Token = "0x400018D")]
		Single = 16,
		[Token(Token = "0x400018E")]
		SqlDecimal = 15,
		[Token(Token = "0x400018F")]
		Decimal = 14,
		[Token(Token = "0x4000190")]
		SqlMoney = 13,
		[Token(Token = "0x4000191")]
		UInt64 = 12,
		[Token(Token = "0x4000192")]
		SqlInt64 = 11,
		[Token(Token = "0x4000193")]
		Int64 = 10,
		[Token(Token = "0x4000194")]
		UInt32 = 9,
		[Token(Token = "0x4000195")]
		SqlInt32 = 8,
		[Token(Token = "0x4000196")]
		Int32 = 7,
		[Token(Token = "0x4000197")]
		UInt16 = 6,
		[Token(Token = "0x4000198")]
		SqlInt16 = 5,
		[Token(Token = "0x4000199")]
		Int16 = 4,
		[Token(Token = "0x400019A")]
		Byte = 3,
		[Token(Token = "0x400019B")]
		SqlByte = 2,
		[Token(Token = "0x400019C")]
		SByte = 1,
		[Token(Token = "0x400019D")]
		Error = 0,
		[Token(Token = "0x400019E")]
		SqlBoolean = -1,
		[Token(Token = "0x400019F")]
		Boolean = -2,
		[Token(Token = "0x40001A0")]
		SqlGuid = -3,
		[Token(Token = "0x40001A1")]
		SqlString = -4,
		[Token(Token = "0x40001A2")]
		String = -5,
		[Token(Token = "0x40001A3")]
		SqlXml = -6,
		[Token(Token = "0x40001A4")]
		SqlChars = -7,
		[Token(Token = "0x40001A5")]
		Char = -8,
		[Token(Token = "0x40001A6")]
		SqlBytes = -9,
		[Token(Token = "0x40001A7")]
		SqlBinary = -10
	}

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x18")]
	internal int _op;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x20")]
	internal ExpressionNode _left;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x28")]
	internal ExpressionNode _right;

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x425E790", Offset = "0x425E790", VA = "0x425E790")]
	internal BinaryNode(DataTable table, int op, ExpressionNode left, ExpressionNode right)
	{
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x425E7F0", Offset = "0x425E7F0", VA = "0x425E7F0", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x425E860", Offset = "0x425E860", VA = "0x425E860", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x425E880", Offset = "0x425E880", VA = "0x425E880", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x42674A0", Offset = "0x42674A0", VA = "0x42674A0", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x42674D0", Offset = "0x42674D0", VA = "0x42674D0", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x4267520", Offset = "0x4267520", VA = "0x4267520", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x4267570", Offset = "0x4267570", VA = "0x4267570", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x42675C0", Offset = "0x42675C0", VA = "0x42675C0", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x4267610", Offset = "0x4267610", VA = "0x4267610", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x4267670", Offset = "0x4267670", VA = "0x4267670", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x4267C00", Offset = "0x4267C00", VA = "0x4267C00")]
	internal void SetTypeMismatchError(int op, Type left, Type right)
	{
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x4267D40", Offset = "0x4267D40", VA = "0x4267D40")]
	private static object Eval(ExpressionNode expr, DataRow row, DataRowVersion version, int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x4267D80", Offset = "0x4267D80", VA = "0x4267D80")]
	internal int BinaryCompare(object vLeft, object vRight, StorageType resultType, int op)
	{
		return default(int);
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x4267D90", Offset = "0x4267D90", VA = "0x4267D90")]
	internal int BinaryCompare(object vLeft, object vRight, StorageType resultType, int op, CompareInfo comparer)
	{
		return default(int);
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x425E8B0", Offset = "0x425E8B0", VA = "0x425E8B0")]
	private object EvalBinaryOp(int op, ExpressionNode left, ExpressionNode right, DataRow row, DataRowVersion version, int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x426A840", Offset = "0x426A840", VA = "0x426A840")]
	private DataTypePrecedence GetPrecedence(StorageType storageType)
	{
		return default(DataTypePrecedence);
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x426A860", Offset = "0x426A860", VA = "0x426A860")]
	private static StorageType GetPrecedenceType(DataTypePrecedence code)
	{
		return default(StorageType);
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x426A880", Offset = "0x426A880", VA = "0x426A880")]
	private bool IsMixed(StorageType left, StorageType right)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x426A930", Offset = "0x426A930", VA = "0x426A930")]
	private bool IsMixedSql(StorageType left, StorageType right)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x4269EC0", Offset = "0x4269EC0", VA = "0x4269EC0")]
	internal StorageType ResultType(StorageType left, StorageType right, bool lc, bool rc, int op)
	{
		return default(StorageType);
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x4269A20", Offset = "0x4269A20", VA = "0x4269A20")]
	internal StorageType ResultSqlType(StorageType left, StorageType right, bool lc, bool rc, int op)
	{
		return default(StorageType);
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x426AB60", Offset = "0x426AB60", VA = "0x426AB60")]
	private int SqlResultType(int typeCode)
	{
		return default(int);
	}
}
