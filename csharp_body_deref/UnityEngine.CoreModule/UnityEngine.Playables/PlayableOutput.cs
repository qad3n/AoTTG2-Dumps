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
	[Token(Token = "0x40007B3")]
	[FieldOffset(Offset = "0x0")]
	private PlayableOutputHandle m_Handle;

	[Token(Token = "0x40007B4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PlayableOutput m_NullPlayableOutput;

	[Token(Token = "0x6001245")]
	[Address(RVA = "0xBDB210", Offset = "0xBD9810", VA = "0x180BDB210")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal PlayableOutput(PlayableOutputHandle handle)
	{
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableOutputHandle GetHandle()
	{
		return default(PlayableOutputHandle);
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x2F4E0D0", Offset = "0x2F4C6D0", VA = "0x182F4E0D0", Slot = "4")]
	public bool Equals(PlayableOutput other)
	{
		return default(bool);
	}
}
