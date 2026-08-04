// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.BasicNodePool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
