// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementListPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000536")]
internal static class VisualElementListPool
{
	[Token(Token = "0x40011BD")]
	[FieldOffset(Offset = "0x0")]
	private static ObjectPool<List<VisualElement>> pool;

	[Token(Token = "0x60027B5")]
	[Address(RVA = "0x3169A50", Offset = "0x3168050", VA = "0x183169A50")]
	public static List<VisualElement> Copy(List<VisualElement> elements)
	{
		return null;
	}

	[Token(Token = "0x60027B6")]
	[Address(RVA = "0x3169B00", Offset = "0x3168100", VA = "0x183169B00")]
	public static List<VisualElement> Get(int initialCapacity = 0)
	{
		return null;
	}

	[Token(Token = "0x60027B7")]
	[Address(RVA = "0x3169BD0", Offset = "0x31681D0", VA = "0x183169BD0")]
	public static void Release(List<VisualElement> elements)
	{
	}
}
