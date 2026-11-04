// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.NotBurstCompatible.Extensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/Extensions.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe.NotBurstCompatible;

[Token(Token = "0x200014A")]
public static class Extensions
{
	[Token(Token = "0x6000DD7")]
	public static T[] ToArray<T>(this UnsafeParallelHashSet<T> set) where T : struct, IEquatable<T>
	{
		return null;
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x29B3750", Offset = "0x29B1D50", VA = "0x1829B3750")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static void AddNBC(this ref UnsafeAppendBuffer buffer, string value)
	{
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x29B3900", Offset = "0x29B1F00", VA = "0x1829B3900")]
	[ExcludeFromBurstCompatTesting("Returns managed array")]
	public static byte[] ToBytesNBC(this ref UnsafeAppendBuffer buffer)
	{
		return null;
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x29B3800", Offset = "0x29B1E00", VA = "0x1829B3800")]
	[ExcludeFromBurstCompatTesting("Managed string out argument")]
	public static void ReadNextNBC(this ref UnsafeAppendBuffer.Reader reader, out string value)
	{
	}
}
