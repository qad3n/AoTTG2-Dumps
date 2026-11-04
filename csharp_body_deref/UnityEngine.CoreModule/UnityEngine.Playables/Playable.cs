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
	[Token(Token = "0x40007A1")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x40007A2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Playable m_NullPlayable;

	[Token(Token = "0x170002E3")]
	public static Playable Null
	{
		[Token(Token = "0x6001222")]
		[Address(RVA = "0x2F4E3F0", Offset = "0x2F4C9F0", VA = "0x182F4E3F0")]
		get
		{
			return default(Playable);
		}
	}

	[Token(Token = "0x6001223")]
	[Address(RVA = "0xBDB210", Offset = "0xBD9810", VA = "0x180BDB210")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal Playable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x6001224")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x6001225")]
	[Address(RVA = "0x2F4E260", Offset = "0x2F4C860", VA = "0x182F4E260", Slot = "4")]
	public bool Equals(Playable other)
	{
		return default(bool);
	}
}
