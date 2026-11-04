// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextureId
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x32B6970", Offset = "0x32B4F70", VA = "0x1832B6970")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600137C")]
	[Address(RVA = "0x32B6960", Offset = "0x32B4F60", VA = "0x1832B6960")]
	public TextureId(int index)
	{
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x32B6910", Offset = "0x32B4F10", VA = "0x1832B6910")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x600137F")]
	[Address(RVA = "0x32B6820", Offset = "0x32B4E20", VA = "0x1832B6820")]
	public float ConvertToGpu()
	{
		return default(float);
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x32B6870", Offset = "0x32B4E70", VA = "0x1832B6870", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001381")]
	[Address(RVA = "0x2ED9490", Offset = "0x2ED7A90", VA = "0x182ED9490", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001382")]
	[Address(RVA = "0x2F24CA0", Offset = "0x2F232A0", VA = "0x182F24CA0")]
	public static bool operator ==(TextureId left, TextureId right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001383")]
	[Address(RVA = "0x32B6980", Offset = "0x32B4F80", VA = "0x1832B6980")]
	public static bool operator !=(TextureId left, TextureId right)
	{
		return default(bool);
	}
}
