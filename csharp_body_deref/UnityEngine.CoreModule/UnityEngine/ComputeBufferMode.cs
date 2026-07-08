using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000AB")]
[UnityEngine.Bindings.NativeType("Runtime/GfxDevice/GfxDeviceTypes.h")]
public enum ComputeBufferMode
{
	[Token(Token = "0x40001C4")]
	Immutable,
	[Token(Token = "0x40001C5")]
	Dynamic,
	[Token(Token = "0x40001C6")]
	[Obsolete("ComputeBufferMode.Circular is deprecated (legacy mode)")]
	Circular,
	[Token(Token = "0x40001C7")]
	[Obsolete("ComputeBufferMode.StreamOut is deprecated (internal use only)")]
	StreamOut,
	[Token(Token = "0x40001C8")]
	SubUpdates
}
