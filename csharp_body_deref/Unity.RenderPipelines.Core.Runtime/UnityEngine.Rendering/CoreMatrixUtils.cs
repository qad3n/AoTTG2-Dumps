using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001A5")]
public static class CoreMatrixUtils
{
	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x48D2A70", Offset = "0x48D2A70", VA = "0x48D2A70")]
	public static void MatrixTimesTranslation(ref Matrix4x4 inOutMatrix, Vector3 translation)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x48D2B00", Offset = "0x48D2B00", VA = "0x48D2B00")]
	public static void TranslationTimesMatrix(ref Matrix4x4 inOutMatrix, Vector3 translation)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x48D2BE0", Offset = "0x48D2BE0", VA = "0x48D2BE0")]
	public static Matrix4x4 MultiplyPerspectiveMatrix(Matrix4x4 perspective, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x48D2D30", Offset = "0x48D2D30", VA = "0x48D2D30")]
	private static Matrix4x4 MultiplyOrthoMatrixCentered(Matrix4x4 ortho, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x48D2E60", Offset = "0x48D2E60", VA = "0x48D2E60")]
	private static Matrix4x4 MultiplyGenericOrthoMatrix(Matrix4x4 ortho, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x48D3020", Offset = "0x48D3020", VA = "0x48D3020")]
	public static Matrix4x4 MultiplyOrthoMatrix(Matrix4x4 ortho, Matrix4x4 rhs, bool centered)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x48D32D0", Offset = "0x48D32D0", VA = "0x48D32D0")]
	public static Matrix4x4 MultiplyProjectionMatrix(Matrix4x4 projMatrix, Matrix4x4 rhs, bool orthoCentered)
	{
		return default(Matrix4x4);
	}
}
