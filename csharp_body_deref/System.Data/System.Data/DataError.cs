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
		[Address(RVA = "0x5E93C90", Offset = "0x5E92C90", VA = "0x5E93C90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x5E93CA0", Offset = "0x5E92CA0", VA = "0x5E93CA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	internal bool HasErrors
	{
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x5E93CE0", Offset = "0x5E92CE0", VA = "0x5E93CE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x5E93B90", Offset = "0x5E92B90", VA = "0x5E93B90")]
	internal DataError()
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x5E93BD0", Offset = "0x5E92BD0", VA = "0x5E93BD0")]
	internal DataError(string rowError)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x5E93D10", Offset = "0x5E92D10", VA = "0x5E93D10")]
	internal void SetColumnError(DataColumn column, string error)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x5E94070", Offset = "0x5E93070", VA = "0x5E94070")]
	internal string GetColumnError(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x5E93E30", Offset = "0x5E92E30", VA = "0x5E93E30")]
	internal void Clear(DataColumn column)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x5E940D0", Offset = "0x5E930D0", VA = "0x5E940D0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x5E94150", Offset = "0x5E93150", VA = "0x5E94150")]
	internal DataColumn[] GetColumnsInError()
	{
		return null;
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x5E93C50", Offset = "0x5E92C50", VA = "0x5E93C50")]
	private void SetText(string errorText)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x5E93F20", Offset = "0x5E92F20", VA = "0x5E93F20")]
	internal int IndexOf(DataColumn column)
	{
		return default(int);
	}
}
