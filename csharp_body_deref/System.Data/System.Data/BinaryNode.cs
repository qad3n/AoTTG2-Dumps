// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.BinaryNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Data.Common;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200005C")]
internal class BinaryNode : ExpressionNode
{
	[Token(Token = "0x200005D")]
	private enum DataTypePrecedence
	{
		[Token(Token = "0x40001CE")]
		SqlDateTime = 25,
		[Token(Token = "0x40001CF")]
		DateTimeOffset = 24,
		[Token(Token = "0x40001D0")]
		DateTime = 23,
		[Token(Token = "0x40001D1")]
		TimeSpan = 20,
		[Token(Token = "0x40001D2")]
		SqlDouble = 19,
		[Token(Token = "0x40001D3")]
		Double = 18,
		[Token(Token = "0x40001D4")]
		SqlSingle = 17,
		[Token(Token = "0x40001D5")]
		Single = 16,
		[Token(Token = "0x40001D6")]
		SqlDecimal = 15,
		[Token(Token = "0x40001D7")]
		Decimal = 14,
		[Token(Token = "0x40001D8")]
		SqlMoney = 13,
		[Token(Token = "0x40001D9")]
		UInt64 = 12,
		[Token(Token = "0x40001DA")]
		SqlInt64 = 11,
		[Token(Token = "0x40001DB")]
		Int64 = 10,
		[Token(Token = "0x40001DC")]
		UInt32 = 9,
		[Token(Token = "0x40001DD")]
		SqlInt32 = 8,
		[Token(Token = "0x40001DE")]
		Int32 = 7,
		[Token(Token = "0x40001DF")]
		UInt16 = 6,
		[Token(Token = "0x40001E0")]
		SqlInt16 = 5,
		[Token(Token = "0x40001E1")]
		Int16 = 4,
		[Token(Token = "0x40001E2")]
		Byte = 3,
		[Token(Token = "0x40001E3")]
		SqlByte = 2,
		[Token(Token = "0x40001E4")]
		SByte = 1,
		[Token(Token = "0x40001E5")]
		Error = 0,
		[Token(Token = "0x40001E6")]
		SqlBoolean = -1,
		[Token(Token = "0x40001E7")]
		Boolean = -2,
		[Token(Token = "0x40001E8")]
		SqlGuid = -3,
		[Token(Token = "0x40001E9")]
		SqlString = -4,
		[Token(Token = "0x40001EA")]
		String = -5,
		[Token(Token = "0x40001EB")]
		SqlXml = -6,
		[Token(Token = "0x40001EC")]
		SqlChars = -7,
		[Token(Token = "0x40001ED")]
		Char = -8,
		[Token(Token = "0x40001EE")]
		SqlBytes = -9,
		[Token(Token = "0x40001EF")]
		SqlBinary = -10
	}

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x18")]
	internal int _op;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x20")]
	internal ExpressionNode _left;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x28")]
	internal ExpressionNode _right;

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x2508370", Offset = "0x2506970", VA = "0x182508370")]
	internal BinaryNode(DataTable table, int op, ExpressionNode left, ExpressionNode right)
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x25023F0", Offset = "0x25009F0", VA = "0x1825023F0", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x24E2A50", Offset = "0x24E1050", VA = "0x1824E2A50", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x25071A0", Offset = "0x25057A0", VA = "0x1825071A0", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x2507120", Offset = "0x2505720", VA = "0x182507120", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x2507590", Offset = "0x2505B90", VA = "0x182507590", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x25076B0", Offset = "0x2505CB0", VA = "0x1825076B0", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x25074D0", Offset = "0x2505AD0", VA = "0x1825074D0", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x2507530", Offset = "0x2505B30", VA = "0x182507530", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x2502470", Offset = "0x2500A70", VA = "0x182502470", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x2507710", Offset = "0x2505D10", VA = "0x182507710", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x2508240", Offset = "0x2506840", VA = "0x182508240")]
	internal void SetTypeMismatchError(int op, Type left, Type right)
	{
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x2507160", Offset = "0x2505760", VA = "0x182507160")]
	private static object Eval(ExpressionNode expr, DataRow row, DataRowVersion version, int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x25014E0", Offset = "0x24FFAE0", VA = "0x1825014E0")]
	internal int BinaryCompare(object vLeft, object vRight, StorageType resultType, int op)
	{
		return default(int);
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x2501510", Offset = "0x24FFB10", VA = "0x182501510")]
	internal int BinaryCompare(object vLeft, object vRight, StorageType resultType, int op, CompareInfo comparer)
	{
		return default(int);
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x25024E0", Offset = "0x2500AE0", VA = "0x1825024E0")]
	private object EvalBinaryOp(int op, ExpressionNode left, ExpressionNode right, DataRow row, DataRowVersion version, int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x2507340", Offset = "0x2505940", VA = "0x182507340")]
	private DataTypePrecedence GetPrecedence(StorageType storageType)
	{
		return default(DataTypePrecedence);
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x25071D0", Offset = "0x25057D0", VA = "0x1825071D0")]
	private static StorageType GetPrecedenceType(DataTypePrecedence code)
	{
		return default(StorageType);
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x2507660", Offset = "0x2505C60", VA = "0x182507660")]
	private bool IsMixed(StorageType left, StorageType right)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x25075F0", Offset = "0x2505BF0", VA = "0x1825075F0")]
	private bool IsMixedSql(StorageType left, StorageType right)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x2507F40", Offset = "0x2506540", VA = "0x182507F40")]
	internal StorageType ResultType(StorageType left, StorageType right, bool lc, bool rc, int op)
	{
		return default(StorageType);
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x2507A90", Offset = "0x2506090", VA = "0x182507A90")]
	internal StorageType ResultSqlType(StorageType left, StorageType right, bool lc, bool rc, int op)
	{
		return default(StorageType);
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x2508280", Offset = "0x2506880", VA = "0x182508280")]
	private int SqlResultType(int typeCode)
	{
		return default(int);
	}
}
