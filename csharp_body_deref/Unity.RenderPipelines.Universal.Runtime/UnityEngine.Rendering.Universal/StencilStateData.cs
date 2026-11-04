// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.StencilStateData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x2000012")]
public class StencilStateData
{
	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x10")]
	public bool overrideStencilState;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x14")]
	public int stencilReference;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x18")]
	public CompareFunction stencilCompareFunction;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x1C")]
	public StencilOp passOperation;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x20")]
	public StencilOp failOperation;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x24")]
	public StencilOp zFailOperation;

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x2C0B630", Offset = "0x2C09C30", VA = "0x182C0B630")]
	public StencilStateData()
	{
	}
}
