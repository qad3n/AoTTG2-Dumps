using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000218")]
internal interface IGroupManager
{
	[Token(Token = "0x6000DC6")]
	void Init(IGroupBox groupBox);

	[Token(Token = "0x6000DC7")]
	void OnOptionSelectionChanged(IGroupBoxOption selectedOption);

	[Token(Token = "0x6000DC8")]
	void RegisterOption(IGroupBoxOption option);

	[Token(Token = "0x6000DC9")]
	void UnregisterOption(IGroupBoxOption option);
}
