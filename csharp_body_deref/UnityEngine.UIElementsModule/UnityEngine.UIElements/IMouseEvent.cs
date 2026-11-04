// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IMouseEvent
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001EB")]
public interface IMouseEvent
{
	[Token(Token = "0x17000279")]
	EventModifiers modifiers
	{
		[Token(Token = "0x6000D30")]
		get;
	}

	[Token(Token = "0x1700027A")]
	Vector2 mousePosition
	{
		[Token(Token = "0x6000D31")]
		get;
	}

	[Token(Token = "0x1700027B")]
	Vector2 localMousePosition
	{
		[Token(Token = "0x6000D32")]
		get;
	}

	[Token(Token = "0x1700027C")]
	Vector2 mouseDelta
	{
		[Token(Token = "0x6000D33")]
		get;
	}

	[Token(Token = "0x1700027D")]
	int clickCount
	{
		[Token(Token = "0x6000D34")]
		get;
	}

	[Token(Token = "0x1700027E")]
	int button
	{
		[Token(Token = "0x6000D35")]
		get;
	}

	[Token(Token = "0x1700027F")]
	int pressedButtons
	{
		[Token(Token = "0x6000D36")]
		get;
	}
}
