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

[Token(Token = "0x2000333")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct PlayableOutput : IEquatable<PlayableOutput>
{
	[Token(Token = "0x4000A29")]
	[FieldOffset(Offset = "0x0")]
	private PlayableOutputHandle m_Handle;

	[Token(Token = "0x4000A2A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PlayableOutput m_NullPlayableOutput;

	[Token(Token = "0x6001166")]
	[Address(RVA = "0x4E38220", Offset = "0x4E38220", VA = "0x4E38220")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal PlayableOutput(PlayableOutputHandle handle)
	{
	}

	[Token(Token = "0x6001167")]
	[Address(RVA = "0x4E38230", Offset = "0x4E38230", VA = "0x4E38230", Slot = "5")]
	public PlayableOutputHandle GetHandle()
	{
		return default(PlayableOutputHandle);
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x4E38240", Offset = "0x4E38240", VA = "0x4E38240", Slot = "4")]
	public bool Equals(PlayableOutput other)
	{
		return default(bool);
	}
}
