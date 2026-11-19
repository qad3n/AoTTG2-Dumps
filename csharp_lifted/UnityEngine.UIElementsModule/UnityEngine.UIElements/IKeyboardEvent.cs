// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IKeyboardEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001E2")]
public interface IKeyboardEvent
{
	[Token(Token = "0x1700026A")]
	EventModifiers modifiers
	{
		[Token(Token = "0x6000CFF")]
		get;
	}

	[Token(Token = "0x1700026B")]
	char character
	{
		[Token(Token = "0x6000D00")]
		get;
	}

	[Token(Token = "0x1700026C")]
	KeyCode keyCode
	{
		[Token(Token = "0x6000D01")]
		get;
	}
}
