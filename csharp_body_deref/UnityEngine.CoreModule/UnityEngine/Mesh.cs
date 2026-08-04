// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Mesh
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000FD")]
[ExcludeFromPreset]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
public sealed class Mesh : Object
{
	[Token(Token = "0x20000FE")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
	[UnityEngine.Bindings.StaticAccessor("MeshDataBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public struct MeshData
	{
		[Token(Token = "0x4000340")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal IntPtr m_Ptr;
	}

	[Token(Token = "0x1700010D")]
	public IndexFormat indexFormat
	{
		[Token(Token = "0x6000542")]
		[Address(RVA = "0x4DD0C70", Offset = "0x4DD0C70", VA = "0x4DD0C70")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	internal bool canAccess
	{
		[Token(Token = "0x600054C")]
		[Address(RVA = "0x4DD1640", Offset = "0x4DD1640", VA = "0x4DD1640")]
		[UnityEngine.Bindings.NativeMethod("CanAccessFromScript")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010F")]
	public int vertexCount
	{
		[Token(Token = "0x600054D")]
		[Address(RVA = "0x4DD1710", Offset = "0x4DD1710", VA = "0x4DD1710")]
		[UnityEngine.Bindings.NativeMethod("GetVertexCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000110")]
	public int subMeshCount
	{
		[Token(Token = "0x600054E")]
		[Address(RVA = "0x4DC28D0", Offset = "0x4DC28D0", VA = "0x4DC28D0")]
		[UnityEngine.Bindings.NativeMethod(Name = "GetSubMeshCount")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600054F")]
		[Address(RVA = "0x4DD1810", Offset = "0x4DD1810", VA = "0x4DD1810")]
		[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::SetSubMeshCount", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	public Bounds bounds
	{
		[Token(Token = "0x6000550")]
		[Address(RVA = "0x4DD18F0", Offset = "0x4DD18F0", VA = "0x4DD18F0")]
		get
		{
			return default(Bounds);
		}
		[Token(Token = "0x6000551")]
		[Address(RVA = "0x4DD1A00", Offset = "0x4DD1A00", VA = "0x4DD1A00")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public Vector3[] vertices
	{
		[Token(Token = "0x6000562")]
		[Address(RVA = "0x4DD24F0", Offset = "0x4DD24F0", VA = "0x4DD24F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000563")]
		[Address(RVA = "0x4DD2530", Offset = "0x4DD2530", VA = "0x4DD2530")]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public Vector3[] normals
	{
		[Token(Token = "0x6000564")]
		[Address(RVA = "0x4DD2580", Offset = "0x4DD2580", VA = "0x4DD2580")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000565")]
		[Address(RVA = "0x4DD25C0", Offset = "0x4DD25C0", VA = "0x4DD25C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000114")]
	public Vector4[] tangents
	{
		[Token(Token = "0x6000566")]
		[Address(RVA = "0x4DD2610", Offset = "0x4DD2610", VA = "0x4DD2610")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000567")]
		[Address(RVA = "0x4DD2650", Offset = "0x4DD2650", VA = "0x4DD2650")]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	public Vector2[] uv
	{
		[Token(Token = "0x6000568")]
		[Address(RVA = "0x4DD26A0", Offset = "0x4DD26A0", VA = "0x4DD26A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000116")]
	public Vector2[] uv2
	{
		[Token(Token = "0x6000569")]
		[Address(RVA = "0x4DD26F0", Offset = "0x4DD26F0", VA = "0x4DD26F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000117")]
	public Vector2[] uv4
	{
		[Token(Token = "0x600056A")]
		[Address(RVA = "0x4DD2740", Offset = "0x4DD2740", VA = "0x4DD2740")]
		set
		{
		}
	}

	[Token(Token = "0x17000118")]
	public Color[] colors
	{
		[Token(Token = "0x600056B")]
		[Address(RVA = "0x4DD2790", Offset = "0x4DD2790", VA = "0x4DD2790")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	public Color32[] colors32
	{
		[Token(Token = "0x600056C")]
		[Address(RVA = "0x4DD27E0", Offset = "0x4DD27E0", VA = "0x4DD27E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600056D")]
		[Address(RVA = "0x4DD2830", Offset = "0x4DD2830", VA = "0x4DD2830")]
		set
		{
		}
	}

	[Token(Token = "0x1700011A")]
	public int[] triangles
	{
		[Token(Token = "0x600058A")]
		[Address(RVA = "0x4DD3610", Offset = "0x4DD3610", VA = "0x4DD3610")]
		get
		{
			return null;
		}
		[Token(Token = "0x600058B")]
		[Address(RVA = "0x4DD3810", Offset = "0x4DD3810", VA = "0x4DD3810")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000540")]
	[Address(RVA = "0x4DD0BD0", Offset = "0x4DD0BD0", VA = "0x4DD0BD0")]
	[UnityEngine.Bindings.FreeFunction("MeshScripting::CreateMesh")]
	private static extern void Internal_Create([UnityEngine.Writable] Mesh mono);

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x4DD0C00", Offset = "0x4DD0C00", VA = "0x4DD0C00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Mesh()
	{
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x4DD0D50", Offset = "0x4DD0D50", VA = "0x4DD0D50")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetIndexCount", HasExplicitThis = true)]
	private uint GetIndexCountImpl(int submesh)
	{
		return default(uint);
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x4DD0E30", Offset = "0x4DD0E30", VA = "0x4DD0E30")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetTriangles", HasExplicitThis = true)]
	private int[] GetTrianglesImpl(int submesh, bool applyBaseVertex)
	{
		return null;
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x4DD0F20", Offset = "0x4DD0F20", VA = "0x4DD0F20")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetIndices", HasExplicitThis = true)]
	private int[] GetIndicesImpl(int submesh, bool applyBaseVertex)
	{
		return null;
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x4DD1010", Offset = "0x4DD1010", VA = "0x4DD1010")]
	[UnityEngine.Bindings.FreeFunction(Name = "SetMeshIndicesFromScript", HasExplicitThis = true, ThrowsException = true)]
	private void SetIndicesImpl(int submesh, MeshTopology topology, IndexFormat indicesFormat, Array indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x4DD1140", Offset = "0x4DD1140", VA = "0x4DD1140")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::PrintErrorCantAccessChannel", HasExplicitThis = true)]
	private void PrintErrorCantAccessChannel(VertexAttribute ch)
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x4DD1220", Offset = "0x4DD1220", VA = "0x4DD1220")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::HasChannel", HasExplicitThis = true)]
	public bool HasVertexAttribute(VertexAttribute attr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4DD1300", Offset = "0x4DD1300", VA = "0x4DD1300")]
	[UnityEngine.Bindings.FreeFunction(Name = "SetMeshComponentFromArrayFromScript", HasExplicitThis = true)]
	private void SetArrayForChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x4DD1430", Offset = "0x4DD1430", VA = "0x4DD1430")]
	[UnityEngine.Bindings.FreeFunction(Name = "AllocExtractMeshComponentFromScript", HasExplicitThis = true)]
	private Array GetAllocArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim)
	{
		return null;
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x4DD1530", Offset = "0x4DD1530", VA = "0x4DD1530")]
	[UnityEngine.Bindings.FreeFunction(Name = "ExtractMeshComponentFromScript", HasExplicitThis = true)]
	private void GetArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values)
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x4DD1AF0", Offset = "0x4DD1AF0", VA = "0x4DD1AF0")]
	[UnityEngine.Bindings.NativeMethod("Clear")]
	private void ClearImpl(bool keepVertexLayout)
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x4DD1BD0", Offset = "0x4DD1BD0", VA = "0x4DD1BD0")]
	[UnityEngine.Bindings.NativeMethod("RecalculateBounds")]
	private void RecalculateBoundsImpl(MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x4DD1CB0", Offset = "0x4DD1CB0", VA = "0x4DD1CB0")]
	[UnityEngine.Bindings.NativeMethod("MarkDynamic")]
	private void MarkDynamicImpl()
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x4DD1D80", Offset = "0x4DD1D80", VA = "0x4DD1D80")]
	[UnityEngine.Bindings.NativeMethod("UploadMeshData")]
	private void UploadMeshDataImpl(bool markNoLongerReadable)
	{
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x4DD1E60", Offset = "0x4DD1E60", VA = "0x4DD1E60")]
	[UnityEngine.Bindings.NativeMethod(Name = "MeshScripting::CombineMeshes", IsFreeFunction = true, ThrowsException = true, HasExplicitThis = true)]
	private void CombineMeshesImpl(CombineInstance[] combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData)
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x4DD2000", Offset = "0x4DD2000", VA = "0x4DD2000")]
	internal static VertexAttribute GetUVChannel(int uvIndex)
	{
		return default(VertexAttribute);
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x4DD2070", Offset = "0x4DD2070", VA = "0x4DD2070")]
	internal static int DefaultDimensionForChannel(VertexAttribute channel)
	{
		return default(int);
	}

	[Token(Token = "0x6000559")]
	private T[] GetAllocArrayFromChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim)
	{
		return null;
	}

	[Token(Token = "0x600055A")]
	private T[] GetAllocArrayFromChannel<T>(VertexAttribute channel)
	{
		return null;
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x4DD2100", Offset = "0x4DD2100", VA = "0x4DD2100")]
	private void SetSizedArrayForChannel(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int valuesArrayLength, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600055C")]
	private void SetArrayForChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim, T[] values, MeshUpdateFlags flags = MeshUpdateFlags.Default)
	{
	}

	[Token(Token = "0x600055D")]
	private void SetArrayForChannel<T>(VertexAttribute channel, T[] values, MeshUpdateFlags flags = MeshUpdateFlags.Default)
	{
	}

	[Token(Token = "0x600055E")]
	private void SetListForChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim, List<T> values, int start, int length, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600055F")]
	private void SetListForChannel<T>(VertexAttribute channel, List<T> values, int start, int length, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000560")]
	private void GetListForChannel<T>(List<T> buffer, int capacity, VertexAttribute channel, int dim)
	{
	}

	[Token(Token = "0x6000561")]
	private void GetListForChannel<T>(List<T> buffer, int capacity, VertexAttribute channel, int dim, VertexAttributeFormat channelType)
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x4DD2890", Offset = "0x4DD2890", VA = "0x4DD2890")]
	public void SetVertices(List<Vector3> inVertices)
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x4DD2920", Offset = "0x4DD2920", VA = "0x4DD2920")]
	[ExcludeFromDocs]
	public void SetVertices(List<Vector3> inVertices, int start, int length)
	{
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x4DD2980", Offset = "0x4DD2980", VA = "0x4DD2980")]
	public void SetVertices(List<Vector3> inVertices, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x4DD29F0", Offset = "0x4DD29F0", VA = "0x4DD29F0")]
	public void SetNormals(List<Vector3> inNormals)
	{
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x4DD2A80", Offset = "0x4DD2A80", VA = "0x4DD2A80")]
	[ExcludeFromDocs]
	public void SetNormals(List<Vector3> inNormals, int start, int length)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x4DD2AF0", Offset = "0x4DD2AF0", VA = "0x4DD2AF0")]
	public void SetNormals(List<Vector3> inNormals, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x4DD2B60", Offset = "0x4DD2B60", VA = "0x4DD2B60")]
	public void SetTangents(List<Vector4> inTangents)
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x4DD2BF0", Offset = "0x4DD2BF0", VA = "0x4DD2BF0")]
	[ExcludeFromDocs]
	public void SetTangents(List<Vector4> inTangents, int start, int length)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x4DD2C60", Offset = "0x4DD2C60", VA = "0x4DD2C60")]
	public void SetTangents(List<Vector4> inTangents, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x4DD2CD0", Offset = "0x4DD2CD0", VA = "0x4DD2CD0")]
	public void SetColors(List<Color> inColors)
	{
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x4DD2D60", Offset = "0x4DD2D60", VA = "0x4DD2D60")]
	[ExcludeFromDocs]
	public void SetColors(List<Color> inColors, int start, int length)
	{
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x4DD2DD0", Offset = "0x4DD2DD0", VA = "0x4DD2DD0")]
	public void SetColors(List<Color> inColors, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x4DD2E40", Offset = "0x4DD2E40", VA = "0x4DD2E40")]
	public void SetColors(List<Color32> inColors)
	{
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x4DD2EE0", Offset = "0x4DD2EE0", VA = "0x4DD2EE0")]
	[ExcludeFromDocs]
	public void SetColors(List<Color32> inColors, int start, int length)
	{
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x4DD2F50", Offset = "0x4DD2F50", VA = "0x4DD2F50")]
	public void SetColors(List<Color32> inColors, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600057D")]
	private void SetUvsImpl<T>(int uvIndex, int dim, List<T> uvs, int start, int length, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x4DD2FC0", Offset = "0x4DD2FC0", VA = "0x4DD2FC0")]
	public void SetUVs(int channel, List<Vector3> uvs)
	{
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x4DD30C0", Offset = "0x4DD30C0", VA = "0x4DD30C0")]
	public void SetUVs(int channel, List<Vector4> uvs)
	{
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x4DD3050", Offset = "0x4DD3050", VA = "0x4DD3050")]
	[ExcludeFromDocs]
	public void SetUVs(int channel, List<Vector3> uvs, int start, int length)
	{
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x4DD31C0", Offset = "0x4DD31C0", VA = "0x4DD31C0")]
	public void SetUVs(int channel, List<Vector3> uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x4DD3150", Offset = "0x4DD3150", VA = "0x4DD3150")]
	[ExcludeFromDocs]
	public void SetUVs(int channel, List<Vector4> uvs, int start, int length)
	{
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x4DD3230", Offset = "0x4DD3230", VA = "0x4DD3230")]
	public void SetUVs(int channel, List<Vector4> uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000584")]
	private void GetUVsImpl<T>(int uvIndex, List<T> uvs, int dim)
	{
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x4DD32A0", Offset = "0x4DD32A0", VA = "0x4DD32A0")]
	public void GetUVs(int channel, List<Vector4> uvs)
	{
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x4DD32F0", Offset = "0x4DD32F0", VA = "0x4DD32F0")]
	private void PrintErrorCantAccessIndices()
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x4DD3370", Offset = "0x4DD3370", VA = "0x4DD3370")]
	private bool CheckCanAccessSubmesh(int submesh, bool errorAboutTriangles)
	{
		return default(bool);
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x4DD35F0", Offset = "0x4DD35F0", VA = "0x4DD35F0")]
	private bool CheckCanAccessSubmeshTriangles(int submesh)
	{
		return default(bool);
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x4DD3600", Offset = "0x4DD3600", VA = "0x4DD3600")]
	private bool CheckCanAccessSubmeshIndices(int submesh)
	{
		return default(bool);
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x4DD3A40", Offset = "0x4DD3A40", VA = "0x4DD3A40")]
	[ExcludeFromDocs]
	public int[] GetIndices(int submesh)
	{
		return null;
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x4DD3A50", Offset = "0x4DD3A50", VA = "0x4DD3A50")]
	public int[] GetIndices(int submesh, [DefaultValue("true")] bool applyBaseVertex)
	{
		return null;
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x4DD3B50", Offset = "0x4DD3B50", VA = "0x4DD3B50")]
	public uint GetIndexCount(int submesh)
	{
		return default(uint);
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x4DD3D00", Offset = "0x4DD3D00", VA = "0x4DD3D00")]
	private void CheckIndicesArrayRange(int valuesLength, int start, int length)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x4DD3970", Offset = "0x4DD3970", VA = "0x4DD3970")]
	private void SetTrianglesImpl(int submesh, IndexFormat indicesFormat, Array triangles, int trianglesArrayLength, int start, int length, bool calculateBounds, int baseVertex)
	{
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x4DD3EA0", Offset = "0x4DD3EA0", VA = "0x4DD3EA0")]
	[ExcludeFromDocs]
	public void SetTriangles(int[] triangles, int submesh)
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x4DD3F20", Offset = "0x4DD3F20", VA = "0x4DD3F20")]
	public void SetTriangles(int[] triangles, int submesh, [DefaultValue("true")] bool calculateBounds, [DefaultValue("0")] int baseVertex)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x4DD3FB0", Offset = "0x4DD3FB0", VA = "0x4DD3FB0")]
	public void SetTriangles(int[] triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x4DD4030", Offset = "0x4DD4030", VA = "0x4DD4030")]
	[ExcludeFromDocs]
	public void SetTriangles(List<int> triangles, int submesh)
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x4DD4040", Offset = "0x4DD4040", VA = "0x4DD4040")]
	public void SetTriangles(List<int> triangles, int submesh, [DefaultValue("true")] bool calculateBounds, [DefaultValue("0")] int baseVertex)
	{
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x4DD4130", Offset = "0x4DD4130", VA = "0x4DD4130")]
	public void SetTriangles(List<int> triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x4DD41E0", Offset = "0x4DD41E0", VA = "0x4DD41E0")]
	[ExcludeFromDocs]
	public void SetIndices(int[] indices, MeshTopology topology, int submesh, bool calculateBounds)
	{
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x4DD4230", Offset = "0x4DD4230", VA = "0x4DD4230")]
	public void SetIndices(int[] indices, MeshTopology topology, int submesh, [DefaultValue("true")] bool calculateBounds, [DefaultValue("0")] int baseVertex)
	{
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x4DD4290", Offset = "0x4DD4290", VA = "0x4DD4290")]
	public void SetIndices(int[] indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x4DD43A0", Offset = "0x4DD43A0", VA = "0x4DD43A0")]
	public void SetIndices(ushort[] indices, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x4DD4400", Offset = "0x4DD4400", VA = "0x4DD4400")]
	public void SetIndices(ushort[] indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x4DD4510", Offset = "0x4DD4510", VA = "0x4DD4510")]
	public void SetIndices(List<int> indices, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x4DD4590", Offset = "0x4DD4590", VA = "0x4DD4590")]
	public void SetIndices(List<int> indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x4DD46D0", Offset = "0x4DD46D0", VA = "0x4DD46D0")]
	[ExcludeFromDocs]
	public void Clear()
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x4DD4770", Offset = "0x4DD4770", VA = "0x4DD4770")]
	[ExcludeFromDocs]
	public void RecalculateBounds()
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x4DD4780", Offset = "0x4DD4780", VA = "0x4DD4780")]
	public void RecalculateBounds([DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x4DD4950", Offset = "0x4DD4950", VA = "0x4DD4950")]
	public void MarkDynamic()
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x4DD4A90", Offset = "0x4DD4A90", VA = "0x4DD4A90")]
	public void UploadMeshData(bool markNoLongerReadable)
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x4DD4BF0", Offset = "0x4DD4BF0", VA = "0x4DD4BF0")]
	[ExcludeFromDocs]
	public void CombineMeshes(CombineInstance[] combine, bool mergeSubMeshes, bool useMatrices)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x4DD0D10", Offset = "0x4DD0D10", VA = "0x4DD0D10")]
	private static extern void set_indexFormat_Injected(IntPtr _unity_self, IndexFormat value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x4DD0DF0", Offset = "0x4DD0DF0", VA = "0x4DD0DF0")]
	private static extern uint GetIndexCountImpl_Injected(IntPtr _unity_self, int submesh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x4DD0EE0", Offset = "0x4DD0EE0", VA = "0x4DD0EE0")]
	private static extern int[] GetTrianglesImpl_Injected(IntPtr _unity_self, int submesh, bool applyBaseVertex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x4DD0FD0", Offset = "0x4DD0FD0", VA = "0x4DD0FD0")]
	private static extern int[] GetIndicesImpl_Injected(IntPtr _unity_self, int submesh, bool applyBaseVertex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x4DD10E0", Offset = "0x4DD10E0", VA = "0x4DD10E0")]
	private static extern void SetIndicesImpl_Injected(IntPtr _unity_self, int submesh, MeshTopology topology, IndexFormat indicesFormat, Array indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x4DD11E0", Offset = "0x4DD11E0", VA = "0x4DD11E0")]
	private static extern void PrintErrorCantAccessChannel_Injected(IntPtr _unity_self, VertexAttribute ch);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x4DD12C0", Offset = "0x4DD12C0", VA = "0x4DD12C0")]
	private static extern bool HasVertexAttribute_Injected(IntPtr _unity_self, VertexAttribute attr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x4DD13D0", Offset = "0x4DD13D0", VA = "0x4DD13D0")]
	private static extern void SetArrayForChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x4DD14E0", Offset = "0x4DD14E0", VA = "0x4DD14E0")]
	private static extern Array GetAllocArrayFromChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x4DD15F0", Offset = "0x4DD15F0", VA = "0x4DD15F0")]
	private static extern void GetArrayFromChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim, Array values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x4DD16E0", Offset = "0x4DD16E0", VA = "0x4DD16E0")]
	private static extern bool get_canAccess_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x4DD17B0", Offset = "0x4DD17B0", VA = "0x4DD17B0")]
	private static extern int get_vertexCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x4DD17E0", Offset = "0x4DD17E0", VA = "0x4DD17E0")]
	private static extern int get_subMeshCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x4DD18B0", Offset = "0x4DD18B0", VA = "0x4DD18B0")]
	private static extern void set_subMeshCount_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x4DD19C0", Offset = "0x4DD19C0", VA = "0x4DD19C0")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x4DD1AB0", Offset = "0x4DD1AB0", VA = "0x4DD1AB0")]
	private static extern void set_bounds_Injected(IntPtr _unity_self, [In] ref Bounds value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x4DD1B90", Offset = "0x4DD1B90", VA = "0x4DD1B90")]
	private static extern void ClearImpl_Injected(IntPtr _unity_self, bool keepVertexLayout);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x4DD1C70", Offset = "0x4DD1C70", VA = "0x4DD1C70")]
	private static extern void RecalculateBoundsImpl_Injected(IntPtr _unity_self, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x4DD1D50", Offset = "0x4DD1D50", VA = "0x4DD1D50")]
	private static extern void MarkDynamicImpl_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x4DD1E20", Offset = "0x4DD1E20", VA = "0x4DD1E20")]
	private static extern void UploadMeshDataImpl_Injected(IntPtr _unity_self, bool markNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x4DD1FA0", Offset = "0x4DD1FA0", VA = "0x4DD1FA0")]
	private static extern void CombineMeshesImpl_Injected(IntPtr _unity_self, ref ManagedSpanWrapper combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);
}
