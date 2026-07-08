using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000D7")]
internal interface ISpanFormattable
{
	[Token(Token = "0x60007B3")]
	bool TryFormat(Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider);
}
