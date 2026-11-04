// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Profiling.Sampler
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Profiling;

[Token(Token = "0x20001EF")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/Sampler.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public class Sampler
{
	[Token(Token = "0x40006BF")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x40006C0")]
	[FieldOffset(Offset = "0x0")]
	internal static Sampler s_InvalidSampler;

	[Token(Token = "0x170002B9")]
	public bool isValid
	{
		[Token(Token = "0x6001072")]
		[Address(RVA = "0x2F1FA00", Offset = "0x2F1E000", VA = "0x182F1FA00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001070")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal Sampler()
	{
	}

	[Token(Token = "0x6001071")]
	[Address(RVA = "0x2EC4A00", Offset = "0x2EC3000", VA = "0x182EC4A00")]
	internal Sampler(IntPtr ptr)
	{
	}

	[Token(Token = "0x6001073")]
	[Address(RVA = "0x2F55A00", Offset = "0x2F54000", VA = "0x182F55A00")]
	public Recorder GetRecorder()
	{
		return null;
	}
}
