// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TransformOrigin
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

[Token(Token = "0x200038E")]
public struct TransformOrigin : IEquatable<TransformOrigin>
{
	[Token(Token = "0x200038F")]
	internal class PropertyBag : ContainerPropertyBag<TransformOrigin>
	{
		[Token(Token = "0x2000390")]
		private class XProperty : Property<TransformOrigin, Length>
		{
			[Token(Token = "0x4000AA9")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700065C")]
			public override string Name
			{
				[Token(Token = "0x600171B")]
				[Address(RVA = "0x50B1CD0", Offset = "0x50B1CD0", VA = "0x50B1CD0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600171C")]
			[Address(RVA = "0x50B1BB0", Offset = "0x50B1BB0", VA = "0x50B1BB0")]
			public XProperty()
			{
			}
		}

		[Token(Token = "0x2000391")]
		private class YProperty : Property<TransformOrigin, Length>
		{
			[Token(Token = "0x4000AAB")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700065D")]
			public override string Name
			{
				[Token(Token = "0x600171D")]
				[Address(RVA = "0x50B1CE0", Offset = "0x50B1CE0", VA = "0x50B1CE0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600171E")]
			[Address(RVA = "0x50B1C10", Offset = "0x50B1C10", VA = "0x50B1C10")]
			public YProperty()
			{
			}
		}

		[Token(Token = "0x2000392")]
		private class ZProperty : Property<TransformOrigin, float>
		{
			[Token(Token = "0x4000AAD")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700065E")]
			public override string Name
			{
				[Token(Token = "0x600171F")]
				[Address(RVA = "0x50B1CF0", Offset = "0x50B1CF0", VA = "0x50B1CF0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001720")]
			[Address(RVA = "0x50B1C70", Offset = "0x50B1C70", VA = "0x50B1C70")]
			public ZProperty()
			{
			}
		}

		[Token(Token = "0x600171A")]
		[Address(RVA = "0x50B1990", Offset = "0x50B1990", VA = "0x50B1990")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000AA5")]
	[FieldOffset(Offset = "0x0")]
	private Length m_X;

	[Token(Token = "0x4000AA6")]
	[FieldOffset(Offset = "0x8")]
	private Length m_Y;

	[Token(Token = "0x4000AA7")]
	[FieldOffset(Offset = "0x10")]
	private float m_Z;

	[Token(Token = "0x17000659")]
	public Length x
	{
		[Token(Token = "0x600170F")]
		[Address(RVA = "0x50B1630", Offset = "0x50B1630", VA = "0x50B1630")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6001710")]
		[Address(RVA = "0x50B1640", Offset = "0x50B1640", VA = "0x50B1640")]
		set
		{
		}
	}

	[Token(Token = "0x1700065A")]
	public Length y
	{
		[Token(Token = "0x6001711")]
		[Address(RVA = "0x50B1650", Offset = "0x50B1650", VA = "0x50B1650")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6001712")]
		[Address(RVA = "0x50B1660", Offset = "0x50B1660", VA = "0x50B1660")]
		set
		{
		}
	}

	[Token(Token = "0x1700065B")]
	public float z
	{
		[Token(Token = "0x6001713")]
		[Address(RVA = "0x50B1670", Offset = "0x50B1670", VA = "0x50B1670")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600170D")]
	[Address(RVA = "0x50B1600", Offset = "0x50B1600", VA = "0x50B1600")]
	public TransformOrigin(Length x, Length y, float z)
	{
	}

	[Token(Token = "0x600170E")]
	[Address(RVA = "0x50B1610", Offset = "0x50B1610", VA = "0x50B1610")]
	public static TransformOrigin Initial()
	{
		return default(TransformOrigin);
	}

	[Token(Token = "0x6001714")]
	[Address(RVA = "0x50AAEE0", Offset = "0x50AAEE0", VA = "0x50AAEE0")]
	public static bool operator ==(TransformOrigin lhs, TransformOrigin rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x50B1680", Offset = "0x50B1680", VA = "0x50B1680")]
	public static bool operator !=(TransformOrigin lhs, TransformOrigin rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001716")]
	[Address(RVA = "0x50B16F0", Offset = "0x50B16F0", VA = "0x50B16F0", Slot = "4")]
	public bool Equals(TransformOrigin other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001717")]
	[Address(RVA = "0x50B1750", Offset = "0x50B1750", VA = "0x50B1750", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001718")]
	[Address(RVA = "0x50AB560", Offset = "0x50AB560", VA = "0x50AB560", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001719")]
	[Address(RVA = "0x50B1800", Offset = "0x50B1800", VA = "0x50B1800", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
