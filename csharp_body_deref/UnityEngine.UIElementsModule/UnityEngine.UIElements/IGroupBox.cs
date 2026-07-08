using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000216")]
internal interface IGroupBox
{
	[Token(Token = "0x6000DC4")]
	void OnOptionAdded(IGroupBoxOption option);

	[Token(Token = "0x6000DC5")]
	void OnOptionRemoved(IGroupBoxOption option);
}
[Token(Token = "0x2000217")]
internal interface IGroupBox<T> : IGroupBox where T : IGroupManager
{
}
