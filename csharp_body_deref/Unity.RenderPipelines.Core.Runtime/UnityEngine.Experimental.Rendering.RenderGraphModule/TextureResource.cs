using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200005B")]
[DebuggerDisplay("TextureResource ({desc.name})")]
internal class TextureResource : RenderGraphResource<TextureDesc, RTHandle>
{
	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x0")]
	private static int m_TextureCreationIndex;

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x486E360", Offset = "0x486E360", VA = "0x486E360", Slot = "5")]
	public override string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x486E3C0", Offset = "0x486E3C0", VA = "0x486E3C0", Slot = "10")]
	public override void CreatePooledGraphicsResource()
	{
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x486E550", Offset = "0x486E550", VA = "0x486E550", Slot = "12")]
	public override void ReleasePooledGraphicsResource(int frameIndex)
	{
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x486E6B0", Offset = "0x486E6B0", VA = "0x486E6B0", Slot = "11")]
	public override void CreateGraphicsResource(string name = "")
	{
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x486EB00", Offset = "0x486EB00", VA = "0x486EB00", Slot = "13")]
	public override void ReleaseGraphicsResource()
	{
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x486EB50", Offset = "0x486EB50", VA = "0x486EB50", Slot = "14")]
	public override void LogCreation(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x486ECE0", Offset = "0x486ECE0", VA = "0x486ECE0", Slot = "15")]
	public override void LogRelease(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x486EE50", Offset = "0x486EE50", VA = "0x486EE50")]
	public TextureResource()
	{
	}
}
