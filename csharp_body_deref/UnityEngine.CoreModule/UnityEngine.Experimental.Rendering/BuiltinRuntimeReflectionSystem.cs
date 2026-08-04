// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
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

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x200034C")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/ReflectionProbes.h")]
internal class BuiltinRuntimeReflectionSystem : IScriptableRuntimeReflectionSystem, IDisposable
{
	[Token(Token = "0x600119D")]
	[Address(RVA = "0x4E3AA80", Offset = "0x4E3AA80", VA = "0x4E3AA80", Slot = "4")]
	public bool TickRealtimeProbes()
	{
		return default(bool);
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x4E3AAE0", Offset = "0x4E3AAE0", VA = "0x4E3AAE0", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x4E3AAF0", Offset = "0x4E3AAF0", VA = "0x4E3AAF0")]
	private void Dispose(bool disposing)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x4E3AAB0", Offset = "0x4E3AAB0", VA = "0x4E3AAB0")]
	[UnityEngine.Bindings.StaticAccessor("GetReflectionProbes()", Type = UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static extern bool BuiltinUpdate();

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x4E3AB00", Offset = "0x4E3AB00", VA = "0x4E3AB00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static BuiltinRuntimeReflectionSystem Internal_BuiltinRuntimeReflectionSystem_New()
	{
		return null;
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x4E3AB40", Offset = "0x4E3AB40", VA = "0x4E3AB40")]
	public BuiltinRuntimeReflectionSystem()
	{
	}
}
