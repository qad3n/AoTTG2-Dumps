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
	[UnityEngine.Bindings.NativeName("width")]
	[SerializeField]
	private float m_Width;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("height")]
	private float m_Height;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("horizontalBearingX")]
	private float m_HorizontalBearingX;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0xC")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("horizontalBearingY")]
	private float m_HorizontalBearingY;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("horizontalAdvance")]
	[SerializeField]
	private float m_HorizontalAdvance;

	[Token(Token = "0x1700001A")]
	public float width
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x2ECC6C0", Offset = "0x2ECACC0", VA = "0x182ECC6C0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001B")]
	public float height
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x2E97670", Offset = "0x2E95C70", VA = "0x182E97670")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001C")]
	public float horizontalBearingX
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x2E97660", Offset = "0x2E95C60", VA = "0x182E97660")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001D")]
	public float horizontalBearingY
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x2EAE460", Offset = "0x2EACA60", VA = "0x182EAE460")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001E")]
	public float horizontalAdvance
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x2EAE470", Offset = "0x2EACA70", VA = "0x182EAE470")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x3002820", Offset = "0x3000E20", VA = "0x183002820")]
	public GlyphMetrics(float width, float height, float bearingX, float bearingY, float advance)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x30027C0", Offset = "0x3000DC0", VA = "0x1830027C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x3002750", Offset = "0x3000D50", VA = "0x183002750", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x30026C0", Offset = "0x3000CC0", VA = "0x1830026C0", Slot = "4")]
	public bool Equals(GlyphMetrics other)
	{
		return default(bool);
	}
}
