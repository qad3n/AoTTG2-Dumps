using Il2CppDummyDll;

namespace System.Buffers;

[Token(Token = "0x2000681")]
public abstract class MemoryManager<T>
{
	[Token(Token = "0x6003353")]
	public abstract Span<T> GetSpan();

	[Token(Token = "0x6003354")]
	public abstract MemoryHandle Pin(int elementIndex = 0);

	[Token(Token = "0x6003355")]
	protected internal virtual bool TryGetArray(out ArraySegment<T> segment)
	{
		return default(bool);
	}
}
