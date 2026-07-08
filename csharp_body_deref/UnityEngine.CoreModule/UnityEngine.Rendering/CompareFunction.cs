using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002A7")]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
public enum CompareFunction
{
	[Token(Token = "0x400071E")]
	Disabled,
	[Token(Token = "0x400071F")]
	Never,
	[Token(Token = "0x4000720")]
	Less,
	[Token(Token = "0x4000721")]
	Equal,
	[Token(Token = "0x4000722")]
	LessEqual,
	[Token(Token = "0x4000723")]
	Greater,
	[Token(Token = "0x4000724")]
	NotEqual,
	[Token(Token = "0x4000725")]
	GreaterEqual,
	[Token(Token = "0x4000726")]
	Always
}
