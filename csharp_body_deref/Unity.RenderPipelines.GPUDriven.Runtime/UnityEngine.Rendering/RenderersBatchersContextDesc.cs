// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderersBatchersContextDesc
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000E0")]
internal struct RenderersBatchersContextDesc
{
	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x0")]
	public InstanceNumInfo instanceNumInfo;

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x8")]
	public bool supportDitheringCrossFade;

	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x9")]
	public bool enableBoundingSpheresInstanceData;

	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0xC")]
	public float smallMeshScreenPercentage;

	[Token(Token = "0x400040B")]
	[FieldOffset(Offset = "0x10")]
	public bool enableCullerDebugStats;

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x2BFA360", Offset = "0x2BF8960", VA = "0x182BFA360")]
	public static RenderersBatchersContextDesc NewDefault()
	{
		return default(RenderersBatchersContextDesc);
	}
}
