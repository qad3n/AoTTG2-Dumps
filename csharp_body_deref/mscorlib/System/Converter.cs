using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000086")]
public delegate TOutput Converter<in TInput, out TOutput>(TInput input);
