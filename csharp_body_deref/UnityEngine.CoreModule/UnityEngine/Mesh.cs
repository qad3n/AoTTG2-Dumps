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

[Token(Token = "0x2000120")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class Mesh : Object
{
	[Token(Token = "0x2000121")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
	[UnityEngine.Bindings.StaticAccessor("MeshDataBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public struct MeshData
	{
		[Token(Token = "0x4000394")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal IntPtr m_Ptr;
	}

	[Token(Token = "0x17000153")]
	public IndexFormat indexFormat
	{
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x2EEDE80", Offset = "0x2EEC480", VA = "0x182EEDE80")]
		get
		{
			return default(IndexFormat);
		}
		[Token(Token = "0x600074F")]
		[Address(RVA = "0x2EEE840", Offset = "0x2EECE40", VA = "0x182EEE840")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	public GraphicsBuffer.Target vertexBufferTarget
	{
		[Token(Token = "0x6000764")]
		[Address(RVA = "0x2EEE2A0", Offset = "0x2EEC8A0", VA = "0x182EEE2A0")]
		get
		{
			return default(GraphicsBuffer.Target);
		}
		[Token(Token = "0x6000765")]
		[Address(RVA = "0x2EEED90", Offset = "0x2EED390", VA = "0x182EEED90")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public GraphicsBuffer.Target indexBufferTarget
	{
		[Token(Token = "0x6000766")]
		[Address(RVA = "0x2EEDDC0", Offset = "0x2EEC3C0", VA = "0x182EEDDC0")]
		get
		{
			return default(GraphicsBuffer.Target);
		}
		[Token(Token = "0x6000767")]
		[Address(RVA = "0x2EEE770", Offset = "0x2EECD70", VA = "0x182EEE770")]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	[UnityEngine.Bindings.NativeName("BindPosesFromScript")]
	public Matrix4x4[] bindposes
	{
		[Token(Token = "0x600076A")]
		[Address(RVA = "0x2EEDA80", Offset = "0x2EEC080", VA = "0x182EEDA80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600076B")]
		[Address(RVA = "0x2EEE470", Offset = "0x2EECA70", VA = "0x182EEE470")]
		set
		{
		}
	}

	[Token(Token = "0x17000157")]
	public bool isReadable
	{
		[Token(Token = "0x600076C")]
		[Address(RVA = "0x2EEDF40", Offset = "0x2EEC540", VA = "0x182EEDF40")]
		[UnityEngine.Bindings.NativeMethod("GetIsReadable")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000158")]
	internal bool canAccess
	{
		[Token(Token = "0x600076D")]
		[Address(RVA = "0x2EEDCB0", Offset = "0x2EEC2B0", VA = "0x182EEDCB0")]
		[UnityEngine.Bindings.NativeMethod("CanAccessFromScript")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000159")]
	public int vertexCount
	{
		[Token(Token = "0x600076E")]
		[Address(RVA = "0x2EEE360", Offset = "0x2EEC960", VA = "0x182EEE360")]
		[UnityEngine.Bindings.NativeMethod("GetVertexCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015A")]
	public int subMeshCount
	{
		[Token(Token = "0x600076F")]
		[Address(RVA = "0x2EEE040", Offset = "0x2EEC640", VA = "0x182EEE040")]
		[UnityEngine.Bindings.NativeMethod(Name = "GetSubMeshCount")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000770")]
		[Address(RVA = "0x2EEE970", Offset = "0x2EECF70", VA = "0x182EEE970")]
		[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::SetSubMeshCount", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x1700015B")]
	public Bounds bounds
	{
		[Token(Token = "0x6000773")]
		[Address(RVA = "0x2EEDBD0", Offset = "0x2EEC1D0", VA = "0x182EEDBD0")]
		get
		{
			return default(Bounds);
		}
		[Token(Token = "0x6000774")]
		[Address(RVA = "0x2EEE5D0", Offset = "0x2EECBD0", VA = "0x182EEE5D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700015C")]
	public Vector3[] vertices
	{
		[Token(Token = "0x6000788")]
		[Address(RVA = "0x2EEE3E0", Offset = "0x2EEC9E0", VA = "0x182EEE3E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000789")]
		[Address(RVA = "0x2EEEE20", Offset = "0x2EED420", VA = "0x182EEEE20")]
		set
		{
		}
	}

	[Token(Token = "0x1700015D")]
	public Vector3[] normals
	{
		[Token(Token = "0x600078A")]
		[Address(RVA = "0x2EEDFC0", Offset = "0x2EEC5C0", VA = "0x182EEDFC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600078B")]
		[Address(RVA = "0x2EEE8D0", Offset = "0x2EECED0", VA = "0x182EEE8D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700015E")]
	public Vector4[] tangents
	{
		[Token(Token = "0x600078C")]
		[Address(RVA = "0x2EEE0C0", Offset = "0x2EEC6C0", VA = "0x182EEE0C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600078D")]
		[Address(RVA = "0x2EEEA00", Offset = "0x2EED000", VA = "0x182EEEA00")]
		set
		{
		}
	}

	[Token(Token = "0x1700015F")]
	public Vector2[] uv
	{
		[Token(Token = "0x600078E")]
		[Address(RVA = "0x2EEE220", Offset = "0x2EEC820", VA = "0x182EEE220")]
		get
		{
			return null;
		}
		[Token(Token = "0x600078F")]
		[Address(RVA = "0x2EEECF0", Offset = "0x2EED2F0", VA = "0x182EEECF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000160")]
	public Vector2[] uv2
	{
		[Token(Token = "0x6000790")]
		[Address(RVA = "0x2EEE1E0", Offset = "0x2EEC7E0", VA = "0x182EEE1E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000791")]
		[Address(RVA = "0x2EEEBD0", Offset = "0x2EED1D0", VA = "0x182EEEBD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	public Vector2[] uv3
	{
		[Token(Token = "0x6000792")]
		[Address(RVA = "0x2EEEC30", Offset = "0x2EED230", VA = "0x182EEEC30")]
		set
		{
		}
	}

	[Token(Token = "0x17000162")]
	public Vector2[] uv4
	{
		[Token(Token = "0x6000793")]
		[Address(RVA = "0x2EEEC90", Offset = "0x2EED290", VA = "0x182EEEC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000163")]
	public Color[] colors
	{
		[Token(Token = "0x6000794")]
		[Address(RVA = "0x2EEE6D0", Offset = "0x2EECCD0", VA = "0x182EEE6D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000164")]
	public Color32[] colors32
	{
		[Token(Token = "0x6000795")]
		[Address(RVA = "0x2EEDD30", Offset = "0x2EEC330", VA = "0x182EEDD30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000796")]
		[Address(RVA = "0x2EEE660", Offset = "0x2EECC60", VA = "0x182EEE660")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public int lodCount
	{
		[Token(Token = "0x6000797")]
		[Address(RVA = "0x2EE81E0", Offset = "0x2EE67E0", VA = "0x182EE81E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000166")]
	public int[] triangles
	{
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x2EEE100", Offset = "0x2EEC700", VA = "0x182EEE100")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x2EEEA60", Offset = "0x2EED060", VA = "0x182EEEA60")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	public BoneWeight[] boneWeights
	{
		[Token(Token = "0x60007E9")]
		[Address(RVA = "0x2EEDB70", Offset = "0x2EEC170", VA = "0x182EEDB70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007EA")]
		[Address(RVA = "0x2EEA830", Offset = "0x2EE8E30", VA = "0x182EEA830")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600074C")]
	[Address(RVA = "0x2EE9CC0", Offset = "0x2EE82C0", VA = "0x182EE9CC0")]
	[UnityEngine.Bindings.FreeFunction("MeshScripting::CreateMesh")]
	private static extern void Internal_Create([UnityEngine.Writable] Mesh mono);

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x2EED9C0", Offset = "0x2EEBFC0", VA = "0x182EED9C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Mesh()
	{
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x2EE9C20", Offset = "0x2EE8220", VA = "0x182EE9C20")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::InternalSetIndexBufferDataFromArray", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetIndexBufferDataFromArray(Array data, int dataStart, int meshBufferStart, int count, int elemSize, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x2EE7AF0", Offset = "0x2EE60F0", VA = "0x182EE7AF0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetIndexCount", HasExplicitThis = true)]
	private uint GetIndexCountImpl(int submesh, int meshlod)
	{
		return default(uint);
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x2EE85D0", Offset = "0x2EE6BD0", VA = "0x182EE85D0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetTrianglesCount", HasExplicitThis = true)]
	private uint GetTrianglesCountImpl(int submesh, int meshlod)
	{
		return default(uint);
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x2EE86C0", Offset = "0x2EE6CC0", VA = "0x182EE86C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetTriangles", HasExplicitThis = true)]
	private int[] GetTrianglesImpl(int submesh, bool applyBaseVertex, int meshlod)
	{
		return null;
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x2EE7D20", Offset = "0x2EE6320", VA = "0x182EE7D20")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetIndices", HasExplicitThis = true)]
	private int[] GetIndicesImpl(int submesh, bool applyBaseVertex, int meshlod)
	{
		return null;
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x2EEACD0", Offset = "0x2EE92D0", VA = "0x182EEACD0")]
	[UnityEngine.Bindings.FreeFunction(Name = "SetMeshIndicesFromScript", HasExplicitThis = true, ThrowsException = true)]
	private void SetIndicesImpl(int submesh, MeshTopology topology, IndexFormat indicesFormat, Array indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex, int meshlod)
	{
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x2EE8870", Offset = "0x2EE6E70", VA = "0x182EE8870")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::ExtractTrianglesToArray", HasExplicitThis = true)]
	private void GetTrianglesNonAllocImpl([Out] int[] values, int submesh, bool applyBaseVertex, int meshlod)
	{
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x2EE9EE0", Offset = "0x2EE84E0", VA = "0x182EE9EE0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::PrintErrorCantAccessChannel", HasExplicitThis = true)]
	private void PrintErrorCantAccessChannel(VertexAttribute ch)
	{
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x2EE9B40", Offset = "0x2EE8140", VA = "0x182EE9B40")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::HasChannel", HasExplicitThis = true)]
	public bool HasVertexAttribute(VertexAttribute attr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x2EE9380", Offset = "0x2EE7980", VA = "0x182EE9380")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetChannelDimension", HasExplicitThis = true)]
	public int GetVertexAttributeDimension(VertexAttribute attr)
	{
		return default(int);
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x2EE9450", Offset = "0x2EE7A50", VA = "0x182EE9450")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetChannelFormat", HasExplicitThis = true)]
	public VertexAttributeFormat GetVertexAttributeFormat(VertexAttribute attr)
	{
		return default(VertexAttributeFormat);
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x2EE95F0", Offset = "0x2EE7BF0", VA = "0x182EE95F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetChannelStream", HasExplicitThis = true)]
	public int GetVertexAttributeStream(VertexAttribute attr)
	{
		return default(int);
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x2EE9520", Offset = "0x2EE7B20", VA = "0x182EE9520")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetChannelOffset", HasExplicitThis = true)]
	public int GetVertexAttributeOffset(VertexAttribute attr)
	{
		return default(int);
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x2EEA740", Offset = "0x2EE8D40", VA = "0x182EEA740")]
	[UnityEngine.Bindings.FreeFunction(Name = "SetMeshComponentFromArrayFromScript", HasExplicitThis = true)]
	private void SetArrayForChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x2EEBA00", Offset = "0x2EEA000", VA = "0x182EEBA00")]
	[UnityEngine.Bindings.FreeFunction(Name = "SetMeshComponentFromNativeArrayFromScript", HasExplicitThis = true)]
	private void SetNativeArrayForChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, IntPtr values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x2EE7570", Offset = "0x2EE5B70", VA = "0x182EE7570")]
	[UnityEngine.Bindings.FreeFunction(Name = "AllocExtractMeshComponentFromScript", HasExplicitThis = true)]
	private Array GetAllocArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim)
	{
		return null;
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x2EE7660", Offset = "0x2EE5C60", VA = "0x182EE7660")]
	[UnityEngine.Bindings.FreeFunction(Name = "ExtractMeshComponentFromScript", HasExplicitThis = true)]
	private void GetArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values)
	{
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x2EE97E0", Offset = "0x2EE7DE0", VA = "0x182EE97E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetVertexBufferStride", HasExplicitThis = true)]
	public int GetVertexBufferStride(int stream)
	{
		return default(int);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x2EE96C0", Offset = "0x2EE7CC0", VA = "0x182EE96C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetVertexBufferPtr", HasExplicitThis = true, ThrowsException = true)]
	private GraphicsBuffer GetVertexBufferImpl(int index)
	{
		return null;
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x2EE7880", Offset = "0x2EE5E80", VA = "0x182EE7880")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetIndexBufferPtr", HasExplicitThis = true, ThrowsException = true)]
	private GraphicsBuffer GetIndexBufferImpl()
	{
		return null;
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x2EE7750", Offset = "0x2EE5D50", VA = "0x182EE7750")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetBoneWeights", HasExplicitThis = true)]
	private BoneWeight[] GetBoneWeightsImpl()
	{
		return null;
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x2EEA830", Offset = "0x2EE8E30", VA = "0x182EEA830")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::SetBoneWeights", HasExplicitThis = true)]
	private void SetBoneWeightsImpl(BoneWeight[] weights)
	{
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x2EE82B0", Offset = "0x2EE68B0", VA = "0x182EE82B0")]
	[UnityEngine.Bindings.FreeFunction("MeshScripting::GetSubMesh", HasExplicitThis = true, ThrowsException = true)]
	public SubMeshDescriptor GetSubMesh(int index)
	{
		return default(SubMeshDescriptor);
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x2EE81E0", Offset = "0x2EE67E0", VA = "0x182EE81E0")]
	[UnityEngine.Bindings.FreeFunction("MeshScripting::GetLodCount", HasExplicitThis = true)]
	private int GetLodCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x2EE70B0", Offset = "0x2EE56B0", VA = "0x182EE70B0")]
	[UnityEngine.Bindings.NativeMethod("Clear")]
	private void ClearImpl(bool keepVertexLayout)
	{
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x2EEA030", Offset = "0x2EE8630", VA = "0x182EEA030")]
	[UnityEngine.Bindings.NativeMethod("RecalculateBounds")]
	private void RecalculateBoundsImpl(MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x2EEA3B0", Offset = "0x2EE89B0", VA = "0x182EEA3B0")]
	[UnityEngine.Bindings.NativeMethod("RecalculateNormals")]
	private void RecalculateNormalsImpl(MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x2EE9D40", Offset = "0x2EE8340", VA = "0x182EE9D40")]
	[UnityEngine.Bindings.NativeMethod("MarkDynamic")]
	private void MarkDynamicImpl()
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x2EED840", Offset = "0x2EEBE40", VA = "0x182EED840")]
	[UnityEngine.Bindings.NativeMethod("UploadMeshData")]
	private void UploadMeshDataImpl(bool markNoLongerReadable)
	{
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x2EE83A0", Offset = "0x2EE69A0", VA = "0x182EE83A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetPrimitiveType", HasExplicitThis = true)]
	private MeshTopology GetTopologyImpl(int submesh)
	{
		return default(MeshTopology);
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x2EE7220", Offset = "0x2EE5820", VA = "0x182EE7220")]
	[UnityEngine.Bindings.NativeMethod(Name = "MeshScripting::CombineMeshes", IsFreeFunction = true, ThrowsException = true, HasExplicitThis = true)]
	private void CombineMeshesImpl(CombineInstance[] combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData)
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x2EE91E0", Offset = "0x2EE77E0", VA = "0x182EE91E0")]
	internal static VertexAttribute GetUVChannel(int uvIndex)
	{
		return default(VertexAttribute);
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x2EE7470", Offset = "0x2EE5A70", VA = "0x182EE7470")]
	internal static int DefaultDimensionForChannel(VertexAttribute channel)
	{
		return default(int);
	}

	[Token(Token = "0x600077E")]
	private T[] GetAllocArrayFromChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim)
	{
		return null;
	}

	[Token(Token = "0x600077F")]
	private T[] GetAllocArrayFromChannel<T>(VertexAttribute channel)
	{
		return null;
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x2EEBC20", Offset = "0x2EEA220", VA = "0x182EEBC20")]
	private void SetSizedArrayForChannel(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int valuesArrayLength, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x2EEC020", Offset = "0x2EEA620", VA = "0x182EEC020")]
	private void SetSizedNativeArrayForChannel(VertexAttribute channel, VertexAttributeFormat format, int dim, IntPtr values, int valuesArrayLength, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000782")]
	private void SetArrayForChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim, T[] values, MeshUpdateFlags flags = MeshUpdateFlags.Default)
	{
	}

	[Token(Token = "0x6000783")]
	private void SetArrayForChannel<T>(VertexAttribute channel, T[] values, MeshUpdateFlags flags = MeshUpdateFlags.Default)
	{
	}

	[Token(Token = "0x6000784")]
	private void SetListForChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim, List<T> values, int start, int length, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000785")]
	private void SetListForChannel<T>(VertexAttribute channel, List<T> values, int start, int length, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000786")]
	private void GetListForChannel<T>(List<T> buffer, int capacity, VertexAttribute channel, int dim)
	{
	}

	[Token(Token = "0x6000787")]
	private void GetListForChannel<T>(List<T> buffer, int capacity, VertexAttribute channel, int dim, VertexAttributeFormat channelType)
	{
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x2EE99D0", Offset = "0x2EE7FD0", VA = "0x182EE99D0")]
	public void GetVertices(List<Vector3> vertices)
	{
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x2EED750", Offset = "0x2EEBD50", VA = "0x182EED750")]
	public void SetVertices(List<Vector3> inVertices)
	{
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x2EED6E0", Offset = "0x2EEBCE0", VA = "0x182EED6E0")]
	[ExcludeFromDocs]
	public void SetVertices(List<Vector3> inVertices, int start, int length)
	{
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x2EED670", Offset = "0x2EEBC70", VA = "0x182EED670")]
	public void SetVertices(List<Vector3> inVertices, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600079C")]
	public void SetVertices<T>(NativeArray<T> inVertices) where T : struct
	{
	}

	[Token(Token = "0x600079D")]
	[ExcludeFromDocs]
	public void SetVertices<T>(NativeArray<T> inVertices, int start, int length) where T : struct
	{
	}

	[Token(Token = "0x600079E")]
	public void SetVertices<T>(NativeArray<T> inVertices, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags) where T : struct
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x2EEBB80", Offset = "0x2EEA180", VA = "0x182EEBB80")]
	public void SetNormals(List<Vector3> inNormals)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x2EEBB10", Offset = "0x2EEA110", VA = "0x182EEBB10")]
	[ExcludeFromDocs]
	public void SetNormals(List<Vector3> inNormals, int start, int length)
	{
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x2EEBAA0", Offset = "0x2EEA0A0", VA = "0x182EEBAA0")]
	public void SetNormals(List<Vector3> inNormals, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007A2")]
	public void SetNormals<T>(NativeArray<T> inNormals) where T : struct
	{
	}

	[Token(Token = "0x60007A3")]
	[ExcludeFromDocs]
	public void SetNormals<T>(NativeArray<T> inNormals, int start, int length) where T : struct
	{
	}

	[Token(Token = "0x60007A4")]
	public void SetNormals<T>(NativeArray<T> inNormals, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags) where T : struct
	{
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x2EEC410", Offset = "0x2EEAA10", VA = "0x182EEC410")]
	public void SetTangents(List<Vector4> inTangents)
	{
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x2EEC520", Offset = "0x2EEAB20", VA = "0x182EEC520")]
	[ExcludeFromDocs]
	public void SetTangents(List<Vector4> inTangents, int start, int length)
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x2EEC4B0", Offset = "0x2EEAAB0", VA = "0x182EEC4B0")]
	public void SetTangents(List<Vector4> inTangents, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x2EEABD0", Offset = "0x2EE91D0", VA = "0x182EEABD0")]
	public void SetColors(List<Color> inColors)
	{
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x2EEA9C0", Offset = "0x2EE8FC0", VA = "0x182EEA9C0")]
	[ExcludeFromDocs]
	public void SetColors(List<Color> inColors, int start, int length)
	{
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x2EEAAE0", Offset = "0x2EE90E0", VA = "0x182EEAAE0")]
	public void SetColors(List<Color> inColors, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x2EEAA30", Offset = "0x2EE9030", VA = "0x182EEAA30")]
	public void SetColors(List<Color32> inColors)
	{
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x2EEAB50", Offset = "0x2EE9150", VA = "0x182EEAB50")]
	[ExcludeFromDocs]
	public void SetColors(List<Color32> inColors, int start, int length)
	{
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x2EEA940", Offset = "0x2EE8F40", VA = "0x182EEA940")]
	public void SetColors(List<Color32> inColors, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007AE")]
	private void SetUvsImpl<T>(int uvIndex, int dim, List<T> uvs, int start, int length, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x2EED080", Offset = "0x2EEB680", VA = "0x182EED080")]
	public void SetUVs(int channel, List<Vector2> uvs)
	{
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x2EED4E0", Offset = "0x2EEBAE0", VA = "0x182EED4E0")]
	public void SetUVs(int channel, List<Vector3> uvs)
	{
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x2EED1F0", Offset = "0x2EEB7F0", VA = "0x182EED1F0")]
	public void SetUVs(int channel, List<Vector4> uvs)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x2EED180", Offset = "0x2EEB780", VA = "0x182EED180")]
	[ExcludeFromDocs]
	public void SetUVs(int channel, List<Vector2> uvs, int start, int length)
	{
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x2EED370", Offset = "0x2EEB970", VA = "0x182EED370")]
	public void SetUVs(int channel, List<Vector2> uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x2EECF20", Offset = "0x2EEB520", VA = "0x182EECF20")]
	[ExcludeFromDocs]
	public void SetUVs(int channel, List<Vector3> uvs, int start, int length)
	{
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x2EECEA0", Offset = "0x2EEB4A0", VA = "0x182EECEA0")]
	public void SetUVs(int channel, List<Vector3> uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x2EED110", Offset = "0x2EEB710", VA = "0x182EED110")]
	[ExcludeFromDocs]
	public void SetUVs(int channel, List<Vector4> uvs, int start, int length)
	{
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x2EECE20", Offset = "0x2EEB420", VA = "0x182EECE20")]
	public void SetUVs(int channel, List<Vector4> uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x2EED570", Offset = "0x2EEBB70", VA = "0x182EED570")]
	private void SetUvsImpl(int uvIndex, int dim, Array uvs, int arrayStart, int arraySize, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x2EED3F0", Offset = "0x2EEB9F0", VA = "0x182EED3F0")]
	public void SetUVs(int channel, Vector4[] uvs)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x2EED280", Offset = "0x2EEB880", VA = "0x182EED280")]
	[ExcludeFromDocs]
	public void SetUVs(int channel, Vector4[] uvs, int start, int length)
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x2EECF90", Offset = "0x2EEB590", VA = "0x182EECF90")]
	public void SetUVs(int channel, Vector4[] uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007BC")]
	public void SetUVs<T>(int channel, NativeArray<T> uvs) where T : struct
	{
	}

	[Token(Token = "0x60007BD")]
	[ExcludeFromDocs]
	public void SetUVs<T>(int channel, NativeArray<T> uvs, int start, int length) where T : struct
	{
	}

	[Token(Token = "0x60007BE")]
	public void SetUVs<T>(int channel, NativeArray<T> uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags) where T : struct
	{
	}

	[Token(Token = "0x60007BF")]
	private void GetUVsImpl<T>(int uvIndex, List<T> uvs, int dim)
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x2EE92D0", Offset = "0x2EE78D0", VA = "0x182EE92D0")]
	public void GetUVs(int channel, List<Vector2> uvs)
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x2EE9260", Offset = "0x2EE7860", VA = "0x182EE9260")]
	public void GetUVs(int channel, List<Vector4> uvs)
	{
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x2EE9870", Offset = "0x2EE7E70", VA = "0x182EE9870")]
	public GraphicsBuffer GetVertexBuffer(int index)
	{
		return null;
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x2EE7950", Offset = "0x2EE5F50", VA = "0x182EE7950")]
	public GraphicsBuffer GetIndexBuffer()
	{
		return null;
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x2EE9F70", Offset = "0x2EE8570", VA = "0x182EE9F70")]
	private void PrintErrorCantAccessIndices()
	{
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x2EE6C70", Offset = "0x2EE5270", VA = "0x182EE6C70")]
	private bool CheckCanAccessSubmesh(int submesh, bool errorAboutTriangles)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x2EE6C60", Offset = "0x2EE5260", VA = "0x182EE6C60")]
	private bool CheckCanAccessSubmeshTriangles(int submesh)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x2EE6C50", Offset = "0x2EE5250", VA = "0x182EE6C50")]
	private bool CheckCanAccessSubmeshIndices(int submesh)
	{
		return default(bool);
	}

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x2EE89E0", Offset = "0x2EE6FE0", VA = "0x182EE89E0")]
	public int[] GetTriangles(int submesh)
	{
		return null;
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x2EE9050", Offset = "0x2EE7650", VA = "0x182EE9050")]
	public int[] GetTriangles(int submesh, [DefaultValue("true")] bool applyBaseVertex)
	{
		return null;
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x2EE8B70", Offset = "0x2EE7170", VA = "0x182EE8B70")]
	public int[] GetTriangles(int submesh, int meshLod, bool applyBaseVertex)
	{
		return null;
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x2EE9030", Offset = "0x2EE7630", VA = "0x182EE9030")]
	public void GetTriangles(List<int> triangles, int submesh)
	{
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x2EE8D00", Offset = "0x2EE7300", VA = "0x182EE8D00")]
	public void GetTriangles(List<int> triangles, int submesh, int meshLod, bool applyBaseVertex = true)
	{
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x2EE7E80", Offset = "0x2EE6480", VA = "0x182EE7E80")]
	[ExcludeFromDocs]
	public int[] GetIndices(int submesh)
	{
		return null;
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x2EE8010", Offset = "0x2EE6610", VA = "0x182EE8010")]
	public int[] GetIndices(int submesh, int meshLod, bool applyBaseVertex = true)
	{
		return null;
	}

	[Token(Token = "0x60007D1")]
	public void SetIndexBufferData<T>(T[] data, int dataStart, int meshBufferStart, int count, MeshUpdateFlags flags = MeshUpdateFlags.Default) where T : struct
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x2EE7B90", Offset = "0x2EE6190", VA = "0x182EE7B90")]
	public uint GetIndexCount(int submesh)
	{
		return default(uint);
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x2EE6E10", Offset = "0x2EE5410", VA = "0x182EE6E10")]
	private void CheckIndicesArrayRange(int valuesLength, int start, int length)
	{
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x2EEC590", Offset = "0x2EEAB90", VA = "0x182EEC590")]
	private void SetTrianglesImpl(int submesh, IndexFormat indicesFormat, Array triangles, int trianglesArrayLength, int start, int length, bool calculateBounds, int baseVertex, int meshLod)
	{
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x2EECC80", Offset = "0x2EEB280", VA = "0x182EECC80")]
	[ExcludeFromDocs]
	public void SetTriangles(int[] triangles, int submesh)
	{
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x2EEC980", Offset = "0x2EEAF80", VA = "0x182EEC980")]
	public void SetTriangles(int[] triangles, int submesh, [DefaultValue("true")] bool calculateBounds, [DefaultValue("0")] int baseVertex)
	{
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x2EECD90", Offset = "0x2EEB390", VA = "0x182EECD90")]
	public void SetTriangles(int[] triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x2EEC7B0", Offset = "0x2EEADB0", VA = "0x182EEC7B0")]
	public void SetTriangles(int[] triangles, int trianglesStart, int trianglesLength, int submesh, int meshLod, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x2EECC60", Offset = "0x2EEB260", VA = "0x182EECC60")]
	[ExcludeFromDocs]
	public void SetTriangles(List<int> triangles, int submesh)
	{
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x2EEC840", Offset = "0x2EEAE40", VA = "0x182EEC840")]
	[ExcludeFromDocs]
	public void SetTriangles(List<int> triangles, int submesh, bool calculateBounds)
	{
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x2EECAA0", Offset = "0x2EEB0A0", VA = "0x182EECAA0")]
	public void SetTriangles(List<int> triangles, int submesh, [DefaultValue("true")] bool calculateBounds, [DefaultValue("0")] int baseVertex)
	{
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x2EEC690", Offset = "0x2EEAC90", VA = "0x182EEC690")]
	public void SetTriangles(List<int> triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x2EEC860", Offset = "0x2EEAE60", VA = "0x182EEC860")]
	public void SetTriangles(List<int> triangles, int trianglesStart, int trianglesLength, int submesh, int meshLod, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x2EEB0F0", Offset = "0x2EE96F0", VA = "0x182EEB0F0")]
	[ExcludeFromDocs]
	public void SetIndices(int[] indices, MeshTopology topology, int submesh)
	{
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x2EEB980", Offset = "0x2EE9F80", VA = "0x182EEB980")]
	[ExcludeFromDocs]
	public void SetIndices(int[] indices, MeshTopology topology, int submesh, bool calculateBounds)
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x2EEB610", Offset = "0x2EE9C10", VA = "0x182EEB610")]
	public void SetIndices(int[] indices, MeshTopology topology, int submesh, [DefaultValue("true")] bool calculateBounds, [DefaultValue("0")] int baseVertex)
	{
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x2EEAFD0", Offset = "0x2EE95D0", VA = "0x182EEAFD0")]
	public void SetIndices(int[] indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x2EEAEB0", Offset = "0x2EE94B0", VA = "0x182EEAEB0")]
	public void SetIndices(int[] indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, int meshLod, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x2EEAD80", Offset = "0x2EE9380", VA = "0x182EEAD80")]
	public void SetIndices(ushort[] indices, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x2EEB740", Offset = "0x2EE9D40", VA = "0x182EEB740")]
	public void SetIndices(ushort[] indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x2EEB860", Offset = "0x2EE9E60", VA = "0x182EEB860")]
	public void SetIndices(ushort[] indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, int meshLod, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x2EEB110", Offset = "0x2EE9710", VA = "0x182EEB110")]
	public void SetIndices(List<int> indices, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x2EEB2D0", Offset = "0x2EE98D0", VA = "0x182EEB2D0")]
	public void SetIndices(List<int> indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x2EEB470", Offset = "0x2EE9A70", VA = "0x182EEB470")]
	public void SetIndices(List<int> indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, int meshLod, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x2EE7140", Offset = "0x2EE5740", VA = "0x182EE7140")]
	[ExcludeFromDocs]
	public void Clear()
	{
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x2EEA0C0", Offset = "0x2EE86C0", VA = "0x182EEA0C0")]
	[ExcludeFromDocs]
	public void RecalculateBounds()
	{
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x2EEA440", Offset = "0x2EE8A40", VA = "0x182EEA440")]
	[ExcludeFromDocs]
	public void RecalculateNormals()
	{
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x2EEA210", Offset = "0x2EE8810", VA = "0x182EEA210")]
	public void RecalculateBounds([DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x2EEA590", Offset = "0x2EE8B90", VA = "0x182EEA590")]
	public void RecalculateNormals([DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x2EE9DC0", Offset = "0x2EE83C0", VA = "0x182EE9DC0")]
	public void MarkDynamic()
	{
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x2EED8D0", Offset = "0x2EEBED0", VA = "0x182EED8D0")]
	public void UploadMeshData(bool markNoLongerReadable)
	{
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x2EE8430", Offset = "0x2EE6A30", VA = "0x182EE8430")]
	public MeshTopology GetTopology(int submesh)
	{
		return default(MeshTopology);
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x2EE7350", Offset = "0x2EE5950", VA = "0x182EE7350")]
	[ExcludeFromDocs]
	public void CombineMeshes(CombineInstance[] combine, bool mergeSubMeshes, bool useMatrices)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x2EEDE40", Offset = "0x2EEC440", VA = "0x182EEDE40")]
	private static extern IndexFormat get_indexFormat_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x2EEE800", Offset = "0x2EECE00", VA = "0x182EEE800")]
	private static extern void set_indexFormat_Injected(IntPtr _unity_self, IndexFormat value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x2EE9BD0", Offset = "0x2EE81D0", VA = "0x182EE9BD0")]
	private static extern void InternalSetIndexBufferDataFromArray_Injected(IntPtr _unity_self, Array data, int dataStart, int meshBufferStart, int count, int elemSize, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x2EE7AA0", Offset = "0x2EE60A0", VA = "0x182EE7AA0")]
	private static extern uint GetIndexCountImpl_Injected(IntPtr _unity_self, int submesh, int meshlod);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x2EE8580", Offset = "0x2EE6B80", VA = "0x182EE8580")]
	private static extern uint GetTrianglesCountImpl_Injected(IntPtr _unity_self, int submesh, int meshlod);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x2EE8670", Offset = "0x2EE6C70", VA = "0x182EE8670")]
	private static extern void GetTrianglesImpl_Injected(IntPtr _unity_self, int submesh, bool applyBaseVertex, int meshlod, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x2EE7CD0", Offset = "0x2EE62D0", VA = "0x182EE7CD0")]
	private static extern void GetIndicesImpl_Injected(IntPtr _unity_self, int submesh, bool applyBaseVertex, int meshlod, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x2EEAC70", Offset = "0x2EE9270", VA = "0x182EEAC70")]
	private static extern void SetIndicesImpl_Injected(IntPtr _unity_self, int submesh, MeshTopology topology, IndexFormat indicesFormat, Array indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex, int meshlod);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x2EE8820", Offset = "0x2EE6E20", VA = "0x182EE8820")]
	private static extern void GetTrianglesNonAllocImpl_Injected(IntPtr _unity_self, out BlittableArrayWrapper values, int submesh, bool applyBaseVertex, int meshlod);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x2EE9EA0", Offset = "0x2EE84A0", VA = "0x182EE9EA0")]
	private static extern void PrintErrorCantAccessChannel_Injected(IntPtr _unity_self, VertexAttribute ch);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x2EE9B00", Offset = "0x2EE8100", VA = "0x182EE9B00")]
	private static extern bool HasVertexAttribute_Injected(IntPtr _unity_self, VertexAttribute attr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x2EE9340", Offset = "0x2EE7940", VA = "0x182EE9340")]
	private static extern int GetVertexAttributeDimension_Injected(IntPtr _unity_self, VertexAttribute attr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000800")]
	[Address(RVA = "0x2EE9410", Offset = "0x2EE7A10", VA = "0x182EE9410")]
	private static extern VertexAttributeFormat GetVertexAttributeFormat_Injected(IntPtr _unity_self, VertexAttribute attr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000801")]
	[Address(RVA = "0x2EE95B0", Offset = "0x2EE7BB0", VA = "0x182EE95B0")]
	private static extern int GetVertexAttributeStream_Injected(IntPtr _unity_self, VertexAttribute attr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000802")]
	[Address(RVA = "0x2EE94E0", Offset = "0x2EE7AE0", VA = "0x182EE94E0")]
	private static extern int GetVertexAttributeOffset_Injected(IntPtr _unity_self, VertexAttribute attr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000803")]
	[Address(RVA = "0x2EEA6F0", Offset = "0x2EE8CF0", VA = "0x182EEA6F0")]
	private static extern void SetArrayForChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000804")]
	[Address(RVA = "0x2EEB9B0", Offset = "0x2EE9FB0", VA = "0x182EEB9B0")]
	private static extern void SetNativeArrayForChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim, IntPtr values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000805")]
	[Address(RVA = "0x2EE7520", Offset = "0x2EE5B20", VA = "0x182EE7520")]
	private static extern Array GetAllocArrayFromChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000806")]
	[Address(RVA = "0x2EE7610", Offset = "0x2EE5C10", VA = "0x182EE7610")]
	private static extern void GetArrayFromChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim, Array values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000807")]
	[Address(RVA = "0x2EE97A0", Offset = "0x2EE7DA0", VA = "0x182EE97A0")]
	private static extern int GetVertexBufferStride_Injected(IntPtr _unity_self, int stream);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000808")]
	[Address(RVA = "0x2EE9680", Offset = "0x2EE7C80", VA = "0x182EE9680")]
	private static extern IntPtr GetVertexBufferImpl_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000809")]
	[Address(RVA = "0x2EE7840", Offset = "0x2EE5E40", VA = "0x182EE7840")]
	private static extern IntPtr GetIndexBufferImpl_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600080A")]
	[Address(RVA = "0x2EEE260", Offset = "0x2EEC860", VA = "0x182EEE260")]
	private static extern GraphicsBuffer.Target get_vertexBufferTarget_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600080B")]
	[Address(RVA = "0x2EEED50", Offset = "0x2EED350", VA = "0x182EEED50")]
	private static extern void set_vertexBufferTarget_Injected(IntPtr _unity_self, GraphicsBuffer.Target value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600080C")]
	[Address(RVA = "0x2EEDD80", Offset = "0x2EEC380", VA = "0x182EEDD80")]
	private static extern GraphicsBuffer.Target get_indexBufferTarget_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600080D")]
	[Address(RVA = "0x2EEE730", Offset = "0x2EECD30", VA = "0x182EEE730")]
	private static extern void set_indexBufferTarget_Injected(IntPtr _unity_self, GraphicsBuffer.Target value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600080E")]
	[Address(RVA = "0x2EE7700", Offset = "0x2EE5D00", VA = "0x182EE7700")]
	private static extern void GetBoneWeightsImpl_Injected(IntPtr _unity_self, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600080F")]
	[Address(RVA = "0x2EEA7E0", Offset = "0x2EE8DE0", VA = "0x182EEA7E0")]
	private static extern void SetBoneWeightsImpl_Injected(IntPtr _unity_self, ref ManagedSpanWrapper weights);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000810")]
	[Address(RVA = "0x2EEDA30", Offset = "0x2EEC030", VA = "0x182EEDA30")]
	private static extern void get_bindposes_Injected(IntPtr _unity_self, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000811")]
	[Address(RVA = "0x2EEE420", Offset = "0x2EECA20", VA = "0x182EEE420")]
	private static extern void set_bindposes_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000812")]
	[Address(RVA = "0x2EEDF00", Offset = "0x2EEC500", VA = "0x182EEDF00")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000813")]
	[Address(RVA = "0x2EEDC70", Offset = "0x2EEC270", VA = "0x182EEDC70")]
	private static extern bool get_canAccess_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000814")]
	[Address(RVA = "0x2EEE320", Offset = "0x2EEC920", VA = "0x182EEE320")]
	private static extern int get_vertexCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000815")]
	[Address(RVA = "0x2EEE000", Offset = "0x2EEC600", VA = "0x182EEE000")]
	private static extern int get_subMeshCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000816")]
	[Address(RVA = "0x2EEE930", Offset = "0x2EECF30", VA = "0x182EEE930")]
	private static extern void set_subMeshCount_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000817")]
	[Address(RVA = "0x2EE8260", Offset = "0x2EE6860", VA = "0x182EE8260")]
	private static extern void GetSubMesh_Injected(IntPtr _unity_self, int index, out SubMeshDescriptor ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000818")]
	[Address(RVA = "0x2EE81A0", Offset = "0x2EE67A0", VA = "0x182EE81A0")]
	private static extern int GetLodCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000819")]
	[Address(RVA = "0x2EEDB80", Offset = "0x2EEC180", VA = "0x182EEDB80")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081A")]
	[Address(RVA = "0x2EEE580", Offset = "0x2EECB80", VA = "0x182EEE580")]
	private static extern void set_bounds_Injected(IntPtr _unity_self, [In] ref Bounds value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081B")]
	[Address(RVA = "0x2EE7060", Offset = "0x2EE5660", VA = "0x182EE7060")]
	private static extern void ClearImpl_Injected(IntPtr _unity_self, bool keepVertexLayout);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081C")]
	[Address(RVA = "0x2EE9FF0", Offset = "0x2EE85F0", VA = "0x182EE9FF0")]
	private static extern void RecalculateBoundsImpl_Injected(IntPtr _unity_self, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081D")]
	[Address(RVA = "0x2EEA370", Offset = "0x2EE8970", VA = "0x182EEA370")]
	private static extern void RecalculateNormalsImpl_Injected(IntPtr _unity_self, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081E")]
	[Address(RVA = "0x2EE9D00", Offset = "0x2EE8300", VA = "0x182EE9D00")]
	private static extern void MarkDynamicImpl_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081F")]
	[Address(RVA = "0x2EED7F0", Offset = "0x2EEBDF0", VA = "0x182EED7F0")]
	private static extern void UploadMeshDataImpl_Injected(IntPtr _unity_self, bool markNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000820")]
	[Address(RVA = "0x2EE8360", Offset = "0x2EE6960", VA = "0x182EE8360")]
	private static extern MeshTopology GetTopologyImpl_Injected(IntPtr _unity_self, int submesh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000821")]
	[Address(RVA = "0x2EE71C0", Offset = "0x2EE57C0", VA = "0x182EE71C0")]
	private static extern void CombineMeshesImpl_Injected(IntPtr _unity_self, ref ManagedSpanWrapper combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);
}
