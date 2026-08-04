// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIRUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x5076C30", Offset = "0x5076C30", VA = "0x5076C30")]
	public static bool ShapeWindingIsClockwise(int maskDepth, int stencilRef)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x5076CA0", Offset = "0x5076CA0", VA = "0x5076CA0")]
	public static void GetVerticesTransformInfo(VisualElement ve, out Matrix4x4 transform)
	{
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x5076E40", Offset = "0x5076E40", VA = "0x5076E40")]
	internal static void ComputeTransformMatrix(VisualElement ve, VisualElement ancestor, out Matrix4x4 result)
	{
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x5077030", Offset = "0x5077030", VA = "0x5077030")]
	public static bool IsRoundRect(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x5077260", Offset = "0x5077260", VA = "0x5077260")]
	public static bool IsVectorImageBackground(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x50722D0", Offset = "0x50722D0", VA = "0x50722D0")]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x50772F0", Offset = "0x50772F0", VA = "0x50772F0")]
	public static int GetPrevPow2(int n)
	{
		return default(int);
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x5072920", Offset = "0x5072920", VA = "0x5072920")]
	public static int GetNextPow2(int n)
	{
		return default(int);
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x5077320", Offset = "0x5077320", VA = "0x5077320")]
	public static int GetNextPow2Exp(int n)
	{
		return default(int);
	}
}
