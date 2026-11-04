// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeReference
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;

namespace Unity.Collections;

[Token(Token = "0x20000B9")]
[NativeContainer]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct NativeReference<T> : INativeDisposable, IDisposable, IEquatable<NativeReference<T>> where T : struct
{
	[Token(Token = "0x20000BA")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ReadOnly
	{
		[Token(Token = "0x40003E8")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		private unsafe readonly void* m_Data;

		[Token(Token = "0x17000106")]
		public T Value
		{
			[Token(Token = "0x60008FC")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x60008FB")]
		internal unsafe ReadOnly(void* data)
		{
		}
	}

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe void* m_Data;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x0")]
	internal AllocatorManager.AllocatorHandle m_AllocatorLabel;

	[Token(Token = "0x17000104")]
	public T Value
	{
		[Token(Token = "0x60008EC")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x60008ED")]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public readonly bool IsCreated
	{
		[Token(Token = "0x60008EE")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60008E9")]
	public NativeReference(AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
	{
	}

	[Token(Token = "0x60008EA")]
	public NativeReference(T value, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x60008EB")]
	private static void Allocate(AllocatorManager.AllocatorHandle allocator, out NativeReference<T> reference)
	{
	}

	[Token(Token = "0x60008EF")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60008F0")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60008F1")]
	public void CopyFrom(NativeReference<T> reference)
	{
	}

	[Token(Token = "0x60008F2")]
	public void CopyTo(NativeReference<T> reference)
	{
	}

	[Token(Token = "0x60008F3")]
	[ExcludeFromBurstCompatTesting("Equals boxes because Value does not implement IEquatable<T>")]
	public bool Equals(NativeReference<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F4")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F5")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008F6")]
	public static bool operator ==(NativeReference<T> left, NativeReference<T> right)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F7")]
	public static bool operator !=(NativeReference<T> left, NativeReference<T> right)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F8")]
	public static void Copy(NativeReference<T> dst, NativeReference<T> src)
	{
	}

	[Token(Token = "0x60008F9")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x60008FA")]
	public static implicit operator ReadOnly(NativeReference<T> nativeReference)
	{
		return default(ReadOnly);
	}
}
