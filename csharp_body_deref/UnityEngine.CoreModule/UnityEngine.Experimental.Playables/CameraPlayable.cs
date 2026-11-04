// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Playables.CameraPlayable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.Playables;

[Token(Token = "0x20003EF")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/CameraPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera//Director/CameraPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("CameraPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public struct CameraPlayable : IEquatable<CameraPlayable>
{
	[Token(Token = "0x4000D2A")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x60017D3")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60017D4")]
	[Address(RVA = "0x2F76C10", Offset = "0x2F75210", VA = "0x182F76C10", Slot = "4")]
	public bool Equals(CameraPlayable other)
	{
		return default(bool);
	}
}
