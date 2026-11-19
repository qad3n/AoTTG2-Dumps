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

[Token(Token = "0x20001F0")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/Sampler.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public class Sampler
{
	[Token(Token = "0x40006C4")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x40006C5")]
	[FieldOffset(Offset = "0x0")]
	internal static Sampler s_InvalidSampler;

	[Token(Token = "0x170002C0")]
	public bool isValid
	{
		[Token(Token = "0x600108F")]
		[Address(RVA = "0x6930360", Offset = "0x692F360", VA = "0x6930360")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600108D")]
	[Address(RVA = "0x6930330", Offset = "0x692F330", VA = "0x6930330")]
	internal Sampler()
	{
	}

	[Token(Token = "0x600108E")]
	[Address(RVA = "0x6930340", Offset = "0x692F340", VA = "0x6930340")]
	internal Sampler(IntPtr ptr)
	{
	}

	[Token(Token = "0x6001090")]
	[Address(RVA = "0x6930370", Offset = "0x692F370", VA = "0x6930370")]
	public Recorder GetRecorder()
	{
		return null;
	}
}
