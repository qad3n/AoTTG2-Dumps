// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Playables.MaterialEffectPlayable
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

[Token(Token = "0x20003F0")]
[UnityEngine.Bindings.StaticAccessor("MaterialEffectPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/MaterialEffectPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Director/MaterialEffectPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct MaterialEffectPlayable : IEquatable<MaterialEffectPlayable>
{
	[Token(Token = "0x4000D29")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x60017E9")]
	[Address(RVA = "0x696D240", Offset = "0x696C240", VA = "0x696D240", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60017EA")]
	[Address(RVA = "0x696D250", Offset = "0x696C250", VA = "0x696D250", Slot = "4")]
	public bool Equals(MaterialEffectPlayable other)
	{
		return default(bool);
	}
}
