using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000F2")]
internal struct BottleneckHistogram
{
	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x0")]
	internal float PresentLimited;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x4")]
	internal float CPU;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x8")]
	internal float GPU;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0xC")]
	internal float Balanced;
}
