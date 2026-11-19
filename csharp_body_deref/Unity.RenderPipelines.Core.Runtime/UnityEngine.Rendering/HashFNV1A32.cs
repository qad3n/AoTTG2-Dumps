// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.HashFNV1A32
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x654CE10", Offset = "0x654BE10", VA = "0x654CE10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x654CC40", Offset = "0x654BC40", VA = "0x654CC40")]
	public static HashFNV1A32 Create()
	{
		return default(HashFNV1A32);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x654CC50", Offset = "0x654BC50", VA = "0x654CC50")]
	public void Append(in int input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x654CC60", Offset = "0x654BC60", VA = "0x654CC60")]
	public void Append(in uint input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x654CC70", Offset = "0x654BC70", VA = "0x654CC70")]
	public void Append(in bool input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x654CC90", Offset = "0x654BC90", VA = "0x654CC90")]
	public void Append(in float input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x654CCC0", Offset = "0x654BCC0", VA = "0x654CCC0")]
	public void Append(in double input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x654CD00", Offset = "0x654BD00", VA = "0x654CD00")]
	public void Append(in Vector2 input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x654CD40", Offset = "0x654BD40", VA = "0x654CD40")]
	public void Append(in Vector3 input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x654CDA0", Offset = "0x654BDA0", VA = "0x654CDA0")]
	public void Append(in Vector4 input)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E61")]
	public void Append<T>(T input) where T : struct
	{
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x654CE20", Offset = "0x654BE20", VA = "0x654CE20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
