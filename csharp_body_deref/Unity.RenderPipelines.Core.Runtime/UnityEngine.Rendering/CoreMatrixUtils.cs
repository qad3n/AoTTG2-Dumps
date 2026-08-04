// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CoreMatrixUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001A5")]
public static class CoreMatrixUtils
{
	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x4BF7AE0", Offset = "0x4BF7AE0", VA = "0x4BF7AE0")]
	public static void MatrixTimesTranslation(ref Matrix4x4 inOutMatrix, Vector3 translation)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x4BF7B70", Offset = "0x4BF7B70", VA = "0x4BF7B70")]
	public static void TranslationTimesMatrix(ref Matrix4x4 inOutMatrix, Vector3 translation)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x4BF7C50", Offset = "0x4BF7C50", VA = "0x4BF7C50")]
	public static Matrix4x4 MultiplyPerspectiveMatrix(Matrix4x4 perspective, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x4BF7DA0", Offset = "0x4BF7DA0", VA = "0x4BF7DA0")]
	private static Matrix4x4 MultiplyOrthoMatrixCentered(Matrix4x4 ortho, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x4BF7ED0", Offset = "0x4BF7ED0", VA = "0x4BF7ED0")]
	private static Matrix4x4 MultiplyGenericOrthoMatrix(Matrix4x4 ortho, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x4BF8090", Offset = "0x4BF8090", VA = "0x4BF8090")]
	public static Matrix4x4 MultiplyOrthoMatrix(Matrix4x4 ortho, Matrix4x4 rhs, bool centered)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x4BF8340", Offset = "0x4BF8340", VA = "0x4BF8340")]
	public static Matrix4x4 MultiplyProjectionMatrix(Matrix4x4 projMatrix, Matrix4x4 rhs, bool orthoCentered)
	{
		return default(Matrix4x4);
	}
}
