using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x200025E")]
internal static class UIRUtility
{
	[Token(Token = "0x40008CD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_ComputeTransformMatrixMarker;

	[Token(Token = "0x40008CE")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string k_DefaultShaderName;

	[Token(Token = "0x40008CF")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string k_DefaultWorldSpaceShaderName;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x4D4F300", Offset = "0x4D4F300", VA = "0x4D4F300")]
	public static bool ShapeWindingIsClockwise(int maskDepth, int stencilRef)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x4D4F370", Offset = "0x4D4F370", VA = "0x4D4F370")]
	public static void GetVerticesTransformInfo(VisualElement ve, out Matrix4x4 transform)
	{
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x4D4F510", Offset = "0x4D4F510", VA = "0x4D4F510")]
	internal static void ComputeTransformMatrix(VisualElement ve, VisualElement ancestor, out Matrix4x4 result)
	{
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x4D4F700", Offset = "0x4D4F700", VA = "0x4D4F700")]
	public static bool IsRoundRect(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x4D4F930", Offset = "0x4D4F930", VA = "0x4D4F930")]
	public static bool IsVectorImageBackground(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x4D4A9A0", Offset = "0x4D4A9A0", VA = "0x4D4A9A0")]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x4D4F9C0", Offset = "0x4D4F9C0", VA = "0x4D4F9C0")]
	public static int GetPrevPow2(int n)
	{
		return default(int);
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x4D4AFF0", Offset = "0x4D4AFF0", VA = "0x4D4AFF0")]
	public static int GetNextPow2(int n)
	{
		return default(int);
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x4D4F9F0", Offset = "0x4D4F9F0", VA = "0x4D4F9F0")]
	public static int GetNextPow2Exp(int n)
	{
		return default(int);
	}
}
