using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.Video;

[Token(Token = "0x2000002")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("VideoClipPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/Video/Public/Director/VideoClipPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Video/Public/VideoClip.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Video/Public/ScriptBindings/VideoClipPlayable.bindings.h")]
public struct VideoClipPlayable : IEquatable<VideoClipPlayable>
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4DE2AE0", Offset = "0x4DE2AE0", VA = "0x4DE2AE0", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4DE2AF0", Offset = "0x4DE2AF0", VA = "0x4DE2AF0", Slot = "4")]
	public bool Equals(VideoClipPlayable other)
	{
		return default(bool);
	}
}
