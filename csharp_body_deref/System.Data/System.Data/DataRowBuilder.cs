using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200002B")]
public sealed class DataRowBuilder
{
	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x10")]
	internal readonly DataTable _table;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x18")]
	internal int _record;

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x4240300", Offset = "0x4240300", VA = "0x4240300")]
	internal DataRowBuilder(DataTable table, int record)
	{
	}
}
