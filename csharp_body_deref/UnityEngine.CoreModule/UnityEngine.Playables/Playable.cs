using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x2000328")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct Playable : IEquatable<Playable>
{
	[Token(Token = "0x4000A17")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x4000A18")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Playable m_NullPlayable;

	[Token(Token = "0x170002C0")]
	public static Playable Null
	{
		[Token(Token = "0x6001141")]
		[Address(RVA = "0x4B0FFA0", Offset = "0x4B0FFA0", VA = "0x4B0FFA0")]
		get
		{
			return default(Playable);
		}
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x4B0FFF0", Offset = "0x4B0FFF0", VA = "0x4B0FFF0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal Playable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x4B10000", Offset = "0x4B10000", VA = "0x4B10000", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x4B10010", Offset = "0x4B10010", VA = "0x4B10010", Slot = "4")]
	public bool Equals(Playable other)
	{
		return default(bool);
	}
}
