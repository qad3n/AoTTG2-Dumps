// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeUpdatePhase
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000560")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal enum VisualTreeUpdatePhase
{
	[Token(Token = "0x4001243")]
	Bindings,
	[Token(Token = "0x4001244")]
	DataBinding,
	[Token(Token = "0x4001245")]
	Animation,
	[Token(Token = "0x4001246")]
	Styles,
	[Token(Token = "0x4001247")]
	Layout,
	[Token(Token = "0x4001248")]
	TransformClip,
	[Token(Token = "0x4001249")]
	Repaint,
	[Token(Token = "0x400124A")]
	Authoring,
	[Token(Token = "0x400124B")]
	Count
}
