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
[Token(Token = "0x20003D3")]
internal sealed class MemberHolder
{
	[Token(Token = "0x4000FD1")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Type _memberType;

	[Token(Token = "0x4000FD2")]
	[FieldOffset(Offset = "0x18")]
	internal readonly StreamingContext _context;

	[Token(Token = "0x6001F46")]
	[Address(RVA = "0x3B94310", Offset = "0x3B94310", VA = "0x3B94310")]
	internal MemberHolder(Type type, StreamingContext ctx)
	{
	}

	[Token(Token = "0x6001F47")]
	[Address(RVA = "0x3B94360", Offset = "0x3B94360", VA = "0x3B94360", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F48")]
	[Address(RVA = "0x3B94390", Offset = "0x3B94390", VA = "0x3B94390", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
