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
[Token(Token = "0x20000D7")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/Graphics.bindings.h")]
public sealed class LightProbes : Object
{
	[Token(Token = "0x4000235")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action lightProbesUpdated;

	[Token(Token = "0x4000236")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action tetrahedralizationCompleted;

	[Token(Token = "0x4000237")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action needsRetetrahedralization;

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x68D2A40", Offset = "0x68D1A40", VA = "0x68D2A40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallLightProbesUpdatedFunction()
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x68D2A90", Offset = "0x68D1A90", VA = "0x68D2A90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallTetrahedralizationCompletedFunction()
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x68D2AE0", Offset = "0x68D1AE0", VA = "0x68D2AE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallNeedsRetetrahedralizationFunction()
	{
	}
}
