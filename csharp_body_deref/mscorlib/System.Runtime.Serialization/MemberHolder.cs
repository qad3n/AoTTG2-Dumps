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
[Token(Token = "0x20003DB")]
internal sealed class MemberHolder
{
	[Token(Token = "0x4000F37")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Type _memberType;

	[Token(Token = "0x4000F38")]
	[FieldOffset(Offset = "0x18")]
	internal readonly StreamingContext _context;

	[Token(Token = "0x6001F8B")]
	[Address(RVA = "0x539BCC0", Offset = "0x539ACC0", VA = "0x539BCC0")]
	internal MemberHolder(Type type, StreamingContext ctx)
	{
	}

	[Token(Token = "0x6001F8C")]
	[Address(RVA = "0x539BD10", Offset = "0x539AD10", VA = "0x539BD10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F8D")]
	[Address(RVA = "0x539BD40", Offset = "0x539AD40", VA = "0x539BD40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
