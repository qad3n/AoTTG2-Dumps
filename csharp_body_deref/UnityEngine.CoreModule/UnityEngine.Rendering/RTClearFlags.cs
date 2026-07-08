using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002C5")]
[Flags]
public enum RTClearFlags
{
	[Token(Token = "0x40007F7")]
	None = 0,
	[Token(Token = "0x40007F8")]
	Color = 1,
	[Token(Token = "0x40007F9")]
	Depth = 2,
	[Token(Token = "0x40007FA")]
	Stencil = 4,
	[Token(Token = "0x40007FB")]
	All = 7,
	[Token(Token = "0x40007FC")]
	DepthStencil = 6,
	[Token(Token = "0x40007FD")]
	ColorDepth = 3,
	[Token(Token = "0x40007FE")]
	ColorStencil = 5
}
