// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.ChannelWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000021")]
public abstract class ChannelWriter<T>
{
	[Token(Token = "0x60000B7")]
	public abstract bool TryWrite(T item);

	[Token(Token = "0x60000B8")]
	public abstract bool TryComplete([Optional] Exception error);

	[Token(Token = "0x60000B9")]
	public void Complete([Optional] Exception error)
	{
	}

	[Token(Token = "0x60000BA")]
	protected ChannelWriter()
	{
	}
}
