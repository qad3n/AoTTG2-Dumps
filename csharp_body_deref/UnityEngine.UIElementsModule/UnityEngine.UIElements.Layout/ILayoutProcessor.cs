using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20004FD")]
internal interface ILayoutProcessor
{
	[Token(Token = "0x6001F16")]
	void CalculateLayout(LayoutNode node, float parentWidth, float parentHeight, LayoutDirection parentDirection);
}
