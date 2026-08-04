// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.BasicNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004AA")]
internal class BasicNode<T> : LinkedPoolItem<BasicNode<T>>
{
	[Token(Token = "0x4000E7D")]
	[FieldOffset(Offset = "0x0")]
	public BasicNode<T> next;

	[Token(Token = "0x4000E7E")]
	[FieldOffset(Offset = "0x0")]
	public T data;

	[Token(Token = "0x6001CF2")]
	public void AppendTo(ref BasicNode<T> first)
	{
	}

	[Token(Token = "0x6001CF3")]
	public BasicNode()
	{
	}
}
