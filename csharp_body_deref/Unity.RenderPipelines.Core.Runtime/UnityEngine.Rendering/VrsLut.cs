// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VrsLut
// Update status: NEW in this game update
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
		[Address(RVA = "0x2B826E0", Offset = "0x2B80CE0", VA = "0x182B826E0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000FAF")]
		[Address(RVA = "0x2B82720", Offset = "0x2B80D20", VA = "0x182B82720")]
		set
		{
		}
	}

	[Token(Token = "0x6000FAD")]
	[Address(RVA = "0x2B82320", Offset = "0x2B80920", VA = "0x182B82320")]
	public static VrsLut CreateDefault()
	{
		return null;
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x2B81F90", Offset = "0x2B80590", VA = "0x182B81F90")]
	public GraphicsBuffer CreateBuffer(bool forVisualization = false)
	{
		return null;
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x2B825D0", Offset = "0x2B80BD0", VA = "0x182B825D0")]
	private uint MapFragmentShadingRateToBinary(ShadingRateFragmentSize fs)
	{
		return default(uint);
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x2B825C0", Offset = "0x2B80BC0", VA = "0x182B825C0")]
	private uint EncodeShadingRate(uint x, uint y)
	{
		return default(uint);
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x2B82650", Offset = "0x2B80C50", VA = "0x182B82650")]
	public VrsLut()
	{
	}
}
