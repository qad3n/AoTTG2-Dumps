using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000375")]
internal struct StyleDataRef<T> : IEquatable<StyleDataRef<T>> where T : struct, IEquatable<T>, IStyleDataGroup<T>
{
	[Token(Token = "0x2000376")]
	private class RefCounted
	{
		[Token(Token = "0x4000A76")]
		[FieldOffset(Offset = "0x0")]
		private static uint m_NextId;

		[Token(Token = "0x4000A77")]
		[FieldOffset(Offset = "0x0")]
		private int m_RefCount;

		[Token(Token = "0x4000A78")]
		[FieldOffset(Offset = "0x0")]
		private readonly uint m_Id;

		[Token(Token = "0x4000A79")]
		[FieldOffset(Offset = "0x0")]
		public T value;

		[Token(Token = "0x17000638")]
		public int refCount
		{
			[Token(Token = "0x6001641")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6001642")]
		public RefCounted()
		{
		}

		[Token(Token = "0x6001643")]
		public void Acquire()
		{
		}

		[Token(Token = "0x6001644")]
		public void Release()
		{
		}

		[Token(Token = "0x6001645")]
		public RefCounted Copy()
		{
			return null;
		}
	}

	[Token(Token = "0x4000A75")]
	[FieldOffset(Offset = "0x0")]
	private RefCounted m_Ref;

	[Token(Token = "0x6001636")]
	public StyleDataRef<T> Acquire()
	{
		return default(StyleDataRef<T>);
	}

	[Token(Token = "0x6001637")]
	public void Release()
	{
	}

	[Token(Token = "0x6001638")]
	public void CopyFrom(StyleDataRef<T> other)
	{
	}

	[Token(Token = "0x6001639")]
	public unsafe ref T Read()
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x600163A")]
	public unsafe ref T Write()
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x600163B")]
	public static StyleDataRef<T> Create()
	{
		return default(StyleDataRef<T>);
	}

	[Token(Token = "0x600163C")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600163D")]
	public static bool operator ==(StyleDataRef<T> lhs, StyleDataRef<T> rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600163E")]
	public bool Equals(StyleDataRef<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600163F")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001640")]
	public bool ReferenceEquals(StyleDataRef<T> other)
	{
		return default(bool);
	}
}
