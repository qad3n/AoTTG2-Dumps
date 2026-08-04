// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.GlyphMetrics
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore;

[Serializable]
[Token(Token = "0x2000005")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct GlyphMetrics : IEquatable<GlyphMetrics>
{
	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("width")]
	private float m_Width;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("height")]
	[SerializeField]
	private float m_Height;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("horizontalBearingX")]
	[SerializeField]
	private float m_HorizontalBearingX;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("horizontalBearingY")]
	[SerializeField]
	private float m_HorizontalBearingY;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("horizontalAdvance")]
	private float m_HorizontalAdvance;

	[Token(Token = "0x1700001A")]
	public float width
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4EA3560", Offset = "0x4EA3560", VA = "0x4EA3560")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001B")]
	public float height
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4EA3570", Offset = "0x4EA3570", VA = "0x4EA3570")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001C")]
	public float horizontalBearingX
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4EA3580", Offset = "0x4EA3580", VA = "0x4EA3580")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001D")]
	public float horizontalBearingY
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4EA3590", Offset = "0x4EA3590", VA = "0x4EA3590")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001E")]
	public float horizontalAdvance
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4EA35A0", Offset = "0x4EA35A0", VA = "0x4EA35A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4EA35B0", Offset = "0x4EA35B0", VA = "0x4EA35B0")]
	public GlyphMetrics(float width, float height, float bearingX, float bearingY, float advance)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4EA35D0", Offset = "0x4EA35D0", VA = "0x4EA35D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4EA3630", Offset = "0x4EA3630", VA = "0x4EA3630", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4EA3690", Offset = "0x4EA3690", VA = "0x4EA3690", Slot = "4")]
	public bool Equals(GlyphMetrics other)
	{
		return default(bool);
	}
}
