using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002C8")]
public enum SynchronisationStageFlags
{
	[Token(Token = "0x400080A")]
	VertexProcessing = 1,
	[Token(Token = "0x400080B")]
	PixelProcessing = 2,
	[Token(Token = "0x400080C")]
	ComputeProcessing = 4,
	[Token(Token = "0x400080D")]
	AllGPUOperations = 7
}
