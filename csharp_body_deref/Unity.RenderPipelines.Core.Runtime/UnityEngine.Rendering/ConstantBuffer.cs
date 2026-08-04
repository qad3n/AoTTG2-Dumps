// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ConstantBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000067")]
public class ConstantBuffer
{
	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x0")]
	private static List<ConstantBufferBase> m_RegisteredConstantBuffers;

	[Token(Token = "0x600055D")]
	public static void PushGlobal<CBType>(CommandBuffer cmd, in CBType data, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x600055E")]
	public static void PushGlobal<CBType>(in CBType data, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x600055F")]
	public static void Push<CBType>(CommandBuffer cmd, in CBType data, ComputeShader cs, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000560")]
	public static void Push<CBType>(in CBType data, ComputeShader cs, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000561")]
	public static void Push<CBType>(CommandBuffer cmd, in CBType data, Material mat, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000562")]
	public static void Push<CBType>(in CBType data, Material mat, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000563")]
	public static void UpdateData<CBType>(CommandBuffer cmd, in CBType data) where CBType : struct
	{
	}

	[Token(Token = "0x6000564")]
	public static void UpdateData<CBType>(in CBType data) where CBType : struct
	{
	}

	[Token(Token = "0x6000565")]
	public static void SetGlobal<CBType>(CommandBuffer cmd, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000566")]
	public static void SetGlobal<CBType>(int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000567")]
	public static void Set<CBType>(CommandBuffer cmd, ComputeShader cs, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000568")]
	public static void Set<CBType>(ComputeShader cs, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x6000569")]
	public static void Set<CBType>(Material mat, int shaderId) where CBType : struct
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x4B961B0", Offset = "0x4B961B0", VA = "0x4B961B0")]
	public static void ReleaseAll()
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x4B96390", Offset = "0x4B96390", VA = "0x4B96390")]
	internal static void Register(ConstantBufferBase cb)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4B96480", Offset = "0x4B96480", VA = "0x4B96480")]
	public ConstantBuffer()
	{
	}
}
[Token(Token = "0x2000069")]
public class ConstantBuffer<CBType> : ConstantBufferBase where CBType : struct
{
	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x0")]
	private HashSet<int> m_GlobalBindings;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x0")]
	private CBType[] m_Data;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x0")]
	private ComputeBuffer m_GPUConstantBuffer;

	[Token(Token = "0x6000570")]
	public ConstantBuffer()
	{
	}

	[Token(Token = "0x6000571")]
	public void UpdateData(CommandBuffer cmd, in CBType data)
	{
	}

	[Token(Token = "0x6000572")]
	public void UpdateData(in CBType data)
	{
	}

	[Token(Token = "0x6000573")]
	public void SetGlobal(CommandBuffer cmd, int shaderId)
	{
	}

	[Token(Token = "0x6000574")]
	public void SetGlobal(int shaderId)
	{
	}

	[Token(Token = "0x6000575")]
	public void Set(CommandBuffer cmd, ComputeShader cs, int shaderId)
	{
	}

	[Token(Token = "0x6000576")]
	public void Set(ComputeShader cs, int shaderId)
	{
	}

	[Token(Token = "0x6000577")]
	public void Set(Material mat, int shaderId)
	{
	}

	[Token(Token = "0x6000578")]
	public void PushGlobal(CommandBuffer cmd, in CBType data, int shaderId)
	{
	}

	[Token(Token = "0x6000579")]
	public void PushGlobal(in CBType data, int shaderId)
	{
	}

	[Token(Token = "0x600057A")]
	public override void Release()
	{
	}
}
