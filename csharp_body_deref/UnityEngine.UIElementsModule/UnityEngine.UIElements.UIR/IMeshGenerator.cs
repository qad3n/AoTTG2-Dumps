using Il2CppDummyDll;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004AC")]
internal interface IMeshGenerator
{
	[Token(Token = "0x1700076F")]
	VisualElement currentElement
	{
		[Token(Token = "0x6001CF7")]
		set;
	}

	[Token(Token = "0x6001CF8")]
	void DrawText(UnityEngine.TextCore.Text.MeshInfo[] meshInfo, Vector2 offset, bool hasMultipleColors);

	[Token(Token = "0x6001CF9")]
	void DrawRectangle(MeshGenerator.RectangleParams rectParams);

	[Token(Token = "0x6001CFA")]
	void DrawBorder(MeshGenerator.BorderParams borderParams);

	[Token(Token = "0x6001CFB")]
	void DrawRectangleRepeat(MeshGenerator.RectangleParams rectParams, Rect totalRect, float scaledPixelsPerPoint);
}
