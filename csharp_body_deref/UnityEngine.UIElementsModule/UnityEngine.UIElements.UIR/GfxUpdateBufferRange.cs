using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200048A")]
internal struct GfxUpdateBufferRange
{
	[Token(Token = "0x4000DAD")]
	[FieldOffset(Offset = "0x0")]
	public uint offsetFromWriteStart;

	[Token(Token = "0x4000DAE")]
	[FieldOffset(Offset = "0x4")]
	public uint size;

	[Token(Token = "0x4000DAF")]
	[FieldOffset(Offset = "0x8")]
	public UIntPtr source;
}
