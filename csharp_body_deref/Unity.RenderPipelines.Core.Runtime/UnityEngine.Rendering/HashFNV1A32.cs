// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.HashFNV1A32
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001DF")]
internal ref struct HashFNV1A32
{
	[Token(Token = "0x4000947")]
	private const uint k_Prime = 16777619u;

	[Token(Token = "0x4000948")]
	private const uint k_OffsetBasis = 2166136261u;

	[Token(Token = "0x4000949")]
	[FieldOffset(Offset = "0x0")]
	private uint m_Hash;

	[Token(Token = "0x170001D7")]
	public int value
	{
		[Token(Token = "0x6000E62")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x2B5B850", Offset = "0x2B59E50", VA = "0x182B5B850")]
	public static HashFNV1A32 Create()
	{
		return default(HashFNV1A32);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x2B5B6A0", Offset = "0x2B59CA0", VA = "0x182B5B6A0")]
	public void Append(in int input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x2B5B6A0", Offset = "0x2B59CA0", VA = "0x182B5B6A0")]
	public void Append(in uint input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x2B5B7A0", Offset = "0x2B59DA0", VA = "0x182B5B7A0")]
	public void Append(in bool input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x2B5B660", Offset = "0x2B59C60", VA = "0x182B5B660")]
	public void Append(in float input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x2B5B7C0", Offset = "0x2B59DC0", VA = "0x182B5B7C0")]
	public void Append(in double input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x2B5B800", Offset = "0x2B59E00", VA = "0x182B5B800")]
	public void Append(in Vector2 input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x2B5B6B0", Offset = "0x2B59CB0", VA = "0x182B5B6B0")]
	public void Append(in Vector3 input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x2B5B720", Offset = "0x2B59D20", VA = "0x182B5B720")]
	public void Append(in Vector4 input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E61")]
	public void Append<T>(T input) where T : struct
	{
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
