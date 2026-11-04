// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CoreMatrixUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001BF")]
public static class CoreMatrixUtils
{
	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x2B50150", Offset = "0x2B4E750", VA = "0x182B50150")]
	public static void MatrixTimesTranslation(ref Matrix4x4 inOutMatrix, Vector3 translation)
	{
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x2B50D60", Offset = "0x2B4F360", VA = "0x182B50D60")]
	public static void TranslationTimesMatrix(ref Matrix4x4 inOutMatrix, Vector3 translation)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x2B508C0", Offset = "0x2B4EEC0", VA = "0x182B508C0")]
	public static Matrix4x4 MultiplyPerspectiveMatrix(Matrix4x4 perspective, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x2B50370", Offset = "0x2B4E970", VA = "0x182B50370")]
	private static Matrix4x4 MultiplyOrthoMatrixCentered(Matrix4x4 ortho, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x2B501E0", Offset = "0x2B4E7E0", VA = "0x182B501E0")]
	private static Matrix4x4 MultiplyGenericOrthoMatrix(Matrix4x4 ortho, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x2B50490", Offset = "0x2B4EA90", VA = "0x182B50490")]
	public static Matrix4x4 MultiplyOrthoMatrix(Matrix4x4 ortho, Matrix4x4 rhs, bool centered)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x2B50A00", Offset = "0x2B4F000", VA = "0x182B50A00")]
	public static Matrix4x4 MultiplyProjectionMatrix(Matrix4x4 projMatrix, Matrix4x4 rhs, bool orthoCentered)
	{
		return default(Matrix4x4);
	}
}
