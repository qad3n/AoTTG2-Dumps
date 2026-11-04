// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AudioConfiguration
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000003")]
public struct AudioConfiguration
{
	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x0")]
	public AudioSpeakerMode speakerMode;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x4")]
	public int dspBufferSize;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x8")]
	public int sampleRate;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0xC")]
	public int numRealVoices;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x10")]
	public int numVirtualVoices;
}
