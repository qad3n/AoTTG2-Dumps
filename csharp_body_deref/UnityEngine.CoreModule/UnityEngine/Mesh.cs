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

[Token(Token = "0x20000FA")]
[ExcludeFromPreset]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
public sealed class Mesh : Object
{
	[Token(Token = "0x20000FB")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
	[UnityEngine.Bindings.StaticAccessor("MeshDataBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public struct MeshData
	{
		[Token(Token = "0x4000340")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal IntPtr m_Ptr;
	}

	[Token(Token = "0x1700010C")]
	public IndexFormat indexFormat
	{
		[Token(Token = "0x6000540")]
		[Address(RVA = "0x4AA9340", Offset = "0x4AA9340", VA = "0x4AA9340")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	internal bool canAccess
	{
		[Token(Token = "0x600054A")]
		[Address(RVA = "0x4AA9D10", Offset = "0x4AA9D10", VA = "0x4AA9D10")]
		[UnityEngine.Bindings.NativeMethod("CanAccessFromScript")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010E")]
	public int vertexCount
	{
		[Token(Token = "0x600054B")]
		[Address(RVA = "0x4AA9DE0", Offset = "0x4AA9DE0", VA = "0x4AA9DE0")]
		[UnityEngine.Bindings.NativeMethod("GetVertexCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010F")]
	public int subMeshCount
	{
		[Token(Token = "0x600054C")]
		[Address(RVA = "0x4A9B0B0", Offset = "0x4A9B0B0", VA = "0x4A9B0B0")]
		[UnityEngine.Bindings.NativeMethod(Name = "GetSubMeshCount")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600054D")]
		[Address(RVA = "0x4AA9EE0", Offset = "0x4AA9EE0", VA = "0x4AA9EE0")]
		[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::SetSubMeshCount", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000110")]
	public Bounds bounds
	{
		[Token(Token = "0x600054E")]
		[Address(RVA = "0x4AA9FC0", Offset = "0x4AA9FC0", VA = "0x4AA9FC0")]
		get
		{
			return default(Bounds);
		}
		[Token(Token = "0x600054F")]
		[Address(RVA = "0x4AAA0D0", Offset = "0x4AAA0D0", VA = "0x4AAA0D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	public Vector3[] vertices
	{
		[Token(Token = "0x6000560")]
		[Address(RVA = "0x4AAABC0", Offset = "0x4AAABC0", VA = "0x4AAABC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000561")]
		[Address(RVA = "0x4AAAC00", Offset = "0x4AAAC00", VA = "0x4AAAC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public Vector3[] normals
	{
		[Token(Token = "0x6000562")]
		[Address(RVA = "0x4AAAC50", Offset = "0x4AAAC50", VA = "0x4AAAC50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000563")]
		[Address(RVA = "0x4AAAC90", Offset = "0x4AAAC90", VA = "0x4AAAC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public Vector4[] tangents
	{
		[Token(Token = "0x6000564")]
		[Address(RVA = "0x4AAACE0", Offset = "0x4AAACE0", VA = "0x4AAACE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000565")]
		[Address(RVA = "0x4AAAD20", Offset = "0x4AAAD20", VA = "0x4AAAD20")]
		set
		{
		}
	}

	[Token(Token = "0x17000114")]
	public Vector2[] uv
	{
		[Token(Token = "0x6000566")]
		[Address(RVA = "0x4AAAD70", Offset = "0x4AAAD70", VA = "0x4AAAD70")]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	public Vector2[] uv2
	{
		[Token(Token = "0x6000567")]
		[Address(RVA = "0x4AAADC0", Offset = "0x4AAADC0", VA = "0x4AAADC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000116")]
	public Vector2[] uv4
	{
		[Token(Token = "0x6000568")]
		[Address(RVA = "0x4AAAE10", Offset = "0x4AAAE10", VA = "0x4AAAE10")]
		set
		{
		}
	}

	[Token(Token = "0x17000117")]
	public Color[] colors
	{
		[Token(Token = "0x6000569")]
		[Address(RVA = "0x4AAAE60", Offset = "0x4AAAE60", VA = "0x4AAAE60")]
		set
		{
		}
	}

	[Token(Token = "0x17000118")]
	public Color32[] colors32
	{
		[Token(Token = "0x600056A")]
		[Address(RVA = "0x4AAAEB0", Offset = "0x4AAAEB0", VA = "0x4AAAEB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600056B")]
		[Address(RVA = "0x4AAAF00", Offset = "0x4AAAF00", VA = "0x4AAAF00")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	public int[] triangles
	{
		[Token(Token = "0x6000588")]
		[Address(RVA = "0x4AABCE0", Offset = "0x4AABCE0", VA = "0x4AABCE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000589")]
		[Address(RVA = "0x4AABEE0", Offset = "0x4AABEE0", VA = "0x4AABEE0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600053E")]
	[Address(RVA = "0x4AA92A0", Offset = "0x4AA92A0", VA = "0x4AA92A0")]
	[UnityEngine.Bindings.FreeFunction("MeshScripting::CreateMesh")]
	private static extern void Internal_Create([UnityEngine.Writable] Mesh mono);

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x4AA92D0", Offset = "0x4AA92D0", VA = "0x4AA92D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Mesh()
	{
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x4AA9420", Offset = "0x4AA9420", VA = "0x4AA9420")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetIndexCount", HasExplicitThis = true)]
	private uint GetIndexCountImpl(int submesh)
	{
		return default(uint);
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x4AA9500", Offset = "0x4AA9500", VA = "0x4AA9500")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetTriangles", HasExplicitThis = true)]
	private int[] GetTrianglesImpl(int submesh, bool applyBaseVertex)
	{
		return null;
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x4AA95F0", Offset = "0x4AA95F0", VA = "0x4AA95F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::GetIndices", HasExplicitThis = true)]
	private int[] GetIndicesImpl(int submesh, bool applyBaseVertex)
	{
		return null;
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x4AA96E0", Offset = "0x4AA96E0", VA = "0x4AA96E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "SetMeshIndicesFromScript", HasExplicitThis = true, ThrowsException = true)]
	private void SetIndicesImpl(int submesh, MeshTopology topology, IndexFormat indicesFormat, Array indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex)
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x4AA9810", Offset = "0x4AA9810", VA = "0x4AA9810")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::PrintErrorCantAccessChannel", HasExplicitThis = true)]
	private void PrintErrorCantAccessChannel(VertexAttribute ch)
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x4AA98F0", Offset = "0x4AA98F0", VA = "0x4AA98F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MeshScripting::HasChannel", HasExplicitThis = true)]
	public bool HasVertexAttribute(VertexAttribute attr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x4AA99D0", Offset = "0x4AA99D0", VA = "0x4AA99D0")]
	[UnityEngine.Bindings.FreeFunction(Name = "SetMeshComponentFromArrayFromScript", HasExplicitThis = true)]
	private void SetArrayForChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x4AA9B00", Offset = "0x4AA9B00", VA = "0x4AA9B00")]
	[UnityEngine.Bindings.FreeFunction(Name = "AllocExtractMeshComponentFromScript", HasExplicitThis = true)]
	private Array GetAllocArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim)
	{
		return null;
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4AA9C00", Offset = "0x4AA9C00", VA = "0x4AA9C00")]
	[UnityEngine.Bindings.FreeFunction(Name = "ExtractMeshComponentFromScript", HasExplicitThis = true)]
	private void GetArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values)
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x4AAA1C0", Offset = "0x4AAA1C0", VA = "0x4AAA1C0")]
	[UnityEngine.Bindings.NativeMethod("Clear")]
	private void ClearImpl(bool keepVertexLayout)
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x4AAA2A0", Offset = "0x4AAA2A0", VA = "0x4AAA2A0")]
	[UnityEngine.Bindings.NativeMethod("RecalculateBounds")]
	private void RecalculateBoundsImpl(MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x4AAA380", Offset = "0x4AAA380", VA = "0x4AAA380")]
	[UnityEngine.Bindings.NativeMethod("MarkDynamic")]
	private void MarkDynamicImpl()
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x4AAA450", Offset = "0x4AAA450", VA = "0x4AAA450")]
	[UnityEngine.Bindings.NativeMethod("UploadMeshData")]
	private void UploadMeshDataImpl(bool markNoLongerReadable)
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x4AAA530", Offset = "0x4AAA530", VA = "0x4AAA530")]
	[UnityEngine.Bindings.NativeMethod(Name = "MeshScripting::CombineMeshes", IsFreeFunction = true, ThrowsException = true, HasExplicitThis = true)]
	private void CombineMeshesImpl(CombineInstance[] combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData)
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x4AAA6D0", Offset = "0x4AAA6D0", VA = "0x4AAA6D0")]
	internal static VertexAttribute GetUVChannel(int uvIndex)
	{
		return default(VertexAttribute);
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x4AAA740", Offset = "0x4AAA740", VA = "0x4AAA740")]
	internal static int DefaultDimensionForChannel(VertexAttribute channel)
	{
		return default(int);
	}

	[Token(Token = "0x6000557")]
	private T[] GetAllocArrayFromChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim)
	{
		return null;
	}

	[Token(Token = "0x6000558")]
	private T[] GetAllocArrayFromChannel<T>(VertexAttribute channel)
	{
		return null;
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x4AAA7D0", Offset = "0x4AAA7D0", VA = "0x4AAA7D0")]
	private void SetSizedArrayForChannel(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int valuesArrayLength, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600055A")]
	private void SetArrayForChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim, T[] values, MeshUpdateFlags flags = MeshUpdateFlags.Default)
	{
	}

	[Token(Token = "0x600055B")]
	private void SetArrayForChannel<T>(VertexAttribute channel, T[] values, MeshUpdateFlags flags = MeshUpdateFlags.Default)
	{
	}

	[Token(Token = "0x600055C")]
	private void SetListForChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim, List<T> values, int start, int length, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600055D")]
	private void SetListForChannel<T>(VertexAttribute channel, List<T> values, int start, int length, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600055E")]
	private void GetListForChannel<T>(List<T> buffer, int capacity, VertexAttribute channel, int dim)
	{
	}

	[Token(Token = "0x600055F")]
	private void GetListForChannel<T>(List<T> buffer, int capacity, VertexAttribute channel, int dim, VertexAttributeFormat channelType)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4AAAF60", Offset = "0x4AAAF60", VA = "0x4AAAF60")]
	public void SetVertices(List<Vector3> inVertices)
	{
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x4AAAFF0", Offset = "0x4AAAFF0", VA = "0x4AAAFF0")]
	[ExcludeFromDocs]
	public void SetVertices(List<Vector3> inVertices, int start, int length)
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x4AAB050", Offset = "0x4AAB050", VA = "0x4AAB050")]
	public void SetVertices(List<Vector3> inVertices, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x4AAB0C0", Offset = "0x4AAB0C0", VA = "0x4AAB0C0")]
	public void SetNormals(List<Vector3> inNormals)
	{
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x4AAB150", Offset = "0x4AAB150", VA = "0x4AAB150")]
	[ExcludeFromDocs]
	public void SetNormals(List<Vector3> inNormals, int start, int length)
	{
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x4AAB1C0", Offset = "0x4AAB1C0", VA = "0x4AAB1C0")]
	public void SetNormals(List<Vector3> inNormals, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x4AAB230", Offset = "0x4AAB230", VA = "0x4AAB230")]
	public void SetTangents(List<Vector4> inTangents)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x4AAB2C0", Offset = "0x4AAB2C0", VA = "0x4AAB2C0")]
	[ExcludeFromDocs]
	public void SetTangents(List<Vector4> inTangents, int start, int length)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x4AAB330", Offset = "0x4AAB330", VA = "0x4AAB330")]
	public void SetTangents(List<Vector4> inTangents, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x4AAB3A0", Offset = "0x4AAB3A0", VA = "0x4AAB3A0")]
	public void SetColors(List<Color> inColors)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x4AAB430", Offset = "0x4AAB430", VA = "0x4AAB430")]
	[ExcludeFromDocs]
	public void SetColors(List<Color> inColors, int start, int length)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x4AAB4A0", Offset = "0x4AAB4A0", VA = "0x4AAB4A0")]
	public void SetColors(List<Color> inColors, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x4AAB510", Offset = "0x4AAB510", VA = "0x4AAB510")]
	public void SetColors(List<Color32> inColors)
	{
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x4AAB5B0", Offset = "0x4AAB5B0", VA = "0x4AAB5B0")]
	[ExcludeFromDocs]
	public void SetColors(List<Color32> inColors, int start, int length)
	{
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x4AAB620", Offset = "0x4AAB620", VA = "0x4AAB620")]
	public void SetColors(List<Color32> inColors, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600057B")]
	private void SetUvsImpl<T>(int uvIndex, int dim, List<T> uvs, int start, int length, MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x4AAB690", Offset = "0x4AAB690", VA = "0x4AAB690")]
	public void SetUVs(int channel, List<Vector3> uvs)
	{
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x4AAB790", Offset = "0x4AAB790", VA = "0x4AAB790")]
	public void SetUVs(int channel, List<Vector4> uvs)
	{
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x4AAB720", Offset = "0x4AAB720", VA = "0x4AAB720")]
	[ExcludeFromDocs]
	public void SetUVs(int channel, List<Vector3> uvs, int start, int length)
	{
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x4AAB890", Offset = "0x4AAB890", VA = "0x4AAB890")]
	public void SetUVs(int channel, List<Vector3> uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x4AAB820", Offset = "0x4AAB820", VA = "0x4AAB820")]
	[ExcludeFromDocs]
	public void SetUVs(int channel, List<Vector4> uvs, int start, int length)
	{
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x4AAB900", Offset = "0x4AAB900", VA = "0x4AAB900")]
	public void SetUVs(int channel, List<Vector4> uvs, int start, int length, [DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x6000582")]
	private void GetUVsImpl<T>(int uvIndex, List<T> uvs, int dim)
	{
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x4AAB970", Offset = "0x4AAB970", VA = "0x4AAB970")]
	public void GetUVs(int channel, List<Vector4> uvs)
	{
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x4AAB9C0", Offset = "0x4AAB9C0", VA = "0x4AAB9C0")]
	private void PrintErrorCantAccessIndices()
	{
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x4AABA40", Offset = "0x4AABA40", VA = "0x4AABA40")]
	private bool CheckCanAccessSubmesh(int submesh, bool errorAboutTriangles)
	{
		return default(bool);
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x4AABCC0", Offset = "0x4AABCC0", VA = "0x4AABCC0")]
	private bool CheckCanAccessSubmeshTriangles(int submesh)
	{
		return default(bool);
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x4AABCD0", Offset = "0x4AABCD0", VA = "0x4AABCD0")]
	private bool CheckCanAccessSubmeshIndices(int submesh)
	{
		return default(bool);
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x4AAC110", Offset = "0x4AAC110", VA = "0x4AAC110")]
	[ExcludeFromDocs]
	public int[] GetIndices(int submesh)
	{
		return null;
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x4AAC120", Offset = "0x4AAC120", VA = "0x4AAC120")]
	public int[] GetIndices(int submesh, [DefaultValue("true")] bool applyBaseVertex)
	{
		return null;
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x4AAC220", Offset = "0x4AAC220", VA = "0x4AAC220")]
	public uint GetIndexCount(int submesh)
	{
		return default(uint);
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x4AAC3D0", Offset = "0x4AAC3D0", VA = "0x4AAC3D0")]
	private void CheckIndicesArrayRange(int valuesLength, int start, int length)
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x4AAC040", Offset = "0x4AAC040", VA = "0x4AAC040")]
	private void SetTrianglesImpl(int submesh, IndexFormat indicesFormat, Array triangles, int trianglesArrayLength, int start, int length, bool calculateBounds, int baseVertex)
	{
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x4AAC570", Offset = "0x4AAC570", VA = "0x4AAC570")]
	[ExcludeFromDocs]
	public void SetTriangles(int[] triangles, int submesh)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x4AAC5F0", Offset = "0x4AAC5F0", VA = "0x4AAC5F0")]
	public void SetTriangles(int[] triangles, int submesh, [DefaultValue("true")] bool calculateBounds, [DefaultValue("0")] int baseVertex)
	{
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x4AAC680", Offset = "0x4AAC680", VA = "0x4AAC680")]
	public void SetTriangles(int[] triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x4AAC700", Offset = "0x4AAC700", VA = "0x4AAC700")]
	[ExcludeFromDocs]
	public void SetTriangles(List<int> triangles, int submesh)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x4AAC710", Offset = "0x4AAC710", VA = "0x4AAC710")]
	public void SetTriangles(List<int> triangles, int submesh, [DefaultValue("true")] bool calculateBounds, [DefaultValue("0")] int baseVertex)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x4AAC800", Offset = "0x4AAC800", VA = "0x4AAC800")]
	public void SetTriangles(List<int> triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x4AAC8B0", Offset = "0x4AAC8B0", VA = "0x4AAC8B0")]
	[ExcludeFromDocs]
	public void SetIndices(int[] indices, MeshTopology topology, int submesh, bool calculateBounds)
	{
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x4AAC900", Offset = "0x4AAC900", VA = "0x4AAC900")]
	public void SetIndices(int[] indices, MeshTopology topology, int submesh, [DefaultValue("true")] bool calculateBounds, [DefaultValue("0")] int baseVertex)
	{
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x4AAC960", Offset = "0x4AAC960", VA = "0x4AAC960")]
	public void SetIndices(int[] indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x4AACA70", Offset = "0x4AACA70", VA = "0x4AACA70")]
	public void SetIndices(ushort[] indices, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x4AACAD0", Offset = "0x4AACAD0", VA = "0x4AACAD0")]
	public void SetIndices(ushort[] indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x4AACBE0", Offset = "0x4AACBE0", VA = "0x4AACBE0")]
	public void SetIndices(List<int> indices, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x4AACC60", Offset = "0x4AACC60", VA = "0x4AACC60")]
	public void SetIndices(List<int> indices, int indicesStart, int indicesLength, MeshTopology topology, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x4AACDA0", Offset = "0x4AACDA0", VA = "0x4AACDA0")]
	[ExcludeFromDocs]
	public void Clear()
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x4AACE40", Offset = "0x4AACE40", VA = "0x4AACE40")]
	[ExcludeFromDocs]
	public void RecalculateBounds()
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x4AACE50", Offset = "0x4AACE50", VA = "0x4AACE50")]
	public void RecalculateBounds([DefaultValue("MeshUpdateFlags.Default")] MeshUpdateFlags flags)
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x4AAD020", Offset = "0x4AAD020", VA = "0x4AAD020")]
	public void MarkDynamic()
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x4AAD160", Offset = "0x4AAD160", VA = "0x4AAD160")]
	public void UploadMeshData(bool markNoLongerReadable)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x4AAD2C0", Offset = "0x4AAD2C0", VA = "0x4AAD2C0")]
	[ExcludeFromDocs]
	public void CombineMeshes(CombineInstance[] combine, bool mergeSubMeshes, bool useMatrices)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x4AA93E0", Offset = "0x4AA93E0", VA = "0x4AA93E0")]
	private static extern void set_indexFormat_Injected(IntPtr _unity_self, IndexFormat value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x4AA94C0", Offset = "0x4AA94C0", VA = "0x4AA94C0")]
	private static extern uint GetIndexCountImpl_Injected(IntPtr _unity_self, int submesh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x4AA95B0", Offset = "0x4AA95B0", VA = "0x4AA95B0")]
	private static extern int[] GetTrianglesImpl_Injected(IntPtr _unity_self, int submesh, bool applyBaseVertex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x4AA96A0", Offset = "0x4AA96A0", VA = "0x4AA96A0")]
	private static extern int[] GetIndicesImpl_Injected(IntPtr _unity_self, int submesh, bool applyBaseVertex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x4AA97B0", Offset = "0x4AA97B0", VA = "0x4AA97B0")]
	private static extern void SetIndicesImpl_Injected(IntPtr _unity_self, int submesh, MeshTopology topology, IndexFormat indicesFormat, Array indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x4AA98B0", Offset = "0x4AA98B0", VA = "0x4AA98B0")]
	private static extern void PrintErrorCantAccessChannel_Injected(IntPtr _unity_self, VertexAttribute ch);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x4AA9990", Offset = "0x4AA9990", VA = "0x4AA9990")]
	private static extern bool HasVertexAttribute_Injected(IntPtr _unity_self, VertexAttribute attr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x4AA9AA0", Offset = "0x4AA9AA0", VA = "0x4AA9AA0")]
	private static extern void SetArrayForChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x4AA9BB0", Offset = "0x4AA9BB0", VA = "0x4AA9BB0")]
	private static extern Array GetAllocArrayFromChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x4AA9CC0", Offset = "0x4AA9CC0", VA = "0x4AA9CC0")]
	private static extern void GetArrayFromChannelImpl_Injected(IntPtr _unity_self, VertexAttribute channel, VertexAttributeFormat format, int dim, Array values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x4AA9DB0", Offset = "0x4AA9DB0", VA = "0x4AA9DB0")]
	private static extern bool get_canAccess_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x4AA9E80", Offset = "0x4AA9E80", VA = "0x4AA9E80")]
	private static extern int get_vertexCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x4AA9EB0", Offset = "0x4AA9EB0", VA = "0x4AA9EB0")]
	private static extern int get_subMeshCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x4AA9F80", Offset = "0x4AA9F80", VA = "0x4AA9F80")]
	private static extern void set_subMeshCount_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x4AAA090", Offset = "0x4AAA090", VA = "0x4AAA090")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x4AAA180", Offset = "0x4AAA180", VA = "0x4AAA180")]
	private static extern void set_bounds_Injected(IntPtr _unity_self, [In] ref Bounds value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x4AAA260", Offset = "0x4AAA260", VA = "0x4AAA260")]
	private static extern void ClearImpl_Injected(IntPtr _unity_self, bool keepVertexLayout);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x4AAA340", Offset = "0x4AAA340", VA = "0x4AAA340")]
	private static extern void RecalculateBoundsImpl_Injected(IntPtr _unity_self, MeshUpdateFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x4AAA420", Offset = "0x4AAA420", VA = "0x4AAA420")]
	private static extern void MarkDynamicImpl_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x4AAA4F0", Offset = "0x4AAA4F0", VA = "0x4AAA4F0")]
	private static extern void UploadMeshDataImpl_Injected(IntPtr _unity_self, bool markNoLongerReadable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x4AAA670", Offset = "0x4AAA670", VA = "0x4AAA670")]
	private static extern void CombineMeshesImpl_Injected(IntPtr _unity_self, ref ManagedSpanWrapper combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);
}
