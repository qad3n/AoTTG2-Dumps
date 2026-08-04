// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AudioSpeakerMode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000002")]
public enum AudioSpeakerMode
{
	[Token(Token = "0x4000002")]
	[Obsolete("Raw speaker mode is not supported. Do not use.", true)]
	Raw,
	[Token(Token = "0x4000003")]
	Mono,
	[Token(Token = "0x4000004")]
	Stereo,
	[Token(Token = "0x4000005")]
	Quad,
	[Token(Token = "0x4000006")]
	Surround,
	[Token(Token = "0x4000007")]
	Mode5point1,
	[Token(Token = "0x4000008")]
	Mode7point1,
	[Token(Token = "0x4000009")]
	Prologic
}
