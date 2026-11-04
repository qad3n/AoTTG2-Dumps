// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.SerializedCommand
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000573")]
internal struct SerializedCommand
{
	[Token(Token = "0x4001283")]
	[FieldOffset(Offset = "0x0")]
	public SerializedCommandType type;

	[Token(Token = "0x4001284")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr vertexBuffer;

	[Token(Token = "0x4001285")]
	[FieldOffset(Offset = "0x10")]
	public IntPtr indexBuffer;

	[Token(Token = "0x4001286")]
	[FieldOffset(Offset = "0x18")]
	public int firstRange;

	[Token(Token = "0x4001287")]
	[FieldOffset(Offset = "0x1C")]
	public int rangeCount;

	[Token(Token = "0x4001288")]
	[FieldOffset(Offset = "0x20")]
	public int textureName;

	[Token(Token = "0x4001289")]
	[FieldOffset(Offset = "0x28")]
	public IntPtr texturePtr;

	[Token(Token = "0x400128A")]
	[FieldOffset(Offset = "0x30")]
	public int gpuDataOffset;

	[Token(Token = "0x400128B")]
	[FieldOffset(Offset = "0x34")]
	public Vector4 gpuData0;

	[Token(Token = "0x400128C")]
	[FieldOffset(Offset = "0x44")]
	public Vector4 gpuData1;

	[Token(Token = "0x400128D")]
	[FieldOffset(Offset = "0x58")]
	public MaterialPropertyBlock userProps;
}
