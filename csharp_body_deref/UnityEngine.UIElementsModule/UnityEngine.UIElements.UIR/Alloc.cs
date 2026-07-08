using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004E7")]
internal struct Alloc
{
	[Token(Token = "0x4001032")]
	[FieldOffset(Offset = "0x0")]
	public uint start;

	[Token(Token = "0x4001033")]
	[FieldOffset(Offset = "0x4")]
	public uint size;

	[Token(Token = "0x4001034")]
	[FieldOffset(Offset = "0x8")]
	internal object handle;

	[Token(Token = "0x4001035")]
	[FieldOffset(Offset = "0x10")]
	internal bool shortLived;
}
