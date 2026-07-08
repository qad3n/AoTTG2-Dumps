using Il2CppDummyDll;

namespace System.Buffers;

[Token(Token = "0x200067B")]
public delegate void SpanAction<T, in TArg>(Span<T> span, TArg arg);
