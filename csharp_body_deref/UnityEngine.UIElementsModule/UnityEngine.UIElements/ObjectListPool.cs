// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ObjectListPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000538")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class ObjectListPool<T>
{
	[Token(Token = "0x40011BF")]
	[FieldOffset(Offset = "0x0")]
	private static ObjectPool<List<T>> pool;

	[Token(Token = "0x60027BC")]
	public static List<T> Get()
	{
		return null;
	}

	[Token(Token = "0x60027BD")]
	public static void Release(List<T> elements)
	{
	}
}
