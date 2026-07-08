using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002AD")]
public enum CameraEvent
{
	[Token(Token = "0x4000743")]
	BeforeDepthTexture,
	[Token(Token = "0x4000744")]
	AfterDepthTexture,
	[Token(Token = "0x4000745")]
	BeforeDepthNormalsTexture,
	[Token(Token = "0x4000746")]
	AfterDepthNormalsTexture,
	[Token(Token = "0x4000747")]
	BeforeGBuffer,
	[Token(Token = "0x4000748")]
	AfterGBuffer,
	[Token(Token = "0x4000749")]
	BeforeLighting,
	[Token(Token = "0x400074A")]
	AfterLighting,
	[Token(Token = "0x400074B")]
	BeforeFinalPass,
	[Token(Token = "0x400074C")]
	AfterFinalPass,
	[Token(Token = "0x400074D")]
	BeforeForwardOpaque,
	[Token(Token = "0x400074E")]
	AfterForwardOpaque,
	[Token(Token = "0x400074F")]
	BeforeImageEffectsOpaque,
	[Token(Token = "0x4000750")]
	AfterImageEffectsOpaque,
	[Token(Token = "0x4000751")]
	BeforeSkybox,
	[Token(Token = "0x4000752")]
	AfterSkybox,
	[Token(Token = "0x4000753")]
	BeforeForwardAlpha,
	[Token(Token = "0x4000754")]
	AfterForwardAlpha,
	[Token(Token = "0x4000755")]
	BeforeImageEffects,
	[Token(Token = "0x4000756")]
	AfterImageEffects,
	[Token(Token = "0x4000757")]
	AfterEverything,
	[Token(Token = "0x4000758")]
	BeforeReflections,
	[Token(Token = "0x4000759")]
	AfterReflections,
	[Token(Token = "0x400075A")]
	BeforeHaloAndLensFlares,
	[Token(Token = "0x400075B")]
	AfterHaloAndLensFlares
}
