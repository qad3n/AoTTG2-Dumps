using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200007B")]
public class HableCurve
{
	[Token(Token = "0x200007C")]
	private class Segment
	{
		[Token(Token = "0x400023A")]
		[FieldOffset(Offset = "0x10")]
		public float offsetX;

		[Token(Token = "0x400023B")]
		[FieldOffset(Offset = "0x14")]
		public float offsetY;

		[Token(Token = "0x400023C")]
		[FieldOffset(Offset = "0x18")]
		public float scaleX;

		[Token(Token = "0x400023D")]
		[FieldOffset(Offset = "0x1C")]
		public float scaleY;

		[Token(Token = "0x400023E")]
		[FieldOffset(Offset = "0x20")]
		public float lnA;

		[Token(Token = "0x400023F")]
		[FieldOffset(Offset = "0x24")]
		public float B;

		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x483AF90", Offset = "0x483AF90", VA = "0x483AF90")]
		public float Eval(float x)
		{
			return default(float);
		}

		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x483AEA0", Offset = "0x483AEA0", VA = "0x483AEA0")]
		public Segment()
		{
		}
	}

	[Token(Token = "0x200007D")]
	private struct DirectParams
	{
		[Token(Token = "0x4000240")]
		[FieldOffset(Offset = "0x0")]
		internal float x0;

		[Token(Token = "0x4000241")]
		[FieldOffset(Offset = "0x4")]
		internal float y0;

		[Token(Token = "0x4000242")]
		[FieldOffset(Offset = "0x8")]
		internal float x1;

		[Token(Token = "0x4000243")]
		[FieldOffset(Offset = "0xC")]
		internal float y1;

		[Token(Token = "0x4000244")]
		[FieldOffset(Offset = "0x10")]
		internal float W;

		[Token(Token = "0x4000245")]
		[FieldOffset(Offset = "0x14")]
		internal float overshootX;

		[Token(Token = "0x4000246")]
		[FieldOffset(Offset = "0x18")]
		internal float overshootY;

		[Token(Token = "0x4000247")]
		[FieldOffset(Offset = "0x1C")]
		internal float gamma;
	}

	[Token(Token = "0x200007E")]
	public class Uniforms
	{
		[Token(Token = "0x4000248")]
		[FieldOffset(Offset = "0x10")]
		private HableCurve parent;

		[Token(Token = "0x1700002B")]
		public Vector4 curve
		{
			[Token(Token = "0x60001DF")]
			[Address(RVA = "0x483B7D0", Offset = "0x483B7D0", VA = "0x483B7D0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x1700002C")]
		public Vector4 toeSegmentA
		{
			[Token(Token = "0x60001E0")]
			[Address(RVA = "0x483B7F0", Offset = "0x483B7F0", VA = "0x483B7F0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x1700002D")]
		public Vector4 toeSegmentB
		{
			[Token(Token = "0x60001E1")]
			[Address(RVA = "0x483B830", Offset = "0x483B830", VA = "0x483B830")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x1700002E")]
		public Vector4 midSegmentA
		{
			[Token(Token = "0x60001E2")]
			[Address(RVA = "0x483B870", Offset = "0x483B870", VA = "0x483B870")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x1700002F")]
		public Vector4 midSegmentB
		{
			[Token(Token = "0x60001E3")]
			[Address(RVA = "0x483B8B0", Offset = "0x483B8B0", VA = "0x483B8B0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000030")]
		public Vector4 shoSegmentA
		{
			[Token(Token = "0x60001E4")]
			[Address(RVA = "0x483B8F0", Offset = "0x483B8F0", VA = "0x483B8F0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000031")]
		public Vector4 shoSegmentB
		{
			[Token(Token = "0x60001E5")]
			[Address(RVA = "0x483B930", Offset = "0x483B930", VA = "0x483B930")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x483AEB0", Offset = "0x483AEB0", VA = "0x483AEB0")]
		internal Uniforms(HableCurve parent)
		{
		}
	}

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x20")]
	private readonly Segment[] m_Segments;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x28")]
	public readonly Uniforms uniforms;

	[Token(Token = "0x17000027")]
	public float whitePoint
	{
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x483AC30", Offset = "0x483AC30", VA = "0x483AC30")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x483AC40", Offset = "0x483AC40", VA = "0x483AC40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public float inverseWhitePoint
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x483AC50", Offset = "0x483AC50", VA = "0x483AC50")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x483AC60", Offset = "0x483AC60", VA = "0x483AC60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000029")]
	internal float x0
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x483AC70", Offset = "0x483AC70", VA = "0x483AC70")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x483AC80", Offset = "0x483AC80", VA = "0x483AC80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	internal float x1
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x483AC90", Offset = "0x483AC90", VA = "0x483AC90")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x483ACA0", Offset = "0x483ACA0", VA = "0x483ACA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x483ACB0", Offset = "0x483ACB0", VA = "0x483ACB0")]
	public HableCurve()
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x483AEE0", Offset = "0x483AEE0", VA = "0x483AEE0")]
	public float Eval(float x)
	{
		return default(float);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x483AFF0", Offset = "0x483AFF0", VA = "0x483AFF0")]
	public void Init(float toeStrength, float toeLength, float shoulderStrength, float shoulderLength, float shoulderAngle, float gamma)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x483B230", Offset = "0x483B230", VA = "0x483B230")]
	private void InitSegments(DirectParams srcParams)
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x483B770", Offset = "0x483B770", VA = "0x483B770")]
	private void SolveAB(out float lnA, out float B, float x0, float y0, float m)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x483B6F0", Offset = "0x483B6F0", VA = "0x483B6F0")]
	private void AsSlopeIntercept(out float m, out float b, float x0, float x1, float y0, float y1)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x483B730", Offset = "0x483B730", VA = "0x483B730")]
	private float EvalDerivativeLinearGamma(float m, float b, float g, float x)
	{
		return default(float);
	}
}
