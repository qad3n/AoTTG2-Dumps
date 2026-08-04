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

[Token(Token = "0x2000348")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("CameraPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/CameraPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera//Director/CameraPlayable.h")]
public struct CameraPlayable : IEquatable<CameraPlayable>
{
	[Token(Token = "0x4000AA3")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x6001197")]
	[Address(RVA = "0x4E3A840", Offset = "0x4E3A840", VA = "0x4E3A840", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x6001198")]
	[Address(RVA = "0x4E3A850", Offset = "0x4E3A850", VA = "0x4E3A850", Slot = "4")]
	public bool Equals(CameraPlayable other)
	{
		return default(bool);
	}
}
