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
				[Address(RVA = "0x4D860C0", Offset = "0x4D860C0", VA = "0x4D860C0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60015EF")]
			[Address(RVA = "0x4D86060", Offset = "0x4D86060", VA = "0x4D86060")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x60015ED")]
		[Address(RVA = "0x4D85F60", Offset = "0x4D85F60", VA = "0x4D85F60")]
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
		[Address(RVA = "0x4D85DF0", Offset = "0x4D85DF0", VA = "0x4D85DF0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x4D85C00", Offset = "0x4D85C00", VA = "0x4D85C00")]
	public Scale(Vector2 scale)
	{
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x4D85C20", Offset = "0x4D85C20", VA = "0x4D85C20")]
	public Scale(Vector3 scale)
	{
	}

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x4D85D20", Offset = "0x4D85D20", VA = "0x4D85D20")]
	internal static Scale Initial()
	{
		return default(Scale);
	}

	[Token(Token = "0x60015E5")]
	[Address(RVA = "0x4D85D80", Offset = "0x4D85D80", VA = "0x4D85D80")]
	public static Scale None()
	{
		return default(Scale);
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x4D83560", Offset = "0x4D83560", VA = "0x4D83560")]
	public static bool operator ==(Scale lhs, Scale rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E8")]
	[Address(RVA = "0x4D85E00", Offset = "0x4D85E00", VA = "0x4D85E00")]
	public static bool operator !=(Scale lhs, Scale rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x4D85E50", Offset = "0x4D85E50", VA = "0x4D85E50", Slot = "4")]
	public bool Equals(Scale other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x4D85EA0", Offset = "0x4D85EA0", VA = "0x4D85EA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015EB")]
	[Address(RVA = "0x4D83BE0", Offset = "0x4D83BE0", VA = "0x4D83BE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x4D85F50", Offset = "0x4D85F50", VA = "0x4D85F50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
