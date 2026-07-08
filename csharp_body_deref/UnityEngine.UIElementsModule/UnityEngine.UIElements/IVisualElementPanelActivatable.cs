using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000476")]
internal interface IVisualElementPanelActivatable
{
	[Token(Token = "0x1700074C")]
	VisualElement element
	{
		[Token(Token = "0x6001BB5")]
		get;
	}

	[Token(Token = "0x6001BB6")]
	bool CanBeActivated();

	[Token(Token = "0x6001BB7")]
	void OnPanelActivate();

	[Token(Token = "0x6001BB8")]
	void OnPanelDeactivate();
}
