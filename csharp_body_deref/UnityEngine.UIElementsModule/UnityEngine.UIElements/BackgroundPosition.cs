using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200000A")]
public struct BackgroundPosition : IEquatable<BackgroundPosition>
{
	[Token(Token = "0x200000B")]
	internal class PropertyBag : ContainerPropertyBag<BackgroundPosition>
	{
		[Token(Token = "0x200000C")]
		private class KeywordProperty : Property<BackgroundPosition, BackgroundPositionKeyword>
		{
			[Token(Token = "0x400001B")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000008")]
			public override string Name
			{
				[Token(Token = "0x6000034")]
				[Address(RVA = "0x4BE57B0", Offset = "0x4BE57B0", VA = "0x4BE57B0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000035")]
			[Address(RVA = "0x4BE56F0", Offset = "0x4BE56F0", VA = "0x4BE56F0")]
			public KeywordProperty()
			{
			}
		}

		[Token(Token = "0x200000D")]
		private class OffsetProperty : Property<BackgroundPosition, Length>
		{
			[Token(Token = "0x400001D")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000009")]
			public override string Name
			{
				[Token(Token = "0x6000036")]
				[Address(RVA = "0x4BE57C0", Offset = "0x4BE57C0", VA = "0x4BE57C0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000037")]
			[Address(RVA = "0x4BE5750", Offset = "0x4BE5750", VA = "0x4BE5750")]
			public OffsetProperty()
			{
			}
		}

		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4BE5560", Offset = "0x4BE5560", VA = "0x4BE5560")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x0")]
	public BackgroundPositionKeyword keyword;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x4")]
	public Length offset;

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4BE5230", Offset = "0x4BE5230", VA = "0x4BE5230")]
	public BackgroundPosition(BackgroundPositionKeyword keyword)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4BE5270", Offset = "0x4BE5270", VA = "0x4BE5270")]
	public BackgroundPosition(BackgroundPositionKeyword keyword, Length offset)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4BE5280", Offset = "0x4BE5280", VA = "0x4BE5280")]
	internal static BackgroundPosition Initial()
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4BE5320", Offset = "0x4BE5320", VA = "0x4BE5320", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4BE53B0", Offset = "0x4BE53B0", VA = "0x4BE53B0", Slot = "4")]
	public bool Equals(BackgroundPosition other)
	{
		return default(bool);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4BE53F0", Offset = "0x4BE53F0", VA = "0x4BE53F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4BE5430", Offset = "0x4BE5430", VA = "0x4BE5430")]
	public static bool operator ==(BackgroundPosition style1, BackgroundPosition style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4BE5470", Offset = "0x4BE5470", VA = "0x4BE5470")]
	public static bool operator !=(BackgroundPosition style1, BackgroundPosition style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4BE54C0", Offset = "0x4BE54C0", VA = "0x4BE54C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
