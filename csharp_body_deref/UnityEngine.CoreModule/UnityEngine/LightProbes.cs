// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LightProbes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x20000D6")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/Graphics.bindings.h")]
public sealed class LightProbes : Object
{
	[Token(Token = "0x4000230")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action lightProbesUpdated;

	[Token(Token = "0x4000231")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action tetrahedralizationCompleted;

	[Token(Token = "0x4000232")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action needsRetetrahedralization;

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x2ECCD70", Offset = "0x2ECB370", VA = "0x182ECCD70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallLightProbesUpdatedFunction()
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x2ECCE10", Offset = "0x2ECB410", VA = "0x182ECCE10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallTetrahedralizationCompletedFunction()
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x2ECCDC0", Offset = "0x2ECB3C0", VA = "0x182ECCDC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallNeedsRetetrahedralizationFunction()
	{
	}
}
