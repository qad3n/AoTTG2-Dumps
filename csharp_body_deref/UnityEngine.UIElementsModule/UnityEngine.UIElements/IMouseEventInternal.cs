// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IMouseEventInternal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001A5")]
internal interface IMouseEventInternal
{
	[Token(Token = "0x17000202")]
	bool triggeredByOS
	{
		[Token(Token = "0x6000B19")]
		get;
		[Token(Token = "0x6000B1A")]
		set;
	}

	[Token(Token = "0x17000203")]
	IPointerEvent sourcePointerEvent
	{
		[Token(Token = "0x6000B1B")]
		get;
		[Token(Token = "0x6000B1C")]
		set;
	}
}
