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
