using Il2CppDummyDll;
using UnityEngine;

namespace Unity.Properties.Internal;

[Token(Token = "0x2000044")]
internal class Vector2PropertyBag : ContainerPropertyBag<Vector2>
{
	[Token(Token = "0x2000045")]
	private class XProperty : Property<Vector2, float>
	{
		[Token(Token = "0x17000033")]
		public override string Name
		{
			[Token(Token = "0x600019D")]
			[Address(RVA = "0x4B738F0", Offset = "0x4B738F0", VA = "0x4B738F0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600019E")]
		[Address(RVA = "0x4B73870", Offset = "0x4B73870", VA = "0x4B73870")]
		public XProperty()
		{
		}
	}

	[Token(Token = "0x2000046")]
	private class YProperty : Property<Vector2, float>
	{
		[Token(Token = "0x17000034")]
		public override string Name
		{
			[Token(Token = "0x600019F")]
			[Address(RVA = "0x4B73920", Offset = "0x4B73920", VA = "0x4B73920", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x4B738B0", Offset = "0x4B738B0", VA = "0x4B738B0")]
		public YProperty()
		{
		}
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x4B72800", Offset = "0x4B72800", VA = "0x4B72800")]
	public Vector2PropertyBag()
	{
	}
}
