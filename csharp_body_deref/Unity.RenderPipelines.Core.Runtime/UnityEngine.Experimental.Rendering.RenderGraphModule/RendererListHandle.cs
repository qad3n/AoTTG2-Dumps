// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B92D40", Offset = "0x4B92D40", VA = "0x4B92D40")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000500")]
		[Address(RVA = "0x4B92D50", Offset = "0x4B92D50", VA = "0x4B92D50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x4B911C0", Offset = "0x4B911C0", VA = "0x4B911C0")]
	internal RendererListHandle(int handle, RendererListHandleType type = RendererListHandleType.Renderers)
	{
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x4B8EE40", Offset = "0x4B8EE40", VA = "0x4B8EE40")]
	public static implicit operator int(RendererListHandle handle)
	{
		return default(int);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x4B92D60", Offset = "0x4B92D60", VA = "0x4B92D60")]
	public static implicit operator RendererList(RendererListHandle rendererList)
	{
		return default(RendererList);
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x4B92E40", Offset = "0x4B92E40", VA = "0x4B92E40")]
	public bool IsValid()
	{
		return default(bool);
	}
}
