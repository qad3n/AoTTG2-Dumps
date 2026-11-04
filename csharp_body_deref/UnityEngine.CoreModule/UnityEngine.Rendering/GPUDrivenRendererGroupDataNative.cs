// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUDrivenRendererGroupDataNative
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000392")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct GPUDrivenRendererGroupDataNative
{
	[Token(Token = "0x4000AA5")]
	[FieldOffset(Offset = "0x0")]
	public unsafe EntityId* rendererGroupID;

	[Token(Token = "0x4000AA6")]
	[FieldOffset(Offset = "0x8")]
	public unsafe Bounds* localBounds;

	[Token(Token = "0x4000AA7")]
	[FieldOffset(Offset = "0x10")]
	public unsafe Vector4* lightmapScaleOffset;

	[Token(Token = "0x4000AA8")]
	[FieldOffset(Offset = "0x18")]
	public unsafe int* gameObjectLayer;

	[Token(Token = "0x4000AA9")]
	[FieldOffset(Offset = "0x20")]
	public unsafe uint* renderingLayerMask;

	[Token(Token = "0x4000AAA")]
	[FieldOffset(Offset = "0x28")]
	public unsafe uint* rendererUserValues;

	[Token(Token = "0x4000AAB")]
	[FieldOffset(Offset = "0x30")]
	public unsafe EntityId* lodGroupID;

	[Token(Token = "0x4000AAC")]
	[FieldOffset(Offset = "0x38")]
	public unsafe MotionVectorGenerationMode* motionVecGenMode;

	[Token(Token = "0x4000AAD")]
	[FieldOffset(Offset = "0x40")]
	public unsafe GPUDrivenPackedRendererData* packedRendererData;

	[Token(Token = "0x4000AAE")]
	[FieldOffset(Offset = "0x48")]
	public unsafe int* rendererPriority;

	[Token(Token = "0x4000AAF")]
	[FieldOffset(Offset = "0x50")]
	public unsafe int* meshIndex;

	[Token(Token = "0x4000AB0")]
	[FieldOffset(Offset = "0x58")]
	public unsafe short* subMeshStartIndex;

	[Token(Token = "0x4000AB1")]
	[FieldOffset(Offset = "0x60")]
	public unsafe int* materialsOffset;

	[Token(Token = "0x4000AB2")]
	[FieldOffset(Offset = "0x68")]
	public unsafe short* materialsCount;

	[Token(Token = "0x4000AB3")]
	[FieldOffset(Offset = "0x70")]
	public unsafe int* instancesOffset;

	[Token(Token = "0x4000AB4")]
	[FieldOffset(Offset = "0x78")]
	public unsafe int* instancesCount;

	[Token(Token = "0x4000AB5")]
	[FieldOffset(Offset = "0x80")]
	public unsafe GPUDrivenRendererEditorData* editorData;

	[Token(Token = "0x4000AB6")]
	[FieldOffset(Offset = "0x88")]
	public int rendererGroupCount;

	[Token(Token = "0x4000AB7")]
	[FieldOffset(Offset = "0x90")]
	public unsafe EntityId* invalidRendererGroupID;

	[Token(Token = "0x4000AB8")]
	[FieldOffset(Offset = "0x98")]
	public int invalidRendererGroupIDCount;

	[Token(Token = "0x4000AB9")]
	[FieldOffset(Offset = "0xA0")]
	public unsafe GPUDrivenRendererMeshLodData* meshLodData;

	[Token(Token = "0x4000ABA")]
	[FieldOffset(Offset = "0xA8")]
	public unsafe Matrix4x4* localToWorldMatrix;

	[Token(Token = "0x4000ABB")]
	[FieldOffset(Offset = "0xB0")]
	public unsafe Matrix4x4* prevLocalToWorldMatrix;

	[Token(Token = "0x4000ABC")]
	[FieldOffset(Offset = "0xB8")]
	public unsafe int* rendererGroupIndex;

	[Token(Token = "0x4000ABD")]
	[FieldOffset(Offset = "0xC0")]
	public int instanceCount;

	[Token(Token = "0x4000ABE")]
	[FieldOffset(Offset = "0xC8")]
	public unsafe EntityId* meshID;

	[Token(Token = "0x4000ABF")]
	[FieldOffset(Offset = "0xD0")]
	public unsafe GPUDrivenMeshLodInfo* meshLodInfo;

	[Token(Token = "0x4000AC0")]
	[FieldOffset(Offset = "0xD8")]
	public unsafe short* subMeshCount;

	[Token(Token = "0x4000AC1")]
	[FieldOffset(Offset = "0xE0")]
	public unsafe int* subMeshDescOffset;

	[Token(Token = "0x4000AC2")]
	[FieldOffset(Offset = "0xE8")]
	public int meshCount;

	[Token(Token = "0x4000AC3")]
	[FieldOffset(Offset = "0xF0")]
	public unsafe SubMeshDescriptor* subMeshDesc;

	[Token(Token = "0x4000AC4")]
	[FieldOffset(Offset = "0xF8")]
	public int subMeshDescCount;

	[Token(Token = "0x4000AC5")]
	[FieldOffset(Offset = "0x100")]
	public unsafe int* materialIndex;

	[Token(Token = "0x4000AC6")]
	[FieldOffset(Offset = "0x108")]
	public int materialIndexCount;

	[Token(Token = "0x4000AC7")]
	[FieldOffset(Offset = "0x110")]
	public unsafe EntityId* materialID;

	[Token(Token = "0x4000AC8")]
	[FieldOffset(Offset = "0x118")]
	public unsafe GPUDrivenPackedMaterialData* packedMaterialData;

	[Token(Token = "0x4000AC9")]
	[FieldOffset(Offset = "0x120")]
	public unsafe int* materialFilterFlags;

	[Token(Token = "0x4000ACA")]
	[FieldOffset(Offset = "0x128")]
	public int materialCount;
}
