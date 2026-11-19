// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VrsLut
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000230")]
public class VrsLut
{
	[Token(Token = "0x40009D2")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private Color[] m_Data;

	[Token(Token = "0x40009D3")]
	private const uint Rate1x = 0u;

	[Token(Token = "0x40009D4")]
	private const uint Rate2x = 1u;

	[Token(Token = "0x40009D5")]
	private const uint Rate4x = 2u;

	[Token(Token = "0x170001FF")]
	public Color this[ShadingRateFragmentSize fragmentSize]
	{
		[Token(Token = "0x6000FAE")]
		[Address(RVA = "0x655AE10", Offset = "0x6559E10", VA = "0x655AE10")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000FAF")]
		[Address(RVA = "0x655ADE0", Offset = "0x6559DE0", VA = "0x655ADE0")]
		set
		{
		}
	}

	[Token(Token = "0x6000FAD")]
	[Address(RVA = "0x655AB70", Offset = "0x6559B70", VA = "0x655AB70")]
	public static VrsLut CreateDefault()
	{
		return null;
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x655AE40", Offset = "0x6559E40", VA = "0x655AE40")]
	public GraphicsBuffer CreateBuffer(bool forVisualization = false)
	{
		return null;
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x655B290", Offset = "0x655A290", VA = "0x655B290")]
	private uint MapFragmentShadingRateToBinary(ShadingRateFragmentSize fs)
	{
		return default(uint);
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x655B2B0", Offset = "0x655A2B0", VA = "0x655B2B0")]
	private uint EncodeShadingRate(uint x, uint y)
	{
		return default(uint);
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x655AD50", Offset = "0x6559D50", VA = "0x655AD50")]
	public VrsLut()
	{
	}
}
