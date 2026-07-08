using Il2CppDummyDll;
using UnityEngine;

namespace Unity.Properties.Internal;

[Token(Token = "0x2000053")]
internal class Vector3IntPropertyBag : ContainerPropertyBag<Vector3Int>
{
	[Token(Token = "0x2000054")]
	private class XProperty : Property<Vector3Int, int>
	{
		[Token(Token = "0x1700003E")]
		public override string Name
		{
			[Token(Token = "0x60001B7")]
			[Address(RVA = "0x4B73E00", Offset = "0x4B73E00", VA = "0x4B73E00", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x4B73D40", Offset = "0x4B73D40", VA = "0x4B73D40")]
		public XProperty()
		{
		}
	}

	[Token(Token = "0x2000055")]
	private class YProperty : Property<Vector3Int, int>
	{
		[Token(Token = "0x1700003F")]
		public override string Name
		{
			[Token(Token = "0x60001B9")]
			[Address(RVA = "0x4B73E30", Offset = "0x4B73E30", VA = "0x4B73E30", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x4B73D80", Offset = "0x4B73D80", VA = "0x4B73D80")]
		public YProperty()
		{
		}
	}

	[Token(Token = "0x2000056")]
	private class ZProperty : Property<Vector3Int, int>
	{
		[Token(Token = "0x17000040")]
		public override string Name
		{
			[Token(Token = "0x60001BB")]
			[Address(RVA = "0x4B73E60", Offset = "0x4B73E60", VA = "0x4B73E60", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x4B73DC0", Offset = "0x4B73DC0", VA = "0x4B73DC0")]
		public ZProperty()
		{
		}
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x4B72DC0", Offset = "0x4B72DC0", VA = "0x4B72DC0")]
	public Vector3IntPropertyBag()
	{
	}
}
