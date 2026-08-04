// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.Internal.SystemVersionPropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x4E9BF40", Offset = "0x4E9BF40", VA = "0x4E9BF40", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x4E9BD00", Offset = "0x4E9BD00", VA = "0x4E9BD00")]
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
			[Address(RVA = "0x4E9BF70", Offset = "0x4E9BF70", VA = "0x4E9BF70", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x4E9BD90", Offset = "0x4E9BD90", VA = "0x4E9BD90")]
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
			[Address(RVA = "0x4E9BFA0", Offset = "0x4E9BFA0", VA = "0x4E9BFA0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x4E9BE20", Offset = "0x4E9BE20", VA = "0x4E9BE20")]
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
			[Address(RVA = "0x4E9BFD0", Offset = "0x4E9BFD0", VA = "0x4E9BFD0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x4E9BEB0", Offset = "0x4E9BEB0", VA = "0x4E9BEB0")]
		public RevisionProperty()
		{
		}
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4E9AE90", Offset = "0x4E9AE90", VA = "0x4E9AE90")]
	public SystemVersionPropertyBag()
	{
	}
}
