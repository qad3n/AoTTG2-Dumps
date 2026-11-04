// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PseudoStates
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000531")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
[Flags]
internal enum PseudoStates
{
	[Token(Token = "0x4001195")]
	None = 0,
	[Token(Token = "0x4001196")]
	Active = 1,
	[Token(Token = "0x4001197")]
	Hover = 2,
	[Token(Token = "0x4001198")]
	Checked = 8,
	[Token(Token = "0x4001199")]
	Disabled = 0x20,
	[Token(Token = "0x400119A")]
	Focus = 0x40,
	[Token(Token = "0x400119B")]
	Root = 0x80
}
