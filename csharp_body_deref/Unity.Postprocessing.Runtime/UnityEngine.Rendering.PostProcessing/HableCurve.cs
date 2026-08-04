// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.HableCurve
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B60080", Offset = "0x4B60080", VA = "0x4B60080")]
		public float Eval(float x)
		{
			return default(float);
		}

		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x4B5FF90", Offset = "0x4B5FF90", VA = "0x4B5FF90")]
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
			[Address(RVA = "0x4B608C0", Offset = "0x4B608C0", VA = "0x4B608C0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x1700002C")]
		public Vector4 toeSegmentA
		{
			[Token(Token = "0x60001E0")]
			[Address(RVA = "0x4B608E0", Offset = "0x4B608E0", VA = "0x4B608E0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x1700002D")]
		public Vector4 toeSegmentB
		{
			[Token(Token = "0x60001E1")]
			[Address(RVA = "0x4B60920", Offset = "0x4B60920", VA = "0x4B60920")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x1700002E")]
		public Vector4 midSegmentA
		{
			[Token(Token = "0x60001E2")]
			[Address(RVA = "0x4B60960", Offset = "0x4B60960", VA = "0x4B60960")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x1700002F")]
		public Vector4 midSegmentB
		{
			[Token(Token = "0x60001E3")]
			[Address(RVA = "0x4B609A0", Offset = "0x4B609A0", VA = "0x4B609A0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000030")]
		public Vector4 shoSegmentA
		{
			[Token(Token = "0x60001E4")]
			[Address(RVA = "0x4B609E0", Offset = "0x4B609E0", VA = "0x4B609E0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000031")]
		public Vector4 shoSegmentB
		{
			[Token(Token = "0x60001E5")]
			[Address(RVA = "0x4B60A20", Offset = "0x4B60A20", VA = "0x4B60A20")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x4B5FFA0", Offset = "0x4B5FFA0", VA = "0x4B5FFA0")]
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
		[Address(RVA = "0x4B5FD20", Offset = "0x4B5FD20", VA = "0x4B5FD20")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x4B5FD30", Offset = "0x4B5FD30", VA = "0x4B5FD30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public float inverseWhitePoint
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x4B5FD40", Offset = "0x4B5FD40", VA = "0x4B5FD40")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x4B5FD50", Offset = "0x4B5FD50", VA = "0x4B5FD50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000029")]
	internal float x0
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x4B5FD60", Offset = "0x4B5FD60", VA = "0x4B5FD60")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x4B5FD70", Offset = "0x4B5FD70", VA = "0x4B5FD70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	internal float x1
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x4B5FD80", Offset = "0x4B5FD80", VA = "0x4B5FD80")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x4B5FD90", Offset = "0x4B5FD90", VA = "0x4B5FD90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4B5FDA0", Offset = "0x4B5FDA0", VA = "0x4B5FDA0")]
	public HableCurve()
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4B5FFD0", Offset = "0x4B5FFD0", VA = "0x4B5FFD0")]
	public float Eval(float x)
	{
		return default(float);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4B600E0", Offset = "0x4B600E0", VA = "0x4B600E0")]
	public void Init(float toeStrength, float toeLength, float shoulderStrength, float shoulderLength, float shoulderAngle, float gamma)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4B60320", Offset = "0x4B60320", VA = "0x4B60320")]
	private void InitSegments(DirectParams srcParams)
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4B60860", Offset = "0x4B60860", VA = "0x4B60860")]
	private void SolveAB(out float lnA, out float B, float x0, float y0, float m)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4B607E0", Offset = "0x4B607E0", VA = "0x4B607E0")]
	private void AsSlopeIntercept(out float m, out float b, float x0, float x1, float y0, float y1)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4B60820", Offset = "0x4B60820", VA = "0x4B60820")]
	private float EvalDerivativeLinearGamma(float m, float b, float g, float x)
	{
		return default(float);
	}
}
