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

[Token(Token = "0x20002DF")]
internal struct TextureId
{
	[Token(Token = "0x4000B31")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_Index;

	[Token(Token = "0x4000B32")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TextureId invalid;

	[Token(Token = "0x170003F9")]
	public int index
	{
		[Token(Token = "0x600137D")]
		[Address(RVA = "0x6CC18C0", Offset = "0x6CC08C0", VA = "0x6CC18C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600137C")]
	[Address(RVA = "0x6CC18B0", Offset = "0x6CC08B0", VA = "0x6CC18B0")]
	public TextureId(int index)
	{
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x6CC18D0", Offset = "0x6CC08D0", VA = "0x6CC18D0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x600137F")]
	[Address(RVA = "0x6CC18E0", Offset = "0x6CC08E0", VA = "0x6CC18E0")]
	public float ConvertToGpu()
	{
		return default(float);
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x6CC1930", Offset = "0x6CC0930", VA = "0x6CC1930", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001381")]
	[Address(RVA = "0x6CC19C0", Offset = "0x6CC09C0", VA = "0x6CC19C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001382")]
	[Address(RVA = "0x6CC19D0", Offset = "0x6CC09D0", VA = "0x6CC19D0")]
	public static bool operator ==(TextureId left, TextureId right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001383")]
	[Address(RVA = "0x6CC19E0", Offset = "0x6CC09E0", VA = "0x6CC19E0")]
	public static bool operator !=(TextureId left, TextureId right)
	{
		return default(bool);
	}
}
