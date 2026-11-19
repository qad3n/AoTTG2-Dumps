// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.INotifyValueChangedExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000E2")]
public static class INotifyValueChangedExtensions
{
	[Token(Token = "0x6000635")]
	public static bool RegisterValueChangedCallback<T>(this INotifyValueChanged<T> control, EventCallback<ChangeEvent<T>> callback)
	{
		return default(bool);
	}

	[Token(Token = "0x6000636")]
	public static bool UnregisterValueChangedCallback<T>(this INotifyValueChanged<T> control, EventCallback<ChangeEvent<T>> callback)
	{
		return default(bool);
	}
}
