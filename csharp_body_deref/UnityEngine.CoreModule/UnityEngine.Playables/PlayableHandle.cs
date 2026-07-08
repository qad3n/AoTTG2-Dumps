using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x200032F")]
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

	[Token(Token = "0x170002C3")]
	public static PlayableHandle Null
	{
		[Token(Token = "0x600115B")]
		[Address(RVA = "0x4B10220", Offset = "0x4B10220", VA = "0x4B10220")]
		get
		{
			return default(PlayableHandle);
		}
	}

	[Token(Token = "0x600115A")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal bool IsPlayableOfType<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x600115C")]
	[Address(RVA = "0x4B100E0", Offset = "0x4B100E0", VA = "0x4B100E0")]
	public static bool operator ==(PlayableHandle x, PlayableHandle y)
	{
		return default(bool);
	}

	[Token(Token = "0x600115D")]
	[Address(RVA = "0x4B106D0", Offset = "0x4B106D0", VA = "0x4B106D0", Slot = "0")]
	public override bool Equals(object p)
	{
		return default(bool);
	}

	[Token(Token = "0x600115E")]
	[Address(RVA = "0x4B107B0", Offset = "0x4B107B0", VA = "0x4B107B0", Slot = "4")]
	public bool Equals(PlayableHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x600115F")]
	[Address(RVA = "0x4B10820", Offset = "0x4B10820", VA = "0x4B10820", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001160")]
	[Address(RVA = "0x4B106C0", Offset = "0x4B106C0", VA = "0x4B106C0")]
	internal static bool CompareVersion(PlayableHandle lhs, PlayableHandle rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001161")]
	[Address(RVA = "0x4B10850", Offset = "0x4B10850", VA = "0x4B10850")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal extern bool IsValid();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001162")]
	[Address(RVA = "0x4B10880", Offset = "0x4B10880", VA = "0x4B10880")]
	[UnityEngine.Bindings.FreeFunction("PlayableHandleBindings::GetPlayableType", HasExplicitThis = true, ThrowsException = true)]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal extern Type GetPlayableType();
}
