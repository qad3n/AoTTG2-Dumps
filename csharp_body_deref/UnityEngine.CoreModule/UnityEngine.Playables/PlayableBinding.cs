using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Playables;

[Token(Token = "0x200032B")]
public struct PlayableBinding
{
	[Token(Token = "0x200032C")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal delegate PlayableOutput CreateOutputMethod(PlayableGraph graph, string name);

	[Token(Token = "0x4000A19")]
	[FieldOffset(Offset = "0x0")]
	private string m_StreamName;

	[Token(Token = "0x4000A1A")]
	[FieldOffset(Offset = "0x8")]
	private Object m_SourceObject;

	[Token(Token = "0x4000A1B")]
	[FieldOffset(Offset = "0x10")]
	private Type m_SourceBindingType;

	[Token(Token = "0x4000A1C")]
	[FieldOffset(Offset = "0x18")]
	private CreateOutputMethod m_CreateOutputMethod;

	[Token(Token = "0x4000A1D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly PlayableBinding[] None;

	[Token(Token = "0x4000A1E")]
	[FieldOffset(Offset = "0x8")]
	public static readonly double DefaultDuration;
}
