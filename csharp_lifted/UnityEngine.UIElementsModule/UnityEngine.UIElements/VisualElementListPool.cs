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
	[Address(RVA = "0x6B69550", Offset = "0x6B68550", VA = "0x6B69550")]
	public static List<VisualElement> Copy(List<VisualElement> elements)
	{
		return null;
	}

	[Token(Token = "0x60027B6")]
	[Address(RVA = "0x6B69620", Offset = "0x6B68620", VA = "0x6B69620")]
	public static List<VisualElement> Get(int initialCapacity = 0)
	{
		return null;
	}

	[Token(Token = "0x60027B7")]
	[Address(RVA = "0x6B69710", Offset = "0x6B68710", VA = "0x6B69710")]
	public static void Release(List<VisualElement> elements)
	{
	}
}
