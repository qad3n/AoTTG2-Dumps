// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShaderBitArray
// Update status: NEW in this game update
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
		[Address(RVA = "0x2C92C20", Offset = "0x2C91220", VA = "0x182C92C20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022D")]
	public int bitCapacity
	{
		[Token(Token = "0x6000907")]
		[Address(RVA = "0x2C92C00", Offset = "0x2C91200", VA = "0x182C92C00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022E")]
	public float[] data
	{
		[Token(Token = "0x6000908")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022F")]
	public bool this[int index]
	{
		[Token(Token = "0x600090C")]
		[Address(RVA = "0x2C92BB0", Offset = "0x2C911B0", VA = "0x182C92BB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600090D")]
		[Address(RVA = "0x2C92C30", Offset = "0x2C91230", VA = "0x182C92C30")]
		set
		{
		}
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x2C92950", Offset = "0x2C90F50", VA = "0x182C92950")]
	public void Resize(int bitCount)
	{
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x2C928F0", Offset = "0x2C90EF0", VA = "0x182C928F0")]
	public void Clear()
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x2C92940", Offset = "0x2C90F40", VA = "0x182C92940")]
	private void GetElementIndexAndBitOffset(int index, out int elemIndex, out int bitOffset)
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x2C92A80", Offset = "0x2C91080", VA = "0x182C92A80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
