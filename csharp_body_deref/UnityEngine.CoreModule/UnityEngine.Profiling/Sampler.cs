using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Profiling;

[Token(Token = "0x20001B4")]
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

	[Token(Token = "0x1700023E")]
	public bool isValid
	{
		[Token(Token = "0x6000CBC")]
		[Address(RVA = "0x4AE71D0", Offset = "0x4AE71D0", VA = "0x4AE71D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x4AE71C0", Offset = "0x4AE71C0", VA = "0x4AE71C0")]
	internal Sampler()
	{
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x4AE71E0", Offset = "0x4AE71E0", VA = "0x4AE71E0")]
	public Recorder GetRecorder()
	{
		return null;
	}
}
