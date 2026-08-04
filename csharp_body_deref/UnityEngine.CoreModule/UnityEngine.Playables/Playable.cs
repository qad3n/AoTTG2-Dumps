// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.Playable
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

[Token(Token = "0x200032B")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct Playable : IEquatable<Playable>
{
	[Token(Token = "0x4000A17")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x4000A18")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Playable m_NullPlayable;

	[Token(Token = "0x170002C1")]
	public static Playable Null
	{
		[Token(Token = "0x6001143")]
		[Address(RVA = "0x4E378D0", Offset = "0x4E378D0", VA = "0x4E378D0")]
		get
		{
			return default(Playable);
		}
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x4E37920", Offset = "0x4E37920", VA = "0x4E37920")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal Playable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x4E37930", Offset = "0x4E37930", VA = "0x4E37930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x6001146")]
	[Address(RVA = "0x4E37940", Offset = "0x4E37940", VA = "0x4E37940", Slot = "4")]
	public bool Equals(Playable other)
	{
		return default(bool);
	}
}
