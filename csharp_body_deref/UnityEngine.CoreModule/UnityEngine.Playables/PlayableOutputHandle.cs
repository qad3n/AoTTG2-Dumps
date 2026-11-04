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
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableOutput.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
public struct PlayableOutputHandle : IEquatable<PlayableOutputHandle>
{
	[Token(Token = "0x40007B5")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Handle;

	[Token(Token = "0x40007B6")]
	[FieldOffset(Offset = "0x8")]
	internal uint m_Version;

	[Token(Token = "0x40007B7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PlayableOutputHandle m_Null;

	[Token(Token = "0x170002E7")]
	public static PlayableOutputHandle Null
	{
		[Token(Token = "0x6001249")]
		[Address(RVA = "0x2F4DFD0", Offset = "0x2F4C5D0", VA = "0x182F4DFD0")]
		get
		{
			return default(PlayableOutputHandle);
		}
	}

	[Token(Token = "0x600124A")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal bool IsPlayableOutputOfType<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x600124B")]
	[Address(RVA = "0x2F4DB40", Offset = "0x2F4C140", VA = "0x182F4DB40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600124C")]
	[Address(RVA = "0x2F4E030", Offset = "0x2F4C630", VA = "0x182F4E030")]
	public static bool operator ==(PlayableOutputHandle lhs, PlayableOutputHandle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x2F4DD30", Offset = "0x2F4C330", VA = "0x182F4DD30", Slot = "0")]
	public override bool Equals(object p)
	{
		return default(bool);
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x2F4DE70", Offset = "0x2F4C470", VA = "0x182F4DE70", Slot = "4")]
	public bool Equals(PlayableOutputHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x600124F")]
	[Address(RVA = "0xA4F710", Offset = "0xA4DD10", VA = "0x180A4F710")]
	internal static bool CompareVersion(PlayableOutputHandle lhs, PlayableOutputHandle rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001250")]
	[Address(RVA = "0x2F4DF50", Offset = "0x2F4C550", VA = "0x182F4DF50")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal extern bool IsValid();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001251")]
	[Address(RVA = "0x2F4DF10", Offset = "0x2F4C510", VA = "0x182F4DF10")]
	[UnityEngine.Bindings.FreeFunction("PlayableOutputHandleBindings::GetPlayableOutputType", HasExplicitThis = true, ThrowsException = true)]
	internal extern Type GetPlayableOutputType();
}
