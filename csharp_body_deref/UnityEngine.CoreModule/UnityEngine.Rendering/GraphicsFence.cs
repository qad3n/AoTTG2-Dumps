// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GraphicsFence
// Update status: CHANGED in this game update
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
	[Token(Token = "0x400097F")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000980")]
	[FieldOffset(Offset = "0x8")]
	internal int m_Version;

	[Token(Token = "0x4000981")]
	[FieldOffset(Offset = "0xC")]
	internal GraphicsFenceType m_FenceType;

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x2F491D0", Offset = "0x2F477D0", VA = "0x182F491D0")]
	internal void InitPostAllocation()
	{
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x2F49280", Offset = "0x2F47880", VA = "0x182F49280")]
	internal bool IsFencePending()
	{
		return default(bool);
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x2F492E0", Offset = "0x2F478E0", VA = "0x182F492E0")]
	internal void Validate()
	{
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x2E962A0", Offset = "0x2E948A0", VA = "0x182E962A0")]
	private int GetPlatformNotSupportedVersion()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x2F49190", Offset = "0x2F47790", VA = "0x182F49190")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("GPUFenceInternals::GetVersionNumber")]
	private static extern int GetVersionNumber(IntPtr fencePtr);
}
