// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugShapes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4BA6250", Offset = "0x4BA6250", VA = "0x4BA6250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x4BA62F0", Offset = "0x4BA62F0", VA = "0x4BA62F0")]
	private void BuildSphere(ref Mesh outputMesh, float radius, uint longSubdiv, uint latSubdiv)
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x4BA6C60", Offset = "0x4BA6C60", VA = "0x4BA6C60")]
	private void BuildBox(ref Mesh outputMesh, float length, float width, float height)
	{
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x4BA75B0", Offset = "0x4BA75B0", VA = "0x4BA75B0")]
	private void BuildCone(ref Mesh outputMesh, float height, float topRadius, float bottomRadius, int nbSides)
	{
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x4BA7FF0", Offset = "0x4BA7FF0", VA = "0x4BA7FF0")]
	private void BuildPyramid(ref Mesh outputMesh, float width, float height, float depth)
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x4BA8430", Offset = "0x4BA8430", VA = "0x4BA8430")]
	private void BuildShapes()
	{
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x4BA8570", Offset = "0x4BA8570", VA = "0x4BA8570")]
	private void RebuildResources()
	{
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x4BA8650", Offset = "0x4BA8650", VA = "0x4BA8650")]
	public Mesh RequestSphereMesh()
	{
		return null;
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x4BA8660", Offset = "0x4BA8660", VA = "0x4BA8660")]
	public Mesh BuildCustomSphereMesh(float radius, uint longSubdiv, uint latSubdiv)
	{
		return null;
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x4BA86E0", Offset = "0x4BA86E0", VA = "0x4BA86E0")]
	public Mesh RequestBoxMesh()
	{
		return null;
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x4BA86F0", Offset = "0x4BA86F0", VA = "0x4BA86F0")]
	public Mesh RequestConeMesh()
	{
		return null;
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x4BA8700", Offset = "0x4BA8700", VA = "0x4BA8700")]
	public Mesh RequestPyramidMesh()
	{
		return null;
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x4BA62E0", Offset = "0x4BA62E0", VA = "0x4BA62E0")]
	public DebugShapes()
	{
	}
}
