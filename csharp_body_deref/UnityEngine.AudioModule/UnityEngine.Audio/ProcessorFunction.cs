// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.ProcessorFunction
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Audio;

[Token(Token = "0x2000026")]
internal enum ProcessorFunction : uint
{
	[Token(Token = "0x4000038")]
	Process = 1u,
	[Token(Token = "0x4000039")]
	Update,
	[Token(Token = "0x400003A")]
	OutputProcessEarly,
	[Token(Token = "0x400003B")]
	OutputProcess,
	[Token(Token = "0x400003C")]
	OutputProcessEnd,
	[Token(Token = "0x400003D")]
	OutputRemoved
}
