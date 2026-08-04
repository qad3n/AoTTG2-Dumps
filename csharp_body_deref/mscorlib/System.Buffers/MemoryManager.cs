// ==================== AoTTG2 cross-reference ====================
// Type: System.Buffers.MemoryManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
