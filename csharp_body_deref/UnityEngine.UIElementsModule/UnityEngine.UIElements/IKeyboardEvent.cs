// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IKeyboardEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200019B")]
public interface IKeyboardEvent
{
	[Token(Token = "0x170001E8")]
	EventModifiers modifiers
	{
		[Token(Token = "0x6000ADC")]
		get;
	}

	[Token(Token = "0x170001E9")]
	char character
	{
		[Token(Token = "0x6000ADD")]
		get;
	}

	[Token(Token = "0x170001EA")]
	KeyCode keyCode
	{
		[Token(Token = "0x6000ADE")]
		get;
	}
}
