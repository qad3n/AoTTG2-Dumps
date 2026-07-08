using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000C5")]
public class DebugShapes
{
	[Token(Token = "0x40002D8")]
	[FieldOffset(Offset = "0x0")]
	private static DebugShapes s_Instance;

	[Token(Token = "0x40002D9")]
	[FieldOffset(Offset = "0x10")]
	private Mesh m_sphereMesh;

	[Token(Token = "0x40002DA")]
	[FieldOffset(Offset = "0x18")]
	private Mesh m_boxMesh;

	[Token(Token = "0x40002DB")]
	[FieldOffset(Offset = "0x20")]
	private Mesh m_coneMesh;

	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x28")]
	private Mesh m_pyramidMesh;

	[Token(Token = "0x1700008E")]
	public static DebugShapes instance
	{
		[Token(Token = "0x600074A")]
		[Address(RVA = "0x4881160", Offset = "0x4881160", VA = "0x4881160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x4881200", Offset = "0x4881200", VA = "0x4881200")]
	private void BuildSphere(ref Mesh outputMesh, float radius, uint longSubdiv, uint latSubdiv)
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x4881B70", Offset = "0x4881B70", VA = "0x4881B70")]
	private void BuildBox(ref Mesh outputMesh, float length, float width, float height)
	{
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x48824C0", Offset = "0x48824C0", VA = "0x48824C0")]
	private void BuildCone(ref Mesh outputMesh, float height, float topRadius, float bottomRadius, int nbSides)
	{
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x4882F00", Offset = "0x4882F00", VA = "0x4882F00")]
	private void BuildPyramid(ref Mesh outputMesh, float width, float height, float depth)
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x4883340", Offset = "0x4883340", VA = "0x4883340")]
	private void BuildShapes()
	{
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x4883480", Offset = "0x4883480", VA = "0x4883480")]
	private void RebuildResources()
	{
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x4883560", Offset = "0x4883560", VA = "0x4883560")]
	public Mesh RequestSphereMesh()
	{
		return null;
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x4883570", Offset = "0x4883570", VA = "0x4883570")]
	public Mesh BuildCustomSphereMesh(float radius, uint longSubdiv, uint latSubdiv)
	{
		return null;
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x48835F0", Offset = "0x48835F0", VA = "0x48835F0")]
	public Mesh RequestBoxMesh()
	{
		return null;
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x4883600", Offset = "0x4883600", VA = "0x4883600")]
	public Mesh RequestConeMesh()
	{
		return null;
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x4883610", Offset = "0x4883610", VA = "0x4883610")]
	public Mesh RequestPyramidMesh()
	{
		return null;
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x48811F0", Offset = "0x48811F0", VA = "0x48811F0")]
	public DebugShapes()
	{
	}
}
