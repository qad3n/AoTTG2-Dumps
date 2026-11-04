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
		[Address(RVA = "0x2B60CE0", Offset = "0x2B5F2E0", VA = "0x182B60CE0")]
		public float Eval(float x)
		{
			return default(float);
		}

		[Token(Token = "0x6000E4E")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
			[Address(RVA = "0x2B64250", Offset = "0x2B62850", VA = "0x182B64250")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x170001D1")]
		public Vector4 toeSegmentA
		{
			[Token(Token = "0x6000E51")]
			[Address(RVA = "0x2B64470", Offset = "0x2B62A70", VA = "0x182B64470")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x170001D2")]
		public Vector4 toeSegmentB
		{
			[Token(Token = "0x6000E52")]
			[Address(RVA = "0x2B644F0", Offset = "0x2B62AF0", VA = "0x182B644F0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x170001D3")]
		public Vector4 midSegmentA
		{
			[Token(Token = "0x6000E53")]
			[Address(RVA = "0x2B64290", Offset = "0x2B62890", VA = "0x182B64290")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x170001D4")]
		public Vector4 midSegmentB
		{
			[Token(Token = "0x6000E54")]
			[Address(RVA = "0x2B64310", Offset = "0x2B62910", VA = "0x182B64310")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x170001D5")]
		public Vector4 shoSegmentA
		{
			[Token(Token = "0x6000E55")]
			[Address(RVA = "0x2B64380", Offset = "0x2B62980", VA = "0x182B64380")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x170001D6")]
		public Vector4 shoSegmentB
		{
			[Token(Token = "0x6000E56")]
			[Address(RVA = "0x2B64400", Offset = "0x2B62A00", VA = "0x182B64400")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x6000E4F")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
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
		[Address(RVA = "0x5606A0", Offset = "0x55ECA0", VA = "0x1805606A0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E3F")]
		[Address(RVA = "0x5606B0", Offset = "0x55ECB0", VA = "0x1805606B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001CD")]
	public float inverseWhitePoint
	{
		[Token(Token = "0x6000E40")]
		[Address(RVA = "0x15477E0", Offset = "0x1545DE0", VA = "0x1815477E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E41")]
		[Address(RVA = "0x2B5B5E0", Offset = "0x2B59BE0", VA = "0x182B5B5E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001CE")]
	public float x0
	{
		[Token(Token = "0x6000E42")]
		[Address(RVA = "0x584FF0", Offset = "0x5835F0", VA = "0x180584FF0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E43")]
		[Address(RVA = "0x585060", Offset = "0x583660", VA = "0x180585060")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001CF")]
	public float x1
	{
		[Token(Token = "0x6000E44")]
		[Address(RVA = "0xE8F460", Offset = "0xE8DA60", VA = "0x180E8F460")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E45")]
		[Address(RVA = "0x2B5B5F0", Offset = "0x2B59BF0", VA = "0x182B5B5F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x2B5B4B0", Offset = "0x2B59AB0", VA = "0x182B5B4B0")]
	public HableCurve()
	{
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x2B5ACF0", Offset = "0x2B592F0", VA = "0x182B5ACF0")]
	public float Eval(float x)
	{
		return default(float);
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x2B5B270", Offset = "0x2B59870", VA = "0x182B5B270")]
	public void Init(float toeStrength, float toeLength, float shoulderStrength, float shoulderLength, float shoulderAngle, float gamma)
	{
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x2B5AD90", Offset = "0x2B59390", VA = "0x182B5AD90")]
	private void InitSegments(DirectParams srcParams)
	{
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x2B5B440", Offset = "0x2B59A40", VA = "0x182B5B440")]
	private void SolveAB(out float lnA, out float B, float x0, float y0, float m)
	{
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x2B5AC40", Offset = "0x2B59240", VA = "0x182B5AC40")]
	private void AsSlopeIntercept(out float m, out float b, float x0, float x1, float y0, float y1)
	{
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x2B5ACA0", Offset = "0x2B592A0", VA = "0x182B5ACA0")]
	private float EvalDerivativeLinearGamma(float m, float b, float g, float x)
	{
		return default(float);
	}
}
