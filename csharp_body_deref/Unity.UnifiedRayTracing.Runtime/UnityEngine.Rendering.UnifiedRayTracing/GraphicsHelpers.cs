// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.GraphicsHelpers
// Update status: NEW in this game update
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
		[Address(RVA = "0x2D8F8A0", Offset = "0x2D8DEA0", VA = "0x182D8F8A0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700001C")]
	public static float MaxGraphicsBufferSizeInGigaBytes
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x2D8F8B0", Offset = "0x2D8DEB0", VA = "0x182D8F8B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x2D8F160", Offset = "0x2D8D760", VA = "0x182D8F160")]
	public static void CopyBuffer(ComputeShader copyShader, CommandBuffer cmd, GraphicsBuffer src, int srcOffsetInDWords, GraphicsBuffer dst, int dstOffsetInDwords, int sizeInDWords)
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x2D8F310", Offset = "0x2D8D910", VA = "0x182D8F310")]
	public static void CopyBuffer(ComputeShader copyShader, GraphicsBuffer src, int srcOffsetInDWords, GraphicsBuffer dst, int dstOffsetInDwords, int sizeInDwords)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x2D8F5E0", Offset = "0x2D8DBE0", VA = "0x182D8F5E0")]
	public static bool ReallocateBuffer(ComputeShader copyShader, int oldCapacity, int newCapacity, int elementSizeInBytes, ref GraphicsBuffer buffer)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x2B107A0", Offset = "0x2B0EDA0", VA = "0x182B107A0")]
	public static int DivUp(int x, int y)
	{
		return default(int);
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x2B107A0", Offset = "0x2B0EDA0", VA = "0x182B107A0")]
	public static int DivUp(int x, uint y)
	{
		return default(int);
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x2D86A20", Offset = "0x2D85020", VA = "0x182D86A20")]
	public static uint DivUp(uint x, uint y)
	{
		return default(uint);
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x2D8F520", Offset = "0x2D8DB20", VA = "0x182D8F520")]
	public static uint3 DivUp(uint3 x, uint3 y)
	{
		return default(uint3);
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x2D8F570", Offset = "0x2D8DB70", VA = "0x182D8F570")]
	public static void Flush(CommandBuffer cmd)
	{
	}
}
