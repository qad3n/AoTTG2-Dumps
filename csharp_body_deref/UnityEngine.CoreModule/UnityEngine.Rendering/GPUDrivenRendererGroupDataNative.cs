// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUDrivenRendererGroupDataNative
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003CE")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct GPUDrivenRendererGroupDataNative
{
	[Token(Token = "0x4000C29")]
	[FieldOffset(Offset = "0x0")]
	public unsafe EntityId* rendererGroupID;

	[Token(Token = "0x4000C2A")]
	[FieldOffset(Offset = "0x8")]
	public unsafe Bounds* localBounds;

	[Token(Token = "0x4000C2B")]
	[FieldOffset(Offset = "0x10")]
	public unsafe Vector4* lightmapScaleOffset;

	[Token(Token = "0x4000C2C")]
	[FieldOffset(Offset = "0x18")]
	public unsafe int* gameObjectLayer;

	[Token(Token = "0x4000C2D")]
	[FieldOffset(Offset = "0x20")]
	public unsafe uint* renderingLayerMask;

	[Token(Token = "0x4000C2E")]
	[FieldOffset(Offset = "0x28")]
	public unsafe uint* rendererUserValues;

	[Token(Token = "0x4000C2F")]
	[FieldOffset(Offset = "0x30")]
	public unsafe EntityId* lodGroupID;

	[Token(Token = "0x4000C30")]
	[FieldOffset(Offset = "0x38")]
	public unsafe MotionVectorGenerationMode* motionVecGenMode;

	[Token(Token = "0x4000C31")]
	[FieldOffset(Offset = "0x40")]
	public unsafe GPUDrivenPackedRendererData* packedRendererData;

	[Token(Token = "0x4000C32")]
	[FieldOffset(Offset = "0x48")]
	public unsafe int* rendererPriority;

	[Token(Token = "0x4000C33")]
	[FieldOffset(Offset = "0x50")]
	public unsafe int* meshIndex;

	[Token(Token = "0x4000C34")]
	[FieldOffset(Offset = "0x58")]
	public unsafe short* subMeshStartIndex;

	[Token(Token = "0x4000C35")]
	[FieldOffset(Offset = "0x60")]
	public unsafe int* materialsOffset;

	[Token(Token = "0x4000C36")]
	[FieldOffset(Offset = "0x68")]
	public unsafe short* materialsCount;

	[Token(Token = "0x4000C37")]
	[FieldOffset(Offset = "0x70")]
	public unsafe int* instancesOffset;

	[Token(Token = "0x4000C38")]
	[FieldOffset(Offset = "0x78")]
	public unsafe int* instancesCount;

	[Token(Token = "0x4000C39")]
	[FieldOffset(Offset = "0x80")]
	public unsafe GPUDrivenRendererEditorData* editorData;

	[Token(Token = "0x4000C3A")]
	[FieldOffset(Offset = "0x88")]
	public int rendererGroupCount;

	[Token(Token = "0x4000C3B")]
	[FieldOffset(Offset = "0x90")]
	public unsafe EntityId* invalidRendererGroupID;

	[Token(Token = "0x4000C3C")]
	[FieldOffset(Offset = "0x98")]
	public int invalidRendererGroupIDCount;

	[Token(Token = "0x4000C3D")]
	[FieldOffset(Offset = "0xA0")]
	public unsafe GPUDrivenRendererMeshLodData* meshLodData;

	[Token(Token = "0x4000C3E")]
	[FieldOffset(Offset = "0xA8")]
	public unsafe Matrix4x4* localToWorldMatrix;

	[Token(Token = "0x4000C3F")]
	[FieldOffset(Offset = "0xB0")]
	public unsafe Matrix4x4* prevLocalToWorldMatrix;

	[Token(Token = "0x4000C40")]
	[FieldOffset(Offset = "0xB8")]
	public unsafe int* rendererGroupIndex;

	[Token(Token = "0x4000C41")]
	[FieldOffset(Offset = "0xC0")]
	public int instanceCount;

	[Token(Token = "0x4000C42")]
	[FieldOffset(Offset = "0xC8")]
	public unsafe EntityId* meshID;

	[Token(Token = "0x4000C43")]
	[FieldOffset(Offset = "0xD0")]
	public unsafe GPUDrivenMeshLodInfo* meshLodInfo;

	[Token(Token = "0x4000C44")]
	[FieldOffset(Offset = "0xD8")]
	public unsafe short* subMeshCount;

	[Token(Token = "0x4000C45")]
	[FieldOffset(Offset = "0xE0")]
	public unsafe int* subMeshDescOffset;

	[Token(Token = "0x4000C46")]
	[FieldOffset(Offset = "0xE8")]
	public int meshCount;

	[Token(Token = "0x4000C47")]
	[FieldOffset(Offset = "0xF0")]
	public unsafe SubMeshDescriptor* subMeshDesc;

	[Token(Token = "0x4000C48")]
	[FieldOffset(Offset = "0xF8")]
	public int subMeshDescCount;

	[Token(Token = "0x4000C49")]
	[FieldOffset(Offset = "0x100")]
	public unsafe int* materialIndex;

	[Token(Token = "0x4000C4A")]
	[FieldOffset(Offset = "0x108")]
	public int materialIndexCount;

	[Token(Token = "0x4000C4B")]
	[FieldOffset(Offset = "0x110")]
	public unsafe EntityId* materialID;

	[Token(Token = "0x4000C4C")]
	[FieldOffset(Offset = "0x118")]
	public unsafe GPUDrivenPackedMaterialData* packedMaterialData;

	[Token(Token = "0x4000C4D")]
	[FieldOffset(Offset = "0x120")]
	public unsafe int* materialFilterFlags;

	[Token(Token = "0x4000C4E")]
	[FieldOffset(Offset = "0x128")]
	public int materialCount;
}
