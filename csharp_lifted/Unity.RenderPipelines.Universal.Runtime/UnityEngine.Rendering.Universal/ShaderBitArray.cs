// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShaderBitArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001A2")]
internal struct ShaderBitArray
{
	[Token(Token = "0x4000915")]
	private const int k_BitsPerElement = 32;

	[Token(Token = "0x4000916")]
	private const int k_ElementShift = 5;

	[Token(Token = "0x4000917")]
	private const int k_ElementMask = 31;

	[Token(Token = "0x4000918")]
	[FieldOffset(Offset = "0x0")]
	private float[] m_Data;

	[Token(Token = "0x1700022C")]
	public int elemLength
	{
		[Token(Token = "0x6000906")]
		[Address(RVA = "0x6689810", Offset = "0x6688810", VA = "0x6689810")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022D")]
	public int bitCapacity
	{
		[Token(Token = "0x6000907")]
		[Address(RVA = "0x6689820", Offset = "0x6688820", VA = "0x6689820")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022E")]
	public float[] data
	{
		[Token(Token = "0x6000908")]
		[Address(RVA = "0x6689840", Offset = "0x6688840", VA = "0x6689840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022F")]
	public bool this[int index]
	{
		[Token(Token = "0x600090C")]
		[Address(RVA = "0x6689A50", Offset = "0x6688A50", VA = "0x6689A50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600090D")]
		[Address(RVA = "0x6689A80", Offset = "0x6688A80", VA = "0x6689A80")]
		set
		{
		}
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x6689850", Offset = "0x6688850", VA = "0x6689850")]
	public void Resize(int bitCount)
	{
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x66899D0", Offset = "0x66889D0", VA = "0x66899D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x6689A40", Offset = "0x6688A40", VA = "0x6689A40")]
	private void GetElementIndexAndBitOffset(int index, out int elemIndex, out int bitOffset)
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x6689AC0", Offset = "0x6688AC0", VA = "0x6689AC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
