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
		[Address(RVA = "0x4209A80", Offset = "0x4209A80", VA = "0x4209A80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x4209A90", Offset = "0x4209A90", VA = "0x4209A90")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	internal bool HasErrors
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x4209AD0", Offset = "0x4209AD0", VA = "0x4209AD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4209980", Offset = "0x4209980", VA = "0x4209980")]
	internal DataError()
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x42099C0", Offset = "0x42099C0", VA = "0x42099C0")]
	internal DataError(string rowError)
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x4209B00", Offset = "0x4209B00", VA = "0x4209B00")]
	internal void SetColumnError(DataColumn column, string error)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x4209E50", Offset = "0x4209E50", VA = "0x4209E50")]
	internal string GetColumnError(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x4209C20", Offset = "0x4209C20", VA = "0x4209C20")]
	internal void Clear(DataColumn column)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x4209EB0", Offset = "0x4209EB0", VA = "0x4209EB0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x4209F30", Offset = "0x4209F30", VA = "0x4209F30")]
	internal DataColumn[] GetColumnsInError()
	{
		return null;
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x4209A40", Offset = "0x4209A40", VA = "0x4209A40")]
	private void SetText(string errorText)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x4209D10", Offset = "0x4209D10", VA = "0x4209D10")]
	internal int IndexOf(DataColumn column)
	{
		return default(int);
	}
}
