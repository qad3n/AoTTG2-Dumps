// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ComponentSingleton
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000066")]
public static class ComponentSingleton<TType> where TType : Component
{
	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x0")]
	private static TType s_Instance;

	[Token(Token = "0x1700004F")]
	public static TType instance
	{
		[Token(Token = "0x600055B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600055C")]
	public static void Release()
	{
	}
}
