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
	[Address(RVA = "0x48710C0", Offset = "0x48710C0", VA = "0x48710C0")]
	public static void ReleaseAll()
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x48712A0", Offset = "0x48712A0", VA = "0x48712A0")]
	internal static void Register(ConstantBufferBase cb)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4871390", Offset = "0x4871390", VA = "0x4871390")]
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
