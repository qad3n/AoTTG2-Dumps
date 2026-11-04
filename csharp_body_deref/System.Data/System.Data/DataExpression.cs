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
		[Address(RVA = "0x25096F0", Offset = "0x2507CF0", VA = "0x1825096F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000111")]
	internal bool HasValue
	{
		[Token(Token = "0x6000605")]
		[Address(RVA = "0x2450AE0", Offset = "0x244F0E0", VA = "0x182450AE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x2509310", Offset = "0x2507910", VA = "0x182509310")]
	internal DataExpression(DataTable table, string expression)
	{
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x2509330", Offset = "0x2507930", VA = "0x182509330")]
	internal DataExpression(DataTable table, string expression, Type type)
	{
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x2508CC0", Offset = "0x25072C0", VA = "0x182508CC0")]
	internal void Bind(DataTable table)
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x2508DF0", Offset = "0x25073F0", VA = "0x182508DF0")]
	internal bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x2508F70", Offset = "0x2507570", VA = "0x182508F70")]
	internal object Evaluate()
	{
		return null;
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x2508E10", Offset = "0x2507410", VA = "0x182508E10")]
	internal object Evaluate(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x2508FC0", Offset = "0x25075C0", VA = "0x182508FC0", Slot = "4")]
	public bool Invoke(DataRow row, DataRowVersion version)
	{
		return default(bool);
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
	internal DataColumn[] GetDependency()
	{
		return null;
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x2509060", Offset = "0x2507660", VA = "0x182509060")]
	internal bool IsTableAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x2509080", Offset = "0x2507680", VA = "0x182509080")]
	internal static bool IsUnknown(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x2508F80", Offset = "0x2507580", VA = "0x182508F80")]
	internal bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x2508FA0", Offset = "0x25075A0", VA = "0x182508FA0")]
	internal bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x25090D0", Offset = "0x25076D0", VA = "0x1825090D0")]
	internal static bool ToBoolean(object value)
	{
		return default(bool);
	}
}
