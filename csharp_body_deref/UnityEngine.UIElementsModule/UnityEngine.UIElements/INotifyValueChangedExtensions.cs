using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000A5")]
public static class INotifyValueChangedExtensions
{
	[Token(Token = "0x6000457")]
	public static bool RegisterValueChangedCallback<T>(this INotifyValueChanged<T> control, EventCallback<ChangeEvent<T>> callback)
	{
		return default(bool);
	}

	[Token(Token = "0x6000458")]
	public static bool UnregisterValueChangedCallback<T>(this INotifyValueChanged<T> control, EventCallback<ChangeEvent<T>> callback)
	{
		return default(bool);
	}
}
