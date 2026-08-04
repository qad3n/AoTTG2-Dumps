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

[Token(Token = "0x2000349")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Director/MaterialEffectPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/MaterialEffectPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("MaterialEffectPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public struct MaterialEffectPlayable : IEquatable<MaterialEffectPlayable>
{
	[Token(Token = "0x4000AA4")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x6001199")]
	[Address(RVA = "0x4E3A900", Offset = "0x4E3A900", VA = "0x4E3A900", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x600119A")]
	[Address(RVA = "0x4E3A910", Offset = "0x4E3A910", VA = "0x4E3A910", Slot = "4")]
	public bool Equals(MaterialEffectPlayable other)
	{
		return default(bool);
	}
}
