using System.Data.Common;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000053")]
internal sealed class DataExpression : IFilter
{
	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x10")]
	internal string _originalExpression;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x18")]
	private bool _parsed;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0x19")]
	private bool _bound;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0x20")]
	private ExpressionNode _expr;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0x28")]
	private DataTable _table;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x30")]
	private readonly StorageType _storageType;

	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x38")]
	private readonly Type _dataType;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x40")]
	private DataColumn[] _dependency;

	[Token(Token = "0x1700010B")]
	internal string Expression
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x426D8A0", Offset = "0x426D8A0", VA = "0x426D8A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010C")]
	internal bool HasValue
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x426D8E0", Offset = "0x426D8E0", VA = "0x426D8E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x426C3B0", Offset = "0x426C3B0", VA = "0x426C3B0")]
	internal DataExpression(DataTable table, string expression)
	{
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x426C3C0", Offset = "0x426C3C0", VA = "0x426C3C0")]
	internal DataExpression(DataTable table, string expression, Type type)
	{
	}

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x426D760", Offset = "0x426D760", VA = "0x426D760")]
	internal void Bind(DataTable table)
	{
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x425E760", Offset = "0x425E760", VA = "0x425E760")]
	internal bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x426D8F0", Offset = "0x426D8F0", VA = "0x426D8F0")]
	internal object Evaluate()
	{
		return null;
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x426D900", Offset = "0x426D900", VA = "0x426D900")]
	internal object Evaluate(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x426DC20", Offset = "0x426DC20", VA = "0x426DC20", Slot = "4")]
	public bool Invoke(DataRow row, DataRowVersion version)
	{
		return default(bool);
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x426DDD0", Offset = "0x426DDD0", VA = "0x426DDD0")]
	internal DataColumn[] GetDependency()
	{
		return null;
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x426DDE0", Offset = "0x426DDE0", VA = "0x426DDE0")]
	internal bool IsTableAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x426DE00", Offset = "0x426DE00", VA = "0x426DE00")]
	internal static bool IsUnknown(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x426DE70", Offset = "0x426DE70", VA = "0x426DE70")]
	internal bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x426DE90", Offset = "0x426DE90", VA = "0x426DE90")]
	internal bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x4269750", Offset = "0x4269750", VA = "0x4269750")]
	internal static bool ToBoolean(object value)
	{
		return default(bool);
	}
}
