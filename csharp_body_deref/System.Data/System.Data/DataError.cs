// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataError
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000033")]
internal sealed class DataError
{
	[Token(Token = "0x2000034")]
	internal struct ColumnError
	{
		[Token(Token = "0x4000112")]
		[FieldOffset(Offset = "0x0")]
		internal DataColumn _column;

		[Token(Token = "0x4000113")]
		[FieldOffset(Offset = "0x8")]
		internal string _error;
	}

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x10")]
	private string _rowError;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x18")]
	private int _count;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x20")]
	private ColumnError[] _errorList;

	[Token(Token = "0x17000094")]
	internal string Text
	{
		[Token(Token = "0x60003D4")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x24EE510", Offset = "0x24ECB10", VA = "0x1824EE510")]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	internal bool HasErrors
	{
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x24EE5F0", Offset = "0x24ECBF0", VA = "0x1824EE5F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x24EE5B0", Offset = "0x24ECBB0", VA = "0x1824EE5B0")]
	internal DataError()
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x24EE540", Offset = "0x24ECB40", VA = "0x1824EE540")]
	internal DataError(string rowError)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x24EE250", Offset = "0x24EC850", VA = "0x1824EE250")]
	internal void SetColumnError(DataColumn column, string error)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x24EDF90", Offset = "0x24EC590", VA = "0x1824EDF90")]
	internal string GetColumnError(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x24EDE70", Offset = "0x24EC470", VA = "0x1824EDE70")]
	internal void Clear(DataColumn column)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x24EDF10", Offset = "0x24EC510", VA = "0x1824EDF10")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x24EE010", Offset = "0x24EC610", VA = "0x1824EE010")]
	internal DataColumn[] GetColumnsInError()
	{
		return null;
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x24EE510", Offset = "0x24ECB10", VA = "0x1824EE510")]
	private void SetText(string errorText)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x24EE100", Offset = "0x24EC700", VA = "0x1824EE100")]
	internal int IndexOf(DataColumn column)
	{
		return default(int);
	}
}
