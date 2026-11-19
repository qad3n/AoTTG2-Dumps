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
		[Address(RVA = "0x5E90590", Offset = "0x5E8F590", VA = "0x5E90590")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x5E905A0", Offset = "0x5E8F5A0", VA = "0x5E905A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x5E90490", Offset = "0x5E8F490", VA = "0x5E90490")]
	internal DataColumnChangeEventArgs(DataRow row)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x5E90500", Offset = "0x5E8F500", VA = "0x5E90500")]
	public DataColumnChangeEventArgs(DataRow row, DataColumn column, object value)
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x5E905B0", Offset = "0x5E8F5B0", VA = "0x5E905B0")]
	internal void InitializeColumnChangeEvent(DataColumn column, object value)
	{
	}
}
