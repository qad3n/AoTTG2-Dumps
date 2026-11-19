// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.VertexHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x200007F")]
public class VertexHelper : IDisposable
{
	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> m_Positions;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0x18")]
	private List<Color32> m_Colors;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x20")]
	private List<Vector4> m_Uv0S;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x28")]
	private List<Vector4> m_Uv1S;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0x30")]
	private List<Vector4> m_Uv2S;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x38")]
	private List<Vector4> m_Uv3S;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0x40")]
	private List<Vector3> m_Normals;

	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x48")]
	private List<Vector4> m_Tangents;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x50")]
	private List<int> m_Indices;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector4 s_DefaultTangent;

	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector3 s_DefaultNormal;

	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0x58")]
	private bool m_ListsInitalized;

	[Token(Token = "0x17000153")]
	public int currentVertCount
	{
		[Token(Token = "0x6000526")]
		[Address(RVA = "0x6CFE980", Offset = "0x6CFD980", VA = "0x6CFE980")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000154")]
	public int currentIndexCount
	{
		[Token(Token = "0x6000527")]
		[Address(RVA = "0x6CFE9C0", Offset = "0x6CFD9C0", VA = "0x6CFE9C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x6CFE2D0", Offset = "0x6CFD2D0", VA = "0x6CFE2D0")]
	public VertexHelper()
	{
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x6CFE2E0", Offset = "0x6CFD2E0", VA = "0x6CFE2E0")]
	public VertexHelper(Mesh m)
	{
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x6CFE510", Offset = "0x6CFD510", VA = "0x6CFE510")]
	private void InitializeListIfRequired()
	{
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x6CFE700", Offset = "0x6CFD700", VA = "0x6CFE700", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x6CE9490", Offset = "0x6CE8490", VA = "0x6CE9490")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x6CFEA00", Offset = "0x6CFDA00", VA = "0x6CFEA00")]
	public void PopulateUIVertex(ref UIVertex vertex, int i)
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x6CFEB60", Offset = "0x6CFDB60", VA = "0x6CFEB60")]
	public void SetUIVertex(UIVertex vertex, int i)
	{
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x6CFECD0", Offset = "0x6CFDCD0", VA = "0x6CFECD0")]
	public void FillMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x6CFEE20", Offset = "0x6CFDE20", VA = "0x6CFEE20")]
	public void AddVert(Vector3 position, Color32 color, Vector4 uv0, Vector4 uv1, Vector4 uv2, Vector4 uv3, Vector3 normal, Vector4 tangent)
	{
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x6CFF1D0", Offset = "0x6CFE1D0", VA = "0x6CFF1D0")]
	public void AddVert(Vector3 position, Color32 color, Vector4 uv0, Vector4 uv1, Vector3 normal, Vector4 tangent)
	{
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x6CE95A0", Offset = "0x6CE85A0", VA = "0x6CE95A0")]
	public void AddVert(Vector3 position, Color32 color, Vector4 uv0)
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x6CFF2F0", Offset = "0x6CFE2F0", VA = "0x6CFF2F0")]
	public void AddVert(UIVertex v)
	{
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x6CE9750", Offset = "0x6CE8750", VA = "0x6CE9750")]
	public void AddTriangle(int idx0, int idx1, int idx2)
	{
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x6CFA640", Offset = "0x6CF9640", VA = "0x6CFA640")]
	public void AddUIVertexQuad(UIVertex[] verts)
	{
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x6CFF520", Offset = "0x6CFE520", VA = "0x6CFF520")]
	public void AddUIVertexStream(List<UIVertex> verts, List<int> indices)
	{
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x6CFF5D0", Offset = "0x6CFE5D0", VA = "0x6CFF5D0")]
	public void AddUIVertexTriangleStream(List<UIVertex> verts)
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x6CFF630", Offset = "0x6CFE630", VA = "0x6CFF630")]
	public void GetUIVertexStream(List<UIVertex> stream)
	{
	}
}
