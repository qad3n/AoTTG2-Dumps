using Il2CppDummyDll;
using UnityEngine;

namespace Unity.Properties.Internal;

[Token(Token = "0x2000064")]
internal class BoundsIntPropertyBag : ContainerPropertyBag<BoundsInt>
{
	[Token(Token = "0x2000065")]
	private class PositionProperty : Property<BoundsInt, Vector3Int>
	{
		[Token(Token = "0x1700004B")]
		public override string Name
		{
			[Token(Token = "0x60001D5")]
			[Address(RVA = "0x4B74370", Offset = "0x4B74370", VA = "0x4B74370", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x4B742F0", Offset = "0x4B742F0", VA = "0x4B742F0")]
		public PositionProperty()
		{
		}
	}

	[Token(Token = "0x2000066")]
	private class SizeProperty : Property<BoundsInt, Vector3Int>
	{
		[Token(Token = "0x1700004C")]
		public override string Name
		{
			[Token(Token = "0x60001D7")]
			[Address(RVA = "0x4B743A0", Offset = "0x4B743A0", VA = "0x4B743A0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x4B74330", Offset = "0x4B74330", VA = "0x4B74330")]
		public SizeProperty()
		{
		}
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4B73430", Offset = "0x4B73430", VA = "0x4B73430")]
	public BoundsIntPropertyBag()
	{
	}
}
