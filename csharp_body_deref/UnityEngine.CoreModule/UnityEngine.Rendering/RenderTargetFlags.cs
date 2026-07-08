using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002B5")]
[Flags]
public enum RenderTargetFlags
{
	[Token(Token = "0x40007A6")]
	None = 0,
	[Token(Token = "0x40007A7")]
	ReadOnlyDepth = 1,
	[Token(Token = "0x40007A8")]
	ReadOnlyStencil = 2,
	[Token(Token = "0x40007A9")]
	ReadOnlyDepthStencil = 3
}
