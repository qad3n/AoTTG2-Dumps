// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleDataRef
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000415")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal struct StyleDataRef<T> : IEquatable<StyleDataRef<T>> where T : struct, IEquatable<T>, IStyleDataGroup<T>
{
	[Token(Token = "0x2000416")]
	private class RefCounted
	{
		[Token(Token = "0x4000DC0")]
		[FieldOffset(Offset = "0x0")]
		private static uint m_NextId;

		[Token(Token = "0x4000DC1")]
		[FieldOffset(Offset = "0x0")]
		private int m_RefCount;

		[Token(Token = "0x4000DC2")]
		[FieldOffset(Offset = "0x0")]
		private readonly uint m_Id;

		[Token(Token = "0x4000DC3")]
		[FieldOffset(Offset = "0x0")]
		public T value;

		[Token(Token = "0x170008CA")]
		public int refCount
		{
			[Token(Token = "0x6001FFE")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6001FFF")]
		public RefCounted()
		{
		}

		[Token(Token = "0x6002000")]
		public void Acquire()
		{
		}

		[Token(Token = "0x6002001")]
		public void Release()
		{
		}

		[Token(Token = "0x6002002")]
		public RefCounted Copy()
		{
			return null;
		}
	}

	[Token(Token = "0x4000DBF")]
	[FieldOffset(Offset = "0x0")]
	private RefCounted m_Ref;

	[Token(Token = "0x6001FF3")]
	public StyleDataRef<T> Acquire()
	{
		return default(StyleDataRef<T>);
	}

	[Token(Token = "0x6001FF4")]
	public void Release()
	{
	}

	[Token(Token = "0x6001FF5")]
	public void CopyFrom(StyleDataRef<T> other)
	{
	}

	[Token(Token = "0x6001FF6")]
	public unsafe ref T Read()
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6001FF7")]
	public unsafe ref T Write()
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6001FF8")]
	public static StyleDataRef<T> Create()
	{
		return default(StyleDataRef<T>);
	}

	[Token(Token = "0x6001FF9")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FFA")]
	public static bool operator ==(StyleDataRef<T> lhs, StyleDataRef<T> rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FFB")]
	public bool Equals(StyleDataRef<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FFC")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FFD")]
	public bool ReferenceEquals(StyleDataRef<T> other)
	{
		return default(bool);
	}
}
