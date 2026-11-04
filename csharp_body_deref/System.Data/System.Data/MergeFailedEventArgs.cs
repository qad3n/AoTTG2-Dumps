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

[Token(Token = "0x2000074")]
public class MergeFailedEventArgs : EventArgs
{
	[Token(Token = "0x4000259")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private readonly DataTable _003CTable_003Ek__BackingField;

	[Token(Token = "0x17000122")]
	public string Conflict
	{
		[Token(Token = "0x60006E3")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x251F200", Offset = "0x251D800", VA = "0x18251F200")]
	public MergeFailedEventArgs(DataTable table, string conflict)
	{
	}
}
