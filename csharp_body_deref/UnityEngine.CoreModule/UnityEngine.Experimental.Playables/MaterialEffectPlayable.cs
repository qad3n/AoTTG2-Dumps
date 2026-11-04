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
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/MaterialEffectPlayable.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("MaterialEffectPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Director/MaterialEffectPlayable.h")]
public struct MaterialEffectPlayable : IEquatable<MaterialEffectPlayable>
{
	[Token(Token = "0x4000D2B")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x60017D5")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60017D6")]
	[Address(RVA = "0x2F79730", Offset = "0x2F77D30", VA = "0x182F79730", Slot = "4")]
	public bool Equals(MaterialEffectPlayable other)
	{
		return default(bool);
	}
}
