// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.BurstLike
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000051")]
[UnityEngine.Bindings.StaticAccessor("BurstLike", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/BurstLike/BurstLike.bindings.h")]
internal static class BurstLike
{
	[Token(Token = "0x2000052")]
	internal readonly struct SharedStatic<T> where T : struct
	{
		[Token(Token = "0x40000E0")]
		[FieldOffset(Offset = "0x0")]
		private unsafe readonly void* _buffer;

		[Token(Token = "0x1700001F")]
		public unsafe ref T Data
		{
			[Token(Token = "0x60000BC")]
			get
			{
				return ref *(T*)null;
			}
		}

		[Token(Token = "0x60000BB")]
		private unsafe SharedStatic(void* buffer)
		{
		}

		[Token(Token = "0x60000BD")]
		public static SharedStatic<T> GetOrCreate<TContext>(uint alignment = 0u)
		{
			return default(SharedStatic<T>);
		}
	}

	[Token(Token = "0x2000053")]
	internal static class SharedStatic
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x4DAD700", Offset = "0x4DAD700", VA = "0x4DAD700")]
		public unsafe static void* GetOrCreateSharedStaticInternal(long getHashCode64, long getSubHashCode64, uint sizeOf, uint alignment)
		{
			//IL_0002: Expected I, but got O
			return (void*)unchecked((nint)null);
		}
	}
}
