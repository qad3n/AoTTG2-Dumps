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
