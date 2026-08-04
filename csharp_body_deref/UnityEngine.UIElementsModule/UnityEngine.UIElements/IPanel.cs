// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IPanel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200023B")]
public interface IPanel : IDisposable
{
	[Token(Token = "0x170002AA")]
	VisualElement visualTree
	{
		[Token(Token = "0x6000E4A")]
		get;
	}

	[Token(Token = "0x170002AB")]
	EventDispatcher dispatcher
	{
		[Token(Token = "0x6000E4B")]
		get;
	}

	[Token(Token = "0x170002AC")]
	ContextType contextType
	{
		[Token(Token = "0x6000E4C")]
		get;
	}

	[Token(Token = "0x170002AD")]
	FocusController focusController
	{
		[Token(Token = "0x6000E4D")]
		get;
	}

	[Token(Token = "0x6000E4E")]
	VisualElement Pick(Vector2 point);
}
