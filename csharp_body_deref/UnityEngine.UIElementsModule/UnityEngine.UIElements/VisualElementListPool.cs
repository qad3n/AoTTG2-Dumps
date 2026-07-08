using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200045F")]
internal static class VisualElementListPool
{
	[Token(Token = "0x4000D26")]
	[FieldOffset(Offset = "0x0")]
	private static ObjectPool<List<VisualElement>> pool;

	[Token(Token = "0x6001B71")]
	[Address(RVA = "0x4C4D1C0", Offset = "0x4C4D1C0", VA = "0x4C4D1C0")]
	public static List<VisualElement> Copy(List<VisualElement> elements)
	{
		return null;
	}

	[Token(Token = "0x6001B72")]
	[Address(RVA = "0x4C4D290", Offset = "0x4C4D290", VA = "0x4C4D290")]
	public static List<VisualElement> Get(int initialCapacity = 0)
	{
		return null;
	}

	[Token(Token = "0x6001B73")]
	[Address(RVA = "0x4C4D380", Offset = "0x4C4D380", VA = "0x4C4D380")]
	public static void Release(List<VisualElement> elements)
	{
	}
}
