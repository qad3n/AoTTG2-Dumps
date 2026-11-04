// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.PostProcessMaterialLibrary
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000148")]
internal class PostProcessMaterialLibrary
{
	[Token(Token = "0x4000767")]
	[FieldOffset(Offset = "0x10")]
	public readonly Material stopNaN;

	[Token(Token = "0x4000768")]
	[FieldOffset(Offset = "0x18")]
	public readonly Material subpixelMorphologicalAntialiasing;

	[Token(Token = "0x4000769")]
	[FieldOffset(Offset = "0x20")]
	public readonly Material gaussianDepthOfField;

	[Token(Token = "0x400076A")]
	[FieldOffset(Offset = "0x28")]
	public readonly Material gaussianDepthOfFieldCoC;

	[Token(Token = "0x400076B")]
	[FieldOffset(Offset = "0x30")]
	public readonly Material bokehDepthOfField;

	[Token(Token = "0x400076C")]
	[FieldOffset(Offset = "0x38")]
	public readonly Material bokehDepthOfFieldCoC;

	[Token(Token = "0x400076D")]
	[FieldOffset(Offset = "0x40")]
	public readonly Material temporalAntialiasing;

	[Token(Token = "0x400076E")]
	[FieldOffset(Offset = "0x48")]
	public readonly Material motionBlur;

	[Token(Token = "0x400076F")]
	[FieldOffset(Offset = "0x50")]
	public readonly Material paniniProjection;

	[Token(Token = "0x4000770")]
	[FieldOffset(Offset = "0x58")]
	public readonly Material bloom;

	[Token(Token = "0x4000771")]
	[FieldOffset(Offset = "0x60")]
	public readonly Material[] bloomUpsample;

	[Token(Token = "0x4000772")]
	[FieldOffset(Offset = "0x68")]
	public readonly Material lensFlareScreenSpace;

	[Token(Token = "0x4000773")]
	[FieldOffset(Offset = "0x70")]
	public readonly Material lensFlareDataDriven;

	[Token(Token = "0x4000774")]
	[FieldOffset(Offset = "0x78")]
	public readonly Material uber;

	[Token(Token = "0x4000775")]
	[FieldOffset(Offset = "0x80")]
	public readonly Material scalingSetup;

	[Token(Token = "0x4000776")]
	[FieldOffset(Offset = "0x88")]
	public readonly Material easu;

	[Token(Token = "0x4000777")]
	[FieldOffset(Offset = "0x90")]
	public readonly Material finalPass;

	[Token(Token = "0x4000778")]
	[FieldOffset(Offset = "0x98")]
	internal PostProcessData m_Resources;

	[Token(Token = "0x170001DB")]
	public PostProcessData resources
	{
		[Token(Token = "0x600079C")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x2C722D0", Offset = "0x2C708D0", VA = "0x182C722D0")]
	public PostProcessMaterialLibrary(PostProcessData data)
	{
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x2C721D0", Offset = "0x2C707D0", VA = "0x182C721D0")]
	private Material Load(Shader shader)
	{
		return null;
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x2C72070", Offset = "0x2C70670", VA = "0x182C72070")]
	internal void Cleanup()
	{
	}
}
