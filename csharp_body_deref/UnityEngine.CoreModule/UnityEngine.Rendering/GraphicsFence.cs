// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GraphicsFence
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

namespace UnityEngine.Rendering;

[Token(Token = "0x20002CD")]
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

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x4E19190", Offset = "0x4E19190", VA = "0x4E19190")]
	internal static SynchronisationStageFlags TranslateSynchronizationStageToFlags(SynchronisationStage s)
	{
		return default(SynchronisationStageFlags);
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x4E191A0", Offset = "0x4E191A0", VA = "0x4E191A0")]
	internal void InitPostAllocation()
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x4E19280", Offset = "0x4E19280", VA = "0x4E19280")]
	internal bool IsFencePending()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x4E192D0", Offset = "0x4E192D0", VA = "0x4E192D0")]
	internal void Validate()
	{
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x4E19240", Offset = "0x4E19240", VA = "0x4E19240")]
	private int GetPlatformNotSupportedVersion()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x4E19250", Offset = "0x4E19250", VA = "0x4E19250")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("GPUFenceInternals::GetVersionNumber")]
	private static extern int GetVersionNumber(IntPtr fencePtr);
}
