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

[Token(Token = "0x2000334")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableOutput.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/PlayableOutputHandle.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
public struct PlayableOutputHandle : IEquatable<PlayableOutputHandle>
{
	[Token(Token = "0x4000A2B")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Handle;

	[Token(Token = "0x4000A2C")]
	[FieldOffset(Offset = "0x8")]
	internal uint m_Version;

	[Token(Token = "0x4000A2D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PlayableOutputHandle m_Null;

	[Token(Token = "0x170002C5")]
	public static PlayableOutputHandle Null
	{
		[Token(Token = "0x600116A")]
		[Address(RVA = "0x4E38450", Offset = "0x4E38450", VA = "0x4E38450")]
		get
		{
			return default(PlayableOutputHandle);
		}
	}

	[Token(Token = "0x600116B")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal bool IsPlayableOutputOfType<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x4E384A0", Offset = "0x4E384A0", VA = "0x4E384A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x4E38310", Offset = "0x4E38310", VA = "0x4E38310")]
	public static bool operator ==(PlayableOutputHandle lhs, PlayableOutputHandle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x4E384E0", Offset = "0x4E384E0", VA = "0x4E384E0", Slot = "0")]
	public override bool Equals(object p)
	{
		return default(bool);
	}

	[Token(Token = "0x600116F")]
	[Address(RVA = "0x4E385C0", Offset = "0x4E385C0", VA = "0x4E385C0", Slot = "4")]
	public bool Equals(PlayableOutputHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x4E384D0", Offset = "0x4E384D0", VA = "0x4E384D0")]
	internal static bool CompareVersion(PlayableOutputHandle lhs, PlayableOutputHandle rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001171")]
	[Address(RVA = "0x4E38630", Offset = "0x4E38630", VA = "0x4E38630")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal extern bool IsValid();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001172")]
	[Address(RVA = "0x4E38660", Offset = "0x4E38660", VA = "0x4E38660")]
	[UnityEngine.Bindings.FreeFunction("PlayableOutputHandleBindings::GetPlayableOutputType", HasExplicitThis = true, ThrowsException = true)]
	internal extern Type GetPlayableOutputType();
}
