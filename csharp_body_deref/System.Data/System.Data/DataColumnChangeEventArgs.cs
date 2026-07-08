using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000013")]
public class DataColumnChangeEventArgs : EventArgs
{
	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x10")]
	private DataColumn _column;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly DataRow _003CRow_003Ek__BackingField;

	[Token(Token = "0x17000045")]
	public object ProposedValue
	{
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x4205D00", Offset = "0x4205D00", VA = "0x4205D00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x4205D10", Offset = "0x4205D10", VA = "0x4205D10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4205C00", Offset = "0x4205C00", VA = "0x4205C00")]
	internal DataColumnChangeEventArgs(DataRow row)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4205C70", Offset = "0x4205C70", VA = "0x4205C70")]
	public DataColumnChangeEventArgs(DataRow row, DataColumn column, object value)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x4205D20", Offset = "0x4205D20", VA = "0x4205D20")]
	internal void InitializeColumnChangeEvent(DataColumn column, object value)
	{
	}
}
