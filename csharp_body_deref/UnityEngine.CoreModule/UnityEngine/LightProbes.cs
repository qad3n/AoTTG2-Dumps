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
[Token(Token = "0x20000B2")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/Graphics.bindings.h")]
public sealed class LightProbes : Object
{
	[Token(Token = "0x40001D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action lightProbesUpdated;

	[Token(Token = "0x40001D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action tetrahedralizationCompleted;

	[Token(Token = "0x40001D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action needsRetetrahedralization;

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x4DC3C40", Offset = "0x4DC3C40", VA = "0x4DC3C40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallLightProbesUpdatedFunction()
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x4DC3C90", Offset = "0x4DC3C90", VA = "0x4DC3C90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallTetrahedralizationCompletedFunction()
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x4DC3CE0", Offset = "0x4DC3CE0", VA = "0x4DC3CE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallNeedsRetetrahedralizationFunction()
	{
	}
}
