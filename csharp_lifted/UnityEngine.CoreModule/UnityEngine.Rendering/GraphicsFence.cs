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

[Token(Token = "0x200034C")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GPUFence.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct GraphicsFence
{
	[Token(Token = "0x400097D")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x400097E")]
	[FieldOffset(Offset = "0x8")]
	internal int m_Version;

	[Token(Token = "0x400097F")]
	[FieldOffset(Offset = "0xC")]
	internal GraphicsFenceType m_FenceType;

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x693E140", Offset = "0x693D140", VA = "0x693E140")]
	internal void InitPostAllocation()
	{
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x693E220", Offset = "0x693D220", VA = "0x693E220")]
	internal bool IsFencePending()
	{
		return default(bool);
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x693E270", Offset = "0x693D270", VA = "0x693E270")]
	internal void Validate()
	{
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x693E1E0", Offset = "0x693D1E0", VA = "0x693E1E0")]
	private int GetPlatformNotSupportedVersion()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x693E1F0", Offset = "0x693D1F0", VA = "0x693E1F0")]
	[UnityEngine.Bindings.FreeFunction("GPUFenceInternals::GetVersionNumber")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern int GetVersionNumber(IntPtr fencePtr);
}
