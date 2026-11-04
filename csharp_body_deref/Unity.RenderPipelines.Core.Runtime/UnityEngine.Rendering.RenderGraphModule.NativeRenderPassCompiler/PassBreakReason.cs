// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassBreakReason
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002C6")]
internal enum PassBreakReason
{
	[Token(Token = "0x4000CD4")]
	NotOptimized,
	[Token(Token = "0x4000CD5")]
	TargetSizeMismatch,
	[Token(Token = "0x4000CD6")]
	NextPassReadsTexture,
	[Token(Token = "0x4000CD7")]
	NextPassTargetsTexture,
	[Token(Token = "0x4000CD8")]
	NonRasterPass,
	[Token(Token = "0x4000CD9")]
	DifferentDepthTextures,
	[Token(Token = "0x4000CDA")]
	AttachmentLimitReached,
	[Token(Token = "0x4000CDB")]
	SubPassLimitReached,
	[Token(Token = "0x4000CDC")]
	EndOfGraph,
	[Token(Token = "0x4000CDD")]
	FRStateMismatch,
	[Token(Token = "0x4000CDE")]
	DifferentShadingRateImages,
	[Token(Token = "0x4000CDF")]
	DifferentShadingRateStates,
	[Token(Token = "0x4000CE0")]
	MultisampledShaderResolveMustBeLastPass,
	[Token(Token = "0x4000CE1")]
	ExtendedFeatureFlagsIncompatible,
	[Token(Token = "0x4000CE2")]
	PassMergingDisabled,
	[Token(Token = "0x4000CE3")]
	Merged,
	[Token(Token = "0x4000CE4")]
	Count
}
