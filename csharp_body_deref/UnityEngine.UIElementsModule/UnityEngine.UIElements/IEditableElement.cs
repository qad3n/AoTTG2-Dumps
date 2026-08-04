// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IEditableElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000A9")]
internal interface IEditableElement
{
	[Token(Token = "0x170000A3")]
	internal Action editingStarted
	{
		[Token(Token = "0x6000477")]
		get;
	}

	[Token(Token = "0x170000A4")]
	internal Action editingEnded
	{
		[Token(Token = "0x6000478")]
		get;
	}
}
