// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataRowChangeEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200003E")]
public class DataRowChangeEventArgs : EventArgs
{
	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private readonly DataRow _003CRow_003Ek__BackingField;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly DataRowAction _003CAction_003Ek__BackingField;

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x24F43A0", Offset = "0x24F29A0", VA = "0x1824F43A0")]
	public DataRowChangeEventArgs(DataRow row, DataRowAction action)
	{
	}
}
