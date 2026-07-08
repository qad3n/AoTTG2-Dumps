using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.Playables;

[Token(Token = "0x2000345")]
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

	[Token(Token = "0x6001195")]
	[Address(RVA = "0x4B12F10", Offset = "0x4B12F10", VA = "0x4B12F10", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x6001196")]
	[Address(RVA = "0x4B12F20", Offset = "0x4B12F20", VA = "0x4B12F20", Slot = "4")]
	public bool Equals(CameraPlayable other)
	{
		return default(bool);
	}
}
