// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugShapes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000095")]
public class DebugShapes
{
	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x0")]
	private static DebugShapes s_Instance;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x10")]
	private Mesh m_sphereMesh;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x18")]
	private Mesh m_boxMesh;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x20")]
	private Mesh m_coneMesh;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x28")]
	private Mesh m_pyramidMesh;

	[Token(Token = "0x1700006C")]
	public static DebugShapes instance
	{
		[Token(Token = "0x6000687")]
		[Address(RVA = "0x2AE0360", Offset = "0x2ADE960", VA = "0x182AE0360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x2ADF800", Offset = "0x2ADDE00", VA = "0x182ADF800")]
	private void BuildSphere(ref Mesh outputMesh, float radius, uint longSubdiv, uint latSubdiv)
	{
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x2ADDAA0", Offset = "0x2ADC0A0", VA = "0x182ADDAA0")]
	private void BuildBox(ref Mesh outputMesh, float length, float width, float height)
	{
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x2ADE780", Offset = "0x2ADCD80", VA = "0x182ADE780")]
	private void BuildCone(ref Mesh outputMesh, float height, float topRadius, float bottomRadius, int nbSides)
	{
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x2ADF1F0", Offset = "0x2ADD7F0", VA = "0x182ADF1F0")]
	private void BuildPyramid(ref Mesh outputMesh, float width, float height, float depth)
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x2ADF680", Offset = "0x2ADDC80", VA = "0x182ADF680")]
	private void BuildShapes()
	{
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x2AE0090", Offset = "0x2ADE690", VA = "0x182AE0090")]
	private void RebuildResources()
	{
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x2AE0340", Offset = "0x2ADE940", VA = "0x182AE0340")]
	public Mesh RequestSphereMesh()
	{
		return null;
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x2ADF160", Offset = "0x2ADD760", VA = "0x182ADF160")]
	public Mesh BuildCustomSphereMesh(float radius, uint longSubdiv, uint latSubdiv)
	{
		return null;
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x2AE02E0", Offset = "0x2ADE8E0", VA = "0x182AE02E0")]
	public Mesh RequestBoxMesh()
	{
		return null;
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x2AE0300", Offset = "0x2ADE900", VA = "0x182AE0300")]
	public Mesh RequestConeMesh()
	{
		return null;
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x2AE0320", Offset = "0x2ADE920", VA = "0x182AE0320")]
	public Mesh RequestPyramidMesh()
	{
		return null;
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DebugShapes()
	{
	}
}
