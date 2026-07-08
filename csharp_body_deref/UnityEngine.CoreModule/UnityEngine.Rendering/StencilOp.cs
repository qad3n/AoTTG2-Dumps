using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002AA")]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
public enum StencilOp
{
	[Token(Token = "0x4000732")]
	Keep,
	[Token(Token = "0x4000733")]
	Zero,
	[Token(Token = "0x4000734")]
	Replace,
	[Token(Token = "0x4000735")]
	IncrementSaturate,
	[Token(Token = "0x4000736")]
	DecrementSaturate,
	[Token(Token = "0x4000737")]
	Invert,
	[Token(Token = "0x4000738")]
	IncrementWrap,
	[Token(Token = "0x4000739")]
	DecrementWrap
}
