// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShaderData
// Update status: NEW in this game update
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
		[Address(RVA = "0x2C92FF0", Offset = "0x2C915F0", VA = "0x182C92FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private ShaderData()
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x2C92E00", Offset = "0x2C91400", VA = "0x182C92E00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x2C92F50", Offset = "0x2C91550", VA = "0x182C92F50")]
	internal ComputeBuffer GetLightDataBuffer(int size)
	{
		return null;
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x2C92FA0", Offset = "0x2C915A0", VA = "0x182C92FA0")]
	internal ComputeBuffer GetLightIndicesBuffer(int size)
	{
		return null;
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x2C92EB0", Offset = "0x2C914B0", VA = "0x182C92EB0")]
	internal ComputeBuffer GetAdditionalLightShadowParamsStructuredBuffer(int size)
	{
		return null;
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x2C92F00", Offset = "0x2C91500", VA = "0x182C92F00")]
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
	[Address(RVA = "0x2C92DC0", Offset = "0x2C913C0", VA = "0x182C92DC0")]
	private void DisposeBuffer(ref ComputeBuffer buffer)
	{
	}
}
