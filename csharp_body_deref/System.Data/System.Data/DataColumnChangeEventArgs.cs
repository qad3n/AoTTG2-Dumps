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
		[Address(RVA = "0x4543460", Offset = "0x4543460", VA = "0x4543460")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x4543470", Offset = "0x4543470", VA = "0x4543470")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4543360", Offset = "0x4543360", VA = "0x4543360")]
	internal DataColumnChangeEventArgs(DataRow row)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x45433D0", Offset = "0x45433D0", VA = "0x45433D0")]
	public DataColumnChangeEventArgs(DataRow row, DataColumn column, object value)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x4543480", Offset = "0x4543480", VA = "0x4543480")]
	internal void InitializeColumnChangeEvent(DataColumn column, object value)
	{
	}
}
