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
	[Token(Token = "0x60017D9")]
	[Address(RVA = "0x2F76B90", Offset = "0x2F75190", VA = "0x182F76B90", Slot = "4")]
	public bool TickRealtimeProbes()
	{
		return default(bool);
	}

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void Dispose(bool disposing)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017DC")]
	[Address(RVA = "0x2F76B90", Offset = "0x2F75190", VA = "0x182F76B90")]
	[UnityEngine.Bindings.StaticAccessor("GetReflectionProbes()", Type = UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static extern bool BuiltinUpdate();

	[Token(Token = "0x60017DD")]
	[Address(RVA = "0x2F76BC0", Offset = "0x2F751C0", VA = "0x182F76BC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static BuiltinRuntimeReflectionSystem Internal_BuiltinRuntimeReflectionSystem_New()
	{
		return null;
	}

	[Token(Token = "0x60017DE")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public BuiltinRuntimeReflectionSystem()
	{
	}
}
