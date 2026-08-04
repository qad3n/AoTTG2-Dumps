// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataError
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000017")]
internal sealed class DataError
{
	[Token(Token = "0x2000018")]
	internal struct ColumnError
	{
		[Token(Token = "0x4000060")]
		[FieldOffset(Offset = "0x0")]
		internal DataColumn _column;

		[Token(Token = "0x4000061")]
		[FieldOffset(Offset = "0x8")]
		internal string _error;
	}

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x10")]
	private string _rowError;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x18")]
	private int _count;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x20")]
	private ColumnError[] _errorList;

	[Token(Token = "0x17000053")]
	internal string Text
	{
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x45471E0", Offset = "0x45471E0", VA = "0x45471E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x45471F0", Offset = "0x45471F0", VA = "0x45471F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	internal bool HasErrors
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x4547230", Offset = "0x4547230", VA = "0x4547230")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x45470E0", Offset = "0x45470E0", VA = "0x45470E0")]
	internal DataError()
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x4547120", Offset = "0x4547120", VA = "0x4547120")]
	internal DataError(string rowError)
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x4547260", Offset = "0x4547260", VA = "0x4547260")]
	internal void SetColumnError(DataColumn column, string error)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x45475B0", Offset = "0x45475B0", VA = "0x45475B0")]
	internal string GetColumnError(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x4547380", Offset = "0x4547380", VA = "0x4547380")]
	internal void Clear(DataColumn column)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x4547610", Offset = "0x4547610", VA = "0x4547610")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x4547690", Offset = "0x4547690", VA = "0x4547690")]
	internal DataColumn[] GetColumnsInError()
	{
		return null;
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x45471A0", Offset = "0x45471A0", VA = "0x45471A0")]
	private void SetText(string errorText)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x4547470", Offset = "0x4547470", VA = "0x4547470")]
	internal int IndexOf(DataColumn column)
	{
		return default(int);
	}
}
