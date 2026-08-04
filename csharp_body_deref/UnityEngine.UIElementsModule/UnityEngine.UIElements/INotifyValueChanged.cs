// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.INotifyValueChanged
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000A4")]
public interface INotifyValueChanged<T>
{
	[Token(Token = "0x1700009B")]
	T value
	{
		[Token(Token = "0x6000454")]
		get;
		[Token(Token = "0x6000455")]
		set;
	}

	[Token(Token = "0x6000456")]
	void SetValueWithoutNotify(T newValue);
}
