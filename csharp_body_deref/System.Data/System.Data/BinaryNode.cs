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
	[Address(RVA = "0x5EAD820", Offset = "0x5EAC820", VA = "0x5EAD820")]
	internal BinaryNode(DataTable table, int op, ExpressionNode left, ExpressionNode right)
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x5EAD880", Offset = "0x5EAC880", VA = "0x5EAD880", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x5EAD8F0", Offset = "0x5EAC8F0", VA = "0x5EAD8F0", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x5EAD910", Offset = "0x5EAC910", VA = "0x5EAD910", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x5EB3800", Offset = "0x5EB2800", VA = "0x5EB3800", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x5EB3830", Offset = "0x5EB2830", VA = "0x5EB3830", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x5EB3880", Offset = "0x5EB2880", VA = "0x5EB3880", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x5EB38D0", Offset = "0x5EB28D0", VA = "0x5EB38D0", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x5EB3920", Offset = "0x5EB2920", VA = "0x5EB3920", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x5EB3970", Offset = "0x5EB2970", VA = "0x5EB3970", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x5EB39D0", Offset = "0x5EB29D0", VA = "0x5EB39D0", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x5EB3EE0", Offset = "0x5EB2EE0", VA = "0x5EB3EE0")]
	internal void SetTypeMismatchError(int op, Type left, Type right)
	{
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x5EB3F10", Offset = "0x5EB2F10", VA = "0x5EB3F10")]
	private static object Eval(ExpressionNode expr, DataRow row, DataRowVersion version, int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x5EB3F60", Offset = "0x5EB2F60", VA = "0x5EB3F60")]
	internal int BinaryCompare(object vLeft, object vRight, StorageType resultType, int op)
	{
		return default(int);
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x5EB3F70", Offset = "0x5EB2F70", VA = "0x5EB3F70")]
	internal int BinaryCompare(object vLeft, object vRight, StorageType resultType, int op, CompareInfo comparer)
	{
		return default(int);
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x5EAD940", Offset = "0x5EAC940", VA = "0x5EAD940")]
	private object EvalBinaryOp(int op, ExpressionNode left, ExpressionNode right, DataRow row, DataRowVersion version, int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x5EB6250", Offset = "0x5EB5250", VA = "0x5EB6250")]
	private DataTypePrecedence GetPrecedence(StorageType storageType)
	{
		return default(DataTypePrecedence);
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x5EB6270", Offset = "0x5EB5270", VA = "0x5EB6270")]
	private static StorageType GetPrecedenceType(DataTypePrecedence code)
	{
		return default(StorageType);
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x5EB6290", Offset = "0x5EB5290", VA = "0x5EB6290")]
	private bool IsMixed(StorageType left, StorageType right)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x5EB6320", Offset = "0x5EB5320", VA = "0x5EB6320")]
	private bool IsMixedSql(StorageType left, StorageType right)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x5EB5D70", Offset = "0x5EB4D70", VA = "0x5EB5D70")]
	internal StorageType ResultType(StorageType left, StorageType right, bool lc, bool rc, int op)
	{
		return default(StorageType);
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x5EB5700", Offset = "0x5EB4700", VA = "0x5EB5700")]
	internal StorageType ResultSqlType(StorageType left, StorageType right, bool lc, bool rc, int op)
	{
		return default(StorageType);
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x5EB63D0", Offset = "0x5EB53D0", VA = "0x5EB63D0")]
	private int SqlResultType(int typeCode)
	{
		return default(int);
	}
}
