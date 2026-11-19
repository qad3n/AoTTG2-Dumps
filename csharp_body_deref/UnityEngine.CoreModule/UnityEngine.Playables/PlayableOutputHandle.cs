// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.PlayableOutputHandle
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

[Token(Token = "0x200030B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/PlayableOutputHandle.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableOutput.h")]
public struct PlayableOutputHandle : IEquatable<PlayableOutputHandle>
{
	[Token(Token = "0x40007B3")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Handle;

	[Token(Token = "0x40007B4")]
	[FieldOffset(Offset = "0x8")]
	internal uint m_Version;

	[Token(Token = "0x40007B5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PlayableOutputHandle m_Null;

	[Token(Token = "0x170002EC")]
	public static PlayableOutputHandle Null
	{
		[Token(Token = "0x600125D")]
		[Address(RVA = "0x693B520", Offset = "0x693A520", VA = "0x693B520")]
		get
		{
			return default(PlayableOutputHandle);
		}
	}

	[Token(Token = "0x600125E")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal bool IsPlayableOutputOfType<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x600125F")]
	[Address(RVA = "0x693B570", Offset = "0x693A570", VA = "0x693B570", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001260")]
	[Address(RVA = "0x693B3E0", Offset = "0x693A3E0", VA = "0x693B3E0")]
	public static bool operator ==(PlayableOutputHandle lhs, PlayableOutputHandle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x693B5B0", Offset = "0x693A5B0", VA = "0x693B5B0", Slot = "0")]
	public override bool Equals(object p)
	{
		return default(bool);
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x693B690", Offset = "0x693A690", VA = "0x693B690", Slot = "4")]
	public bool Equals(PlayableOutputHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x693B5A0", Offset = "0x693A5A0", VA = "0x693B5A0")]
	internal static bool CompareVersion(PlayableOutputHandle lhs, PlayableOutputHandle rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001264")]
	[Address(RVA = "0x693B700", Offset = "0x693A700", VA = "0x693B700")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal extern bool IsValid();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001265")]
	[Address(RVA = "0x693B730", Offset = "0x693A730", VA = "0x693B730")]
	[UnityEngine.Bindings.FreeFunction("PlayableOutputHandleBindings::GetPlayableOutputType", HasExplicitThis = true, ThrowsException = true)]
	internal extern Type GetPlayableOutputType();
}
