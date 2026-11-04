// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NotBurstCompatible.Extensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/Extensions.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Collections.NotBurstCompatible;

[Token(Token = "0x20000FB")]
public static class Extensions
{
	[Token(Token = "0x6000AD8")]
	[ExcludeFromBurstCompatTesting("Returns managed array")]
	public static T[] ToArray<T>(this NativeHashSet<T> set) where T : struct, IEquatable<T>
	{
		return null;
	}

	[Token(Token = "0x6000AD9")]
	[ExcludeFromBurstCompatTesting("Returns managed array")]
	public static T[] ToArray<T>(this NativeParallelHashSet<T> set) where T : struct, IEquatable<T>
	{
		return null;
	}

	[Token(Token = "0x6000ADA")]
	[ExcludeFromBurstCompatTesting("Returns managed array")]
	public static T[] ToArrayNBC<T>(this NativeList<T> list) where T : struct
	{
		return null;
	}

	[Token(Token = "0x6000ADB")]
	[ExcludeFromBurstCompatTesting("Takes managed array")]
	public static void CopyFromNBC<T>(this NativeList<T> list, T[] array) where T : struct
	{
	}
}
