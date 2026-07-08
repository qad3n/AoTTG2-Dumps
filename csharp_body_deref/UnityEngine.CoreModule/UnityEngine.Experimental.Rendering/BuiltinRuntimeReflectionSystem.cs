using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000349")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/ReflectionProbes.h")]
internal class BuiltinRuntimeReflectionSystem : IScriptableRuntimeReflectionSystem, IDisposable
{
	[Token(Token = "0x600119B")]
	[Address(RVA = "0x4B13150", Offset = "0x4B13150", VA = "0x4B13150", Slot = "4")]
	public bool TickRealtimeProbes()
	{
		return default(bool);
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x4B131B0", Offset = "0x4B131B0", VA = "0x4B131B0", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x4B131C0", Offset = "0x4B131C0", VA = "0x4B131C0")]
	private void Dispose(bool disposing)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600119E")]
	[Address(RVA = "0x4B13180", Offset = "0x4B13180", VA = "0x4B13180")]
	[UnityEngine.Bindings.StaticAccessor("GetReflectionProbes()", Type = UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static extern bool BuiltinUpdate();

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x4B131D0", Offset = "0x4B131D0", VA = "0x4B131D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static BuiltinRuntimeReflectionSystem Internal_BuiltinRuntimeReflectionSystem_New()
	{
		return null;
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x4B13210", Offset = "0x4B13210", VA = "0x4B13210")]
	public BuiltinRuntimeReflectionSystem()
	{
	}
}
