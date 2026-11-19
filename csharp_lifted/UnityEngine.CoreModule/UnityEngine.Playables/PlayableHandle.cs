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

[Token(Token = "0x2000309")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/PlayableHandle.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableGraph.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
public struct PlayableHandle : IEquatable<PlayableHandle>
{
	[Token(Token = "0x40007AE")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Handle;

	[Token(Token = "0x40007AF")]
	[FieldOffset(Offset = "0x8")]
	internal uint m_Version;

	[Token(Token = "0x40007B0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PlayableHandle m_Null;

	[Token(Token = "0x170002EB")]
	public static PlayableHandle Null
	{
		[Token(Token = "0x6001250")]
		[Address(RVA = "0x693AC20", Offset = "0x6939C20", VA = "0x693AC20")]
		get
		{
			return default(PlayableHandle);
		}
	}

	[Token(Token = "0x600124F")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal bool IsPlayableOfType<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x6001251")]
	[Address(RVA = "0x693AAE0", Offset = "0x6939AE0", VA = "0x693AAE0")]
	public static bool operator ==(PlayableHandle x, PlayableHandle y)
	{
		return default(bool);
	}

	[Token(Token = "0x6001252")]
	[Address(RVA = "0x693B0D0", Offset = "0x693A0D0", VA = "0x693B0D0", Slot = "0")]
	public override bool Equals(object p)
	{
		return default(bool);
	}

	[Token(Token = "0x6001253")]
	[Address(RVA = "0x693B1B0", Offset = "0x693A1B0", VA = "0x693B1B0", Slot = "4")]
	public bool Equals(PlayableHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001254")]
	[Address(RVA = "0x693B220", Offset = "0x693A220", VA = "0x693B220", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x693B0C0", Offset = "0x693A0C0", VA = "0x693B0C0")]
	internal static bool CompareVersion(PlayableHandle lhs, PlayableHandle rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001256")]
	[Address(RVA = "0x693B250", Offset = "0x693A250", VA = "0x693B250")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal extern bool IsValid();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001257")]
	[Address(RVA = "0x693B280", Offset = "0x693A280", VA = "0x693B280")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	[UnityEngine.Bindings.FreeFunction("PlayableHandleBindings::GetPlayableType", HasExplicitThis = true, ThrowsException = true)]
	internal extern Type GetPlayableType();
}
