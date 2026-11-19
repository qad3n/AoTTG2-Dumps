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
		[Address(RVA = "0x64D0CC0", Offset = "0x64CFCC0", VA = "0x64D0CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x64D0D60", Offset = "0x64CFD60", VA = "0x64D0D60")]
	private void BuildSphere(ref Mesh outputMesh, float radius, uint longSubdiv, uint latSubdiv)
	{
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x64D15B0", Offset = "0x64D05B0", VA = "0x64D15B0")]
	private void BuildBox(ref Mesh outputMesh, float length, float width, float height)
	{
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x64D1F30", Offset = "0x64D0F30", VA = "0x64D1F30")]
	private void BuildCone(ref Mesh outputMesh, float height, float topRadius, float bottomRadius, int nbSides)
	{
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x64D29E0", Offset = "0x64D19E0", VA = "0x64D29E0")]
	private void BuildPyramid(ref Mesh outputMesh, float width, float height, float depth)
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x64D2E20", Offset = "0x64D1E20", VA = "0x64D2E20")]
	private void BuildShapes()
	{
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x64D2F60", Offset = "0x64D1F60", VA = "0x64D2F60")]
	private void RebuildResources()
	{
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x64D3040", Offset = "0x64D2040", VA = "0x64D3040")]
	public Mesh RequestSphereMesh()
	{
		return null;
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x64D3050", Offset = "0x64D2050", VA = "0x64D3050")]
	public Mesh BuildCustomSphereMesh(float radius, uint longSubdiv, uint latSubdiv)
	{
		return null;
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x64D30D0", Offset = "0x64D20D0", VA = "0x64D30D0")]
	public Mesh RequestBoxMesh()
	{
		return null;
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x64D30E0", Offset = "0x64D20E0", VA = "0x64D30E0")]
	public Mesh RequestConeMesh()
	{
		return null;
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x64D30F0", Offset = "0x64D20F0", VA = "0x64D30F0")]
	public Mesh RequestPyramidMesh()
	{
		return null;
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x64D0D50", Offset = "0x64CFD50", VA = "0x64D0D50")]
	public DebugShapes()
	{
	}
}
