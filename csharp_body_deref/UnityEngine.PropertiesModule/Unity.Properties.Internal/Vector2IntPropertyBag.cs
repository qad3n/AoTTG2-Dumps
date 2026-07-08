using Il2CppDummyDll;
using UnityEngine;

namespace Unity.Properties.Internal;

[Token(Token = "0x2000050")]
internal class Vector2IntPropertyBag : ContainerPropertyBag<Vector2Int>
{
	[Token(Token = "0x2000051")]
	private class XProperty : Property<Vector2Int, int>
	{
		[Token(Token = "0x1700003C")]
		public override string Name
		{
			[Token(Token = "0x60001B2")]
			[Address(RVA = "0x4B73CE0", Offset = "0x4B73CE0", VA = "0x4B73CE0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x4B73C60", Offset = "0x4B73C60", VA = "0x4B73C60")]
		public XProperty()
		{
		}
	}

	[Token(Token = "0x2000052")]
	private class YProperty : Property<Vector2Int, int>
	{
		[Token(Token = "0x1700003D")]
		public override string Name
		{
			[Token(Token = "0x60001B4")]
			[Address(RVA = "0x4B73D10", Offset = "0x4B73D10", VA = "0x4B73D10", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x4B73CA0", Offset = "0x4B73CA0", VA = "0x4B73CA0")]
		public YProperty()
		{
		}
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x4B72C90", Offset = "0x4B72C90", VA = "0x4B72C90")]
	public Vector2IntPropertyBag()
	{
	}
}
