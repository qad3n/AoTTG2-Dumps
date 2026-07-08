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
	[Address(RVA = "0x4A9C420", Offset = "0x4A9C420", VA = "0x4A9C420")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallLightProbesUpdatedFunction()
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x4A9C470", Offset = "0x4A9C470", VA = "0x4A9C470")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallTetrahedralizationCompletedFunction()
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x4A9C4C0", Offset = "0x4A9C4C0", VA = "0x4A9C4C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallNeedsRetetrahedralizationFunction()
	{
	}
}
