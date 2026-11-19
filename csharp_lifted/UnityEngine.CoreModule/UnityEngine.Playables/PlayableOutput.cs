// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.PlayableOutput
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x200030A")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct PlayableOutput : IEquatable<PlayableOutput>
{
	[Token(Token = "0x40007B1")]
	[FieldOffset(Offset = "0x0")]
	private PlayableOutputHandle m_Handle;

	[Token(Token = "0x40007B2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PlayableOutput m_NullPlayableOutput;

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x693B2F0", Offset = "0x693A2F0", VA = "0x693B2F0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal PlayableOutput(PlayableOutputHandle handle)
	{
	}

	[Token(Token = "0x600125A")]
	[Address(RVA = "0x693B300", Offset = "0x693A300", VA = "0x693B300", Slot = "5")]
	public PlayableOutputHandle GetHandle()
	{
		return default(PlayableOutputHandle);
	}

	[Token(Token = "0x600125B")]
	[Address(RVA = "0x693B310", Offset = "0x693A310", VA = "0x693B310", Slot = "4")]
	public bool Equals(PlayableOutput other)
	{
		return default(bool);
	}
}
