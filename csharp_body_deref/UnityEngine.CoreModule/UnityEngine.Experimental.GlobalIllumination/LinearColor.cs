// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.LinearColor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x20003E3")]
public struct LinearColor
{
	[Token(Token = "0x4000CDB")]
	[FieldOffset(Offset = "0x0")]
	private float m_red;

	[Token(Token = "0x4000CDC")]
	[FieldOffset(Offset = "0x4")]
	private float m_green;

	[Token(Token = "0x4000CDD")]
	[FieldOffset(Offset = "0x8")]
	private float m_blue;

	[Token(Token = "0x4000CDE")]
	[FieldOffset(Offset = "0xC")]
	private float m_intensity;

	[Token(Token = "0x170003CF")]
	public float red
	{
		[Token(Token = "0x60017AC")]
		[Address(RVA = "0x2ECC6C0", Offset = "0x2ECACC0", VA = "0x182ECC6C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60017AD")]
		[Address(RVA = "0x2F679C0", Offset = "0x2F65FC0", VA = "0x182F679C0")]
		set
		{
		}
	}

	[Token(Token = "0x170003D0")]
	public float green
	{
		[Token(Token = "0x60017AE")]
		[Address(RVA = "0x2E97670", Offset = "0x2E95C70", VA = "0x182E97670")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60017AF")]
		[Address(RVA = "0x2F67900", Offset = "0x2F65F00", VA = "0x182F67900")]
		set
		{
		}
	}

	[Token(Token = "0x170003D1")]
	public float blue
	{
		[Token(Token = "0x60017B0")]
		[Address(RVA = "0x2E97660", Offset = "0x2E95C60", VA = "0x182E97660")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60017B1")]
		[Address(RVA = "0x2F67840", Offset = "0x2F65E40", VA = "0x182F67840")]
		set
		{
		}
	}

	[Token(Token = "0x60017B2")]
	[Address(RVA = "0x2F674F0", Offset = "0x2F65AF0", VA = "0x182F674F0")]
	public static LinearColor Convert(Color color, float intensity)
	{
		return default(LinearColor);
	}

	[Token(Token = "0x60017B3")]
	[Address(RVA = "0x2F025C0", Offset = "0x2F00BC0", VA = "0x182F025C0")]
	public static LinearColor Black()
	{
		return default(LinearColor);
	}
}
