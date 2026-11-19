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
[UnityEngine.Bindings.NativeHeader("Runtime/Camera//Director/CameraPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("CameraPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/CameraPlayable.bindings.h")]
public struct CameraPlayable : IEquatable<CameraPlayable>
{
	[Token(Token = "0x4000D28")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x60017E7")]
	[Address(RVA = "0x696D1C0", Offset = "0x696C1C0", VA = "0x696D1C0", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60017E8")]
	[Address(RVA = "0x696D1D0", Offset = "0x696C1D0", VA = "0x696D1D0", Slot = "4")]
	public bool Equals(CameraPlayable other)
	{
		return default(bool);
	}
}
