// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUDrivenRendererGroupData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000397")]
internal struct GPUDrivenRendererGroupData
{
	[Token(Token = "0x4000AE0")]
	[FieldOffset(Offset = "0x0")]
	public NativeArray<EntityId> rendererGroupID;

	[Token(Token = "0x4000AE1")]
	[FieldOffset(Offset = "0x10")]
	public NativeArray<Bounds> localBounds;

	[Token(Token = "0x4000AE2")]
	[FieldOffset(Offset = "0x20")]
	public NativeArray<Vector4> lightmapScaleOffset;

	[Token(Token = "0x4000AE3")]
	[FieldOffset(Offset = "0x30")]
	public NativeArray<int> gameObjectLayer;

	[Token(Token = "0x4000AE4")]
	[FieldOffset(Offset = "0x40")]
	public NativeArray<uint> renderingLayerMask;

	[Token(Token = "0x4000AE5")]
	[FieldOffset(Offset = "0x50")]
	public NativeArray<uint> rendererUserValues;

	[Token(Token = "0x4000AE6")]
	[FieldOffset(Offset = "0x60")]
	public NativeArray<EntityId> lodGroupID;

	[Token(Token = "0x4000AE7")]
	[FieldOffset(Offset = "0x70")]
	public NativeArray<int> lightmapIndex;

	[Token(Token = "0x4000AE8")]
	[FieldOffset(Offset = "0x80")]
	public NativeArray<GPUDrivenPackedRendererData> packedRendererData;

	[Token(Token = "0x4000AE9")]
	[FieldOffset(Offset = "0x90")]
	public NativeArray<int> rendererPriority;

	[Token(Token = "0x4000AEA")]
	[FieldOffset(Offset = "0xA0")]
	public NativeArray<int> meshIndex;

	[Token(Token = "0x4000AEB")]
	[FieldOffset(Offset = "0xB0")]
	public NativeArray<short> subMeshStartIndex;

	[Token(Token = "0x4000AEC")]
	[FieldOffset(Offset = "0xC0")]
	public NativeArray<int> materialsOffset;

	[Token(Token = "0x4000AED")]
	[FieldOffset(Offset = "0xD0")]
	public NativeArray<short> materialsCount;

	[Token(Token = "0x4000AEE")]
	[FieldOffset(Offset = "0xE0")]
	public NativeArray<int> instancesOffset;

	[Token(Token = "0x4000AEF")]
	[FieldOffset(Offset = "0xF0")]
	public NativeArray<int> instancesCount;

	[Token(Token = "0x4000AF0")]
	[FieldOffset(Offset = "0x100")]
	public NativeArray<GPUDrivenRendererEditorData> editorData;

	[Token(Token = "0x4000AF1")]
	[FieldOffset(Offset = "0x110")]
	public NativeArray<GPUDrivenRendererMeshLodData> meshLodData;

	[Token(Token = "0x4000AF2")]
	[FieldOffset(Offset = "0x120")]
	public NativeArray<EntityId> invalidRendererGroupID;

	[Token(Token = "0x4000AF3")]
	[FieldOffset(Offset = "0x130")]
	public NativeArray<Matrix4x4> localToWorldMatrix;

	[Token(Token = "0x4000AF4")]
	[FieldOffset(Offset = "0x140")]
	public NativeArray<Matrix4x4> prevLocalToWorldMatrix;

	[Token(Token = "0x4000AF5")]
	[FieldOffset(Offset = "0x150")]
	public NativeArray<int> rendererGroupIndex;

	[Token(Token = "0x4000AF6")]
	[FieldOffset(Offset = "0x160")]
	public NativeArray<EntityId> meshID;

	[Token(Token = "0x4000AF7")]
	[FieldOffset(Offset = "0x170")]
	public NativeArray<GPUDrivenMeshLodInfo> meshLodInfo;

	[Token(Token = "0x4000AF8")]
	[FieldOffset(Offset = "0x180")]
	public NativeArray<short> subMeshCount;

	[Token(Token = "0x4000AF9")]
	[FieldOffset(Offset = "0x190")]
	public NativeArray<int> subMeshDescOffset;

	[Token(Token = "0x4000AFA")]
	[FieldOffset(Offset = "0x1A0")]
	public NativeArray<SubMeshDescriptor> subMeshDesc;

	[Token(Token = "0x4000AFB")]
	[FieldOffset(Offset = "0x1B0")]
	public NativeArray<int> materialIndex;

	[Token(Token = "0x4000AFC")]
	[FieldOffset(Offset = "0x1C0")]
	public NativeArray<EntityId> materialID;

	[Token(Token = "0x4000AFD")]
	[FieldOffset(Offset = "0x1D0")]
	public NativeArray<GPUDrivenPackedMaterialData> packedMaterialData;

	[Token(Token = "0x4000AFE")]
	[FieldOffset(Offset = "0x1E0")]
	public NativeArray<int> materialFilterFlags;
}
