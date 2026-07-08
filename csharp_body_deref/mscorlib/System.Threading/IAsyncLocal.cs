using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001C8")]
internal interface IAsyncLocal
{
	[Token(Token = "0x600115B")]
	void OnValueChanged(object previousValue, object currentValue, bool contextChanged);
}
