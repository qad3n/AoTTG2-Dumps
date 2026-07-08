using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000054")]
[DebuggerDisplay("RendererList ({handle})")]
public struct RendererListHandle
{
	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x0")]
	internal RendererListHandleType type;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x4")]
	private bool m_IsValid;

	[Token(Token = "0x17000048")]
	internal int handle
	{
		[Token(Token = "0x60004FF")]
		[Address(RVA = "0x486DC50", Offset = "0x486DC50", VA = "0x486DC50")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000500")]
		[Address(RVA = "0x486DC60", Offset = "0x486DC60", VA = "0x486DC60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x486C0D0", Offset = "0x486C0D0", VA = "0x486C0D0")]
	internal RendererListHandle(int handle, RendererListHandleType type = RendererListHandleType.Renderers)
	{
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x4869D50", Offset = "0x4869D50", VA = "0x4869D50")]
	public static implicit operator int(RendererListHandle handle)
	{
		return default(int);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x486DC70", Offset = "0x486DC70", VA = "0x486DC70")]
	public static implicit operator RendererList(RendererListHandle rendererList)
	{
		return default(RendererList);
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x486DD50", Offset = "0x486DD50", VA = "0x486DD50")]
	public bool IsValid()
	{
		return default(bool);
	}
}
