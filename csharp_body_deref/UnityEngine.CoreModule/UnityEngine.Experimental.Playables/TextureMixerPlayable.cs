// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Playables.TextureMixerPlayable
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

[Token(Token = "0x200034A")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Director/TextureMixerPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/TextureMixerPlayable.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("TextureMixerPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct TextureMixerPlayable : IEquatable<TextureMixerPlayable>
{
	[Token(Token = "0x4000AA5")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x4E3A9C0", Offset = "0x4E3A9C0", VA = "0x4E3A9C0", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x4E3A9D0", Offset = "0x4E3A9D0", VA = "0x4E3A9D0", Slot = "4")]
	public bool Equals(TextureMixerPlayable other)
	{
		return default(bool);
	}
}
