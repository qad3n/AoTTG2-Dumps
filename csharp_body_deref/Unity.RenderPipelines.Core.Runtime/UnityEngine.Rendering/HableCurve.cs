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

[Token(Token = "0x20001BD")]
public class HableCurve
{
	[Token(Token = "0x20001BE")]
	public class Segment
	{
		[Token(Token = "0x40007B5")]
		[FieldOffset(Offset = "0x10")]
		public float offsetX;

		[Token(Token = "0x40007B6")]
		[FieldOffset(Offset = "0x14")]
		public float offsetY;

		[Token(Token = "0x40007B7")]
		[FieldOffset(Offset = "0x18")]
		public float scaleX;

		[Token(Token = "0x40007B8")]
		[FieldOffset(Offset = "0x1C")]
		public float scaleY;

		[Token(Token = "0x40007B9")]
		[FieldOffset(Offset = "0x20")]
		public float lnA;

		[Token(Token = "0x40007BA")]
		[FieldOffset(Offset = "0x24")]
		public float B;

		[Token(Token = "0x6000D09")]
		[Address(RVA = "0x4C00A20", Offset = "0x4C00A20", VA = "0x4C00A20")]
		public float Eval(float x)
		{
			return default(float);
		}

		[Token(Token = "0x6000D0A")]
		[Address(RVA = "0x4C00930", Offset = "0x4C00930", VA = "0x4C00930")]
		public Segment()
		{
		}
	}

	[Token(Token = "0x20001BF")]
	private struct DirectParams
	{
		[Token(Token = "0x40007BB")]
		[FieldOffset(Offset = "0x0")]
		internal float x0;

		[Token(Token = "0x40007BC")]
		[FieldOffset(Offset = "0x4")]
		internal float y0;

		[Token(Token = "0x40007BD")]
		[FieldOffset(Offset = "0x8")]
		internal float x1;

		[Token(Token = "0x40007BE")]
		[FieldOffset(Offset = "0xC")]
		internal float y1;

		[Token(Token = "0x40007BF")]
		[FieldOffset(Offset = "0x10")]
		internal float W;

		[Token(Token = "0x40007C0")]
		[FieldOffset(Offset = "0x14")]
		internal float overshootX;

		[Token(Token = "0x40007C1")]
		[FieldOffset(Offset = "0x18")]
		internal float overshootY;

		[Token(Token = "0x40007C2")]
		[FieldOffset(Offset = "0x1C")]
		internal float gamma;
	}

	[Token(Token = "0x20001C0")]
	public class Uniforms
	{
		[Token(Token = "0x40007C3")]
		[FieldOffset(Offset = "0x10")]
		private HableCurve parent;

		[Token(Token = "0x17000183")]
		public Vector4 curve
		{
			[Token(Token = "0x6000D0C")]
			[Address(RVA = "0x4C01210", Offset = "0x4C01210", VA = "0x4C01210")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000184")]
		public Vector4 toeSegmentA
		{
			[Token(Token = "0x6000D0D")]
			[Address(RVA = "0x4C01230", Offset = "0x4C01230", VA = "0x4C01230")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000185")]
		public Vector4 toeSegmentB
		{
			[Token(Token = "0x6000D0E")]
			[Address(RVA = "0x4C01270", Offset = "0x4C01270", VA = "0x4C01270")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000186")]
		public Vector4 midSegmentA
		{
			[Token(Token = "0x6000D0F")]
			[Address(RVA = "0x4C012B0", Offset = "0x4C012B0", VA = "0x4C012B0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000187")]
		public Vector4 midSegmentB
		{
			[Token(Token = "0x6000D10")]
			[Address(RVA = "0x4C012F0", Offset = "0x4C012F0", VA = "0x4C012F0")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000188")]
		public Vector4 shoSegmentA
		{
			[Token(Token = "0x6000D11")]
			[Address(RVA = "0x4C01330", Offset = "0x4C01330", VA = "0x4C01330")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000189")]
		public Vector4 shoSegmentB
		{
			[Token(Token = "0x6000D12")]
			[Address(RVA = "0x4C01370", Offset = "0x4C01370", VA = "0x4C01370")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x6000D0B")]
		[Address(RVA = "0x4C00940", Offset = "0x4C00940", VA = "0x4C00940")]
		internal Uniforms(HableCurve parent)
		{
		}
	}

	[Token(Token = "0x40007B3")]
	[FieldOffset(Offset = "0x20")]
	public readonly Segment[] segments;

	[Token(Token = "0x40007B4")]
	[FieldOffset(Offset = "0x28")]
	public readonly Uniforms uniforms;

	[Token(Token = "0x1700017F")]
	public float whitePoint
	{
		[Token(Token = "0x6000CFA")]
		[Address(RVA = "0x4C006C0", Offset = "0x4C006C0", VA = "0x4C006C0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000CFB")]
		[Address(RVA = "0x4C006D0", Offset = "0x4C006D0", VA = "0x4C006D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000180")]
	public float inverseWhitePoint
	{
		[Token(Token = "0x6000CFC")]
		[Address(RVA = "0x4C006E0", Offset = "0x4C006E0", VA = "0x4C006E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000CFD")]
		[Address(RVA = "0x4C006F0", Offset = "0x4C006F0", VA = "0x4C006F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000181")]
	public float x0
	{
		[Token(Token = "0x6000CFE")]
		[Address(RVA = "0x4C00700", Offset = "0x4C00700", VA = "0x4C00700")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000CFF")]
		[Address(RVA = "0x4C00710", Offset = "0x4C00710", VA = "0x4C00710")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000182")]
	public float x1
	{
		[Token(Token = "0x6000D00")]
		[Address(RVA = "0x4C00720", Offset = "0x4C00720", VA = "0x4C00720")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000D01")]
		[Address(RVA = "0x4C00730", Offset = "0x4C00730", VA = "0x4C00730")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x4C00740", Offset = "0x4C00740", VA = "0x4C00740")]
	public HableCurve()
	{
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x4C00970", Offset = "0x4C00970", VA = "0x4C00970")]
	public float Eval(float x)
	{
		return default(float);
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x4C00A80", Offset = "0x4C00A80", VA = "0x4C00A80")]
	public void Init(float toeStrength, float toeLength, float shoulderStrength, float shoulderLength, float shoulderAngle, float gamma)
	{
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x4C00C70", Offset = "0x4C00C70", VA = "0x4C00C70")]
	private void InitSegments(DirectParams srcParams)
	{
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x4C011B0", Offset = "0x4C011B0", VA = "0x4C011B0")]
	private void SolveAB(out float lnA, out float B, float x0, float y0, float m)
	{
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x4C01130", Offset = "0x4C01130", VA = "0x4C01130")]
	private void AsSlopeIntercept(out float m, out float b, float x0, float x1, float y0, float y1)
	{
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x4C01170", Offset = "0x4C01170", VA = "0x4C01170")]
	private float EvalDerivativeLinearGamma(float m, float b, float g, float x)
	{
		return default(float);
	}
}
