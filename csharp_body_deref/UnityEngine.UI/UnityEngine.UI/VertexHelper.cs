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
		[Address(RVA = "0x32F0570", Offset = "0x32EEB70", VA = "0x1832F0570")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000154")]
	public int currentIndexCount
	{
		[Token(Token = "0x6000527")]
		[Address(RVA = "0x32F0520", Offset = "0x32EEB20", VA = "0x1832F0520")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public VertexHelper()
	{
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x32F02E0", Offset = "0x32EE8E0", VA = "0x1832F02E0")]
	public VertexHelper(Mesh m)
	{
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x32EFBE0", Offset = "0x32EE1E0", VA = "0x1832EFBE0")]
	private void InitializeListIfRequired()
	{
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x32EF7F0", Offset = "0x32EDDF0", VA = "0x1832EF7F0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x32EF700", Offset = "0x32EDD00", VA = "0x1832EF700")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x32EFDC0", Offset = "0x32EE3C0", VA = "0x1832EFDC0")]
	public void PopulateUIVertex(ref UIVertex vertex, int i)
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x32EFF80", Offset = "0x32EE580", VA = "0x1832EFF80")]
	public void SetUIVertex(UIVertex vertex, int i)
	{
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x32EFA00", Offset = "0x32EE000", VA = "0x1832EFA00")]
	public void FillMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x32EF2B0", Offset = "0x32ED8B0", VA = "0x1832EF2B0")]
	public void AddVert(Vector3 position, Color32 color, Vector4 uv0, Vector4 uv1, Vector4 uv2, Vector4 uv3, Vector3 normal, Vector4 tangent)
	{
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x32EF0A0", Offset = "0x32ED6A0", VA = "0x1832EF0A0")]
	public void AddVert(Vector3 position, Color32 color, Vector4 uv0, Vector4 uv1, Vector3 normal, Vector4 tangent)
	{
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x32EEEC0", Offset = "0x32ED4C0", VA = "0x1832EEEC0")]
	public void AddVert(Vector3 position, Color32 color, Vector4 uv0)
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x32EF200", Offset = "0x32ED800", VA = "0x1832EF200")]
	public void AddVert(UIVertex v)
	{
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x32EE980", Offset = "0x32ECF80", VA = "0x1832EE980")]
	public void AddTriangle(int idx0, int idx1, int idx2)
	{
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x32EEAE0", Offset = "0x32ED0E0", VA = "0x1832EEAE0")]
	public void AddUIVertexQuad(UIVertex[] verts)
	{
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x32EED80", Offset = "0x32ED380", VA = "0x1832EED80")]
	public void AddUIVertexStream(List<UIVertex> verts, List<int> indices)
	{
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x32EEE40", Offset = "0x32ED440", VA = "0x1832EEE40")]
	public void AddUIVertexTriangleStream(List<UIVertex> verts)
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x32EFB60", Offset = "0x32EE160", VA = "0x1832EFB60")]
	public void GetUIVertexStream(List<UIVertex> stream)
	{
	}
}
