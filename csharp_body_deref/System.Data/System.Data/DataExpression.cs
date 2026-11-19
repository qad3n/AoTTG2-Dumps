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

[Token(Token = "0x2000060")]
internal sealed class DataExpression : IFilter
{
	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x10")]
	internal string _originalExpression;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x18")]
	private bool _parsed;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x19")]
	private bool _bound;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x20")]
	private ExpressionNode _expr;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x28")]
	private DataTable _table;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x30")]
	private readonly StorageType _storageType;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x38")]
	private readonly Type _dataType;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x40")]
	private DataColumn[] _dependency;

	[Token(Token = "0x17000110")]
	internal string Expression
	{
		[Token(Token = "0x6000604")]
		[Address(RVA = "0x5EA4EB0", Offset = "0x5EA3EB0", VA = "0x5EA4EB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000111")]
	internal bool HasValue
	{
		[Token(Token = "0x6000605")]
		[Address(RVA = "0x5EB8CD0", Offset = "0x5EB7CD0", VA = "0x5EB8CD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x5EA5100", Offset = "0x5EA4100", VA = "0x5EA5100")]
	internal DataExpression(DataTable table, string expression)
	{
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x5EB7890", Offset = "0x5EB6890", VA = "0x5EB7890")]
	internal DataExpression(DataTable table, string expression, Type type)
	{
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x5EB8B90", Offset = "0x5EB7B90", VA = "0x5EB8B90")]
	internal void Bind(DataTable table)
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x5EAD7F0", Offset = "0x5EAC7F0", VA = "0x5EAD7F0")]
	internal bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x5EB8CE0", Offset = "0x5EB7CE0", VA = "0x5EB8CE0")]
	internal object Evaluate()
	{
		return null;
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x5EB8CF0", Offset = "0x5EB7CF0", VA = "0x5EB8CF0")]
	internal object Evaluate(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x5EB8F20", Offset = "0x5EB7F20", VA = "0x5EB8F20", Slot = "4")]
	public bool Invoke(DataRow row, DataRowVersion version)
	{
		return default(bool);
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x5EB9010", Offset = "0x5EB8010", VA = "0x5EB9010")]
	internal DataColumn[] GetDependency()
	{
		return null;
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x5EB9020", Offset = "0x5EB8020", VA = "0x5EB9020")]
	internal bool IsTableAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x5EB9040", Offset = "0x5EB8040", VA = "0x5EB9040")]
	internal static bool IsUnknown(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x5EB90B0", Offset = "0x5EB80B0", VA = "0x5EB90B0")]
	internal bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x5EB90D0", Offset = "0x5EB80D0", VA = "0x5EB90D0")]
	internal bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x5EB5430", Offset = "0x5EB4430", VA = "0x5EB5430")]
	internal static bool ToBoolean(object value)
	{
		return default(bool);
	}
}
