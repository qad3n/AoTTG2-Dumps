using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004AB")]
internal class BasicNodePool<T> : LinkedPool<BasicNode<T>>
{
	[Token(Token = "0x6001CF4")]
	private static void Reset(BasicNode<T> node)
	{
	}

	[Token(Token = "0x6001CF5")]
	private static BasicNode<T> Create()
	{
		return null;
	}

	[Token(Token = "0x6001CF6")]
	public BasicNodePool()
	{
	}
}
