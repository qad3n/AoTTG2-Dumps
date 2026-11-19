// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.IndexField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000088")]
internal readonly struct IndexField
{
	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x0")]
	public readonly DataColumn Column;

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x8")]
	public readonly bool IsDescending;

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x5EC8250", Offset = "0x5EC7250", VA = "0x5EC8250")]
	internal IndexField(DataColumn column, bool isDescending)
	{
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x5EC8270", Offset = "0x5EC7270", VA = "0x5EC8270")]
	public static bool operator ==(IndexField if1, IndexField if2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x5EC8290", Offset = "0x5EC7290", VA = "0x5EC8290", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x5EC8300", Offset = "0x5EC7300", VA = "0x5EC8300", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
