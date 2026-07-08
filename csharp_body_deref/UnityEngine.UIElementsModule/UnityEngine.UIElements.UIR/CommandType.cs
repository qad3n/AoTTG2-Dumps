using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004F0")]
internal enum CommandType
{
	[Token(Token = "0x4001063")]
	Draw,
	[Token(Token = "0x4001064")]
	ImmediateCull,
	[Token(Token = "0x4001065")]
	Immediate,
	[Token(Token = "0x4001066")]
	PushView,
	[Token(Token = "0x4001067")]
	PopView,
	[Token(Token = "0x4001068")]
	PushScissor,
	[Token(Token = "0x4001069")]
	PopScissor,
	[Token(Token = "0x400106A")]
	PushRenderTexture,
	[Token(Token = "0x400106B")]
	PopRenderTexture,
	[Token(Token = "0x400106C")]
	BlitToPreviousRT,
	[Token(Token = "0x400106D")]
	PushDefaultMaterial,
	[Token(Token = "0x400106E")]
	PopDefaultMaterial,
	[Token(Token = "0x400106F")]
	BeginDisable,
	[Token(Token = "0x4001070")]
	EndDisable
}
