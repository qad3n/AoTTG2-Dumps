using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200002D")]
public class DataRowChangeEventArgs : EventArgs
{
	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private readonly DataRow _003CRow_003Ek__BackingField;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly DataRowAction _003CAction_003Ek__BackingField;

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x4240330", Offset = "0x4240330", VA = "0x4240330")]
	public DataRowChangeEventArgs(DataRow row, DataRowAction action)
	{
	}
}
