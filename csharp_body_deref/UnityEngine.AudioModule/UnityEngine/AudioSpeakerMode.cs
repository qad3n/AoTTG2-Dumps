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
