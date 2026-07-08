using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001C2")]
public class HableCurve
{
	[Token(Token = "0x20001C3")]
	public class Segment
	{
		[Token(Token = "0x40007C7")]
		[FieldOffset(Offset = "0x10")]
		public float offsetX;

		[Token(Token = "0x40007C8")]
		[FieldOffset(Offset = "0x14")]
		public float offsetY;

		[Token(Token = "0x40007C9")]
		[FieldOffset(Offset = "0x18")]
		public float scaleX;

		[Token(Token = "0x40007CA")]
		[FieldOffset(Offset = "0x1C")]
		public float scaleY;

		[Token(Token = "0x40007CB")]
		[FieldOffset(Offset = "0x20")]
		public float lnA;

		[Token(Token = "0x40007CC")]
		[FieldOffset(Offset = "0x24")]
		public float B;

		[Token(Token = "0x6000D13")]
		[Address(RVA = "0x48DC800", Offset = "0x48DC800", VA = "0x48DC800")]
		public float Eval(float x)
		{
			return default(float);
		}

		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x48DC710", Offset = "0x48DC710", VA = "0x48DC710")]
		public Segment()
		{
		}
	}

	[Token(Token = "0x20001C4")]
	private struct DirectParams
	{
		[Token(Token = "0x40007CD")]
		[FieldOffset(Offset = "0x0")]
		internal float x0;

		[Token(Token = "0x40007CE")]
		[FieldOffset(Offset = "0x4")]
		internal float y0;

		[Token(Token = "0x40007CF")]
		[FieldOffset(Offset = "0x8")]
		internal float x1;

		[Token(Token = "0x40007D0")]
		[FieldOffset(Offset = "0xC")]
		internal float y1;

		[Token(Token = "0x40007D1")]
		[FieldOffset(Offset = "0x10")]
		internal float W;

		[Token(Token = "0x40007D2")]
		[FieldOffset(Offset = "0x14")]
		internal float overshootX;

		[Token(Token = "0x40007D3")]
		[FieldOffset(Offset = "0x18")]
		internal float overshootY;

		[Token(Token = "0x40007D4")]
		[FieldOffset(Offset = "0x1C")]
		internal float gamma;
	}

	[Token(Token = "0x20001C5")]
	public class Uniforms
	{
		[Token(Token = "0x40007D5")]
		[FieldOffset(Offset = "0x10")]
		private HableCurve parent;

		[Token(Token = "0x17000183")]
		public Vector4 curve
		{
			[Token(Token = "0x6000D16")]
			[Address(RVA = "0x48DCFF0", Offset = "0x48DCFF0", VA = "0x48DCFF0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000184")]
		public Vector4 toeSegmentA
		{
			[Token(Token = "0x6000D17")]
			[Address(RVA = "0x48DD010", Offset = "0x48DD010", VA = "0x48DD010")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000185")]
		public Vector4 toeSegmentB
		{
			[Token(Token = "0x6000D18")]
			[Address(RVA = "0x48DD050", Offset = "0x48DD050", VA = "0x48DD050")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000186")]
		public Vector4 midSegmentA
		{
			[Token(Token = "0x6000D19")]
			[Address(RVA = "0x48DD090", Offset = "0x48DD090", VA = "0x48DD090")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000187")]
		public Vector4 midSegmentB
		{
			[Token(Token = "0x6000D1A")]
			[Address(RVA = "0x48DD0D0", Offset = "0x48DD0D0", VA = "0x48DD0D0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000188")]
		public Vector4 shoSegmentA
		{
			[Token(Token = "0x6000D1B")]
			[Address(RVA = "0x48DD110", Offset = "0x48DD110", VA = "0x48DD110")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000189")]
		public Vector4 shoSegmentB
		{
			[Token(Token = "0x6000D1C")]
			[Address(RVA = "0x48DD150", Offset = "0x48DD150", VA = "0x48DD150")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x6000D15")]
		[Address(RVA = "0x48DC720", Offset = "0x48DC720", VA = "0x48DC720")]
		internal Uniforms(HableCurve parent)
		{
		}
	}

	[Token(Token = "0x40007C5")]
	[FieldOffset(Offset = "0x20")]
	public readonly Segment[] segments;

	[Token(Token = "0x40007C6")]
	[FieldOffset(Offset = "0x28")]
	public readonly Uniforms uniforms;

	[Token(Token = "0x1700017F")]
	public float whitePoint
	{
		[Token(Token = "0x6000D04")]
		[Address(RVA = "0x48DC4A0", Offset = "0x48DC4A0", VA = "0x48DC4A0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000D05")]
		[Address(RVA = "0x48DC4B0", Offset = "0x48DC4B0", VA = "0x48DC4B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000180")]
	public float inverseWhitePoint
	{
		[Token(Token = "0x6000D06")]
		[Address(RVA = "0x48DC4C0", Offset = "0x48DC4C0", VA = "0x48DC4C0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000D07")]
		[Address(RVA = "0x48DC4D0", Offset = "0x48DC4D0", VA = "0x48DC4D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000181")]
	public float x0
	{
		[Token(Token = "0x6000D08")]
		[Address(RVA = "0x48DC4E0", Offset = "0x48DC4E0", VA = "0x48DC4E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000D09")]
		[Address(RVA = "0x48DC4F0", Offset = "0x48DC4F0", VA = "0x48DC4F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000182")]
	public float x1
	{
		[Token(Token = "0x6000D0A")]
		[Address(RVA = "0x48DC500", Offset = "0x48DC500", VA = "0x48DC500")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000D0B")]
		[Address(RVA = "0x48DC510", Offset = "0x48DC510", VA = "0x48DC510")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x48DC520", Offset = "0x48DC520", VA = "0x48DC520")]
	public HableCurve()
	{
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x48DC750", Offset = "0x48DC750", VA = "0x48DC750")]
	public float Eval(float x)
	{
		return default(float);
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x48DC860", Offset = "0x48DC860", VA = "0x48DC860")]
	public void Init(float toeStrength, float toeLength, float shoulderStrength, float shoulderLength, float shoulderAngle, float gamma)
	{
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x48DCA50", Offset = "0x48DCA50", VA = "0x48DCA50")]
	private void InitSegments(DirectParams srcParams)
	{
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x48DCF90", Offset = "0x48DCF90", VA = "0x48DCF90")]
	private void SolveAB(out float lnA, out float B, float x0, float y0, float m)
	{
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x48DCF10", Offset = "0x48DCF10", VA = "0x48DCF10")]
	private void AsSlopeIntercept(out float m, out float b, float x0, float x1, float y0, float y1)
	{
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x48DCF50", Offset = "0x48DCF50", VA = "0x48DCF50")]
	private float EvalDerivativeLinearGamma(float m, float b, float g, float x)
	{
		return default(float);
	}
}
