// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Scale
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200036C")]
public struct Scale : IEquatable<Scale>
{
	[Token(Token = "0x200036D")]
	internal class PropertyBag : ContainerPropertyBag<Scale>
	{
		[Token(Token = "0x200036E")]
		private class ValueProperty : Property<Scale, Vector3>
		{
			[Token(Token = "0x4000A68")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700062B")]
			public override string Name
			{
				[Token(Token = "0x60015EE")]
				[Address(RVA = "0x50AD9F0", Offset = "0x50AD9F0", VA = "0x50AD9F0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60015EF")]
			[Address(RVA = "0x50AD990", Offset = "0x50AD990", VA = "0x50AD990")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x60015ED")]
		[Address(RVA = "0x50AD890", Offset = "0x50AD890", VA = "0x50AD890")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000A65")]
	[FieldOffset(Offset = "0x0")]
	private Vector3 m_Scale;

	[Token(Token = "0x4000A66")]
	[FieldOffset(Offset = "0xC")]
	private bool m_IsNone;

	[Token(Token = "0x1700062A")]
	public Vector3 value
	{
		[Token(Token = "0x60015E6")]
		[Address(RVA = "0x50AD720", Offset = "0x50AD720", VA = "0x50AD720")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x50AD530", Offset = "0x50AD530", VA = "0x50AD530")]
	public Scale(Vector2 scale)
	{
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x50AD550", Offset = "0x50AD550", VA = "0x50AD550")]
	public Scale(Vector3 scale)
	{
	}

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x50AD650", Offset = "0x50AD650", VA = "0x50AD650")]
	internal static Scale Initial()
	{
		return default(Scale);
	}

	[Token(Token = "0x60015E5")]
	[Address(RVA = "0x50AD6B0", Offset = "0x50AD6B0", VA = "0x50AD6B0")]
	public static Scale None()
	{
		return default(Scale);
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x50AAE90", Offset = "0x50AAE90", VA = "0x50AAE90")]
	public static bool operator ==(Scale lhs, Scale rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E8")]
	[Address(RVA = "0x50AD730", Offset = "0x50AD730", VA = "0x50AD730")]
	public static bool operator !=(Scale lhs, Scale rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x50AD780", Offset = "0x50AD780", VA = "0x50AD780", Slot = "4")]
	public bool Equals(Scale other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x50AD7D0", Offset = "0x50AD7D0", VA = "0x50AD7D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015EB")]
	[Address(RVA = "0x50AB510", Offset = "0x50AB510", VA = "0x50AB510", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x50AD880", Offset = "0x50AD880", VA = "0x50AD880", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
