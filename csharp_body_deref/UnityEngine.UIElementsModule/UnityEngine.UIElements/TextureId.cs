// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextureId
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200025B")]
internal struct TextureId
{
	[Token(Token = "0x40008C3")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_Index;

	[Token(Token = "0x40008C4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TextureId invalid;

	[Token(Token = "0x17000303")]
	public int index
	{
		[Token(Token = "0x6000F8E")]
		[Address(RVA = "0x5076040", Offset = "0x5076040", VA = "0x5076040")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x5076030", Offset = "0x5076030", VA = "0x5076030")]
	public TextureId(int index)
	{
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x5076050", Offset = "0x5076050", VA = "0x5076050")]
	public float ConvertToGpu()
	{
		return default(float);
	}

	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x50760A0", Offset = "0x50760A0", VA = "0x50760A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x5076130", Offset = "0x5076130", VA = "0x5076130", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x5076140", Offset = "0x5076140", VA = "0x5076140")]
	public static bool operator ==(TextureId left, TextureId right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x5076150", Offset = "0x5076150", VA = "0x5076150")]
	public static bool operator !=(TextureId left, TextureId right)
	{
		return default(bool);
	}
}
