using Il2CppDummyDll;
using UnityEngine;

namespace Unity.Properties.Internal;

[Token(Token = "0x2000047")]
internal class Vector3PropertyBag : ContainerPropertyBag<Vector3>
{
	[Token(Token = "0x2000048")]
	private class XProperty : Property<Vector3, float>
	{
		[Token(Token = "0x17000035")]
		public override string Name
		{
			[Token(Token = "0x60001A2")]
			[Address(RVA = "0x4B73A10", Offset = "0x4B73A10", VA = "0x4B73A10", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x4B73950", Offset = "0x4B73950", VA = "0x4B73950")]
		public XProperty()
		{
		}
	}

	[Token(Token = "0x2000049")]
	private class YProperty : Property<Vector3, float>
	{
		[Token(Token = "0x17000036")]
		public override string Name
		{
			[Token(Token = "0x60001A4")]
			[Address(RVA = "0x4B73A40", Offset = "0x4B73A40", VA = "0x4B73A40", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x4B73990", Offset = "0x4B73990", VA = "0x4B73990")]
		public YProperty()
		{
		}
	}

	[Token(Token = "0x200004A")]
	private class ZProperty : Property<Vector3, float>
	{
		[Token(Token = "0x17000037")]
		public override string Name
		{
			[Token(Token = "0x60001A6")]
			[Address(RVA = "0x4B73A70", Offset = "0x4B73A70", VA = "0x4B73A70", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x4B739D0", Offset = "0x4B739D0", VA = "0x4B739D0")]
		public ZProperty()
		{
		}
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x4B72930", Offset = "0x4B72930", VA = "0x4B72930")]
	public Vector3PropertyBag()
	{
	}
}
