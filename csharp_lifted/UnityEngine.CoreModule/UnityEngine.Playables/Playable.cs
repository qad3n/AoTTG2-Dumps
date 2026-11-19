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

[Token(Token = "0x2000302")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct Playable : IEquatable<Playable>
{
	[Token(Token = "0x400079F")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x40007A0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Playable m_NullPlayable;

	[Token(Token = "0x170002E8")]
	public static Playable Null
	{
		[Token(Token = "0x6001236")]
		[Address(RVA = "0x693A9A0", Offset = "0x69399A0", VA = "0x693A9A0")]
		get
		{
			return default(Playable);
		}
	}

	[Token(Token = "0x6001237")]
	[Address(RVA = "0x693A9F0", Offset = "0x69399F0", VA = "0x693A9F0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal Playable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x693AA00", Offset = "0x6939A00", VA = "0x693AA00", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x6001239")]
	[Address(RVA = "0x693AA10", Offset = "0x6939A10", VA = "0x693AA10", Slot = "4")]
	public bool Equals(Playable other)
	{
		return default(bool);
	}
}
