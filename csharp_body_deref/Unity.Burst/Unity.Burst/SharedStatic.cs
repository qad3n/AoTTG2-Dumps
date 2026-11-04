// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.SharedStatic
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Unity.Burst;

[Token(Token = "0x200002D")]
public readonly struct SharedStatic<T> where T : struct
{
	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x0")]
	private unsafe readonly void* _buffer;

	[Token(Token = "0x400017C")]
	private const uint DefaultAlignment = 16u;

	[Token(Token = "0x1700001B")]
	public unsafe ref T Data
	{
		[Token(Token = "0x60000E4")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x1700001C")]
	public unsafe void* UnsafeDataPointer
	{
		[Token(Token = "0x60000E5")]
		get
		{
			//IL_0002: Expected I, but got O
			return (void*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x60000E3")]
	private unsafe SharedStatic(void* buffer)
	{
	}

	[Token(Token = "0x60000E6")]
	public static SharedStatic<T> GetOrCreate<TContext>(uint alignment = 0u)
	{
		return default(SharedStatic<T>);
	}

	[Token(Token = "0x60000E7")]
	public static SharedStatic<T> GetOrCreate<TContext, TSubContext>(uint alignment = 0u)
	{
		return default(SharedStatic<T>);
	}

	[Token(Token = "0x60000E8")]
	public static SharedStatic<T> GetOrCreateUnsafe(uint alignment, long hashCode, long subHashCode)
	{
		return default(SharedStatic<T>);
	}

	[Token(Token = "0x60000E9")]
	public static SharedStatic<T> GetOrCreatePartiallyUnsafeWithHashCode<TSubContext>(uint alignment, long hashCode)
	{
		return default(SharedStatic<T>);
	}

	[Token(Token = "0x60000EA")]
	public static SharedStatic<T> GetOrCreatePartiallyUnsafeWithSubHashCode<TContext>(uint alignment, long subHashCode)
	{
		return default(SharedStatic<T>);
	}

	[Token(Token = "0x60000EB")]
	public static SharedStatic<T> GetOrCreate(Type contextType, uint alignment = 0u)
	{
		return default(SharedStatic<T>);
	}

	[Token(Token = "0x60000EC")]
	public static SharedStatic<T> GetOrCreate(Type contextType, Type subContextType, uint alignment = 0u)
	{
		return default(SharedStatic<T>);
	}

	[Token(Token = "0x60000ED")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private static void CheckIf_T_IsUnmanagedOrThrow()
	{
	}
}
[Token(Token = "0x200002E")]
internal static class SharedStatic
{
	[Token(Token = "0x200002F")]
	internal class PreserveAttribute : Attribute
	{
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public PreserveAttribute()
		{
		}
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x297BFB0", Offset = "0x297A5B0", VA = "0x18297BFB0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private static void CheckSizeOf(uint sizeOf)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x297BF50", Offset = "0x297A550", VA = "0x18297BF50")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private unsafe static void CheckResult(void* result)
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x297C030", Offset = "0x297A630", VA = "0x18297C030")]
	[Preserve]
	public unsafe static void* GetOrCreateSharedStaticInternal(long getHashCode64, long getSubHashCode64, uint sizeOf, uint alignment)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}
}
