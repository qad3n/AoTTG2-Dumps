// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.PostProcessingData
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x66AFB20", Offset = "0x66AEB20", VA = "0x66AFB20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029F")]
	public unsafe ref ColorGradingMode gradingMode
	{
		[Token(Token = "0x6000AB1")]
		[Address(RVA = "0x66AFB60", Offset = "0x66AEB60", VA = "0x66AFB60")]
		get
		{
			return ref *(ColorGradingMode*)null;
		}
	}

	[Token(Token = "0x170002A0")]
	public unsafe ref int lutSize
	{
		[Token(Token = "0x6000AB2")]
		[Address(RVA = "0x66AFBB0", Offset = "0x66AEBB0", VA = "0x66AFBB0")]
		get
		{
			return ref *(int*)null;
		}
	}

	[Token(Token = "0x170002A1")]
	public unsafe ref bool useFastSRGBLinearConversion
	{
		[Token(Token = "0x6000AB3")]
		[Address(RVA = "0x66AFC00", Offset = "0x66AEC00", VA = "0x66AFC00")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x170002A2")]
	public unsafe ref bool supportScreenSpaceLensFlare
	{
		[Token(Token = "0x6000AB4")]
		[Address(RVA = "0x66AFC50", Offset = "0x66AEC50", VA = "0x66AFC50")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x170002A3")]
	public unsafe ref bool supportDataDrivenLensFlare
	{
		[Token(Token = "0x6000AB5")]
		[Address(RVA = "0x66AFCA0", Offset = "0x66AECA0", VA = "0x66AFCA0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x66AFB10", Offset = "0x66AEB10", VA = "0x66AFB10")]
	internal PostProcessingData(ContextContainer frameData)
	{
	}
}
