// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderPassEvent
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000153")]
public enum RenderPassEvent
{
	[Token(Token = "0x40007CA")]
	BeforeRendering = 0,
	[Token(Token = "0x40007CB")]
	BeforeRenderingShadows = 50,
	[Token(Token = "0x40007CC")]
	AfterRenderingShadows = 100,
	[Token(Token = "0x40007CD")]
	BeforeRenderingPrePasses = 150,
	[Token(Token = "0x40007CE")]
	AfterRenderingPrePasses = 200,
	[Token(Token = "0x40007CF")]
	BeforeRenderingGbuffer = 210,
	[Token(Token = "0x40007D0")]
	AfterRenderingGbuffer = 220,
	[Token(Token = "0x40007D1")]
	BeforeRenderingDeferredLights = 230,
	[Token(Token = "0x40007D2")]
	AfterRenderingDeferredLights = 240,
	[Token(Token = "0x40007D3")]
	BeforeRenderingOpaques = 250,
	[Token(Token = "0x40007D4")]
	AfterRenderingOpaques = 300,
	[Token(Token = "0x40007D5")]
	BeforeRenderingSkybox = 350,
	[Token(Token = "0x40007D6")]
	AfterRenderingSkybox = 400,
	[Token(Token = "0x40007D7")]
	BeforeRenderingTransparents = 450,
	[Token(Token = "0x40007D8")]
	AfterRenderingTransparents = 500,
	[Token(Token = "0x40007D9")]
	BeforeRenderingPostProcessing = 550,
	[Token(Token = "0x40007DA")]
	AfterRenderingPostProcessing = 600,
	[Token(Token = "0x40007DB")]
	AfterRendering = 1000
}
