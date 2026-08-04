// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Profiling.Sampler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Profiling;

[Token(Token = "0x20001B7")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/Sampler.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public class Sampler
{
	[Token(Token = "0x400062D")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x400062E")]
	[FieldOffset(Offset = "0x0")]
	internal static Sampler s_InvalidSampler;

	[Token(Token = "0x1700023F")]
	public bool isValid
	{
		[Token(Token = "0x6000CBE")]
		[Address(RVA = "0x4E0EB00", Offset = "0x4E0EB00", VA = "0x4E0EB00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x4E0EAF0", Offset = "0x4E0EAF0", VA = "0x4E0EAF0")]
	internal Sampler()
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x4E0EB10", Offset = "0x4E0EB10", VA = "0x4E0EB10")]
	public Recorder GetRecorder()
	{
		return null;
	}
}
