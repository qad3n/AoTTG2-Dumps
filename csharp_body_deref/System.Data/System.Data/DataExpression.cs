// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x45AB000", Offset = "0x45AB000", VA = "0x45AB000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010C")]
	internal bool HasValue
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x45AB040", Offset = "0x45AB040", VA = "0x45AB040")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x45A9B10", Offset = "0x45A9B10", VA = "0x45A9B10")]
	internal DataExpression(DataTable table, string expression)
	{
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x45A9B20", Offset = "0x45A9B20", VA = "0x45A9B20")]
	internal DataExpression(DataTable table, string expression, Type type)
	{
	}

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x45AAEC0", Offset = "0x45AAEC0", VA = "0x45AAEC0")]
	internal void Bind(DataTable table)
	{
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x459BEC0", Offset = "0x459BEC0", VA = "0x459BEC0")]
	internal bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x45AB050", Offset = "0x45AB050", VA = "0x45AB050")]
	internal object Evaluate()
	{
		return null;
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x45AB060", Offset = "0x45AB060", VA = "0x45AB060")]
	internal object Evaluate(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x45AB380", Offset = "0x45AB380", VA = "0x45AB380", Slot = "4")]
	public bool Invoke(DataRow row, DataRowVersion version)
	{
		return default(bool);
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x45AB530", Offset = "0x45AB530", VA = "0x45AB530")]
	internal DataColumn[] GetDependency()
	{
		return null;
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x45AB540", Offset = "0x45AB540", VA = "0x45AB540")]
	internal bool IsTableAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x45AB560", Offset = "0x45AB560", VA = "0x45AB560")]
	internal static bool IsUnknown(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x45AB5D0", Offset = "0x45AB5D0", VA = "0x45AB5D0")]
	internal bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x45AB5F0", Offset = "0x45AB5F0", VA = "0x45AB5F0")]
	internal bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x45A6EB0", Offset = "0x45A6EB0", VA = "0x45A6EB0")]
	internal static bool ToBoolean(object value)
	{
		return default(bool);
	}
}
