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

[Token(Token = "0x20003F3")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/ReflectionProbes.h")]
internal class BuiltinRuntimeReflectionSystem : IScriptableRuntimeReflectionSystem, IDisposable
{
	[Token(Token = "0x60017ED")]
	[Address(RVA = "0x696D340", Offset = "0x696C340", VA = "0x696D340", Slot = "4")]
	public bool TickRealtimeProbes()
	{
		return default(bool);
	}

	[Token(Token = "0x60017EE")]
	[Address(RVA = "0x696D3A0", Offset = "0x696C3A0", VA = "0x696D3A0", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60017EF")]
	[Address(RVA = "0x696D3B0", Offset = "0x696C3B0", VA = "0x696D3B0")]
	private void Dispose(bool disposing)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017F0")]
	[Address(RVA = "0x696D370", Offset = "0x696C370", VA = "0x696D370")]
	[UnityEngine.Bindings.StaticAccessor("GetReflectionProbes()", Type = UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static extern bool BuiltinUpdate();

	[Token(Token = "0x60017F1")]
	[Address(RVA = "0x696D3C0", Offset = "0x696C3C0", VA = "0x696D3C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static BuiltinRuntimeReflectionSystem Internal_BuiltinRuntimeReflectionSystem_New()
	{
		return null;
	}

	[Token(Token = "0x60017F2")]
	[Address(RVA = "0x696D400", Offset = "0x696C400", VA = "0x696D400")]
	public BuiltinRuntimeReflectionSystem()
	{
	}
}
