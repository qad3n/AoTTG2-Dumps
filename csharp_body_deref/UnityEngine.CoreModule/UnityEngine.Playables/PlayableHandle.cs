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
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/PlayableHandle.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableGraph.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
public struct PlayableHandle : IEquatable<PlayableHandle>
{
	[Token(Token = "0x40007B0")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Handle;

	[Token(Token = "0x40007B1")]
	[FieldOffset(Offset = "0x8")]
	internal uint m_Version;

	[Token(Token = "0x40007B2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PlayableHandle m_Null;

	[Token(Token = "0x170002E6")]
	public static PlayableHandle Null
	{
		[Token(Token = "0x600123C")]
		[Address(RVA = "0x2F4DC30", Offset = "0x2F4C230", VA = "0x182F4DC30")]
		get
		{
			return default(PlayableHandle);
		}
	}

	[Token(Token = "0x600123B")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal bool IsPlayableOfType<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x600123D")]
	[Address(RVA = "0x2F4DC90", Offset = "0x2F4C290", VA = "0x182F4DC90")]
	public static bool operator ==(PlayableHandle x, PlayableHandle y)
	{
		return default(bool);
	}

	[Token(Token = "0x600123E")]
	[Address(RVA = "0x2F4D960", Offset = "0x2F4BF60", VA = "0x182F4D960", Slot = "0")]
	public override bool Equals(object p)
	{
		return default(bool);
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x2F4DAA0", Offset = "0x2F4C0A0", VA = "0x182F4DAA0", Slot = "4")]
	public bool Equals(PlayableHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001240")]
	[Address(RVA = "0x2F4DB40", Offset = "0x2F4C140", VA = "0x182F4DB40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0xA4F710", Offset = "0xA4DD10", VA = "0x180A4F710")]
	internal static bool CompareVersion(PlayableHandle lhs, PlayableHandle rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001242")]
	[Address(RVA = "0x2F4DBB0", Offset = "0x2F4C1B0", VA = "0x182F4DBB0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal extern bool IsValid();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001243")]
	[Address(RVA = "0x2F4DB70", Offset = "0x2F4C170", VA = "0x182F4DB70")]
	[UnityEngine.Bindings.FreeFunction("PlayableHandleBindings::GetPlayableType", HasExplicitThis = true, ThrowsException = true)]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal extern Type GetPlayableType();
}
