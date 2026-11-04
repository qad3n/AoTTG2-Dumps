// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IPanel
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002B4")]
public interface IPanel : IDisposable
{
	[Token(Token = "0x17000393")]
	VisualElement visualTree
	{
		[Token(Token = "0x60011ED")]
		get;
	}

	[Token(Token = "0x17000394")]
	EventDispatcher dispatcher
	{
		[Token(Token = "0x60011EE")]
		get;
	}

	[Token(Token = "0x17000395")]
	ContextType contextType
	{
		[Token(Token = "0x60011EF")]
		get;
	}

	[Token(Token = "0x17000396")]
	FocusController focusController
	{
		[Token(Token = "0x60011F0")]
		get;
	}

	[Token(Token = "0x17000397")]
	bool isDirty
	{
		[Token(Token = "0x60011F1")]
		get;
	}

	[Token(Token = "0x17000398")]
	float scaledPixelsPerPoint
	{
		[Token(Token = "0x60011F2")]
		get;
	}
}
