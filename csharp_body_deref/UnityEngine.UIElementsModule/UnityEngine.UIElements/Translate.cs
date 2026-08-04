// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Translate
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

[Token(Token = "0x2000393")]
public struct Translate : IEquatable<Translate>
{
	[Token(Token = "0x2000394")]
	internal class PropertyBag : ContainerPropertyBag<Translate>
	{
		[Token(Token = "0x2000395")]
		private class XProperty : Property<Translate, Length>
		{
			[Token(Token = "0x4000AB3")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000662")]
			public override string Name
			{
				[Token(Token = "0x600172F")]
				[Address(RVA = "0x50B23C0", Offset = "0x50B23C0", VA = "0x50B23C0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001730")]
			[Address(RVA = "0x50B22A0", Offset = "0x50B22A0", VA = "0x50B22A0")]
			public XProperty()
			{
			}
		}

		[Token(Token = "0x2000396")]
		private class YProperty : Property<Translate, Length>
		{
			[Token(Token = "0x4000AB5")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000663")]
			public override string Name
			{
				[Token(Token = "0x6001731")]
				[Address(RVA = "0x50B23D0", Offset = "0x50B23D0", VA = "0x50B23D0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001732")]
			[Address(RVA = "0x50B2300", Offset = "0x50B2300", VA = "0x50B2300")]
			public YProperty()
			{
			}
		}

		[Token(Token = "0x2000397")]
		private class ZProperty : Property<Translate, float>
		{
			[Token(Token = "0x4000AB7")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000664")]
			public override string Name
			{
				[Token(Token = "0x6001733")]
				[Address(RVA = "0x50B23E0", Offset = "0x50B23E0", VA = "0x50B23E0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001734")]
			[Address(RVA = "0x50B2360", Offset = "0x50B2360", VA = "0x50B2360")]
			public ZProperty()
			{
			}
		}

		[Token(Token = "0x600172E")]
		[Address(RVA = "0x50B2080", Offset = "0x50B2080", VA = "0x50B2080")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000AAE")]
	[FieldOffset(Offset = "0x0")]
	private Length m_X;

	[Token(Token = "0x4000AAF")]
	[FieldOffset(Offset = "0x8")]
	private Length m_Y;

	[Token(Token = "0x4000AB0")]
	[FieldOffset(Offset = "0x10")]
	private float m_Z;

	[Token(Token = "0x4000AB1")]
	[FieldOffset(Offset = "0x14")]
	private bool m_isNone;

	[Token(Token = "0x1700065F")]
	public Length x
	{
		[Token(Token = "0x6001723")]
		[Address(RVA = "0x50B1D20", Offset = "0x50B1D20", VA = "0x50B1D20")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6001724")]
		[Address(RVA = "0x50B1D30", Offset = "0x50B1D30", VA = "0x50B1D30")]
		set
		{
		}
	}

	[Token(Token = "0x17000660")]
	public Length y
	{
		[Token(Token = "0x6001725")]
		[Address(RVA = "0x50B1D40", Offset = "0x50B1D40", VA = "0x50B1D40")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6001726")]
		[Address(RVA = "0x50B1D50", Offset = "0x50B1D50", VA = "0x50B1D50")]
		set
		{
		}
	}

	[Token(Token = "0x17000661")]
	public float z
	{
		[Token(Token = "0x6001727")]
		[Address(RVA = "0x50B1D60", Offset = "0x50B1D60", VA = "0x50B1D60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6001721")]
	[Address(RVA = "0x50B1D00", Offset = "0x50B1D00", VA = "0x50B1D00")]
	public Translate(Length x, Length y, float z)
	{
	}

	[Token(Token = "0x6001722")]
	[Address(RVA = "0x50B1100", Offset = "0x50B1100", VA = "0x50B1100")]
	public static Translate None()
	{
		return default(Translate);
	}

	[Token(Token = "0x6001728")]
	[Address(RVA = "0x50AAF30", Offset = "0x50AAF30", VA = "0x50AAF30")]
	public static bool operator ==(Translate lhs, Translate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001729")]
	[Address(RVA = "0x50B1D70", Offset = "0x50B1D70", VA = "0x50B1D70")]
	public static bool operator !=(Translate lhs, Translate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600172A")]
	[Address(RVA = "0x50B1DE0", Offset = "0x50B1DE0", VA = "0x50B1DE0", Slot = "4")]
	public bool Equals(Translate other)
	{
		return default(bool);
	}

	[Token(Token = "0x600172B")]
	[Address(RVA = "0x50B1E40", Offset = "0x50B1E40", VA = "0x50B1E40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600172C")]
	[Address(RVA = "0x50AB5C0", Offset = "0x50AB5C0", VA = "0x50AB5C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600172D")]
	[Address(RVA = "0x50B1EF0", Offset = "0x50B1EF0", VA = "0x50B1EF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
