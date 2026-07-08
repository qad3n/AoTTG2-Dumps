using Il2CppDummyDll;
using UnityEngine;

namespace Unity.Properties.Internal;

[Token(Token = "0x2000061")]
internal class BoundsPropertyBag : ContainerPropertyBag<Bounds>
{
	[Token(Token = "0x2000062")]
	private class CenterProperty : Property<Bounds, Vector3>
	{
		[Token(Token = "0x17000049")]
		public override string Name
		{
			[Token(Token = "0x60001D0")]
			[Address(RVA = "0x4B74290", Offset = "0x4B74290", VA = "0x4B74290", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x4B74210", Offset = "0x4B74210", VA = "0x4B74210")]
		public CenterProperty()
		{
		}
	}

	[Token(Token = "0x2000063")]
	private class ExtentsProperty : Property<Bounds, Vector3>
	{
		[Token(Token = "0x1700004A")]
		public override string Name
		{
			[Token(Token = "0x60001D2")]
			[Address(RVA = "0x4B742C0", Offset = "0x4B742C0", VA = "0x4B742C0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x4B74250", Offset = "0x4B74250", VA = "0x4B74250")]
		public ExtentsProperty()
		{
		}
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x4B73300", Offset = "0x4B73300", VA = "0x4B73300")]
	public BoundsPropertyBag()
	{
	}
}
