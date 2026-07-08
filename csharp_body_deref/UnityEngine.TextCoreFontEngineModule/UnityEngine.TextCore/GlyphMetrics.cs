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
		[Address(RVA = "0x4B7BC30", Offset = "0x4B7BC30", VA = "0x4B7BC30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001B")]
	public float height
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4B7BC40", Offset = "0x4B7BC40", VA = "0x4B7BC40")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001C")]
	public float horizontalBearingX
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4B7BC50", Offset = "0x4B7BC50", VA = "0x4B7BC50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001D")]
	public float horizontalBearingY
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4B7BC60", Offset = "0x4B7BC60", VA = "0x4B7BC60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700001E")]
	public float horizontalAdvance
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4B7BC70", Offset = "0x4B7BC70", VA = "0x4B7BC70")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4B7BC80", Offset = "0x4B7BC80", VA = "0x4B7BC80")]
	public GlyphMetrics(float width, float height, float bearingX, float bearingY, float advance)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4B7BCA0", Offset = "0x4B7BCA0", VA = "0x4B7BCA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4B7BD00", Offset = "0x4B7BD00", VA = "0x4B7BD00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4B7BD60", Offset = "0x4B7BD60", VA = "0x4B7BD60", Slot = "4")]
	public bool Equals(GlyphMetrics other)
	{
		return default(bool);
	}
}
