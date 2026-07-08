using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x2000330")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct PlayableOutput : IEquatable<PlayableOutput>
{
	[Token(Token = "0x4000A29")]
	[FieldOffset(Offset = "0x0")]
	private PlayableOutputHandle m_Handle;

	[Token(Token = "0x4000A2A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PlayableOutput m_NullPlayableOutput;

	[Token(Token = "0x6001164")]
	[Address(RVA = "0x4B108F0", Offset = "0x4B108F0", VA = "0x4B108F0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal PlayableOutput(PlayableOutputHandle handle)
	{
	}

	[Token(Token = "0x6001165")]
	[Address(RVA = "0x4B10900", Offset = "0x4B10900", VA = "0x4B10900", Slot = "5")]
	public PlayableOutputHandle GetHandle()
	{
		return default(PlayableOutputHandle);
	}

	[Token(Token = "0x6001166")]
	[Address(RVA = "0x4B10910", Offset = "0x4B10910", VA = "0x4B10910", Slot = "4")]
	public bool Equals(PlayableOutput other)
	{
		return default(bool);
	}
}
