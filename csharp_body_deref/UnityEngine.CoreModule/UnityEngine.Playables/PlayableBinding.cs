// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.PlayableBinding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Playables;

[Token(Token = "0x2000305")]
public struct PlayableBinding
{
	[Token(Token = "0x2000306")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal delegate PlayableOutput CreateOutputMethod(PlayableGraph graph, string name);

	[Token(Token = "0x40007A3")]
	[FieldOffset(Offset = "0x0")]
	private string m_StreamName;

	[Token(Token = "0x40007A4")]
	[FieldOffset(Offset = "0x8")]
	private Object m_SourceObject;

	[Token(Token = "0x40007A5")]
	[FieldOffset(Offset = "0x10")]
	private Type m_SourceBindingType;

	[Token(Token = "0x40007A6")]
	[FieldOffset(Offset = "0x18")]
	private CreateOutputMethod m_CreateOutputMethod;

	[Token(Token = "0x40007A7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly PlayableBinding[] None;

	[Token(Token = "0x40007A8")]
	[FieldOffset(Offset = "0x8")]
	public static readonly double DefaultDuration;
}
