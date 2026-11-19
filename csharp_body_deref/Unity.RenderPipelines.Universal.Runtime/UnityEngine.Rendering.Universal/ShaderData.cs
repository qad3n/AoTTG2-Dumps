// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShaderData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001A3")]
internal class ShaderData : IDisposable
{
	[Token(Token = "0x4000919")]
	[FieldOffset(Offset = "0x0")]
	private static ShaderData m_Instance;

	[Token(Token = "0x400091A")]
	[FieldOffset(Offset = "0x10")]
	private ComputeBuffer m_LightDataBuffer;

	[Token(Token = "0x400091B")]
	[FieldOffset(Offset = "0x18")]
	private ComputeBuffer m_LightIndicesBuffer;

	[Token(Token = "0x400091C")]
	[FieldOffset(Offset = "0x20")]
	private ComputeBuffer m_AdditionalLightShadowParamsStructuredBuffer;

	[Token(Token = "0x400091D")]
	[FieldOffset(Offset = "0x28")]
	private ComputeBuffer m_AdditionalLightShadowSliceMatricesStructuredBuffer;

	[Token(Token = "0x17000230")]
	internal static ShaderData instance
	{
		[Token(Token = "0x6000910")]
		[Address(RVA = "0x6689C00", Offset = "0x6688C00", VA = "0x6689C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x6689BF0", Offset = "0x6688BF0", VA = "0x6689BF0")]
	private ShaderData()
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x6689C90", Offset = "0x6688C90", VA = "0x6689C90", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x6689D70", Offset = "0x6688D70", VA = "0x6689D70")]
	internal ComputeBuffer GetLightDataBuffer(int size)
	{
		return null;
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x6689DC0", Offset = "0x6688DC0", VA = "0x6689DC0")]
	internal ComputeBuffer GetLightIndicesBuffer(int size)
	{
		return null;
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x6689E10", Offset = "0x6688E10", VA = "0x6689E10")]
	internal ComputeBuffer GetAdditionalLightShadowParamsStructuredBuffer(int size)
	{
		return null;
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x6689E60", Offset = "0x6688E60", VA = "0x6689E60")]
	internal ComputeBuffer GetAdditionalLightShadowSliceMatricesStructuredBuffer(int size)
	{
		return null;
	}

	[Token(Token = "0x6000916")]
	private ComputeBuffer GetOrUpdateBuffer<T>(ref ComputeBuffer buffer, int size) where T : struct
	{
		return null;
	}

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x6689D40", Offset = "0x6688D40", VA = "0x6689D40")]
	private void DisposeBuffer(ref ComputeBuffer buffer)
	{
	}
}
