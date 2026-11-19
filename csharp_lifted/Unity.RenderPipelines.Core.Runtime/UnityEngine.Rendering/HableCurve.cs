// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.HableCurve
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001DA")]
public class HableCurve
{
	[Token(Token = "0x20001DB")]
	public class Segment
	{
		[Token(Token = "0x4000938")]
		[FieldOffset(Offset = "0x10")]
		public float offsetX;

		[Token(Token = "0x4000939")]
		[FieldOffset(Offset = "0x14")]
		public float offsetY;

		[Token(Token = "0x400093A")]
		[FieldOffset(Offset = "0x18")]
		public float scaleX;

		[Token(Token = "0x400093B")]
		[FieldOffset(Offset = "0x1C")]
		public float scaleY;

		[Token(Token = "0x400093C")]
		[FieldOffset(Offset = "0x20")]
		public float lnA;

		[Token(Token = "0x400093D")]
		[FieldOffset(Offset = "0x24")]
		public float B;

		[Token(Token = "0x6000E4D")]
		[Address(RVA = "0x654C2D0", Offset = "0x654B2D0", VA = "0x654C2D0")]
		public float Eval(float x)
		{
			return default(float);
		}

		[Token(Token = "0x6000E4E")]
		[Address(RVA = "0x654C1E0", Offset = "0x654B1E0", VA = "0x654C1E0")]
		public Segment()
		{
		}
	}

	[Token(Token = "0x20001DC")]
	private struct DirectParams
	{
		[Token(Token = "0x400093E")]
		[FieldOffset(Offset = "0x0")]
		internal float x0;

		[Token(Token = "0x400093F")]
		[FieldOffset(Offset = "0x4")]
		internal float y0;

		[Token(Token = "0x4000940")]
		[FieldOffset(Offset = "0x8")]
		internal float x1;

		[Token(Token = "0x4000941")]
		[FieldOffset(Offset = "0xC")]
		internal float y1;

		[Token(Token = "0x4000942")]
		[FieldOffset(Offset = "0x10")]
		internal float W;

		[Token(Token = "0x4000943")]
		[FieldOffset(Offset = "0x14")]
		internal float overshootX;

		[Token(Token = "0x4000944")]
		[FieldOffset(Offset = "0x18")]
		internal float overshootY;

		[Token(Token = "0x4000945")]
		[FieldOffset(Offset = "0x1C")]
		internal float gamma;
	}

	[Token(Token = "0x20001DD")]
	public class Uniforms
	{
		[Token(Token = "0x4000946")]
		[FieldOffset(Offset = "0x10")]
		private HableCurve parent;

		[Token(Token = "0x170001D0")]
		public Vector4 curve
		{
			[Token(Token = "0x6000E50")]
			[Address(RVA = "0x654CA60", Offset = "0x654BA60", VA = "0x654CA60")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x170001D1")]
		public Vector4 toeSegmentA
		{
			[Token(Token = "0x6000E51")]
			[Address(RVA = "0x654CA80", Offset = "0x654BA80", VA = "0x654CA80")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x170001D2")]
		public Vector4 toeSegmentB
		{
			[Token(Token = "0x6000E52")]
			[Address(RVA = "0x654CAC0", Offset = "0x654BAC0", VA = "0x654CAC0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x170001D3")]
		public Vector4 midSegmentA
		{
			[Token(Token = "0x6000E53")]
			[Address(RVA = "0x654CB00", Offset = "0x654BB00", VA = "0x654CB00")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x170001D4")]
		public Vector4 midSegmentB
		{
			[Token(Token = "0x6000E54")]
			[Address(RVA = "0x654CB40", Offset = "0x654BB40", VA = "0x654CB40")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x170001D5")]
		public Vector4 shoSegmentA
		{
			[Token(Token = "0x6000E55")]
			[Address(RVA = "0x654CB80", Offset = "0x654BB80", VA = "0x654CB80")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x170001D6")]
		public Vector4 shoSegmentB
		{
			[Token(Token = "0x6000E56")]
			[Address(RVA = "0x654CBC0", Offset = "0x654BBC0", VA = "0x654CBC0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x6000E4F")]
		[Address(RVA = "0x654C1F0", Offset = "0x654B1F0", VA = "0x654C1F0")]
		internal Uniforms(HableCurve parent)
		{
		}
	}

	[Token(Token = "0x4000936")]
	[FieldOffset(Offset = "0x20")]
	public readonly Segment[] segments;

	[Token(Token = "0x4000937")]
	[FieldOffset(Offset = "0x28")]
	public readonly Uniforms uniforms;

	[Token(Token = "0x170001CC")]
	public float whitePoint
	{
		[Token(Token = "0x6000E3E")]
		[Address(RVA = "0x654BF70", Offset = "0x654AF70", VA = "0x654BF70")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E3F")]
		[Address(RVA = "0x654BF80", Offset = "0x654AF80", VA = "0x654BF80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001CD")]
	public float inverseWhitePoint
	{
		[Token(Token = "0x6000E40")]
		[Address(RVA = "0x654BF90", Offset = "0x654AF90", VA = "0x654BF90")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E41")]
		[Address(RVA = "0x654BFA0", Offset = "0x654AFA0", VA = "0x654BFA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001CE")]
	public float x0
	{
		[Token(Token = "0x6000E42")]
		[Address(RVA = "0x654BFB0", Offset = "0x654AFB0", VA = "0x654BFB0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E43")]
		[Address(RVA = "0x654BFC0", Offset = "0x654AFC0", VA = "0x654BFC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001CF")]
	public float x1
	{
		[Token(Token = "0x6000E44")]
		[Address(RVA = "0x654BFD0", Offset = "0x654AFD0", VA = "0x654BFD0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E45")]
		[Address(RVA = "0x654BFE0", Offset = "0x654AFE0", VA = "0x654BFE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x654BFF0", Offset = "0x654AFF0", VA = "0x654BFF0")]
	public HableCurve()
	{
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x654C220", Offset = "0x654B220", VA = "0x654C220")]
	public float Eval(float x)
	{
		return default(float);
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x654C330", Offset = "0x654B330", VA = "0x654C330")]
	public void Init(float toeStrength, float toeLength, float shoulderStrength, float shoulderLength, float shoulderAngle, float gamma)
	{
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x654C4F0", Offset = "0x654B4F0", VA = "0x654C4F0")]
	private void InitSegments(DirectParams srcParams)
	{
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x654CA00", Offset = "0x654BA00", VA = "0x654CA00")]
	private void SolveAB(out float lnA, out float B, float x0, float y0, float m)
	{
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x654C980", Offset = "0x654B980", VA = "0x654C980")]
	private void AsSlopeIntercept(out float m, out float b, float x0, float x1, float y0, float y1)
	{
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x654C9C0", Offset = "0x654B9C0", VA = "0x654C9C0")]
	private float EvalDerivativeLinearGamma(float m, float b, float g, float x)
	{
		return default(float);
	}
}
