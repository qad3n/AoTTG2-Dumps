// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ConstantBuffer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200002A")]
public class ConstantBuffer
{
	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x0")]
	private static List<ConstantBufferBase> m_RegisteredConstantBuffers;

	[Token(Token = "0x600044D")]
	public static void PushGlobal<CBType>(CommandBuffer cmd, in CBType data, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x600044E")]
	public static void PushGlobal<CBType>(BaseCommandBuffer cmd, in CBType data, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x600044F")]
	public static void PushGlobal<CBType>(in CBType data, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000450")]
	public static void Push<CBType>(CommandBuffer cmd, in CBType data, ComputeShader cs, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000451")]
	public static void Push<CBType>(IComputeCommandBuffer cmd, in CBType data, ComputeShader cs, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000452")]
	public static void Push<CBType>(in CBType data, ComputeShader cs, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000453")]
	public static void Push<CBType>(CommandBuffer cmd, in CBType data, Material mat, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000454")]
	public static void Push<CBType>(BaseCommandBuffer cmd, in CBType data, Material mat, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000455")]
	public static void Push<CBType>(in CBType data, Material mat, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000456")]
	public static void UpdateData<CBType>(CommandBuffer cmd, in CBType data) where CBType : struct
	{
	}

	[Token(Token = "0x6000457")]
	public static void UpdateData<CBType>(BaseCommandBuffer cmd, in CBType data) where CBType : struct
	{
	}

	[Token(Token = "0x6000458")]
	public static void UpdateData<CBType>(in CBType data) where CBType : struct
	{
	}

	[Token(Token = "0x6000459")]
	public static void SetGlobal<CBType>(CommandBuffer cmd, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x600045A")]
	public static void SetGlobal<CBType>(BaseCommandBuffer cmd, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x600045B")]
	public static void SetGlobal<CBType>(int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x600045C")]
	public static void Set<CBType>(CommandBuffer cmd, ComputeShader cs, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x600045D")]
	public static void Set<CBType>(IComputeCommandBuffer cmd, ComputeShader cs, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x600045E")]
	public static void Set<CBType>(ComputeShader cs, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x600045F")]
	public static void Set<CBType>(Material mat, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x2ABDC80", Offset = "0x2ABC280", VA = "0x182ABDC80")]
	public static void ReleaseAll()
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x2ABDBB0", Offset = "0x2ABC1B0", VA = "0x182ABDBB0")]
	internal static void Register(ConstantBufferBase cb)
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ConstantBuffer()
	{
	}
}
[Token(Token = "0x200002C")]
public class ConstantBuffer<CBType> : ConstantBufferBase where CBType : struct
{
	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x0")]
	private HashSet<int> m_GlobalBindings;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x0")]
	private CBType[] m_Data;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x0")]
	private ComputeBuffer m_GPUConstantBuffer;

	[Token(Token = "0x6000466")]
	public ConstantBuffer()
	{
	}

	[Token(Token = "0x6000467")]
	public void UpdateData(CommandBuffer cmd, in CBType data)
	{
	}

	[Token(Token = "0x6000468")]
	public void UpdateData(BaseCommandBuffer cmd, in CBType data)
	{
	}

	[Token(Token = "0x6000469")]
	public void UpdateData(in CBType data)
	{
	}

	[Token(Token = "0x600046A")]
	public void SetGlobal(CommandBuffer cmd, int shaderId)
	{
	}

	[Token(Token = "0x600046B")]
	public void SetGlobal(BaseCommandBuffer cmd, int shaderId)
	{
	}

	[Token(Token = "0x600046C")]
	public void SetGlobal(int shaderId)
	{
	}

	[Token(Token = "0x600046D")]
	public void Set(CommandBuffer cmd, ComputeShader cs, int shaderId)
	{
	}

	[Token(Token = "0x600046E")]
	public void Set(IComputeCommandBuffer cmd, ComputeShader cs, int shaderId)
	{
	}

	[Token(Token = "0x600046F")]
	public void Set(ComputeShader cs, int shaderId)
	{
	}

	[Token(Token = "0x6000470")]
	public void Set(Material mat, int shaderId)
	{
	}

	[Token(Token = "0x6000471")]
	public void Set(MaterialPropertyBlock mpb, int shaderId)
	{
	}

	[Token(Token = "0x6000472")]
	public void PushGlobal(CommandBuffer cmd, in CBType data, int shaderId)
	{
	}

	[Token(Token = "0x6000473")]
	public void PushGlobal(BaseCommandBuffer cmd, in CBType data, int shaderId)
	{
	}

	[Token(Token = "0x6000474")]
	public void PushGlobal(in CBType data, int shaderId)
	{
	}

	[Token(Token = "0x6000475")]
	public override void Release()
	{
	}
}
