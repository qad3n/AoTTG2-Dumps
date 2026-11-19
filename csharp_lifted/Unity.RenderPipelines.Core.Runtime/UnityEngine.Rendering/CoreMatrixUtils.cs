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
	[Address(RVA = "0x6540650", Offset = "0x653F650", VA = "0x6540650")]
	public static void MatrixTimesTranslation(ref Matrix4x4 inOutMatrix, Vector3 translation)
	{
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x65406C0", Offset = "0x653F6C0", VA = "0x65406C0")]
	public static void TranslationTimesMatrix(ref Matrix4x4 inOutMatrix, Vector3 translation)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x6540760", Offset = "0x653F760", VA = "0x6540760")]
	public static Matrix4x4 MultiplyPerspectiveMatrix(Matrix4x4 perspective, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x6540860", Offset = "0x653F860", VA = "0x6540860")]
	private static Matrix4x4 MultiplyOrthoMatrixCentered(Matrix4x4 ortho, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x6540950", Offset = "0x653F950", VA = "0x6540950")]
	private static Matrix4x4 MultiplyGenericOrthoMatrix(Matrix4x4 ortho, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x6540A90", Offset = "0x653FA90", VA = "0x6540A90")]
	public static Matrix4x4 MultiplyOrthoMatrix(Matrix4x4 ortho, Matrix4x4 rhs, bool centered)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x6540C40", Offset = "0x653FC40", VA = "0x6540C40")]
	public static Matrix4x4 MultiplyProjectionMatrix(Matrix4x4 projMatrix, Matrix4x4 rhs, bool orthoCentered)
	{
		return default(Matrix4x4);
	}
}
