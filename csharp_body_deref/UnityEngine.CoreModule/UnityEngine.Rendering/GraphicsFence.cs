using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002CA")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GPUFence.h")]
public struct GraphicsFence
{
	[Token(Token = "0x4000811")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000812")]
	[FieldOffset(Offset = "0x8")]
	internal int m_Version;

	[Token(Token = "0x4000813")]
	[FieldOffset(Offset = "0xC")]
	internal GraphicsFenceType m_FenceType;

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x4AF1860", Offset = "0x4AF1860", VA = "0x4AF1860")]
	internal static SynchronisationStageFlags TranslateSynchronizationStageToFlags(SynchronisationStage s)
	{
		return default(SynchronisationStageFlags);
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x4AF1870", Offset = "0x4AF1870", VA = "0x4AF1870")]
	internal void InitPostAllocation()
	{
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x4AF1950", Offset = "0x4AF1950", VA = "0x4AF1950")]
	internal bool IsFencePending()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x4AF19A0", Offset = "0x4AF19A0", VA = "0x4AF19A0")]
	internal void Validate()
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x4AF1910", Offset = "0x4AF1910", VA = "0x4AF1910")]
	private int GetPlatformNotSupportedVersion()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x4AF1920", Offset = "0x4AF1920", VA = "0x4AF1920")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("GPUFenceInternals::GetVersionNumber")]
	private static extern int GetVersionNumber(IntPtr fencePtr);
}
