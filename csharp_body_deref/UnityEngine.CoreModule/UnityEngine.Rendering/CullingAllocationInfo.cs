using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002E1")]
internal struct CullingAllocationInfo
{
	[Token(Token = "0x4000896")]
	[FieldOffset(Offset = "0x0")]
	public unsafe VisibleLight* visibleLightsPtr;

	[Token(Token = "0x4000897")]
	[FieldOffset(Offset = "0x8")]
	public unsafe VisibleLight* visibleOffscreenVertexLightsPtr;

	[Token(Token = "0x4000898")]
	[FieldOffset(Offset = "0x10")]
	public unsafe VisibleReflectionProbe* visibleReflectionProbesPtr;

	[Token(Token = "0x4000899")]
	[FieldOffset(Offset = "0x18")]
	public int visibleLightCount;

	[Token(Token = "0x400089A")]
	[FieldOffset(Offset = "0x1C")]
	public int visibleOffscreenVertexLightCount;

	[Token(Token = "0x400089B")]
	[FieldOffset(Offset = "0x20")]
	public int visibleReflectionProbeCount;
}
