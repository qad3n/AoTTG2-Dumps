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
				[Address(RVA = "0x4D8A3A0", Offset = "0x4D8A3A0", VA = "0x4D8A3A0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600171C")]
			[Address(RVA = "0x4D8A280", Offset = "0x4D8A280", VA = "0x4D8A280")]
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
				[Address(RVA = "0x4D8A3B0", Offset = "0x4D8A3B0", VA = "0x4D8A3B0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600171E")]
			[Address(RVA = "0x4D8A2E0", Offset = "0x4D8A2E0", VA = "0x4D8A2E0")]
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
				[Address(RVA = "0x4D8A3C0", Offset = "0x4D8A3C0", VA = "0x4D8A3C0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001720")]
			[Address(RVA = "0x4D8A340", Offset = "0x4D8A340", VA = "0x4D8A340")]
			public ZProperty()
			{
			}
		}

		[Token(Token = "0x600171A")]
		[Address(RVA = "0x4D8A060", Offset = "0x4D8A060", VA = "0x4D8A060")]
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
		[Address(RVA = "0x4D89D00", Offset = "0x4D89D00", VA = "0x4D89D00")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6001710")]
		[Address(RVA = "0x4D89D10", Offset = "0x4D89D10", VA = "0x4D89D10")]
		set
		{
		}
	}

	[Token(Token = "0x1700065A")]
	public Length y
	{
		[Token(Token = "0x6001711")]
		[Address(RVA = "0x4D89D20", Offset = "0x4D89D20", VA = "0x4D89D20")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6001712")]
		[Address(RVA = "0x4D89D30", Offset = "0x4D89D30", VA = "0x4D89D30")]
		set
		{
		}
	}

	[Token(Token = "0x1700065B")]
	public float z
	{
		[Token(Token = "0x6001713")]
		[Address(RVA = "0x4D89D40", Offset = "0x4D89D40", VA = "0x4D89D40")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600170D")]
	[Address(RVA = "0x4D89CD0", Offset = "0x4D89CD0", VA = "0x4D89CD0")]
	public TransformOrigin(Length x, Length y, float z)
	{
	}

	[Token(Token = "0x600170E")]
	[Address(RVA = "0x4D89CE0", Offset = "0x4D89CE0", VA = "0x4D89CE0")]
	public static TransformOrigin Initial()
	{
		return default(TransformOrigin);
	}

	[Token(Token = "0x6001714")]
	[Address(RVA = "0x4D835B0", Offset = "0x4D835B0", VA = "0x4D835B0")]
	public static bool operator ==(TransformOrigin lhs, TransformOrigin rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x4D89D50", Offset = "0x4D89D50", VA = "0x4D89D50")]
	public static bool operator !=(TransformOrigin lhs, TransformOrigin rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001716")]
	[Address(RVA = "0x4D89DC0", Offset = "0x4D89DC0", VA = "0x4D89DC0", Slot = "4")]
	public bool Equals(TransformOrigin other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001717")]
	[Address(RVA = "0x4D89E20", Offset = "0x4D89E20", VA = "0x4D89E20", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001718")]
	[Address(RVA = "0x4D83C30", Offset = "0x4D83C30", VA = "0x4D83C30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001719")]
	[Address(RVA = "0x4D89ED0", Offset = "0x4D89ED0", VA = "0x4D89ED0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
