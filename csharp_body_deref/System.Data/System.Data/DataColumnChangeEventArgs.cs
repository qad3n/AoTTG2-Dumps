// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataColumnChangeEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200002F")]
public class DataColumnChangeEventArgs : EventArgs
{
	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x10")]
	private DataColumn _column;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly DataRow _003CRow_003Ek__BackingField;

	[Token(Token = "0x17000086")]
	public object ProposedValue
	{
		[Token(Token = "0x6000398")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000399")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x24EA460", Offset = "0x24E8A60", VA = "0x1824EA460")]
	internal DataColumnChangeEventArgs(DataRow row)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x24EA4D0", Offset = "0x24E8AD0", VA = "0x1824EA4D0")]
	public DataColumnChangeEventArgs(DataRow row, DataColumn column, object value)
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x24EA420", Offset = "0x24E8A20", VA = "0x1824EA420")]
	internal void InitializeColumnChangeEvent(DataColumn column, object value)
	{
	}
}
