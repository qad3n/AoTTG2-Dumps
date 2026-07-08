using System;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200001F")]
[Flags]
public enum DepthAccess
{
	[Token(Token = "0x400006D")]
	Read = 1,
	[Token(Token = "0x400006E")]
	Write = 2,
	[Token(Token = "0x400006F")]
	ReadWrite = 3
}
