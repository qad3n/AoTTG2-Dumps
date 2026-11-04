// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Video.VideoClipPlayable
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

namespace UnityEngine.Experimental.Video;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Modules/Video/Public/ScriptBindings/VideoClipPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Video/Public/Director/VideoClipPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Video/Public/VideoClip.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("VideoClipPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct VideoClipPlayable : IEquatable<VideoClipPlayable>
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x33115D0", Offset = "0x330FBD0", VA = "0x1833115D0", Slot = "4")]
	public bool Equals(VideoClipPlayable other)
	{
		return default(bool);
	}
}
