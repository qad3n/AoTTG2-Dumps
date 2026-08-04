// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.PlayableHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x2000332")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/PlayableHandle.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableGraph.h")]
public struct PlayableHandle : IEquatable<PlayableHandle>
{
	[Token(Token = "0x4000A26")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Handle;

	[Token(Token = "0x4000A27")]
	[FieldOffset(Offset = "0x8")]
	internal uint m_Version;

	[Token(Token = "0x4000A28")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PlayableHandle m_Null;

	[Token(Token = "0x170002C4")]
	public static PlayableHandle Null
	{
		[Token(Token = "0x600115D")]
		[Address(RVA = "0x4E37B50", Offset = "0x4E37B50", VA = "0x4E37B50")]
		get
		{
			return default(PlayableHandle);
		}
	}

	[Token(Token = "0x600115C")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal bool IsPlayableOfType<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x600115E")]
	[Address(RVA = "0x4E37A10", Offset = "0x4E37A10", VA = "0x4E37A10")]
	public static bool operator ==(PlayableHandle x, PlayableHandle y)
	{
		return default(bool);
	}

	[Token(Token = "0x600115F")]
	[Address(RVA = "0x4E38000", Offset = "0x4E38000", VA = "0x4E38000", Slot = "0")]
	public override bool Equals(object p)
	{
		return default(bool);
	}

	[Token(Token = "0x6001160")]
	[Address(RVA = "0x4E380E0", Offset = "0x4E380E0", VA = "0x4E380E0", Slot = "4")]
	public bool Equals(PlayableHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001161")]
	[Address(RVA = "0x4E38150", Offset = "0x4E38150", VA = "0x4E38150", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001162")]
	[Address(RVA = "0x4E37FF0", Offset = "0x4E37FF0", VA = "0x4E37FF0")]
	internal static bool CompareVersion(PlayableHandle lhs, PlayableHandle rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001163")]
	[Address(RVA = "0x4E38180", Offset = "0x4E38180", VA = "0x4E38180")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal extern bool IsValid();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001164")]
	[Address(RVA = "0x4E381B0", Offset = "0x4E381B0", VA = "0x4E381B0")]
	[UnityEngine.Bindings.FreeFunction("PlayableHandleBindings::GetPlayableType", HasExplicitThis = true, ThrowsException = true)]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal extern Type GetPlayableType();
}
