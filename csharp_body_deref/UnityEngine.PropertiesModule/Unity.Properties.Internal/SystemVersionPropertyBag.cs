using System;
using Il2CppDummyDll;

namespace Unity.Properties.Internal;

[Token(Token = "0x2000067")]
internal class SystemVersionPropertyBag : ContainerPropertyBag<Version>
{
	[Token(Token = "0x2000068")]
	private class MajorProperty : Property<Version, int>
	{
		[Token(Token = "0x1700004D")]
		public override string Name
		{
			[Token(Token = "0x60001DB")]
			[Address(RVA = "0x4B74610", Offset = "0x4B74610", VA = "0x4B74610", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x4B743D0", Offset = "0x4B743D0", VA = "0x4B743D0")]
		public MajorProperty()
		{
		}
	}

	[Token(Token = "0x2000069")]
	private class MinorProperty : Property<Version, int>
	{
		[Token(Token = "0x1700004E")]
		public override string Name
		{
			[Token(Token = "0x60001DD")]
			[Address(RVA = "0x4B74640", Offset = "0x4B74640", VA = "0x4B74640", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x4B74460", Offset = "0x4B74460", VA = "0x4B74460")]
		public MinorProperty()
		{
		}
	}

	[Token(Token = "0x200006A")]
	private class BuildProperty : Property<Version, int>
	{
		[Token(Token = "0x1700004F")]
		public override string Name
		{
			[Token(Token = "0x60001DF")]
			[Address(RVA = "0x4B74670", Offset = "0x4B74670", VA = "0x4B74670", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x4B744F0", Offset = "0x4B744F0", VA = "0x4B744F0")]
		public BuildProperty()
		{
		}
	}

	[Token(Token = "0x200006B")]
	private class RevisionProperty : Property<Version, int>
	{
		[Token(Token = "0x17000050")]
		public override string Name
		{
			[Token(Token = "0x60001E1")]
			[Address(RVA = "0x4B746A0", Offset = "0x4B746A0", VA = "0x4B746A0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x4B74580", Offset = "0x4B74580", VA = "0x4B74580")]
		public RevisionProperty()
		{
		}
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4B73560", Offset = "0x4B73560", VA = "0x4B73560")]
	public SystemVersionPropertyBag()
	{
	}
}
