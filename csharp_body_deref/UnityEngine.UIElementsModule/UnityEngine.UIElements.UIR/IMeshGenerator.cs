// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.IMeshGenerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
