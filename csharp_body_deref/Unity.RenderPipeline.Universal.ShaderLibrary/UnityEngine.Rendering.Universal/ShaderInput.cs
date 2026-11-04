// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShaderInput
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000011")]
public static class ShaderInput
{
	[Token(Token = "0x2000012")]
	[Obsolete("ShaderInput.ShadowData was deprecated. Shadow slice matrices and per-light shadow parameters are now passed to the GPU using entries in buffers m_AdditionalLightsWorldToShadow_SSBO and m_AdditionalShadowParams_SSBO. #from(2021.1) #breakingFrom(2023.1)", true)]
	public struct ShadowData
	{
		[Token(Token = "0x4000068")]
		[FieldOffset(Offset = "0x0")]
		public Matrix4x4 worldToShadowMatrix;

		[Token(Token = "0x4000069")]
		[FieldOffset(Offset = "0x40")]
		public Vector4 shadowParams;
	}

	[Token(Token = "0x2000013")]
	[GenerateHLSL(PackingRules.Exact, false, false, false, 1, false, false, false, -1, ".\\Packages\\com.unity.render-pipelines.universal\\ShaderLibrary\\ShaderTypes.cs")]
	public struct LightData
	{
		[Token(Token = "0x400006A")]
		[FieldOffset(Offset = "0x0")]
		public Vector4 position;

		[Token(Token = "0x400006B")]
		[FieldOffset(Offset = "0x10")]
		public Vector4 color;

		[Token(Token = "0x400006C")]
		[FieldOffset(Offset = "0x20")]
		public Vector4 attenuation;

		[Token(Token = "0x400006D")]
		[FieldOffset(Offset = "0x30")]
		public Vector4 spotDirection;

		[Token(Token = "0x400006E")]
		[FieldOffset(Offset = "0x40")]
		public Vector4 occlusionProbeChannels;

		[Token(Token = "0x400006F")]
		[FieldOffset(Offset = "0x50")]
		public uint layerMask;
	}
}
