// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.MergeFailedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200006A")]
public class MergeFailedEventArgs : EventArgs
{
	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private readonly DataTable _003CTable_003Ek__BackingField;

	[Token(Token = "0x1700011F")]
	public string Conflict
	{
		[Token(Token = "0x60006C4")]
		[Address(RVA = "0x45B92C0", Offset = "0x45B92C0", VA = "0x45B92C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x45B9240", Offset = "0x45B9240", VA = "0x45B9240")]
	public MergeFailedEventArgs(DataTable table, string conflict)
	{
	}
}
