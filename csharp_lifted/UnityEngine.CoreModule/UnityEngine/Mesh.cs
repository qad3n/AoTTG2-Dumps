// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Mesh
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000121")]
[UnityEngine.Scripting.RequiredByNativeCode]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
public sealed class Mesh : Object
{
	[Token(Token = "0x2000122")]
	[UnityEngine.Bindings.StaticAccessor("MeshDataBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
	public struct MeshData
	{
		[Token(Token = "0x4000399")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal IntPtr m_Ptr;
	}

	[Token(Token = "0x17000159")]
	public IndexFormat indexFormat
	{
		[Token(Token = "0x600075D")]
		[Address(RVA = "0x68E56C0", Offset = "0x68E46C0", VA = "0x68E56C0")]
		get
		{
			return default(IndexFormat);
		}
		[Token(Token = "0x600075E")]
		[Address(RVA = "0x68E5770", Offset = "0x68E4770", VA = "0x68E5770")]
		set
		{
		}
	}

	[Token(Token = "0x1700015A")]
	public GraphicsBuffer.Target vertexBufferTarget
	{
		[Token(Token = "0x6000773")]
		[Address(RVA = "0x68E6C60", Offset = "0x68E5C60", VA = "0x68E6C60")]
		get
		{
			return default(GraphicsBuffer.Target);
		}
		[Token(Token = "0x6000774")]
		[Address(RVA = "0x68E6D10", Offset = "0x68E5D10", VA = "0x68E6D10")]
		set
		{
		}
	}

	[Token(Token = "0x1700015B")]
	public GraphicsBuffer.Target indexBufferTarget
	{
		[Token(Token = "0x6000775")]
		[Address(RVA = "0x68E6DD0", Offset = "0x68E5DD0", VA = "0x68E6DD0")]
		get
		{
			return default(GraphicsBuffer.Target);
		}
		[Token(Token = "0x6000776")]
		[Address(RVA = "0x68E6E80", Offset = "0x68E5E80", VA = "0x68E6E80")]
		set
		{
		}
	}

	[Token(Token = "0x1700015C")]
	[UnityEngine.Bindings.NativeName("BindPosesFromScript")]
	public Matrix4x4[] bindposes
	{
		[Token(Token = "0x6000779")]
		[Address(RVA = "0x68E71F0", Offset = "0x68E61F0", VA = "0x68E71F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600077A")]
		[Address(RVA = "0x68E7360", Offset = "0x68E6360", VA = "0x68E7360")]
		set
		{
		}
	}

	[Token(Token = "0x1700015D")]
	public bool isReadable
	{
		[Token(Token = "0x600077B")]
		[Address(RVA = "0x68E74A0", Offset = "0x68E64A0", VA = "0x68E74A0")]
		[UnityEngine.Bindings.NativeMethod("GetIsReadable")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015E")]
	internal bool canAccess
	{
		[Token(Token = "0x600077C")]
		[Address(RVA = "0x68E7550", Offset = "0x68E6550", VA = "0x68E7550")]
		[UnityEngine.Bindings.NativeMethod("CanAccessFromScript")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015F")]
	public int vertexCount
	{
		[Token(Token = "0x600077D")]
		[Address(RVA = "0x68E7600", Offset = "0x68E6600", VA = "0x68E7600")]
		[UnityEngine.Bindings.NativeMethod("GetVertexCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000160")]
	public int subMeshCount
	{
		[Token(Token = "0x600077E")]
		[Address(RVA = "0x68E76B0", Offset = "0x68E66B0", VA = "0x68E76B0")]
		[UnityEngine.Bindings.NativeMethod(Name = "GetSubMeshCount")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600077F")]
		[Address(RVA = "0x68E7760", Offset = "0x68E6760", VA = "0x68E7760")]
		[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::SetSubMeshCount", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	public Bounds bounds
	{
		[Token(Token = "0x6000782")]
		[Address(RVA = "0x68E79D0", Offset = "0x68E69D0", VA = "0x68E79D0")]
		get
		{
			return default(Bounds);
		}
		[Token(Token = "0x6000783")]
		[Address(RVA = "0x68E7AC0", Offset = "0x68E6AC0", VA = "0x68E7AC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000162")]
	public Vector3[] vertices
	{
		[Token(Token = "0x6000797")]
		[Address(RVA = "0x68E89B0", Offset = "0x68E79B0", VA = "0x68E89B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000798")]
		[Address(RVA = "0x68E89F0", Offset = "0x68E79F0", VA = "0x68E89F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000163")]
	public Vector3[] normals
	{
		[Token(Token = "0x6000799")]
		[Address(RVA = "0x68E8A40", Offset = "0x68E7A40", VA = "0x68E8A40")]
		get
		{
			return null;
		}
		[Token(Token = "0x600079A")]
		[Address(RVA = "0x68E8A80", Offset = "0x68E7A80", VA = "0x68E8A80")]
		set
		{
		}
	}

	[Token(Token = "0x17000164")]
	public Vector4[] tangents
	{
		[Token(Token = "0x600079B")]
		[Address(RVA = "0x68E8AD0", Offset = "0x68E7AD0", VA = "0x68E8AD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600079C")]
		[Address(RVA = "0x68E8B10", Offset = "0x68E7B10", VA = "0x68E8B10")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public Vector2[] uv
	{
		[Token(Token = "0x600079D")]
		[Address(RVA = "0x68E8B60", Offset = "0x68E7B60", VA = "0x68E8B60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600079E")]
		[Address(RVA = "0x68E8BA0", Offset = "0x68E7BA0", VA = "0x68E8BA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	public Vector2[] uv2
	{
		[Token(Token = "0x600079F")]
		[Address(RVA = "0x68E8BF0", Offset = "0x68E7BF0", VA = "0x68E8BF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	public Vector2[] uv3
	{
		[Token(Token = "0x60007A0")]
		[Address(RVA = "0x68E8C40", Offset = "0x68E7C40", VA = "0x68E8C40")]
		set
		{
		}
	}

	[Token(Token = "0x17000168")]
	public Vector2[] uv4
	{
		[Token(Token = "0x60007A1")]
		[Address(RVA = "0x68E8C90", Offset = "0x68E7C90", VA = "0x68E8C90")]
		set
		{
		}
	}

	[Token(Token = "0x17000169")]
	public Color32[] colors32
	{
		[Token(Token = "0x60007A2")]
		[Address(RVA = "0x68E8CE0", Offset = "0x68E7CE0", VA = "0x68E8CE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007A3")]
		[Address(RVA = "0x68E8D30", Offset = "0x68E7D30", VA = "0x68E8D30")]
		set
		{
		}
	}

	[Token(Token = "0x1700016A")]
	public int lodCount
	{
		[Token(Token = "0x60007A4")]
		[Address(RVA = "0x68E8D90", Offset = "0x68E7D90", VA = "0x68E8D90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700016B")]
	public int[] triangles
	{
		[Token(Token = "0x60007D6")]
		[Address(RVA = "0x68EA240", Offset = "0x68E9240", VA = "0x68EA240")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007D7")]
		[Address(RVA = "0x68EA390", Offset = "0x68E9390", VA = "0x68EA390")]
		set
		{
		}
	}

	[Token(Token = "0x1700016C")]
	public BoneWeight[] boneWeights
	{
		[Token(Token = "0x60007F7")]
		[Address(RVA = "0x68EBAA0", Offset = "0x68EAAA0", VA = "0x68EBAA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007F8")]
		[Address(RVA = "0x68EBAB0", Offset = "0x68EAAB0", VA = "0x68EBAB0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600075B")]
	[Address(RVA = "0x68E5620", Offset = "0x68E4620", VA = "0x68E5620")]
	[UnityEngine.Bindings.FreeFunction("MeshScripting::CreateMesh")]
	private static extern void Internal_Create([UnityEngine.Writable] Mesh mono);

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x68E5650", Offset = "0x68E4650", VA = "0x68E5650")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Mesh()
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x68E5830", Offset = "0x68E4830", VA = "0x68E5830")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::InternalSetIndexBufferDataFromArray", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetIndexBufferDataFromArray(Array data, int dataStart, int meshBufferStart, int count, int elemSize, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x68E5940", Offset = "0x68E4940", VA = "0x68E5940")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetIndexCount", HasExplicitThis = true)]
	private uint GetIndexCountImpl(int submesh, int meshlod)
	{
		return default(uint);
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x68E5A10", Offset = "0x68E4A10", VA = "0x68E5A10")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetTrianglesCount", HasExplicitThis = true)]
	private uint GetTrianglesCountImpl(int submesh, int meshlod)
	{
		return default(uint);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x68E5AE0", Offset = "0x68E4AE0", VA = "0x68E5AE0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetTriangles", HasExplicitThis = true)]
	private int[] GetTrianglesImpl(int submesh, bool applyBaseVertex, int meshlod)
	{
		return null;
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x68E5C80", Offset = "0x68E4C80", VA = "0x68E5C80")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetIndices", HasExplicitThis = true)]
	private int[] GetIndicesImpl(int submesh, bool applyBaseVertex, int meshlod)
	{
		return null;
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x68E5E20", Offset = "0x68E4E20", VA = "0x68E5E20")]
	[UnityEngine.Bindings.FreeFunction(Name = "SetMeshIndicesFromScript", HasExplicitThis = true, ThrowsException = true)]
	private void SetIndicesImpl(int submesh, MeshTopology topology, IndexFormat indicesFormat, Array indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex, int meshlod)
	{
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x68E5F30", Offset = "0x68E4F30", VA = "0x68E5F30")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::ExtractTrianglesToArray", HasExplicitThis = true)]
	private void GetTrianglesNonAllocImpl([Out] int[] values, int submesh, bool applyBaseVertex, int meshlod)
	{
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x68E6110", Offset = "0x68E5110", VA = "0x68E6110")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::PrintErrorCantAccessChannel", HasExplicitThis = true)]
	private void PrintErrorCantAccessChannel(VertexAttribute ch)
	{
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x68E61D0", Offset = "0x68E51D0", VA = "0x68E61D0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::HasChannel", HasExplicitThis = true)]
	public bool HasVertexAttribute(VertexAttribute attr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x68E6290", Offset = "0x68E5290", VA = "0x68E6290")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetChannelDimension", HasExplicitThis = true)]
	public int GetVertexAttributeDimension(VertexAttribute attr)
	{
		return default(int);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x68E6350", Offset = "0x68E5350", VA = "0x68E6350")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetChannelFormat", HasExplicitThis = true)]
	public VertexAttributeFormat GetVertexAttributeFormat(VertexAttribute attr)
	{
		return default(VertexAttributeFormat);
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x68E6410", Offset = "0x68E5410", VA = "0x68E6410")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetChannelStream", HasExplicitThis = true)]
	public int GetVertexAttributeStream(VertexAttribute attr)
	{
		return default(int);
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x68E64D0", Offset = "0x68E54D0", VA = "0x68E64D0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetChannelOffset", HasExplicitThis = true)]
	public int GetVertexAttributeOffset(VertexAttribute attr)
	{
		return default(int);
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x68E6590", Offset = "0x68E5590", VA = "0x68E6590")]
	[UnityEngine.Bindings.FreeFunction(Name = "SetMeshComponentFromArrayFromScript", HasExplicitThis = true)]
	private void SetArrayForChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x68E66A0", Offset = "0x68E56A0", VA = "0x68E66A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "SetMeshComponentFromNativeArrayFromScript", HasExplicitThis = true)]
	private void SetNativeArrayForChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, IntPtr values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x68E67B0", Offset = "0x68E57B0", VA = "0x68E67B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "AllocExtractMeshComponentFromScript", HasExplicitThis = true)]
	private Array GetAllocArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim)
	{
		return null;
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x68E6890", Offset = "0x68E5890", VA = "0x68E6890")]
	[UnityEngine.Bindings.FreeFunction(Name = "ExtractMeshComponentFromScript", HasExplicitThis = true)]
	private void GetArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values)
	{
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x68E6980", Offset = "0x68E5980", VA = "0x68E6980")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetVertexBufferStride", HasExplicitThis = true)]
	public int GetVertexBufferStride(int stream)
	{
		return default(int);
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x68E6A40", Offset = "0x68E5A40", VA = "0x68E6A40")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetVertexBufferPtr", HasExplicitThis = true, ThrowsException = true)]
	private GraphicsBuffer GetVertexBufferImpl(int index)
	{
		return null;
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x68E6B50", Offset = "0x68E5B50", VA = "0x68E6B50")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetIndexBufferPtr", HasExplicitThis = true, ThrowsException = true)]
	private GraphicsBuffer GetIndexBufferImpl()
	{
		return null;
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x68E6F40", Offset = "0x68E5F40", VA = "0x68E6F40")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetBoneWeights", HasExplicitThis = true)]
	private BoneWeight[] GetBoneWeightsImpl()
	{
		return null;
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x68E70B0", Offset = "0x68E60B0", VA = "0x68E70B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::SetBoneWeights", HasExplicitThis = true)]
	private void SetBoneWeightsImpl(BoneWeight[] weights)
	{
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x68E7820", Offset = "0x68E6820", VA = "0x68E7820")]
	[UnityEngine.Bindings.FreeFunction("MeshScripting::GetSubMesh", HasExplicitThis = true, ThrowsException = true)]
	public SubMeshDescriptor GetSubMesh(int index)
	{
		return default(SubMeshDescriptor);
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x68E7920", Offset = "0x68E6920", VA = "0x68E7920")]
	[UnityEngine.Bindings.FreeFunction("MeshScripting::GetLodCount", HasExplicitThis = true)]
	private int GetLodCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x68E7B90", Offset = "0x68E6B90", VA = "0x68E7B90")]
	[UnityEngine.Bindings.NativeMethod("Clear")]
	private void ClearImpl(bool keepVertexLayout)
	{
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x68E7C50", Offset = "0x68E6C50", VA = "0x68E7C50")]
	[UnityEngine.Bindings.NativeMethod("RecalculateBounds")]
	private void RecalculateBoundsImpl(MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x68E7D10", Offset = "0x68E6D10", VA = "0x68E7D10")]
	[UnityEngine.Bindings.NativeMethod("RecalculateNormals")]
	private void RecalculateNormalsImpl(MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x68E7DD0", Offset = "0x68E6DD0", VA = "0x68E7DD0")]
	[UnityEngine.Bindings.NativeMethod("MarkDynamic")]
	private void MarkDynamicImpl()
	{
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x68E7E80", Offset = "0x68E6E80", VA = "0x68E7E80")]
	[UnityEngine.Bindings.NativeMethod("UploadMeshData")]
	private void UploadMeshDataImpl(bool markNoLongerReadable)
	{
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x68E7F40", Offset = "0x68E6F40", VA = "0x68E7F40")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetPrimitiveType", HasExplicitThis = true)]
	private MeshTopology GetTopologyImpl(int submesh)
	{
		return default(MeshTopology);
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x68E8000", Offset = "0x68E7000", VA = "0x68E8000")]
	[UnityEngine.Bindings.NativeMethod(Name = "MeshScripting::CombineMeshes", IsFreeFunction = true, ThrowsException = true, HasExplicitThis = true)]
	private void CombineMeshesImpl(CombineInstance[] combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData)
	{
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x68E8180", Offset = "0x68E7180", VA = "0x68E8180")]
	internal static VertexAttribute GetUVChannel(int uvIndex)
	{
		return default(VertexAttribute);
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x68E81F0", Offset = "0x68E71F0", VA = "0x68E81F0")]
	internal static int DefaultDimensionForChannel(VertexAttribute channel)
	{
		return default(int);
	}

	[Token(Token = "0x600078D")]
	private T[] GetAllocArrayFromChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim)
	{
		return null;
	}

	[Token(Token = "0x600078E")]
	private T[] GetAllocArrayFromChannel<T>(VertexAttribute channel)
	{
		return null;
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x68E8280", Offset = "0x68E7280", VA = "0x68E8280")]
	private void SetSizedArrayForChannel(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int valuesArrayLength, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x68E8620", Offset = "0x68E7620", VA = "0x68E8620")]
	private void SetSizedNativeArrayForChannel(VertexAttribute channel, VertexAttributeFormat format, int dim, IntPtr values, int valuesArrayLength, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000791")]
	private void SetArrayForChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim, T[] values, MeshUpdateFlags flags = MeshUpdateFlags.Default)
	{
	}

	[Token(Token = "0x6000792")]
	private void SetArrayForChannel<T>(VertexAttribute channel, T[] values, MeshUpdateFlags flags = MeshUpdateFlags.Default)
	{
	}

	[Token(Token = "0x6000793")]
	private void SetListForChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim, List<T> values, int start, int length, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000794")]
	private void SetListForChannel<T>(VertexAttribute channel, List<T> values, int start, int length, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000795")]
	private void GetListForChannel<T>(List<T> buffer, int capacity, VertexAttribute channel, int dim)
	{
	}

	[Token(Token = "0x6000796")]
	private void GetListForChannel<T>(List<T> buffer, int capacity, VertexAttribute channel, int dim, VertexAttributeFormat channelType)
	{
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x68E8E10", Offset = "0x68E7E10", VA = "0x68E8E10")]
	public void GetVertices(List<Vector3> vertices)
	{
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x68E8F30", Offset = "0x68E7F30", VA = "0x68E8F30")]
	public void SetVertices(List<Vector3> inVertices)
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x68E8FC0", Offset = "0x68E7FC0", VA = "0x68E8FC0")]
	[ExcludeFromDocs]
	public void SetVertices(List<Vector3> inVertices, int start, int length)
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x68E9020", Offset = "0x68E8020", VA = "0x68E9020")]
	public void SetVertices(List<Vector3> inVertices, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007A9")]
	public void SetVertices<T>(NativeArray<T> inVertices) where T : struct
	{
	}

	[Token(Token = "0x60007AA")]
	[ExcludeFromDocs]
	public void SetVertices<T>(NativeArray<T> inVertices, int start, int length) where T : struct
	{
	}

	[Token(Token = "0x60007AB")]
	public void SetVertices<T>(NativeArray<T> inVertices, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags) where T : struct
	{
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x68E9090", Offset = "0x68E8090", VA = "0x68E9090")]
	public void GetNormals(List<Vector3> normals)
	{
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x68E91C0", Offset = "0x68E81C0", VA = "0x68E91C0")]
	public void SetNormals(List<Vector3> inNormals)
	{
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x68E9250", Offset = "0x68E8250", VA = "0x68E9250")]
	[ExcludeFromDocs]
	public void SetNormals(List<Vector3> inNormals, int start, int length)
	{
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x68E92C0", Offset = "0x68E82C0", VA = "0x68E92C0")]
	public void SetNormals(List<Vector3> inNormals, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007B0")]
	public void SetNormals<T>(NativeArray<T> inNormals) where T : struct
	{
	}

	[Token(Token = "0x60007B1")]
	[ExcludeFromDocs]
	public void SetNormals<T>(NativeArray<T> inNormals, int start, int length) where T : struct
	{
	}

	[Token(Token = "0x60007B2")]
	public void SetNormals<T>(NativeArray<T> inNormals, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags) where T : struct
	{
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x68E9330", Offset = "0x68E8330", VA = "0x68E9330")]
	public void SetTangents(List<Vector4> inTangents)
	{
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x68E93C0", Offset = "0x68E83C0", VA = "0x68E93C0")]
	[ExcludeFromDocs]
	public void SetTangents(List<Vector4> inTangents, int start, int length)
	{
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x68E9430", Offset = "0x68E8430", VA = "0x68E9430")]
	public void SetTangents(List<Vector4> inTangents, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x68E94A0", Offset = "0x68E84A0", VA = "0x68E94A0")]
	public void SetColors(List<Color> inColors)
	{
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x68E9530", Offset = "0x68E8530", VA = "0x68E9530")]
	[ExcludeFromDocs]
	public void SetColors(List<Color> inColors, int start, int length)
	{
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x68E95A0", Offset = "0x68E85A0", VA = "0x68E95A0")]
	public void SetColors(List<Color> inColors, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x68E9610", Offset = "0x68E8610", VA = "0x68E9610")]
	public void SetColors(List<Color32> inColors)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x68E96A0", Offset = "0x68E86A0", VA = "0x68E96A0")]
	[ExcludeFromDocs]
	public void SetColors(List<Color32> inColors, int start, int length)
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x68E9710", Offset = "0x68E8710", VA = "0x68E9710")]
	public void SetColors(List<Color32> inColors, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007BC")]
	private void SetUvsImpl<T>(int uvIndex, int dim, List<T> uvs, int start, int length, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x68E9780", Offset = "0x68E8780", VA = "0x68E9780")]
	public void SetUVs(int channel, List<Vector2> uvs)
	{
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x68E9880", Offset = "0x68E8880", VA = "0x68E9880")]
	public void SetUVs(int channel, List<Vector3> uvs)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x68E9980", Offset = "0x68E8980", VA = "0x68E9980")]
	public void SetUVs(int channel, List<Vector4> uvs)
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x68E9810", Offset = "0x68E8810", VA = "0x68E9810")]
	[ExcludeFromDocs]
	public void SetUVs(int channel, List<Vector2> uvs, int start, int length)
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x68E9A80", Offset = "0x68E8A80", VA = "0x68E9A80")]
	public void SetUVs(int channel, List<Vector2> uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x68E9910", Offset = "0x68E8910", VA = "0x68E9910")]
	[ExcludeFromDocs]
	public void SetUVs(int channel, List<Vector3> uvs, int start, int length)
	{
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x68E9AF0", Offset = "0x68E8AF0", VA = "0x68E9AF0")]
	public void SetUVs(int channel, List<Vector3> uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x68E9A10", Offset = "0x68E8A10", VA = "0x68E9A10")]
	[ExcludeFromDocs]
	public void SetUVs(int channel, List<Vector4> uvs, int start, int length)
	{
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x68E9B60", Offset = "0x68E8B60", VA = "0x68E9B60")]
	public void SetUVs(int channel, List<Vector4> uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x68E9BD0", Offset = "0x68E8BD0", VA = "0x68E9BD0")]
	private void SetUvsImpl(int uvIndex, int dim, Array uvs, int arrayStart, int arraySize, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x68E9CB0", Offset = "0x68E8CB0", VA = "0x68E9CB0")]
	public void SetUVs(int channel, Vector4[] uvs)
	{
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x68E9D00", Offset = "0x68E8D00", VA = "0x68E9D00")]
	[ExcludeFromDocs]
	public void SetUVs(int channel, Vector4[] uvs, int start, int length)
	{
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x68E9D30", Offset = "0x68E8D30", VA = "0x68E9D30")]
	public void SetUVs(int channel, Vector4[] uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007CA")]
	public void SetUVs<T>(int channel, NativeArray<T> uvs) where T : struct
	{
	}

	[Token(Token = "0x60007CB")]
	[ExcludeFromDocs]
	public void SetUVs<T>(int channel, NativeArray<T> uvs, int start, int length) where T : struct
	{
	}

	[Token(Token = "0x60007CC")]
	public void SetUVs<T>(int channel, NativeArray<T> uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags) where T : struct
	{
	}

	[Token(Token = "0x60007CD")]
	private void GetUVsImpl<T>(int uvIndex, List<T> uvs, int dim)
	{
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x68E9D60", Offset = "0x68E8D60", VA = "0x68E9D60")]
	public void GetUVs(int channel, List<Vector2> uvs)
	{
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x68E9DB0", Offset = "0x68E8DB0", VA = "0x68E9DB0")]
	public void GetUVs(int channel, List<Vector4> uvs)
	{
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x68E9E00", Offset = "0x68E8E00", VA = "0x68E9E00")]
	public GraphicsBuffer GetVertexBuffer(int index)
	{
		return null;
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x68E9EA0", Offset = "0x68E8EA0", VA = "0x68E9EA0")]
	public GraphicsBuffer GetIndexBuffer()
	{
		return null;
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x68E9F30", Offset = "0x68E8F30", VA = "0x68E9F30")]
	private void PrintErrorCantAccessIndices()
	{
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x68E9FB0", Offset = "0x68E8FB0", VA = "0x68E9FB0")]
	private bool CheckCanAccessSubmesh(int submesh, bool errorAboutTriangles)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x68EA220", Offset = "0x68E9220", VA = "0x68EA220")]
	private bool CheckCanAccessSubmeshTriangles(int submesh)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x68EA230", Offset = "0x68E9230", VA = "0x68EA230")]
	private bool CheckCanAccessSubmeshIndices(int submesh)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x68EA630", Offset = "0x68E9630", VA = "0x68EA630")]
	public int[] GetTriangles(int submesh)
	{
		return null;
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x68EA640", Offset = "0x68E9640", VA = "0x68EA640")]
	public int[] GetTriangles(int submesh, [DefaultValue("true")] bool applyBaseVertex)
	{
		return null;
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x68EA650", Offset = "0x68E9650", VA = "0x68EA650")]
	public int[] GetTriangles(int submesh, int meshLod, bool applyBaseVertex)
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x68EA7F0", Offset = "0x68E97F0", VA = "0x68EA7F0")]
	public void GetTriangles(List<int> triangles, int submesh)
	{
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x68EA800", Offset = "0x68E9800", VA = "0x68EA800")]
	public void GetTriangles(List<int> triangles, int submesh, int meshLod, bool applyBaseVertex = true)
	{
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x68EAB90", Offset = "0x68E9B90", VA = "0x68EAB90")]
	[ExcludeFromDocs]
	public int[] GetIndices(int submesh)
	{
		return null;
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x68EABA0", Offset = "0x68E9BA0", VA = "0x68EABA0")]
	public int[] GetIndices(int submesh, int meshLod, bool applyBaseVertex = true)
	{
		return null;
	}

	[Token(Token = "0x60007DF")]
	public void SetIndexBufferData<T>(T[] data, int dataStart, int meshBufferStart, int count, MeshUpdateFlags flags = MeshUpdateFlags.Default) where T : struct
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x68EAD40", Offset = "0x68E9D40", VA = "0x68EAD40")]
	public uint GetIndexCount(int submesh)
	{
		return default(uint);
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x68EAEA0", Offset = "0x68E9EA0", VA = "0x68EAEA0")]
	private void CheckIndicesArrayRange(int valuesLength, int start, int length)
	{
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x68EA580", Offset = "0x68E9580", VA = "0x68EA580")]
	private void SetTrianglesImpl(int submesh, IndexFormat indicesFormat, Array triangles, int trianglesArrayLength, int start, int length, bool calculateBounds, int baseVertex, int meshLod)
	{
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x68EB040", Offset = "0x68EA040", VA = "0x68EB040")]
	[ExcludeFromDocs]
	public void SetTriangles(int[] triangles, int submesh)
	{
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x68EB080", Offset = "0x68EA080", VA = "0x68EB080")]
	public void SetTriangles(int[] triangles, int submesh, [DefaultValue("true")] bool calculateBounds, [DefaultValue("0")] int baseVertex)
	{
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x68EB0D0", Offset = "0x68EA0D0", VA = "0x68EB0D0")]
	public void SetTriangles(int[] triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x68EB0F0", Offset = "0x68EA0F0", VA = "0x68EB0F0")]
	public void SetTriangles(int[] triangles, int trianglesStart, int trianglesLength, int submesh, int meshLod, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x68EB1E0", Offset = "0x68EA1E0", VA = "0x68EB1E0")]
	[ExcludeFromDocs]
	public void SetTriangles(List<int> triangles, int submesh)
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x68EB2D0", Offset = "0x68EA2D0", VA = "0x68EB2D0")]
	[ExcludeFromDocs]
	public void SetTriangles(List<int> triangles, int submesh, bool calculateBounds)
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x68EB250", Offset = "0x68EA250", VA = "0x68EB250")]
	public void SetTriangles(List<int> triangles, int submesh, [DefaultValue("true")] bool calculateBounds, [DefaultValue("0")] int baseVertex)
	{
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x68EB340", Offset = "0x68EA340", VA = "0x68EB340")]
	public void SetTriangles(List<int> triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x68EB360", Offset = "0x68EA360", VA = "0x68EB360")]
	public void SetTriangles(List<int> triangles, int trianglesStart, int trianglesLength, int submesh, int meshLod, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x68EB4D0", Offset = "0x68EA4D0", VA = "0x68EB4D0")]
	[ExcludeFromDocs]
	public void SetIndices(int[] indices, MeshTopology topology, int submesh)
	{
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x68EB580", Offset = "0x68EA580", VA = "0x68EB580")]
	[ExcludeFromDocs]
	public void SetIndices(int[] indices, MeshTopology topology, int submesh, bool calculateBounds)
	{
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x68EB520", Offset = "0x68EA520", VA = "0x68EB520")]
	public void SetIndices(int[] indices, MeshTopology topology, int submesh, [DefaultValue("true")] bool calculateBounds, [DefaultValue("0")] int baseVertex)
	{
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x68EB5D0", Offset = "0x68EA5D0", VA = "0x68EB5D0")]
	public void SetIndices(int[] indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x68EB600", Offset = "0x68EA600", VA = "0x68EB600")]
	public void SetIndices(int[] indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, int meshLod, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x68EB700", Offset = "0x68EA700", VA = "0x68EB700")]
	public void SetIndices(ushort[] indices, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x68EB760", Offset = "0x68EA760", VA = "0x68EB760")]
	public void SetIndices(ushort[] indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x68EB790", Offset = "0x68EA790", VA = "0x68EB790")]
	public void SetIndices(ushort[] indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, int meshLod, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x68EB880", Offset = "0x68EA880", VA = "0x68EB880")]
	public void SetIndices(List<int> indices, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x68EB900", Offset = "0x68EA900", VA = "0x68EB900")]
	public void SetIndices(List<int> indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x68EB930", Offset = "0x68EA930", VA = "0x68EB930")]
	public void SetIndices(List<int> indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, int meshLod, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x68EBAC0", Offset = "0x68EAAC0", VA = "0x68EBAC0")]
	[ExcludeFromDocs]
	public void Clear()
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x68EBB40", Offset = "0x68EAB40", VA = "0x68EBB40")]
	[ExcludeFromDocs]
	public void RecalculateBounds()
	{
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x68EBD00", Offset = "0x68EAD00", VA = "0x68EBD00")]
	[ExcludeFromDocs]
	public void RecalculateNormals()
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x68EBB50", Offset = "0x68EAB50", VA = "0x68EBB50")]
	public void RecalculateBounds([DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x68EBD10", Offset = "0x68EAD10", VA = "0x68EBD10")]
	public void RecalculateNormals([DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x68EBEC0", Offset = "0x68EAEC0", VA = "0x68EBEC0")]
	public void MarkDynamic()
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x68EBFC0", Offset = "0x68EAFC0", VA = "0x68EBFC0")]
	public void UploadMeshData(bool markNoLongerReadable)
	{
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x68EC0D0", Offset = "0x68EB0D0", VA = "0x68EC0D0")]
	public MeshTopology GetTopology(int submesh)
	{
		return default(MeshTopology);
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x68EC250", Offset = "0x68EB250", VA = "0x68EC250")]
	[ExcludeFromDocs]
	public void CombineMeshes(CombineInstance[] combine, bool mergeSubMeshes, bool useMatrices)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000802")]
	[Address(RVA = "0x68E5740", Offset = "0x68E4740", VA = "0x68E5740")]
	private static extern IndexFormat get_indexFormat_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000803")]
	[Address(RVA = "0x68E57F0", Offset = "0x68E47F0", VA = "0x68E57F0")]
	private static extern void set_indexFormat_Injected(IntPtr _unity_self, IndexFormat value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000804")]
	[Address(RVA = "0x68E58E0", Offset = "0x68E48E0", VA = "0x68E58E0")]
	private static extern void InternalSetIndexBufferDataFromArray_Injected(IntPtr _unity_self, Array data, int dataStart, int meshBufferStart, int count, int elemSize, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000805")]
	[Address(RVA = "0x68E59D0", Offset = "0x68E49D0", VA = "0x68E59D0")]
	private static extern uint GetIndexCountImpl_Injected(IntPtr _unity_self, int submesh, int meshlod);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000806")]
	[Address(RVA = "0x68E5AA0", Offset = "0x68E4AA0", VA = "0x68E5AA0")]
	private static extern uint GetTrianglesCountImpl_Injected(IntPtr _unity_self, int submesh, int meshlod);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000807")]
	[Address(RVA = "0x68E5C30", Offset = "0x68E4C30", VA = "0x68E5C30")]
	private static extern void GetTrianglesImpl_Injected(IntPtr _unity_self, int submesh, bool applyBaseVertex, int meshlod, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000808")]
	[Address(RVA = "0x68E5DD0", Offset = "0x68E4DD0", VA = "0x68E5DD0")]
	private static extern void GetIndicesImpl_Injected(IntPtr _unity_self, int submesh, bool applyBaseVertex, int meshlod, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000809")]
	[Address(RVA = "0x68E5ED0", Offset = "0x68E4ED0", VA = "0x68E5ED0")]
	private static extern void SetIndicesImpl_Injected(IntPtr _unity_self, int submesh, MeshTopology topology, IndexFormat indicesFormat, Array indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex, int meshlod);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600080A")]
	[Address(RVA = "0x68E60C0", Offset = "0x68E50C0", VA = "0x68E60C0")]
	private static extern void GetTrianglesNonAllocImpl_Injected(IntPtr _unity_self, out BlittableArrayWrapper values, int submesh, bool applyBaseVertex, int meshlod);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600080B")]
	[Address(RVA = "0x68E6190", Offset = "0x68E5190", VA = "0x68E6190")]
	private static extern void PrintErrorCantAccessChannel_Injected(IntPtr _unity_self, VertexAttribute ch);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600080C")]
	[Address(RVA = "0x68E6250", Offset = "0x68E5250", VA = "0x68E6250")]
	private static extern bool HasVertexAttribute_Injected(IntPtr _unity_self, VertexAttribute attr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600080D")]
	[Address(RVA = "0x68E6310", Offset = "0x68E5310", VA = "0x68E6310")]
	private static extern int GetVertexAttributeDimension_Injected(IntPtr _unity_self, VertexAttribute attr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600080E")]
	[Address(RVA = "0x68E63D0", Offset = "0x68E53D0", VA = "0x68E63D0")]
	private static extern VertexAttributeFormat GetVertexAttributeFormat_Injected(IntPtr _unity_self, VertexAttribute attr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600080F")]
	[Address(RVA = "0x68E6490", Offset = "0x68E5490", VA = "0x68E6490")]
	private static extern int GetVertexAttributeStream_Injected(IntPtr _unity_self, VertexAttribute attr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000810")]
	[Address(RVA = "0x68E6550", Offset = "0x68E5550", VA = "0x68E6550")]
	private static extern int GetVertexAttributeOffset_Injected(IntPtr _unity_self, VertexAttribute attr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000811")]
	[Address(RVA = "0x68E6640", Offset = "0x68E5640", VA = "0x68E6640")]
	private static extern void SetArrayForChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000812")]
	[Address(RVA = "0x68E6750", Offset = "0x68E5750", VA = "0x68E6750")]
	private static extern void SetNativeArrayForChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim, IntPtr values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000813")]
	[Address(RVA = "0x68E6840", Offset = "0x68E5840", VA = "0x68E6840")]
	private static extern Array GetAllocArrayFromChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000814")]
	[Address(RVA = "0x68E6930", Offset = "0x68E5930", VA = "0x68E6930")]
	private static extern void GetArrayFromChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim, Array values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000815")]
	[Address(RVA = "0x68E6A00", Offset = "0x68E5A00", VA = "0x68E6A00")]
	private static extern int GetVertexBufferStride_Injected(IntPtr _unity_self, int stream);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000816")]
	[Address(RVA = "0x68E6B10", Offset = "0x68E5B10", VA = "0x68E6B10")]
	private static extern IntPtr GetVertexBufferImpl_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000817")]
	[Address(RVA = "0x68E6C30", Offset = "0x68E5C30", VA = "0x68E6C30")]
	private static extern IntPtr GetIndexBufferImpl_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000818")]
	[Address(RVA = "0x68E6CE0", Offset = "0x68E5CE0", VA = "0x68E6CE0")]
	private static extern GraphicsBuffer.Target get_vertexBufferTarget_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000819")]
	[Address(RVA = "0x68E6D90", Offset = "0x68E5D90", VA = "0x68E6D90")]
	private static extern void set_vertexBufferTarget_Injected(IntPtr _unity_self, GraphicsBuffer.Target value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081A")]
	[Address(RVA = "0x68E6E50", Offset = "0x68E5E50", VA = "0x68E6E50")]
	private static extern GraphicsBuffer.Target get_indexBufferTarget_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081B")]
	[Address(RVA = "0x68E6F00", Offset = "0x68E5F00", VA = "0x68E6F00")]
	private static extern void set_indexBufferTarget_Injected(IntPtr _unity_self, GraphicsBuffer.Target value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081C")]
	[Address(RVA = "0x68E7070", Offset = "0x68E6070", VA = "0x68E7070")]
	private static extern void GetBoneWeightsImpl_Injected(IntPtr _unity_self, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081D")]
	[Address(RVA = "0x68E71B0", Offset = "0x68E61B0", VA = "0x68E71B0")]
	private static extern void SetBoneWeightsImpl_Injected(IntPtr _unity_self, ref ManagedSpanWrapper weights);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081E")]
	[Address(RVA = "0x68E7320", Offset = "0x68E6320", VA = "0x68E7320")]
	private static extern void get_bindposes_Injected(IntPtr _unity_self, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081F")]
	[Address(RVA = "0x68E7460", Offset = "0x68E6460", VA = "0x68E7460")]
	private static extern void set_bindposes_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000820")]
	[Address(RVA = "0x68E7520", Offset = "0x68E6520", VA = "0x68E7520")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000821")]
	[Address(RVA = "0x68E75D0", Offset = "0x68E65D0", VA = "0x68E75D0")]
	private static extern bool get_canAccess_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000822")]
	[Address(RVA = "0x68E7680", Offset = "0x68E6680", VA = "0x68E7680")]
	private static extern int get_vertexCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000823")]
	[Address(RVA = "0x68E7730", Offset = "0x68E6730", VA = "0x68E7730")]
	private static extern int get_subMeshCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000824")]
	[Address(RVA = "0x68E77E0", Offset = "0x68E67E0", VA = "0x68E77E0")]
	private static extern void set_subMeshCount_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000825")]
	[Address(RVA = "0x68E78E0", Offset = "0x68E68E0", VA = "0x68E78E0")]
	private static extern void GetSubMesh_Injected(IntPtr _unity_self, int index, out SubMeshDescriptor ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000826")]
	[Address(RVA = "0x68E79A0", Offset = "0x68E69A0", VA = "0x68E79A0")]
	private static extern int GetLodCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000827")]
	[Address(RVA = "0x68E7A80", Offset = "0x68E6A80", VA = "0x68E7A80")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000828")]
	[Address(RVA = "0x68E7B50", Offset = "0x68E6B50", VA = "0x68E7B50")]
	private static extern void set_bounds_Injected(IntPtr _unity_self, [In] ref Bounds value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000829")]
	[Address(RVA = "0x68E7C10", Offset = "0x68E6C10", VA = "0x68E7C10")]
	private static extern void ClearImpl_Injected(IntPtr _unity_self, bool keepVertexLayout);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600082A")]
	[Address(RVA = "0x68E7CD0", Offset = "0x68E6CD0", VA = "0x68E7CD0")]
	private static extern void RecalculateBoundsImpl_Injected(IntPtr _unity_self, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600082B")]
	[Address(RVA = "0x68E7D90", Offset = "0x68E6D90", VA = "0x68E7D90")]
	private static extern void RecalculateNormalsImpl_Injected(IntPtr _unity_self, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600082C")]
	[Address(RVA = "0x68E7E50", Offset = "0x68E6E50", VA = "0x68E7E50")]
	private static extern void MarkDynamicImpl_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600082D")]
	[Address(RVA = "0x68E7F00", Offset = "0x68E6F00", VA = "0x68E7F00")]
	private static extern void UploadMeshDataImpl_Injected(IntPtr _unity_self, bool markNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600082E")]
	[Address(RVA = "0x68E7FC0", Offset = "0x68E6FC0", VA = "0x68E7FC0")]
	private static extern MeshTopology GetTopologyImpl_Injected(IntPtr _unity_self, int submesh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600082F")]
	[Address(RVA = "0x68E8120", Offset = "0x68E7120", VA = "0x68E8120")]
	private static extern void CombineMeshesImpl_Injected(IntPtr _unity_self, ref ManagedSpanWrapper combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);
}
