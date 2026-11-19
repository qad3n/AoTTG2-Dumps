// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.GraphicsHelpers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000040")]
internal static class GraphicsHelpers
{
	[Token(Token = "0x1700001B")]
	public static long MaxGraphicsBufferSizeInBytes
	{
		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x6782380", Offset = "0x6781380", VA = "0x6782380")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700001C")]
	public static float MaxGraphicsBufferSizeInGigaBytes
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x67824F0", Offset = "0x67814F0", VA = "0x67824F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x6786800", Offset = "0x6785800", VA = "0x6786800")]
	public static void CopyBuffer(ComputeShader copyShader, CommandBuffer cmd, GraphicsBuffer src, int srcOffsetInDWords, GraphicsBuffer dst, int dstOffsetInDwords, int sizeInDWords)
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x6786980", Offset = "0x6785980", VA = "0x6786980")]
	public static void CopyBuffer(ComputeShader copyShader, GraphicsBuffer src, int srcOffsetInDWords, GraphicsBuffer dst, int dstOffsetInDwords, int sizeInDwords)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x6782520", Offset = "0x6781520", VA = "0x6782520")]
	public static bool ReallocateBuffer(ComputeShader copyShader, int oldCapacity, int newCapacity, int elementSizeInBytes, ref GraphicsBuffer buffer)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x6786970", Offset = "0x6785970", VA = "0x6786970")]
	public static int DivUp(int x, int y)
	{
		return default(int);
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x6786A40", Offset = "0x6785A40", VA = "0x6786A40")]
	public static int DivUp(int x, uint y)
	{
		return default(int);
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x6786A50", Offset = "0x6785A50", VA = "0x6786A50")]
	public static uint DivUp(uint x, uint y)
	{
		return default(uint);
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x6786A60", Offset = "0x6785A60", VA = "0x6786A60")]
	public static uint3 DivUp(uint3 x, uint3 y)
	{
		return default(uint3);
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x6786AB0", Offset = "0x6785AB0", VA = "0x6786AB0")]
	public static void Flush(CommandBuffer cmd)
	{
	}
}
