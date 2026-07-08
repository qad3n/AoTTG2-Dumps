using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.VFX;

[Token(Token = "0x2000005")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct VFXBatchedEffectInfo
{
	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x0")]
	public VisualEffectAsset vfxAsset;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x8")]
	public uint activeBatchCount;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0xC")]
	public uint inactiveBatchCount;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x10")]
	public uint activeInstanceCount;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x14")]
	public uint unbatchedInstanceCount;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x18")]
	public uint totalInstanceCapacity;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x1C")]
	public uint maxInstancePerBatchCapacity;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x20")]
	public ulong totalGPUSizeInBytes;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x28")]
	public ulong totalCPUSizeInBytes;
}
