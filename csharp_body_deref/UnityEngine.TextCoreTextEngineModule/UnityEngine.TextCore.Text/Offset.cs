// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.Offset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000056")]
internal struct Offset
{
	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x0")]
	private float m_Left;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x4")]
	private float m_Right;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x8")]
	private float m_Top;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0xC")]
	private float m_Bottom;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Offset k_ZeroOffset;

	[Token(Token = "0x17000072")]
	public float left
	{
		[Token(Token = "0x600024B")]
		[Address(RVA = "0x2ECC6C0", Offset = "0x2ECACC0", VA = "0x182ECC6C0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000073")]
	public float right
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x2E97670", Offset = "0x2E95C70", VA = "0x182E97670")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000074")]
	public float top
	{
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x2E97660", Offset = "0x2E95C60", VA = "0x182E97660")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000075")]
	public float bottom
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x2EAE460", Offset = "0x2EACA60", VA = "0x182EAE460")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000076")]
	public static Offset zero
	{
		[Token(Token = "0x600024F")]
		[Address(RVA = "0x30431E0", Offset = "0x30417E0", VA = "0x1830431E0")]
		get
		{
			return default(Offset);
		}
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x298BAD0", Offset = "0x298A0D0", VA = "0x18298BAD0")]
	public Offset(float left, float right, float top, float bottom)
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x25B49C0", Offset = "0x25B2FC0", VA = "0x1825B49C0")]
	public static bool operator ==(Offset lhs, Offset rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x3043240", Offset = "0x3041840", VA = "0x183043240")]
	public static Offset operator *(Offset a, float b)
	{
		return default(Offset);
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x3043150", Offset = "0x3041750", VA = "0x183043150", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x30430F0", Offset = "0x30416F0", VA = "0x1830430F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
