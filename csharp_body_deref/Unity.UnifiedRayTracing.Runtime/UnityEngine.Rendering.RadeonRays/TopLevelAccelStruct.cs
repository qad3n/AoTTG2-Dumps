// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.TopLevelAccelStruct
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x200000B")]
internal struct TopLevelAccelStruct : IDisposable
{
	[Token(Token = "0x4000028")]
	public const GraphicsBuffer.Target topLevelBvhTarget = GraphicsBuffer.Target.Structured;

	[Token(Token = "0x4000029")]
	public const GraphicsBuffer.Target instanceInfoTarget = GraphicsBuffer.Target.Structured;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x0")]
	public GraphicsBuffer topLevelBvh;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x8")]
	public GraphicsBuffer bottomLevelBvhs;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x10")]
	public GraphicsBuffer instanceInfos;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x18")]
	public uint instanceCount;

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x2D95310", Offset = "0x2D93910", VA = "0x182D95310", Slot = "4")]
	public void Dispose()
	{
	}
}
