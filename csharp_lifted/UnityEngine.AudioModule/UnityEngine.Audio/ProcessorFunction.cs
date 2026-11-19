// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.ProcessorFunction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Audio;

[Token(Token = "0x200002B")]
internal enum ProcessorFunction : uint
{
	[Token(Token = "0x4000040")]
	Process = 1u,
	[Token(Token = "0x4000041")]
	Update,
	[Token(Token = "0x4000042")]
	OutputProcessEarly,
	[Token(Token = "0x4000043")]
	OutputProcess,
	[Token(Token = "0x4000044")]
	OutputProcessEnd,
	[Token(Token = "0x4000045")]
	OutputRemoved
}
