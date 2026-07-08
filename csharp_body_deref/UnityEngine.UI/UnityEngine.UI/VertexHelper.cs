using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000081")]
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

	[Token(Token = "0x17000152")]
	public int currentVertCount
	{
		[Token(Token = "0x600051A")]
		[Address(RVA = "0x4DC7120", Offset = "0x4DC7120", VA = "0x4DC7120")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000153")]
	public int currentIndexCount
	{
		[Token(Token = "0x600051B")]
		[Address(RVA = "0x4DC7160", Offset = "0x4DC7160", VA = "0x4DC7160")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x4DC6A70", Offset = "0x4DC6A70", VA = "0x4DC6A70")]
	public VertexHelper()
	{
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x4DC6A80", Offset = "0x4DC6A80", VA = "0x4DC6A80")]
	public VertexHelper(Mesh m)
	{
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x4DC6CB0", Offset = "0x4DC6CB0", VA = "0x4DC6CB0")]
	private void InitializeListIfRequired()
	{
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x4DC6EA0", Offset = "0x4DC6EA0", VA = "0x4DC6EA0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x4DB1A10", Offset = "0x4DB1A10", VA = "0x4DB1A10")]
	public void Clear()
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x4DC71A0", Offset = "0x4DC71A0", VA = "0x4DC71A0")]
	public void PopulateUIVertex(ref UIVertex vertex, int i)
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x4DC7300", Offset = "0x4DC7300", VA = "0x4DC7300")]
	public void SetUIVertex(UIVertex vertex, int i)
	{
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x4DC7470", Offset = "0x4DC7470", VA = "0x4DC7470")]
	public void FillMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x4DC75C0", Offset = "0x4DC75C0", VA = "0x4DC75C0")]
	public void AddVert(Vector3 position, Color32 color, Vector4 uv0, Vector4 uv1, Vector4 uv2, Vector4 uv3, Vector3 normal, Vector4 tangent)
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x4DC79D0", Offset = "0x4DC79D0", VA = "0x4DC79D0")]
	public void AddVert(Vector3 position, Color32 color, Vector4 uv0, Vector4 uv1, Vector3 normal, Vector4 tangent)
	{
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x4DB1B30", Offset = "0x4DB1B30", VA = "0x4DB1B30")]
	public void AddVert(Vector3 position, Color32 color, Vector4 uv0)
	{
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x4DC7AF0", Offset = "0x4DC7AF0", VA = "0x4DC7AF0")]
	public void AddVert(UIVertex v)
	{
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x4DB1CC0", Offset = "0x4DB1CC0", VA = "0x4DB1CC0")]
	public void AddTriangle(int idx0, int idx1, int idx2)
	{
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x4DC2EB0", Offset = "0x4DC2EB0", VA = "0x4DC2EB0")]
	public void AddUIVertexQuad(UIVertex[] verts)
	{
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x4DC7D20", Offset = "0x4DC7D20", VA = "0x4DC7D20")]
	public void AddUIVertexStream(List<UIVertex> verts, List<int> indices)
	{
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x4DC7DD0", Offset = "0x4DC7DD0", VA = "0x4DC7DD0")]
	public void AddUIVertexTriangleStream(List<UIVertex> verts)
	{
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x4DC7E30", Offset = "0x4DC7E30", VA = "0x4DC7E30")]
	public void GetUIVertexStream(List<UIVertex> stream)
	{
	}
}
