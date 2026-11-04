// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.MemberHolder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x2000402")]
internal sealed class MemberHolder
{
	[Token(Token = "0x4000FD7")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Type _memberType;

	[Token(Token = "0x4000FD8")]
	[FieldOffset(Offset = "0x18")]
	internal readonly StreamingContext _context;

	[Token(Token = "0x6001FB5")]
	[Address(RVA = "0xE55120", Offset = "0xE53720", VA = "0x180E55120")]
	internal MemberHolder(Type type, StreamingContext ctx)
	{
	}

	[Token(Token = "0x6001FB6")]
	[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FB7")]
	[Address(RVA = "0x19FED20", Offset = "0x19FD320", VA = "0x1819FED20", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
