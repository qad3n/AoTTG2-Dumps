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
	[Address(RVA = "0x4EAE7F0", Offset = "0x4EAE7F0", VA = "0x4EAE7F0")]
	internal MemberHolder(Type type, StreamingContext ctx)
	{
	}

	[Token(Token = "0x6001F47")]
	[Address(RVA = "0x4EAE840", Offset = "0x4EAE840", VA = "0x4EAE840", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F48")]
	[Address(RVA = "0x4EAE870", Offset = "0x4EAE870", VA = "0x4EAE870", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
