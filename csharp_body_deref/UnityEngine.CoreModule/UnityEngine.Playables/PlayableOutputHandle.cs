using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x2000331")]
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

	[Token(Token = "0x170002C4")]
	public static PlayableOutputHandle Null
	{
		[Token(Token = "0x6001168")]
		[Address(RVA = "0x4B10B20", Offset = "0x4B10B20", VA = "0x4B10B20")]
		get
		{
			return default(PlayableOutputHandle);
		}
	}

	[Token(Token = "0x6001169")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal bool IsPlayableOutputOfType<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x4B10B70", Offset = "0x4B10B70", VA = "0x4B10B70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600116B")]
	[Address(RVA = "0x4B109E0", Offset = "0x4B109E0", VA = "0x4B109E0")]
	public static bool operator ==(PlayableOutputHandle lhs, PlayableOutputHandle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x4B10BB0", Offset = "0x4B10BB0", VA = "0x4B10BB0", Slot = "0")]
	public override bool Equals(object p)
	{
		return default(bool);
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x4B10C90", Offset = "0x4B10C90", VA = "0x4B10C90", Slot = "4")]
	public bool Equals(PlayableOutputHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x4B10BA0", Offset = "0x4B10BA0", VA = "0x4B10BA0")]
	internal static bool CompareVersion(PlayableOutputHandle lhs, PlayableOutputHandle rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600116F")]
	[Address(RVA = "0x4B10D00", Offset = "0x4B10D00", VA = "0x4B10D00")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal extern bool IsValid();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001170")]
	[Address(RVA = "0x4B10D30", Offset = "0x4B10D30", VA = "0x4B10D30")]
	[UnityEngine.Bindings.FreeFunction("PlayableOutputHandleBindings::GetPlayableOutputType", HasExplicitThis = true, ThrowsException = true)]
	internal extern Type GetPlayableOutputType();
}
