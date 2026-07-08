using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x20001F3")]
[UnityEngine.Bindings.VisibleToOtherModules]
internal readonly ref struct ManagedSpanWrapper
{
	[Token(Token = "0x40006A1")]
	[FieldOffset(Offset = "0x0")]
	public unsafe readonly void* begin;

	[Token(Token = "0x40006A2")]
	[FieldOffset(Offset = "0x8")]
	public readonly int length;

	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x4AEC1C0", Offset = "0x4AEC1C0", VA = "0x4AEC1C0")]
	public unsafe ManagedSpanWrapper(void* begin, int length)
	{
	}
}
