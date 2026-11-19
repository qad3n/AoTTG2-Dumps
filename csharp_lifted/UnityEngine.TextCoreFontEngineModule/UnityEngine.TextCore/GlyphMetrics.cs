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
		[Address(RVA = "0x69F7A10", Offset = "0x69F6A10", VA = "0x69F7A10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001B")]
	public float height
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x69F7A20", Offset = "0x69F6A20", VA = "0x69F7A20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001C")]
	public float horizontalBearingX
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x69F7A30", Offset = "0x69F6A30", VA = "0x69F7A30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001D")]
	public float horizontalBearingY
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x69F7A40", Offset = "0x69F6A40", VA = "0x69F7A40")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001E")]
	public float horizontalAdvance
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x69F7A50", Offset = "0x69F6A50", VA = "0x69F7A50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x69F7A60", Offset = "0x69F6A60", VA = "0x69F7A60")]
	public GlyphMetrics(float width, float height, float bearingX, float bearingY, float advance)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x69F7A80", Offset = "0x69F6A80", VA = "0x69F7A80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x69F7AE0", Offset = "0x69F6AE0", VA = "0x69F7AE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x69F7B40", Offset = "0x69F6B40", VA = "0x69F7B40", Slot = "4")]
	public bool Equals(GlyphMetrics other)
	{
		return default(bool);
	}
}
