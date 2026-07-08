using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000312")]
public struct BatchDrawRange
{
	[Token(Token = "0x40009AB")]
	[FieldOffset(Offset = "0x0")]
	public uint drawCommandsBegin;

	[Token(Token = "0x40009AC")]
	[FieldOffset(Offset = "0x4")]
	public uint drawCommandsCount;

	[Token(Token = "0x40009AD")]
	[FieldOffset(Offset = "0x8")]
	public BatchFilterSettings filterSettings;
}
