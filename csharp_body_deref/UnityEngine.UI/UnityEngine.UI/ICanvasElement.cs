// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.ICanvasElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000009")]
public interface ICanvasElement
{
	[Token(Token = "0x17000009")]
	Transform transform
	{
		[Token(Token = "0x600001D")]
		get;
	}

	[Token(Token = "0x600001C")]
	void Rebuild(CanvasUpdate executing);

	[Token(Token = "0x600001E")]
	void LayoutComplete();

	[Token(Token = "0x600001F")]
	void GraphicUpdateComplete();

	[Token(Token = "0x6000020")]
	bool IsDestroyed();
}
