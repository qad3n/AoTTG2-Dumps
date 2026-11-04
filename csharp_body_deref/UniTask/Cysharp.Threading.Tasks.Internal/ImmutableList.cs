// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.ImmutableList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000259")]
internal class ImmutableList<T>
{
	[Token(Token = "0x40006C2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ImmutableList<T> Empty;

	[Token(Token = "0x40006C3")]
	[FieldOffset(Offset = "0x0")]
	private T[] data;

	[Token(Token = "0x17000081")]
	public T[] Data
	{
		[Token(Token = "0x6000D72")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D73")]
	private ImmutableList()
	{
	}

	[Token(Token = "0x6000D74")]
	public ImmutableList(T[] data)
	{
	}

	[Token(Token = "0x6000D75")]
	public ImmutableList<T> Add(T value)
	{
		return null;
	}

	[Token(Token = "0x6000D76")]
	public ImmutableList<T> Remove(T value)
	{
		return null;
	}

	[Token(Token = "0x6000D77")]
	public int IndexOf(T value)
	{
		return default(int);
	}
}
