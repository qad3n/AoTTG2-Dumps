// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.Memory
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000081")]
[GenerateTestsForBurstCompatibility]
internal struct Memory
{
	[Token(Token = "0x2000082")]
	[GenerateTestsForBurstCompatibility]
	internal struct Unmanaged
	{
		[Token(Token = "0x2000083")]
		[GenerateTestsForBurstCompatibility]
		internal struct Array
		{
			[Token(Token = "0x60006E6")]
			[Address(RVA = "0x2994790", Offset = "0x2992D90", VA = "0x182994790")]
			private static bool IsCustom(AllocatorManager.AllocatorHandle allocator)
			{
				return default(bool);
			}

			[Token(Token = "0x60006E7")]
			[Address(RVA = "0x29B3020", Offset = "0x29B1620", VA = "0x1829B3020")]
			private unsafe static void* CustomResize(void* oldPointer, long oldCount, long newCount, AllocatorManager.AllocatorHandle allocator, long size, int align)
			{
				//IL_0002: Expected I, but got O
				return (void*)unchecked((nint)null);
			}

			[Token(Token = "0x60006E8")]
			[Address(RVA = "0x29B30E0", Offset = "0x29B16E0", VA = "0x1829B30E0")]
			internal unsafe static void* Resize(void* oldPointer, long oldCount, long newCount, AllocatorManager.AllocatorHandle allocator, long size, int align)
			{
				//IL_0002: Expected I, but got O
				return (void*)unchecked((nint)null);
			}

			[Token(Token = "0x60006E9")]
			[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
			internal unsafe static T* Resize<T>(T* oldPointer, long oldCount, long newCount, AllocatorManager.AllocatorHandle allocator) where T : struct
			{
				//IL_0002: Expected I, but got O
				return (T*)unchecked((nint)null);
			}

			[Token(Token = "0x60006EA")]
			[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
			internal unsafe static T* Allocate<T>(long count, AllocatorManager.AllocatorHandle allocator) where T : struct
			{
				//IL_0002: Expected I, but got O
				return (T*)unchecked((nint)null);
			}

			[Token(Token = "0x60006EB")]
			[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
			internal unsafe static void Free<T>(T* pointer, long count, AllocatorManager.AllocatorHandle allocator) where T : struct
			{
			}
		}

		[Token(Token = "0x60006E2")]
		[Address(RVA = "0x29BD840", Offset = "0x29BBE40", VA = "0x1829BD840")]
		internal unsafe static void* Allocate(long size, int align, AllocatorManager.AllocatorHandle allocator)
		{
			//IL_0002: Expected I, but got O
			return (void*)unchecked((nint)null);
		}

		[Token(Token = "0x60006E3")]
		[Address(RVA = "0x29BD870", Offset = "0x29BBE70", VA = "0x1829BD870")]
		internal unsafe static void Free(void* pointer, AllocatorManager.AllocatorHandle allocator)
		{
		}

		[Token(Token = "0x60006E4")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		internal unsafe static T* Allocate<T>(AllocatorManager.AllocatorHandle allocator) where T : struct
		{
			//IL_0002: Expected I, but got O
			return (T*)unchecked((nint)null);
		}

		[Token(Token = "0x60006E5")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		internal unsafe static void Free<T>(T* pointer, AllocatorManager.AllocatorHandle allocator) where T : struct
		{
		}
	}

	[Token(Token = "0x2000084")]
	[GenerateTestsForBurstCompatibility]
	internal struct Array
	{
		[Token(Token = "0x60006EC")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		internal unsafe static void Set<T>(T* pointer, long count, [Optional] T t) where T : struct
		{
		}

		[Token(Token = "0x60006ED")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		internal unsafe static void Clear<T>(T* pointer, long count) where T : struct
		{
		}

		[Token(Token = "0x60006EE")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		internal unsafe static void Copy<T>(T* dest, T* src, long count) where T : struct
		{
		}
	}

	[Token(Token = "0x40003A5")]
	internal const long k_MaximumRamSizeInBytes = 1099511627776L;

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x29B4C70", Offset = "0x29B3270", VA = "0x1829B4C70")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckByteCountIsReasonable(long size)
	{
	}
}
