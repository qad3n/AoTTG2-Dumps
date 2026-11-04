// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.PostProcessingData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001E7")]
public struct PostProcessingData
{
	[Token(Token = "0x4000AAC")]
	[FieldOffset(Offset = "0x0")]
	private ContextContainer frameData;

	[Token(Token = "0x1700029E")]
	internal UniversalPostProcessingData universalPostProcessingData
	{
		[Token(Token = "0x6000AB0")]
		[Address(RVA = "0x2CC56E0", Offset = "0x2CC3CE0", VA = "0x182CC56E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029F")]
	public unsafe ref ColorGradingMode gradingMode
	{
		[Token(Token = "0x6000AB1")]
		[Address(RVA = "0x2CC55A0", Offset = "0x2CC3BA0", VA = "0x182CC55A0")]
		get
		{
			return ref *(ColorGradingMode*)null;
		}
	}

	[Token(Token = "0x170002A0")]
	public unsafe ref int lutSize
	{
		[Token(Token = "0x6000AB2")]
		[Address(RVA = "0x2CC55F0", Offset = "0x2CC3BF0", VA = "0x182CC55F0")]
		get
		{
			return ref *(int*)null;
		}
	}

	[Token(Token = "0x170002A1")]
	public unsafe ref bool useFastSRGBLinearConversion
	{
		[Token(Token = "0x6000AB3")]
		[Address(RVA = "0x2CC5730", Offset = "0x2CC3D30", VA = "0x182CC5730")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x170002A2")]
	public unsafe ref bool supportScreenSpaceLensFlare
	{
		[Token(Token = "0x6000AB4")]
		[Address(RVA = "0x2CC5690", Offset = "0x2CC3C90", VA = "0x182CC5690")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x170002A3")]
	public unsafe ref bool supportDataDrivenLensFlare
	{
		[Token(Token = "0x6000AB5")]
		[Address(RVA = "0x2CC5640", Offset = "0x2CC3C40", VA = "0x182CC5640")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
	internal PostProcessingData(ContextContainer frameData)
	{
	}
}
