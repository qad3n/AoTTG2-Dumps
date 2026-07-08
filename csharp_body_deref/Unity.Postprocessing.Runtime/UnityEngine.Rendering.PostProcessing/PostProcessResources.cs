using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000075")]
public sealed class PostProcessResources : ScriptableObject
{
	[Serializable]
	[Token(Token = "0x2000076")]
	public sealed class Shaders
	{
		[Token(Token = "0x40001FE")]
		[FieldOffset(Offset = "0x10")]
		public Shader bloom;

		[Token(Token = "0x40001FF")]
		[FieldOffset(Offset = "0x18")]
		public Shader copy;

		[Token(Token = "0x4000200")]
		[FieldOffset(Offset = "0x20")]
		public Shader copyStd;

		[Token(Token = "0x4000201")]
		[FieldOffset(Offset = "0x28")]
		public Shader copyStdFromTexArray;

		[Token(Token = "0x4000202")]
		[FieldOffset(Offset = "0x30")]
		public Shader copyStdFromDoubleWide;

		[Token(Token = "0x4000203")]
		[FieldOffset(Offset = "0x38")]
		public Shader discardAlpha;

		[Token(Token = "0x4000204")]
		[FieldOffset(Offset = "0x40")]
		public Shader depthOfField;

		[Token(Token = "0x4000205")]
		[FieldOffset(Offset = "0x48")]
		public Shader finalPass;

		[Token(Token = "0x4000206")]
		[FieldOffset(Offset = "0x50")]
		public Shader grainBaker;

		[Token(Token = "0x4000207")]
		[FieldOffset(Offset = "0x58")]
		public Shader motionBlur;

		[Token(Token = "0x4000208")]
		[FieldOffset(Offset = "0x60")]
		public Shader temporalAntialiasing;

		[Token(Token = "0x4000209")]
		[FieldOffset(Offset = "0x68")]
		public Shader subpixelMorphologicalAntialiasing;

		[Token(Token = "0x400020A")]
		[FieldOffset(Offset = "0x70")]
		public Shader texture2dLerp;

		[Token(Token = "0x400020B")]
		[FieldOffset(Offset = "0x78")]
		public Shader uber;

		[Token(Token = "0x400020C")]
		[FieldOffset(Offset = "0x80")]
		public Shader lut2DBaker;

		[Token(Token = "0x400020D")]
		[FieldOffset(Offset = "0x88")]
		public Shader lightMeter;

		[Token(Token = "0x400020E")]
		[FieldOffset(Offset = "0x90")]
		public Shader gammaHistogram;

		[Token(Token = "0x400020F")]
		[FieldOffset(Offset = "0x98")]
		public Shader waveform;

		[Token(Token = "0x4000210")]
		[FieldOffset(Offset = "0xA0")]
		public Shader vectorscope;

		[Token(Token = "0x4000211")]
		[FieldOffset(Offset = "0xA8")]
		public Shader debugOverlays;

		[Token(Token = "0x4000212")]
		[FieldOffset(Offset = "0xB0")]
		public Shader deferredFog;

		[Token(Token = "0x4000213")]
		[FieldOffset(Offset = "0xB8")]
		public Shader scalableAO;

		[Token(Token = "0x4000214")]
		[FieldOffset(Offset = "0xC0")]
		public Shader multiScaleAO;

		[Token(Token = "0x4000215")]
		[FieldOffset(Offset = "0xC8")]
		public Shader screenSpaceReflections;

		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x4839910", Offset = "0x4839910", VA = "0x4839910")]
		public Shaders Clone()
		{
			return null;
		}

		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x4839960", Offset = "0x4839960", VA = "0x4839960")]
		public Shaders()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000077")]
	public sealed class ComputeShaders
	{
		[Token(Token = "0x4000216")]
		[FieldOffset(Offset = "0x10")]
		public ComputeShader autoExposure;

		[Token(Token = "0x4000217")]
		[FieldOffset(Offset = "0x18")]
		public ComputeShader exposureHistogram;

		[Token(Token = "0x4000218")]
		[FieldOffset(Offset = "0x20")]
		public ComputeShader lut3DBaker;

		[Token(Token = "0x4000219")]
		[FieldOffset(Offset = "0x28")]
		public ComputeShader texture3dLerp;

		[Token(Token = "0x400021A")]
		[FieldOffset(Offset = "0x30")]
		public ComputeShader gammaHistogram;

		[Token(Token = "0x400021B")]
		[FieldOffset(Offset = "0x38")]
		public ComputeShader waveform;

		[Token(Token = "0x400021C")]
		[FieldOffset(Offset = "0x40")]
		public ComputeShader vectorscope;

		[Token(Token = "0x400021D")]
		[FieldOffset(Offset = "0x48")]
		public ComputeShader multiScaleAODownsample1;

		[Token(Token = "0x400021E")]
		[FieldOffset(Offset = "0x50")]
		public ComputeShader multiScaleAODownsample2;

		[Token(Token = "0x400021F")]
		[FieldOffset(Offset = "0x58")]
		public ComputeShader multiScaleAORender;

		[Token(Token = "0x4000220")]
		[FieldOffset(Offset = "0x60")]
		public ComputeShader multiScaleAOUpsample;

		[Token(Token = "0x4000221")]
		[FieldOffset(Offset = "0x68")]
		public ComputeShader gaussianDownsample;

		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x4839970", Offset = "0x4839970", VA = "0x4839970")]
		public ComputeShaders Clone()
		{
			return null;
		}

		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x48399C0", Offset = "0x48399C0", VA = "0x48399C0")]
		public ComputeShaders()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000078")]
	public sealed class SMAALuts
	{
		[Token(Token = "0x4000222")]
		[FieldOffset(Offset = "0x10")]
		public Texture2D area;

		[Token(Token = "0x4000223")]
		[FieldOffset(Offset = "0x18")]
		public Texture2D search;

		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x48399D0", Offset = "0x48399D0", VA = "0x48399D0")]
		public SMAALuts()
		{
		}
	}

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x18")]
	public Texture2D[] blueNoise64;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x20")]
	public Texture2D[] blueNoise256;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x28")]
	public SMAALuts smaaLuts;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x30")]
	public Shaders shaders;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x38")]
	public ComputeShaders computeShaders;

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x4839900", Offset = "0x4839900", VA = "0x4839900")]
	public PostProcessResources()
	{
	}
}
